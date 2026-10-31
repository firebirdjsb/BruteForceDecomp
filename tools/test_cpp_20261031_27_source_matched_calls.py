#!/usr/bin/env python3
"""Strict source-only C++17 regression for 27 XBE-E8-identified draft calls.

Source declarations are NOT original Xbox ABI, object, linkage, or behavior proof.
"""
from __future__ import annotations
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
NOTE = "/* Source-matched C++17 declaration only; original Xbox register/stack ABI_UNVERIFIED. */\n"
# caller, callee, callee's existing draft return type, old Git blob, original E8 VA
CASES = [["0015e1a0","0010bc40","void","1c5dec440edd6673fb541791c011337198d09e88","0015e1b6"],["001656b0","00164ed0","void","232c912eff9aa89c6048a960722eda21a8f1c8a7","00165717"],["00169650","001546b0","undefined4","b656afe2243716b21ee1fe0b0a7240ae214fd78e","001696b5"],["00180960","001834c0","void","a27ac995183ecca8d403e12a34101c8f9281f2d7","00180987"],["00189360","001a68c0","void","ba524d8a208701ee6cfa0c079e88eb125076a2b1","00189365"],["00189660","001a6960","void","4ed6a9dc857398023996a9b9bf9690019c4d7d9f","00189665"],["001897d0","001a69b0","void","55f8279948be4dfaca9ad3a6355caa17eb932973","001897d5"],["0018a1c0","001a6a50","void","ecb1a0c2e4266bd29003233e8dd559d62b3a1d14","0018a1c5"],["0018c740","001a6c30","void","ac3a5bfadb00192fa13834fc681182fc9521436f","0018c745"],["0018cb80","001a6cd0","void","0c750c46b36a69ebef2ce0e5f82e8ac2ac0e45a5","0018cb85"],["002228b0","002228d0","void","858f6f5de0c00b96670654b507461d3d03f4a006","002228bd"],["00222e40","00222e50","void","c9f19ceabb514c98772fd498d1aec04f86627b17","00222e47"],["00229950","002b2e00","undefined4","81993034cbbd2774e5ca438eeb2a1f25a89d7f6b","00229967"],["00235bd0","00253570","undefined4","174ff7b7bd14a920b02b4a7936e89030fdb36154","00235bf1"],["0023ed90","00240f00","void","eddbe28627cac9b843cee5b48cc9daa52cd71936","0023ed95"],["00241290","00242410","void","4912bf728a6f74c5ea4d163dd9b6917e48f8b125","002412a7"],["002412b0","00242330","void","0047a475e4dc5c2b6ba97a6d11cb6fe791b4ac8d","002412c6"],["002412d0","002423a0","void","6563c347df4644f659d4696d2832fe1abdd25145","002412e7"],["002416f0","00242c80","void","babaa4505fc8faec284e933aa5ccc4c53837df7b","00241706"],["00243540","00242fd0","void","d6d85ef1c05ea48cc73dcfbdb9c5ce5482add931","00243549"],["002440c0","002430a0","void","70fd727cf29d3ce7b979c9fc62f9a8b552bd5e8e","002440c7"],["002526f0","0027e7f0","void","aa93c86ca6234a327e447fe4baa318b848c06718","0025271e"],["0025c0e0","0025c100","undefined4","10fa4c0531a7d031df9932fa621cfed1adfff1be","0025c0e8"],["00270e50","002713d0","void","8c85210e8716df48f3f5da8d15eb4b63d8aeef17","00270e5b"],["00270ef0","002713d0","void","0f18c88ad4b7246d67d766a4612d68e57cfff1ad","00270efb"],["00272340","002723c0","void","4dce1616669627e201ecdcf2f91afca9097abf8e","002723b1"],["002830d0","00239dc0","undefined4","95ce1a3d5a32194d337c6d4a9520775ab1f5a487","002830fa"]]

def source_path(caller: str) -> Path:
    return ROOT / "src/main_unclassified" / ("band_" + caller[:4]) / ("0x" + caller + ".cpp")

def verify_source(row, content: str) -> None:
    caller, callee, ret, original_blob, _ = row
    added = NOTE + f"extern {ret} FUN_{callee}(void);\n"
    if content.count(added) != 1 or f"Entry: 0x{caller}" not in content:
        raise ValueError("missing source-matched declaration or entry identity: " + caller)
    if "Input x86 body SHA-256: " not in content or "ABI_UNVERIFIED" not in content:
        raise ValueError("missing original provenance / uncertainty label: " + caller)
    old = content.replace(added, "", 1).encode("utf-8")
    digest = hashlib.sha1(b"blob " + str(len(old)).encode() + b"\0" + old).hexdigest()
    if digest != original_blob:
        raise ValueError("source body changed beyond the declaration: " + caller)

def verify_xbe(xbe_path: Path) -> int:
    data = xbe_path.read_bytes()
    if hashlib.sha256(data).hexdigest() != XBE_SHA256:
        raise ValueError("original retail XBE SHA-256 mismatch")
    if data[:4] != b"XBEH":
        raise ValueError("invalid XBE magic")
    base, = struct.unpack_from("<I", data, 0x104)
    count, = struct.unpack_from("<I", data, 0x11c)
    table_va, = struct.unpack_from("<I", data, 0x120)
    if base != 0x10000 or not 1 <= count <= 64 or table_va < base:
        raise ValueError("unexpected retail XBE section table")
    table = table_va - base
    sections = [struct.unpack_from("<5I", data, table + i * 0x38) for i in range(count)]
    def read_va(va: int, length: int) -> bytes:
        for _, section_va, vsize, raw, stored in sections:
            if section_va <= va and va + length <= section_va + min(vsize, stored):
                off = raw + va - section_va
                if off + length <= len(data):
                    return data[off:off + length]
        raise ValueError("unmapped original instruction VA: " + hex(va))
    for caller, callee, ret, original_blob, call_site in CASES:
        site, target = int(call_site, 16), int(callee, 16)
        instruction = read_va(site, 5)
        if instruction[0] != 0xe8:
            raise ValueError("expected E8 near CALL at " + call_site)
        actual = (site + 5 + struct.unpack_from("<i", instruction, 1)[0]) & 0xffffffff
        if actual != target:
            raise ValueError("wrong original CALL destination at " + call_site)
        changed = bytearray(instruction)
        changed[1] ^= 1
        negative = (site + 5 + struct.unpack_from("<i", changed, 1)[0]) & 0xffffffff
        if negative == target:
            raise ValueError("negative CALL displacement control failed")
    return len(CASES)

class SourceMatchedOriginalCalls(unittest.TestCase):
    def test_provenance(self):
        self.assertEqual(len(CASES), 27)
        for row in CASES:
            with self.subTest(caller=row[0]):
                verify_source(row, source_path(row[0]).read_text(encoding="utf-8"))

    def test_strict_clang_cpp17_o0_o2(self):
        compiler = shutil.which("clang++")
        if compiler is None:
            self.skipTest("clang++ unavailable")
        for row in CASES:
            source = source_path(row[0])
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=row[0], opt=opt):
                    run = subprocess.run(
                        [compiler, "-std=c++17", "-x", "c++", "-fsyntax-only",
                         "-ferror-limit=3", opt, "-I", str(ROOT / "include"), str(source)],
                        text=True, capture_output=True, timeout=60)
                    self.assertEqual(run.returncode, 0, run.stderr)

    def test_negative_source_controls(self):
        row = CASES[0]
        content = source_path(row[0]).read_text(encoding="utf-8")
        for bad in (
            content.replace("ABI_UNVERIFIED", "ABI_VERIFIED"),
            content.replace("Input x86 body SHA-256:", "Input x86 body SHA-255:"),
            content.replace(f"FUN_{row[1]}();", f"FUN_{row[1]}(0);"),
        ):
            with self.assertRaises(ValueError):
                verify_source(row, bad)

if __name__ == "__main__":
    arguments = [sys.argv[0]]
    i = 1
    while i < len(sys.argv):
        if sys.argv[i] == "--xbe":
            if i + 1 >= len(sys.argv):
                raise SystemExit("--xbe requires the private retail executable path")
            print("Verified original XBE direct calls:", verify_xbe(Path(sys.argv[i + 1])))
            i += 2
        else:
            arguments.append(sys.argv[i])
            i += 1
    unittest.main(argv=arguments)
