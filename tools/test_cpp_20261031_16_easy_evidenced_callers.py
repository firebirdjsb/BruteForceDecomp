#!/usr/bin/env python3
"""2026-10-31 16-source C++17 declaration-only gate; ABI remains unverified."""
from __future__ import annotations
import hashlib
import struct
import subprocess
import shutil
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
CASES = {
    "001d11c0": ("1d4b817a5c1726a9bed58317cb019603e8f638ec", "5C22C525D48957B3527D49466884B1DEAACCEC3FBEBBCBE746D311ACCA8EF26A", "A", 51),
    "001d9150": ("d685f17f5a373d2cd8aa51535a84cf8c73f5e67e", "812DE254718C0AAEED1497039BF54C655DC54710BC567EF6CD49B667030C355A", "A", 56),
    "001d9190": ("9abf6f9181af1fe7857c62783a459d2f596e3587", "F6BD3651218F983B2A9FBE22F70A7A1D3B3791CCFFC687F793CF7362EA6CC573", "A", 80),
    "001d91e0": ("39ca87d931a55c36a650500b1841372412e783f3", "8794594FFE936687735C28565515D1FDCEF9F4CD7A814467D911018554257D55", "A", 104),
    "001d1230": ("033ec531d90d7934277e975ae28cf448b72eebdb", "8C36B41B5E054B33DE53725FCCD5678EDB8879EAA1F7D843EE004805FC9A2F31", "B", 77),
    "001e0bf0": ("fe7f665728aa6716c1f739b55f98adbc6449547c", "F28A9D6BF6F646A0979F57C510DDC520290DB2A7C46A91D3950A2486EB31BE38", "B", 80),
    "001dd250": ("916e0aa9932077c6cbabc1cfe5f1c38985f02ec0", "B5A564DD94CAD193726911FD60D2C39C3C687BBDBD83F93BADFC0FCBC1A62580", "B", 49),
    "001d1cd0": ("ee35338aa40f07514081e91c538b26b9ed03514e", "C8CC2DD6F8067A2687DCB27E4629759A5E596213211892581DC919B970B94370", "B", 102),
    "001c9660": ("30997abf5460e0414e21774f161506eeda7bc875", "0573D3B083E4651CEA28D71B8A927D7265D7AAD93C77C06D638F0D1FAAB321B1", "C", 131),
    "0024f1d0": ("f0300ac551646c789824e7d6fe09bf2212e1b410", "9F11985CCCF5A5EA0CC2B573077376AB1B72720925499E895A730E0CE7A2C8ED", "C", 62),
    "002d14c0": ("0bdc15a56d312d30dcd82ae26e8c1690efcda6f9", "1A6758E7B9DCE5F7F3C187A641E12B28E3C7E9B6B50C8AA24DF9BDA4963D2155", "D", 47),
    "002d14f0": ("eb5f3c8a5521d9c1756fb4fc0695d8baa9beaf91", "8ECE6DE7E8F6B2BC31F3640EA7136F07F84DC27C3F7CCEB6D83EC305DDCF69CE", "D", 47),
    "002d1520": ("891af85947bbacdbb8cc1471e4a648db18a5dd61", "407B8C4734A6DF2F79C43E3672A946386F972F0580203C8F28FD083492BFCC24", "D", 63),
    "002d18c0": ("72d702224b1745266a5aa58379db801ac8e2d435", "5F94E21C8598376C1D793B8021C8431B6A28DFDAC11DE355792ADB42DBF033FF", "D", 47),
    "002d18f0": ("a4c0a249616bf820ff715b9ded84aa2684bf70ea", "5E657EAABE2C30FDE232AF265BAF82B7B0AD91F9B1CF2F6B4B7AD741A7BCC3C8", "D", 47),
    "002d1920": ("ba95a98a2c884fc3c88670233a328ec5e177f78e", "0E08AF4579378C6442998385890C39BD4B35C98E072706C500E22E23BEB489D6", "D", 63),
}
TARGET = {
    "001d11c0": ("FUN_0001f4f0", "FUN_0010b1e0"),
    "001d9150": ("FUN_0001f4f0", "FUN_0010b1e0"),
    "001d9190": ("FUN_0001f4f0", "FUN_0010b1e0"),
    "001d91e0": ("FUN_0001f4f0", "FUN_001d5b10", "FUN_0010bc40"),
    "001d1230": ("FUN_0001f4f0", "FUN_001d5b10", "FUN_0010bc40"),
    "001e0bf0": ("FUN_0001f4f0", "FUN_001d5b10", "FUN_0010bc40"),
    "001dd250": ("FUN_0001f4f0", "FUN_0010b470"),
    "001d1cd0": ("FUN_0001f4f0", "FUN_000b0db0"),
    "001c9660": ("FUN_0001f4f0", "FUN_001cba30"),
    "0024f1d0": ("FUN_0001f4f0",),
    "002d14c0": ("FUN_002b3c60", "FUN_002ce2c0"),
    "002d14f0": ("FUN_002b3c60", "FUN_002ce2c0"),
    "002d1520": ("FUN_002b3c60", "FUN_002ce2c0"),
    "002d18c0": ("FUN_002b3c60", "FUN_002ce3a0"),
    "002d18f0": ("FUN_002b3c60", "FUN_002ce3a0"),
    "002d1920": ("FUN_002b3c60", "FUN_002ce3a0"),
}
DEFINITIONS = {
    "FUN_0001f4f0": "void FUN_0001f4f0(int param_1, uint param_2, uint param_3)",
    "FUN_0010b1e0": "void FUN_0010b1e0(void)",
    "FUN_001d5b10": "void FUN_001d5b10(int param_1)",
    "FUN_0010bc40": "void FUN_0010bc40(void)",
    "FUN_0010b470": "int FUN_0010b470(int param_1)",
    "FUN_000b0db0": "void FUN_000b0db0(void)",
    "FUN_001cba30": "int FUN_001cba30(int param_1)",
    "FUN_002b3c60": "void FUN_002b3c60(void)",
    "FUN_002ce2c0": "void FUN_002ce2c0(void)",
    "FUN_002ce3a0": "void FUN_002ce3a0(void)",
}
NOTES = {
    "A": "/* Ghidra-draft-matched declarations; original Xbox implicit registers ABI_UNVERIFIED. */",
    "B": "/* Source-matched draft declarations only; Xbox guest register/stack ABI_UNVERIFIED. */",
    "C": "/* Draft-only source-matched forward declarations; original Xbox ABI_UNVERIFIED. */",
    "D": "/* Existing Ghidra callee draft declarations only; implicit guest registers ABI_UNVERIFIED. */",
}
DIRECT = (
    (0x001d11d9, 0x0001f4f0),
    (0x001d11e3, 0x0010b1e0),
    (0x001d9168, 0x0001f4f0),
    (0x001d9173, 0x0010b1e0),
    (0x001d91b5, 0x0001f4f0),
    (0x001d91c0, 0x0010b1e0),
    (0x001d9205, 0x0001f4f0),
    (0x001d9211, 0x001d5b10),
    (0x001d921d, 0x001d5b10),
    (0x001d9228, 0x0010bc40),
    (0x001d124c, 0x0001f4f0),
    (0x001d1255, 0x001d5b10),
    (0x001d125e, 0x001d5b10),
    (0x001d1269, 0x0010bc40),
    (0x001e0c08, 0x0001f4f0),
    (0x001e0c14, 0x001d5b10),
    (0x001e0c20, 0x001d5b10),
    (0x001e0c2b, 0x0010bc40),
    (0x001dd26c, 0x0001f4f0),
    (0x001dd278, 0x0010b470),
    (0x001d1cd7, 0x0001f4f0),
    (0x001d1d23, 0x0001f4f0),
    (0x001d1d2e, 0x000b0db0),
    (0x001c9676, 0x0001f4f0),
    (0x001c96ce, 0x0001f4f0),
    (0x001c96da, 0x001cba30),
    (0x0024f1e6, 0x0001f4f0),
    (0x0024f203, 0x0001f4f0),
    (0x002d14d3, 0x002b3c60),
    (0x002d14e6, 0x002ce2c0),
    (0x002d1503, 0x002b3c60),
    (0x002d1516, 0x002ce2c0),
    (0x002d1533, 0x002b3c60),
    (0x002d1556, 0x002ce2c0),
    (0x002d18d3, 0x002b3c60),
    (0x002d18e6, 0x002ce3a0),
    (0x002d1903, 0x002b3c60),
    (0x002d1916, 0x002ce3a0),
    (0x002d1933, 0x002b3c60),
    (0x002d1956, 0x002ce3a0),
)

def path_for(entry):
    return ROOT / "src/main_unclassified" / ("band_" + entry[:4]) / ("0x" + entry + ".cpp")

def declaration(entry):
    kind = CASES[entry][2]
    return NOTES[kind] + "\n" + "".join("extern " + DEFINITIONS[s] + ";\n" for s in TARGET[entry])

def verify_source(entry, data):
    old_blob, body_digest, _, _ = CASES[entry]
    added = declaration(entry)
    if data.count(added) != 1:
        raise ValueError("missing or duplicate declaration block: " + entry)
    if "Entry: 0x"+entry not in data or "ABI_UNVERIFIED" not in data or "Input x86 body SHA-256: "+body_digest not in data:
        raise ValueError("original identity/provenance missing: " + entry)
    raw = data.replace(added, "", 1).encode("utf-8")
    obj = b"blob " + str(len(raw)).encode("ascii") + b"\0" + raw
    if hashlib.sha1(obj).hexdigest() != old_blob:
        raise ValueError("Ghidra draft source bytes changed beyond forward declarations: " + entry)
    for symbol in TARGET[entry]:
        if data.count(symbol+"(") < 2:
            raise ValueError("missing original call: " + symbol)

def read_xbe(p):
    b = Path(p).read_bytes()
    if hashlib.sha256(b).hexdigest() != XBE_SHA:
        raise ValueError("retail XBE SHA mismatch")
    base, = struct.unpack_from("<I",b,0x104)
    count, = struct.unpack_from("<I",b,0x11c)
    table, = struct.unpack_from("<I",b,0x120)
    table -= base
    if count > 128 or table < 0 or table+count*0x38 > len(b):
        raise ValueError("invalid XBE section table")
    sections = [struct.unpack_from("<IIIII",b,table+i*0x38) for i in range(count)]
    def read(va,n):
        for _,sec,mem,off,stored in sections:
            if sec <= va and va+n <= sec+min(mem,stored) and off+va-sec+n <= len(b):
                return b[off+va-sec:off+va-sec+n]
        raise ValueError("original virtual address absent: "+hex(va))
    return read

def verify_xbe(p):
    read = read_xbe(p)
    for entry,(_,body,_,size) in CASES.items():
        if hashlib.sha256(read(int(entry,16),size)).hexdigest().upper() != body:
            raise ValueError("original body SHA failed at "+entry)
    ranges = [(int(entry,16),int(entry,16)+row[3]) for entry,row in CASES.items()]
    for site,target in DIRECT:
        if not any(start <= site and site+5 <= end for start,end in ranges):
            raise ValueError("CALL site outside a pinned original body")
        code = read(site,5)
        if code[0] != 0xE8 or site+5+struct.unpack("<i",code[1:])[0] != target:
            raise ValueError("direct original x86 CALL mismatch at "+hex(site))
    return len(DIRECT)

class Tests(unittest.TestCase):
    def test_source_unchanged_except_declarations(self):
        self.assertEqual(len(CASES),16)
        for e in CASES:
            with self.subTest(entry=e):
                verify_source(e,path_for(e).read_text(encoding="utf-8"))

    def test_clang_cpp17_o0_o2(self):
        exe = shutil.which("clang++")
        if not exe: self.skipTest("Clang unavailable")
        for e in CASES:
            for flag in ("-O0","-O2"):
                with self.subTest(entry=e,opt=flag):
                    run=subprocess.run([exe,"-std=c++17","-x","c++","-fsyntax-only","-ferror-limit=3",
                                        flag,"-I",str(ROOT/"include"),str(path_for(e))],
                                        capture_output=True,text=True,timeout=60)
                    self.assertEqual(run.returncode,0,run.stderr)

    def test_negative_source_mutation(self):
        e=next(iter(CASES))
        text=path_for(e).read_text(encoding="utf-8")
        for altered in (text.replace("ABI_UNVERIFIED","ABI_VERIFIED"),
                        text.replace("FUN_0001f4f0(unaff_EBX,0,0xffffffff);",
                                     "FUN_0001f4f0(unaff_EBX,1,0xffffffff);"),
                        text.replace("Input x86 body SHA-256:","Input x86 body SHA-255:")):
            with self.assertRaises(ValueError):
                verify_source(e,altered)

    def test_negative_original_call(self):
        site,target=DIRECT[0]
        code=b"\xe8"+struct.pack("<i",target-site-5)
        self.assertEqual(site+5+struct.unpack("<i",code[1:])[0],target)
        bad=bytes([0xe9])+code[1:]
        self.assertNotEqual(bad[0],0xe8)

if __name__ == "__main__":
    import argparse
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe",type=Path,help="private original retail XBE (never commit)")
    args,rest=parser.parse_known_args()
    if args.xbe:
        print("PASS authenticated XBE direct CALL edges:",verify_xbe(args.xbe))
    unittest.main(argv=["test"]+rest)
