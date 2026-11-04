#!/usr/bin/env python3
"""Guard seven *partial* source declarations. These callers are not yet syntax passes."""
from __future__ import annotations

import hashlib
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
NOTICE = "/* Source-matched C++17 declaration only: original guest ABI_UNVERIFIED. */"
CASES = (
    ("graphics_d3d", "0036e6e0", "0036e670", "void FUN_0036e670(void)", "98107a73dd2c5052429c3b023ba7c8b8608a6e24", "BFF15C8C277C6AB82D691D14ECA53AD115147155854B3C9872559479E6693E5B"),
    ("graphics_d3d", "0036efe0", "0036eed0", "void FUN_0036eed0(void)", "5920d87c87085cd3c915c56de720100ff61670da", "84EB259C6097B26FF6F1FFA9344B9CAAB37C8E35EDC6260A20E7FC3A52900F56"),
    ("graphics_d3d", "00370590", "00373a30", "int FUN_00373a30(float param_1)", "3eaa07cdd28b96604deb435ee1ab1fd22caa1e49", "4A987343BFB928BD0E4B7A0D1A60C616300581FA2CB1FC57B6348AC3EFE5EE63"),
    ("graphics_d3d", "00371fa0", "00372180", "void FUN_00372180(void)", "e4d5ac5863e894bdab9c7f66a5606dac837cab80", "379B43248B1DB7734516CBE34FF3B71249CEB0E75905F1D604FD6FAB97FF73B7"),
    ("graphics_d3d", "00373730", "003736b0", "void FUN_003736b0(void)", "f4d944488bd6cb71056ac40de2805e69e5652a12", "300BF45B349ED92AF23ED0CDD42553021286E6D4464C1EF00DDF4CFB6DC37C49"),
    ("graphics_d3d", "003738e0", "003736b0", "void FUN_003736b0(void)", "238842337d02d272a56e2240891f617b00adae5a", "9AE647E5E52E00088F9608D94BD51679C8BE368285F4B0A310FDA5D9EFDC7E60"),
    ("network_xnet", "003477ce", "003476f1", "int FUN_003476f1(uint *param_1,uint param_2)", "ae7337366fba6ef3bba57075ec79f547079ce2b0", "372D97F4F40F281488EE951ED53E80237F7090B65EA84E045AECF72B281C023A"),
)


def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()


class PartialDeclarations(unittest.TestCase):
    def test_original_sources_are_exactly_preserved(self):
        self.assertEqual(len(CASES), 7)
        self.assertEqual(len({row[1] for row in CASES}), 7)
        for folder, caller, callee, signature, original_blob, original_body_sha in CASES:
            with self.subTest(caller=caller):
                src = (ROOT / "src/platform" / folder / ("0x" + caller + ".cpp")).read_text()
                dst = (ROOT / "src/platform" / folder / ("0x" + callee + ".cpp")).read_text()
                added = NOTICE + "\nextern " + signature + ";\n"
                self.assertEqual(src.count(added), 1)
                self.assertEqual(git_blob_sha(src.replace(added, "", 1).encode()), original_blob)
                self.assertIn(signature, dst)
                self.assertIn("Input x86 body SHA-256: " + original_body_sha, src)
                self.assertIn("Entry: 0x" + caller, src)
                self.assertIn("ABI_UNVERIFIED", src)


if __name__ == "__main__":
    unittest.main()
