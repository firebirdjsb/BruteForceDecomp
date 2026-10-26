#!/usr/bin/env python3
"""Verify original 0x00375330 guest one-byte stack output and C11 source.

Public CI uses source-only checks; --xbe optionally checks the user's
SHA-256-pinned original executable and exact x86 instruction windows.
Neither mode proves the whole function, kernel ABI, or native runtime.
"""
import argparse
import hashlib
import re
import shutil
import struct
import subprocess
from pathlib import Path

ENTRY = 0x00375330
SOURCE = Path("src/platform/graphics_d3d/0x00375330.c")
BODY_LABEL = "DFEA382821072704079C88DFB8DB5FA7CCD9E846FF7F025E9D95C33E241D14A1"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
ASSIGN = "undefined1 guest_disposition_byte = 1;"
CALL = "NtSetInformationFile(DAT_0037ec80,&DAT_0037ec44,&guest_disposition_byte,1,0xd);"
SITES = {
    0x00375330: "83ec64",        # guest ESP -= 0x64
    0x00375338: "53",            # save EBX
    0x00375339: "55",            # save EBP
    0x0037533a: "56",            # save ESI
    0x00375346: "57",            # save EDI
    0x003753b1: "6a0d",          # information class 13
    0x003753b3: "6a01",          # information length one byte
    0x003753b5: "8d4c241b",      # pointer = ESP+0x1b after two pushes
    0x003753b9: "51",            # push pointer
    0x003753ba: "6844ec3700",    # IO status block
    0x003753bf: "50",            # push file handle
    0x003753c0: "c644242701",    # after three more pushes [ESP+0x27]=1
    0x003753c5: "ff159c633800",  # indirect original kernel import
    0x00375411: "83c464",        # release 0x64 local frame
    0x00375414: "c3",            # RET
}
FLAGS = ("-std=c11", "-fsyntax-only", "-ferror-limit=10",
         "-Wno-implicit-function-declaration", "-Wno-int-conversion",
         "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
         "-Wno-int-to-pointer-cast", "-Wno-return-type",
         "-Wno-deprecated-non-prototype")

def check_source(source):
    for marker in (f"Entry: 0x{ENTRY:08x},",
                   f"Input x86 body SHA-256: {BODY_LABEL}", "ABI_UNVERIFIED"):
        if marker not in source:
            raise ValueError("provenance/ABI label changed: " + marker)
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", source, flags=re.S)
    for marker in (ASSIGN, CALL):
        if body.count(marker) != 1:
            raise ValueError("missing/duplicated guest byte contract: " + marker)
    if body.index(ASSIGN) > body.index(CALL):
        raise ValueError("original byte write must precede original call")
    if "stack0xffffff9f" in body or "guest_disposition_byte = 0;" in body:
        raise ValueError("unresolved guest stack symbol or wrong byte")

def check_mutations(source):
    changes = (
        (ASSIGN, "undefined1 guest_disposition_byte = 0;"),
        (ASSIGN, "undefined4 guest_disposition_byte = 1;"),
        (CALL, CALL.replace("&guest_disposition_byte", "guest_disposition_byte")),
        (CALL, CALL.replace(",1,0xd)", ",4,0xd)")),
        (CALL, CALL.replace(",1,0xd)", ",1,0xc)")),
        (BODY_LABEL, "0" * 64),
        (ASSIGN, ASSIGN + "\n        guest_disposition_byte = 0;"),
    )
    for before, after in changes:
        if before not in source:
            raise ValueError("negative-control anchor missing")
        try:
            check_source(source.replace(before, after, 1))
        except ValueError:
            continue
        raise ValueError("incorrect source mutation accepted")
    return len(changes)

def check_xbe(path):
    data = path.read_bytes()
    if data[:4] != b"XBEH" or hashlib.sha256(data).hexdigest() != XBE_SHA:
        raise ValueError("original XBE header/SHA-256 mismatch")
    base = struct.unpack_from("<I", data, 0x104)[0]
    count, table = struct.unpack_from("<II", data, 0x11c)
    if not 0 < count < 128 or not 0 <= table-base <= len(data)-count*56:
        raise ValueError("invalid XBE section descriptors")
    sections = [struct.unpack_from("<IIIII", data, table-base+i*56)
                for i in range(count)]
    for va, encoded in SITES.items():
        expected = bytes.fromhex(encoded)
        for _, start, vsize, raw, rsize in sections:
            if start <= va and va+len(expected) <= start+min(vsize,rsize):
                off = raw+va-start
                if off+len(expected)>len(data) or data[off:off+len(expected)]!=expected:
                    raise ValueError("original instruction mismatch at 0x%08x"%va)
                break
        else:
            raise ValueError("original instruction unmapped at 0x%08x"%va)

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    p.add_argument("--xbe", type=Path)
    args = p.parse_args()
    root = args.root.resolve()
    source = (root/SOURCE).read_text(encoding="utf-8")
    check_source(source)
    count = check_mutations(source)
    clang = shutil.which("clang")
    if not clang:
        raise RuntimeError("Clang is required")
    for opt in ("-O0", "-O2"):
        result = subprocess.run([clang, *FLAGS, opt, "-I", str(root/"include"),
                                 str(root/SOURCE)],
                                capture_output=True, text=True, timeout=60)
        if result.returncode:
            raise ValueError("isolated Clang "+opt+": "+result.stderr[-1500:])
    if args.xbe:
        check_xbe(args.xbe)
    print("PASS 0x00375330: Clang C11 O0/O2; %d negative controls; "
          "%d x86 instruction windows (%s); Xbox ABI/native runtime unverified"
          % (count, len(SITES), "XBE verified" if args.xbe else "XBE unavailable"))

if __name__ == "__main__":
    main()
