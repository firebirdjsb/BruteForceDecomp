#!/usr/bin/env python3
"""Three source-matched C++17 callers. Syntax and original E8 evidence are NOT full Xbox ABI."""
from __future__ import annotations
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
NOTE = "/* Source-matched draft declarations; guest ECX/register and Xbox ABI_UNVERIFIED. */\n"
HEADER = '#include "bf_ghidra_types.h"\n'
XBE_HASH = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# original entry, original source blob, original body hash, exact draft signatures, original CALL sites
CASES = {
    "00315b98": (
        "e412651dfef9bdaf8c26869247395f3858e46a9e",
        "9C4C4169C5A0CE88AE9319F2A91DB4AC82E0DF2924783CBF0A3FBDACF51B5C8A",
        ("void FUN_003118f0(void)", "void FUN_00318851(int param_1)",
         "void FUN_0031bf8d(void)", "void FUN_00311923(void)"),
        ((0x00315BAA, 0x003118F0), (0x00315BCC, 0x00318851),
         (0x00315BE9, 0x0031BF8D), (0x00315BF1, 0x00311923)),
    ),
    "00317710": (
        "a58ed007e3196c4bc525c1fd5c986d57fa5f39d7",
        "2E2C68C204A168CFDE255E89337E86306213B112DB897A5AD637E4B54BB56B6F",
        ("void FUN_003118f0(void)", "void FUN_00315c8f(int param_1)",
         "void FUN_003174e3(void)", "void FUN_00311923(void)"),
        ((0x00317721, 0x003118F0), (0x0031777C, 0x00315C8F),
         (0x00317787, 0x003174E3), (0x0031778F, 0x00311923)),
    ),
    "00317da9": (
        "03e2fe21caaf581895055592d57381ea0a1a5134",
        "A0B72EA4B98CD3514D4CFF758084048EA92B60DE07FF92F73121C2C6E18C3A25",
        ("void FUN_003118f0(void)", "void FUN_00318d9f(void)", "void FUN_00311923(void)"),
        ((0x00317DB8, 0x003118F0), (0x00317DCC, 0x00318D9F),
         (0x00317E25, 0x00311923)),
    ),
}

def declaration(signatures):
    return NOTE + "".join("extern " + signature + ";\n" for signature in signatures)

def verify_source(entry, row, content):
    original_blob, original_body, signatures, _ = row
    added = declaration(signatures)
    if content.count(added) != 1 or content.count(HEADER) != 1:
        raise ValueError("missing or duplicate declaration block")
    if f"Entry: 0x{entry}" not in content or "ABI_UNVERIFIED" not in content:
        raise ValueError("missing original address or warning")
    if content.count("Input x86 body SHA-256: " + original_body) != 1:
        raise ValueError("mutated original-body label")
    raw = content.replace(added, "", 1).encode("utf-8")
    sha = hashlib.sha1(b"blob " + str(len(raw)).encode() + b"\0" + raw).hexdigest()
    if sha != original_blob:
        raise ValueError("source bytes changed beyond verified declaration")

def load_xbe(original_xbe):
    blob = Path(original_xbe).read_bytes()
    if hashlib.sha256(blob).hexdigest() != XBE_HASH:
        raise ValueError("retail XBE authentication failed")
    base, = struct.unpack_from("<I", blob, 0x104)
    count, = struct.unpack_from("<I", blob, 0x11C)
    table, = struct.unpack_from("<I", blob, 0x120)
    table -= base
    if count > 128 or table < 0 or table + count * 0x38 > len(blob):
        raise ValueError("invalid XBE section table")
    sections = [struct.unpack_from("<IIIII", blob, table + i*0x38) for i in range(count)]
    def read(va, n):
        for _, section_va, memory_size, raw, stored in sections:
            if section_va <= va and va+n <= section_va+min(memory_size, stored):
                off = raw+va-section_va
                if off+n <= len(blob):
                    return blob[off:off+n]
        raise ValueError(f"original VA absent from XBE: {va:#x}")
    return read

def direct_call(bytes5, site):
    if len(bytes5) != 5 or bytes5[0] != 0xE8:
        raise ValueError("not an E8 near CALL")
    return site+5+struct.unpack("<i", bytes5[1:])[0]

def verify_binary(xbe):
    read = load_xbe(xbe)
    count = 0
    for entry, (_, bodyhash, _, edges) in CASES.items():
        address = int(entry,16)
        original = read(address, 2048)
        matches = [n for n in range(1, 2049)
                   if hashlib.sha256(original[:n]).hexdigest().upper() == bodyhash]
        if len(matches) != 1:
            raise ValueError("original x86 body mismatch: " + entry)
        for site, target in edges:
            if not address <= site < address+matches[0]-4:
                raise ValueError("CALL site outside original body")
            if direct_call(read(site,5),site) != target:
                raise ValueError(f"CALL mismatch at {site:#x}")
            count += 1
    return count

class Regression(unittest.TestCase):
    def test_source_provenance(self):
        self.assertEqual(len(CASES), 3)
        for entry, row in CASES.items():
            path = ROOT/"src/platform/audio_dsound"/("0x"+entry+".cpp")
            with self.subTest(entry=entry):
                verify_source(entry,row,path.read_text(encoding="utf-8"))
    def test_strict_cpp17(self):
        clang = shutil.which("clang++")
        if not clang:
            self.skipTest("Clang unavailable")
        for entry in CASES:
            path = ROOT/"src/platform/audio_dsound"/("0x"+entry+".cpp")
            for opt in ("-O0", "-O2"):
                with self.subTest(entry=entry, opt=opt):
                    run = subprocess.run([clang,"-std=c++17","-x","c++","-fsyntax-only",
                                          "-ferror-limit=4",opt,"-I",str(ROOT/"include"),str(path)],
                                         capture_output=True,text=True,timeout=60)
                    self.assertEqual(run.returncode,0,run.stderr)
    def test_negative_controls(self):
        entry, row = next(iter(CASES.items()))
        path = ROOT/"src/platform/audio_dsound"/("0x"+entry+".cpp")
        original = path.read_text(encoding="utf-8")
        for modified in (original.replace("ABI_UNVERIFIED","ABI_VERIFIED"),
                         original.replace("FUN_00318851(0);","FUN_00318851(1);"),
                         original.replace("Input x86 body SHA-256:","Input x86 body SHA-255:")):
            with self.assertRaises(ValueError):
                verify_source(entry,row,modified)
        site,target = row[3][0]
        call = b"\xe8"+struct.pack("<i",target-site-5)
        self.assertEqual(direct_call(call,site),target)
        with self.assertRaises(ValueError):
            direct_call(b"\xe9"+call[1:],site)
        self.assertNotEqual(direct_call(call[:-1]+bytes([call[-1]^1]),site),target)

if __name__ == "__main__":
    binary = None
    argv = [sys.argv[0]]
    i = 1
    while i < len(sys.argv):
        if sys.argv[i] == "--xbe":
            if i+1 >= len(sys.argv):
                raise SystemExit("missing private XBE path")
            binary = sys.argv[i+1]
            i += 2
        else:
            argv.append(sys.argv[i]); i += 1
    if binary:
        print("Authenticated original XBE direct CALLs:",verify_binary(binary))
    unittest.main(argv=argv)
