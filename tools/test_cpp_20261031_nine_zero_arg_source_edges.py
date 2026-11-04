#!/usr/bin/env python3
"""Nine original-address, declaration-only repairs; never proof of original Xbox ABI."""
from __future__ import annotations

import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
NM = shutil.which("nm")
NOTICE = "/* Exact existing callee draft signature only; original Xbox ABI_UNVERIFIED. */"
CASES = (
    ("platform/xpp_role_unverified", "003800bb", "00381139", "undefined4 FUN_00381139(void)", "44b3606bbd8b304475a4563642b26e60d32228f2", "963366fe7eb6198d6957ee405cde728b143f6669", "A23DEE08BD1E47A950CC2E0113572D5E19D116A57F3B9DE5DC09A0EDDD189656"),
    ("main_unclassified/band_0028", "002816e0", "00281630", "void FUN_00281630(void)", "ded04d2b719679ea3244aeab05ccc964a86d8683", "04edd7941ffe3a79468819778fbfea5b69524956", "C7703232E525101AF127F9C96709BA1F87F180EF402A488B7F62DFCA18B9446D"),
    ("main_unclassified/band_0016", "00162600", "001625a0", "void FUN_001625a0(void)", "ee8e2a5e45375dc1a8a9c04128eafef94903395f", "547d0089bd342fb5e7facf98d8bc57ff66ad7b01", "AD54AE77AE593139EFD35A9485FA0A2C1CA3DEB661A56417E433D76503C4AFBB"),
    ("main_unclassified/band_0023", "00232520", "002324c0", "float10 FUN_002324c0(void)", "ccdd7a69f1c83c9c5476c6aaa4707de05c5b5a35", "06d03aba3490fcecf6cc398912bd3e996ae62f0d", "CA200A0EA06FF6C0992A597A9D5FE44DDDF25B90035A42A0ED8F0410382F8986"),
    ("main_unclassified/band_002e", "002e4940", "002e4600", "int FUN_002e4600(void)", "1c1196ec5bf4e77004d7342f6c77b324605e66d3", "0e4d3f0d46866fa36931726abea0b8f13c261b55", "0CE6AEE2FF2FF0098F2A03E9A1BDAA45F30DC4FD034341698484D8A7F5D7F457"),
    ("main_unclassified/band_002e", "002e9500", "002e9b30", "void FUN_002e9b30(void)", "7d80610f68153f91205b6c9547a3ba6c33fed972", "04f4c21f9f33bca86aab86e9f2c43718a9f94a3c", "5464D722E8A4EC3052E1AED3E2A711A799E78E586C08B51DC215306B1304823E"),
    ("main_unclassified/band_002b", "002b3420", "002b4100", "void FUN_002b4100(void)", "dad4d643b210a2122a76fb3beb67ffeb907a9225", "8bf4ca28a1bf359dc54f6d1e8df1e7bac176b805", "0B24206E5967F7E83791F67B6F3DD4988A002C7912CBCA5ED8CA545188E50ACA"),
    ("main_unclassified/band_0028", "0028d1e0", "0028ce90", "undefined4 FUN_0028ce90(void)", "b09086486d11f673c0e1f1ce9ffbe95fa19a58f6", "a3d92f3753709ef4e4f514cef6fff63d1162d4cd", "2DECCD3D2303E260D8F0CEAB02BE96B10ED058CA354A0C4891F49AB697E2AA1A"),
    ("main_unclassified/band_001e", "001e7f80", "001e7c00", "void FUN_001e7c00(void)", "141be1ffe1aa0c8433a84d271725462ead72a5af", "7b4016c61c3817059c38377b83d2c0ff453d6058", "605F6D9A26C6AAC467D64E88AE8F598101C9531724C2E1B3481ED5578E7B3204"),
)


def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\0" + data).hexdigest()


def read_pair(row):
    folder, caller, callee, *_ = row
    return (
        (ROOT / "src" / folder / ("0x" + caller + ".cpp")).read_text(encoding="utf-8"),
        (ROOT / "src" / folder / ("0x" + callee + ".cpp")).read_text(encoding="utf-8"),
    )


class NineDirectSourceMatchedDeclarations(unittest.TestCase):
    def test_exact_source_preimages_and_existing_callee_definitions(self):
        self.assertEqual(len(CASES), 9)
        self.assertEqual(len({row[1] for row in CASES}), 9)
        for row in CASES:
            folder, caller, callee, signature, old_blob, callee_blob, body_hash = row
            with self.subTest(caller=caller):
                source, destination = read_pair(row)
                decl = NOTICE + "\nextern " + signature + ";\n"
                self.assertEqual(source.count(decl), 1)
                self.assertEqual(source.count("FUN_" + callee + "("), 2)
                self.assertEqual(git_blob_sha(source.replace(decl, "", 1).encode()), old_blob)
                self.assertEqual(git_blob_sha(destination.encode()), callee_blob)
                self.assertIn(signature, destination)
                self.assertIn("Entry: 0x" + caller, source)
                self.assertIn("Input x86 body SHA-256: " + body_hash, source)
                self.assertIn("ABI_UNVERIFIED", source)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_cpp17_o0_o2_and_missing_prototype_negative_controls(self):
        for row in CASES:
            folder, caller, callee, signature, *_ = row
            source, _ = read_pair(row)
            decl = NOTICE + "\nextern " + signature + ";\n"
            for opt in ("-O0", "-O2"):
                with self.subTest(caller=caller, optimization=opt):
                    argv = [CLANGXX, "-std=c++17", opt, "-fsyntax-only", "-x", "c++",
                            "-I", str(ROOT / "include"), "-"]
                    ok = subprocess.run(argv, input=source, text=True, capture_output=True,
                                        timeout=60, check=False)
                    self.assertEqual(ok.returncode, 0, ok.stderr)
                    broken = subprocess.run(argv, input=source.replace(decl, "", 1),
                                            text=True, capture_output=True,
                                            timeout=60, check=False)
                    self.assertNotEqual(broken.returncode, 0)
                    self.assertIn("FUN_" + callee, broken.stderr)

    @unittest.skipUnless(CLANGXX and NM, "clang++ and nm required")
    def test_selected_relocatable_host_symbol_resolution(self):
        # Partial host object symbol binding only; not original Xbox calling conventions,
        # guest memory mapping, behavioral parity, or a native PC executable.
        selected = {"00162600", "002e4940", "002e9500"}
        for row in CASES:
            folder, caller, callee, *_ = row
            if caller not in selected:
                continue
            with self.subTest(caller=caller):
                src = ROOT / "src" / folder / ("0x" + caller + ".cpp")
                dst = ROOT / "src" / folder / ("0x" + callee + ".cpp")
                with tempfile.TemporaryDirectory() as tmp:
                    p = Path(tmp)
                    a, b, combined = (p / n for n in ("caller.o", "callee.o", "partial.o"))
                    for file, obj in ((src, a), (dst, b)):
                        cmd = [CLANGXX, "-std=c++17", "-O0", "-I", str(ROOT / "include"),
                               "-c", str(file), "-o", str(obj)]
                        x = subprocess.run(cmd, text=True, capture_output=True,
                                           timeout=60, check=False)
                        self.assertEqual(x.returncode, 0, x.stderr)
                    before = subprocess.run([NM, "-C", "-u", str(a)], text=True,
                                            capture_output=True, check=False)
                    self.assertEqual(before.returncode, 0, before.stderr)
                    self.assertIn("FUN_" + callee, before.stdout)
                    linked = subprocess.run([CLANGXX, "-r", str(a), str(b), "-o", str(combined)],
                                            text=True, capture_output=True, timeout=60, check=False)
                    self.assertEqual(linked.returncode, 0, linked.stderr)
                    after = subprocess.run([NM, "-C", "-u", str(combined)], text=True,
                                           capture_output=True, check=False)
                    self.assertEqual(after.returncode, 0, after.stderr)
                    self.assertNotIn("FUN_" + callee + "(", after.stdout)


if __name__ == "__main__":
    unittest.main()
