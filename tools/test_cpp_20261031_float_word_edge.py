"""C++17 source/host-link regression for XBE 0x0017AA30 -> 0x0017AA70.

An optional original XBE supplies machine evidence. No host test proves Xbox behavior.
"""
import hashlib
import os
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CALLER = ROOT / "src/main_unclassified/band_0017/0x0017aa30.cpp"
CALLEE = ROOT / "src/main_unclassified/band_0017/0x0017aa70.cpp"
DECL = "/* Source-matched callee; x86 CALL/RET4 and x87 return observed in retail XBE.\n * Host C++ ABI and guest ECX object layout remain ABI_UNVERIFIED. */\nextern float10 FUN_0017aa70(float param_1);\n"
BITS = "  /* 0x0017AA49 PUSH EBP passes the raw IEEE754 DWORD, not its numeric\n   * integer value. 0x0017AA94 FLD DWORD PTR [ESP+8] consumes those bits.\n   * Preserve the guest word exactly without a host pointer conversion. */\n  float bf_original_float_argument;\n  memcpy(&bf_original_float_argument, &param_1, sizeof bf_original_float_argument);\n"
XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"


def check_xbe(data):
    if hashlib.sha256(data).hexdigest() != XBE_SHA or data[:4] != b"XBEH":
        raise ValueError("wrong retail XBE")
    base, = struct.unpack_from("<I", data, 0x104)
    count, table = struct.unpack_from("<II", data, 0x11c)
    table -= base
    sections = [struct.unpack_from("<IIIII", data, table + 56*i) for i in range(count)]
    def at(va, size):
        for _flags, start, _vsize, raw, length in sections:
            if start <= va and va + size <= start + length:
                return data[raw+va-start:raw+va-start+size]
        raise ValueError("unmapped address")
    checks = {0x17aa49:"55", 0x17aa4a:"8bce", 0x17aa4c:"e81f000000",
              0x17aa58:"d91cb9", 0x17aa66:"c20800", 0x17aa90:"59c20400",
              0x17aa94:"d9442408"}
    for va, hex_bytes in checks.items():
        if at(va, len(hex_bytes)//2) != bytes.fromhex(hex_bytes):
            raise ValueError(f"XBE operand mismatch {va:08X}")
    if 0x17aa51 + struct.unpack("<i", at(0x17aa4d,4))[0] != 0x17aa70:
        raise ValueError("incorrect CALL destination")


class FloatWordEdge(unittest.TestCase):
    def test_preimages(self):
        src = CALLER.read_text()
        self.assertEqual(src.count(DECL), 1)
        self.assertEqual(src.count(BITS), 1)
        self.assertEqual(src.count("FUN_0017aa70(bf_original_float_argument)"), 1)
        original = (src.replace(DECL, "", 1).replace(BITS, "", 1)
                    .replace("FUN_0017aa70(bf_original_float_argument)",
                             "FUN_0017aa70(param_1)", 1))
        self.assertEqual(hashlib.sha256(original.encode()).hexdigest(),
                         "28df8a15a1df01f90b5b33816bd59af76d5d945c85608029c17277d0c331e74a")
        self.assertEqual(hashlib.sha256(CALLEE.read_bytes()).hexdigest(),
                         "e9e405e30890245e7a99d0b7020d76f0a3570172e9ef1082a4e19e5580a6d87d")
        self.assertIn("Input x86 body SHA-256: 35B9561B204D486D23DDCB1C495C7D4A81BC2A265EC3B8343B2575B92D0B0FA8", src)
        self.assertIn("ABI_UNVERIFIED", src)

    @unittest.skipUnless(shutil.which("clang++"), "requires Clang")
    def test_cpp17_and_partial_link(self):
        clang = shutil.which("clang++")
        src = CALLER.read_text()
        with tempfile.TemporaryDirectory() as d:
            objects = []
            for opt in ("-O0", "-O2"):
                for i, path in enumerate((CALLER, CALLEE)):
                    args = [clang, "-std=c++17", opt, "-I", str(ROOT/"include")]
                    p = subprocess.run(args+["-fsyntax-only", str(path)], capture_output=True, text=True, timeout=40)
                    self.assertEqual(p.returncode, 0, p.stderr)
                    if opt == "-O0":
                        obj = str(Path(d)/f"{i}.o")
                        p = subprocess.run(args+["-c", str(path), "-o", obj], capture_output=True, text=True, timeout=40)
                        self.assertEqual(p.returncode, 0, p.stderr)
                        objects.append(obj)
                p = subprocess.run([clang,"-std=c++17",opt,"-fsyntax-only","-x","c++","-I",str(ROOT/"include"),"-"],
                                   input=src.replace(DECL,"",1), capture_output=True, text=True, timeout=40)
                self.assertNotEqual(p.returncode, 0)
                self.assertIn("FUN_0017aa70", p.stderr)
            if shutil.which("ld") and shutil.which("nm"):
                merged = str(Path(d)/"combined.o")
                p = subprocess.run(["ld","-r",*objects,"-o",merged], capture_output=True, text=True, timeout=40)
                self.assertEqual(p.returncode, 0, p.stderr)
                symbols = subprocess.check_output(["nm","-C",merged], text=True)
                self.assertIn(" T FUN_0017aa70(float)", symbols)
                self.assertNotIn(" U FUN_0017aa70(float)", symbols)

    def test_optional_xbe(self):
        path = os.environ.get("BF_RETAIL_XBE")
        if not path:
            self.skipTest("retail XBE deliberately absent from CI")
        data = Path(path).read_bytes()
        check_xbe(data)
        with self.assertRaises(ValueError):
            check_xbe(data[:-1])


if __name__ == "__main__":
    unittest.main()
