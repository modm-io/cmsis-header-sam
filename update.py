# Script is tested on OS X 10.12
# YOUR MILEAGE MAY VARY

import urllib.request
import zipfile
import shutil
import sys
import re
import os
import io
from pathlib import Path
import fileinput
from time import mktime, strftime

sam_families = [
    "SAMD21", "SAMD51"
]
packurl = "http://packs.download.atmel.com/"

# extract the local pack version from the readme in this repo
def get_local_pack_version(readme, family):
    regex = r"{}: v(?P<version>[0-9]+\.[0-9]+\.[0-9]+)".format(family.upper())
    match = re.search(regex, readme)
    return match.group("version") if match else None

# gets the pack version out of the Download URL of the pack (or just the pack name)
def get_remote_pack_version(pack_dl_url):
    vmatch = re.search(r'_DFP\.([0-9]+\.[0-9]+\.[0-9]+)\.atpack', pack_dl_url)
    return vmatch.group(1) if vmatch else None

# find the pack name of a device from the entire pack website HTML and create a download url
def get_remote_pack_url(html, family):
    atpack = re.search(r'data-link="(Atmel\.{}_DFP\..*?\.atpack)"'.format(family), html)
    return packurl + atpack.group(1) if atpack else None

# extract a friendly and readable pack name from the download URL
def get_pack_from_url(packUrl):
    packname = re.search(r'(Atmel\..*?_DFP\..*?\.atpack)', packUrl)
    return packname.group(1) if packUrl else None

# check if the remote is a newer version than the local one
def remote_is_newer(local, remote):
    if "x" in local or "x" in remote:
        print("Unknown version format")
        return False
    for l, r in zip(local.split('.'), remote.split('.')):
        if int(l) < int(r):
            return True
    return False

download_remote = ("-d" in sys.argv)
force_update = ("-f" in sys.argv)

pack_local_version = {}
# header_local_version = {} Don't Need since there is only the pack version?
# parse the versions directly from the README
readme = Path("README.md").read_text()
for family in sam_families:
    pack_local_version[family] = get_local_pack_version(readme, family)
    if not pack_local_version[family]:
        print("No version match in local Readme for", family)
        exit(1)

pack_remote_version = {}
pack_dl_url = {}
# parse the versions and download links from the Microchip Packs site
with urllib.request.urlopen(packurl) as response:
    html = response.read().decode("utf-8")
    for family in sam_families:
        # find the pack file name in the html
        pack_dl_url[family] = get_remote_pack_url(html, family)
        if not pack_dl_url[family]:
            print("No zip download link for", family)
            exit(1)
        pack_remote_version[family] = get_remote_pack_version(pack_dl_url[family])
        if not pack_dl_url[family]:
            print("No version match in remote html for", family)
            exit(1)

# compare all versions and print a status page
packs_needing_update = [f for f in sam_families if remote_is_newer(pack_local_version[f], pack_remote_version[f])]
if force_update: packs_needing_update = sam_families;

# intermediate report on cube versions
for family in sam_families:
    status = "{}: Pack v{}\t-> v{}\t{}"
    print(status.format(family.upper(), pack_local_version[family], pack_remote_version[family],
            "update!" if family in packs_needing_update else "ok"))

# easiest way to get the pack date is to check modification date of files
# only other location is in the .pdsc file changelog (which would be nice
# to parse eventually). just make sure to get date BEFORE modifying file!
pack_remote_date = {}

# Download packs needing updates and extract into appropriate directory
for family in packs_needing_update:
    #dest = format(family.lower())
    familyUrl = pack_dl_url[family]
    # remove old versions
    for d in [name for name in os.listdir("./") if os.path.isdir(os.path.join("./", name)) and name.startswith(family.lower())]:
        shutil.rmtree(d)
    # download the new pack
    print( "Downloading '{}'...".format( get_pack_from_url(familyUrl) ))
    with urllib.request.urlopen(familyUrl) as content:
        z = zipfile.ZipFile(io.BytesIO(content.read()))
        print("Extracting '{}'...".format( get_pack_from_url(familyUrl) ))
        # for now extract just the include directory for each chip
        # but retain structure. Differnet directory for each variant
        for f in z.infolist():
            pack_remote_date[family] = f.date_time + (0,0,-1)
            if re.match(r'sam.*?\/include\/.*?', f.filename):
                z.extract(f, os.getcwd())

def dos2unix(file):
    # run dos2unix with options to preserve timestamp and quiet mode
    command = "dos2unix -k -q {0}".format(file)
    err = os.system(command)
    if err != 0:
        print("Unable to run Dos2Unix on "+file)
    return err

def removeTrailingSpace(file):
    for lines in fileinput.FileInput(file, inplace=True):
        lines = lines.rstrip()
        print(lines)

def getComponentSubdirs(family):
    return [name for name in os.listdir("./") if os.path.isdir(os.path.join("./", name)) and name.startswith(family)]

print("Normalizing newlines and whitespace...", flush=True)
for family in packs_needing_update:
    for d in getComponentSubdirs(family.lower()):
        for subDir in os.walk("./" + d):
            for file in subDir[2]:
                print(".", end =" ", flush=True)
                filePath = subDir[0]+"/"+file
                dos2unix(filePath)
                removeTrailingSpace(filePath)

# no patches currently, leave in the code to reference later
# for family in headers_updated:
#     for patch in Path('patches').glob("{}*.patch".format(family)):
#         print("Applying {}...".format(patch))
#         if os.system("git apply -v --ignore-whitespace {}".format(patch)) != 0:
#             print("Applying {} FAILED...".format(patch))
#             exit(1)

def update_readme(readme, family, new_version, new_date, new_url):
    match = r"\[{0}: v.+? created .+?\]\(.+?\)".format(family.upper())
    replace = "[{0}: v{1} created {2}]({3})".format(
                    family.upper(), new_version, new_date, new_url)
    return re.sub(match, replace, readme)

for family in packs_needing_update:
    readme = update_readme(readme, family,
                           pack_remote_version[family],
                           strftime("%d-%B-%Y", pack_remote_date[family]),
                           pack_dl_url[family])
Path("README.md").write_text(readme)
