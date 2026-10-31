#!/usr/bin/env python3
"""Gate 17 source-matched C++17 caller repairs without asserting Xbox ABI."""
from __future__ import annotations
import re
import shutil
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANGXX = shutil.which("clang++")
SINGLE = "/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */"
DOUBLE = "/* Source-only C++17 declarations; Xbox register/stack ABI_UNVERIFIED. */"
CASES = (
    ("000c10d0", ("void FUN_000c11f0(void)",)),
    ("000c5e20", ("ulonglong FUN_002ebf10(void)",)),
    ("000ebe10", ("void FUN_000eb560(int param_1)",)),
    ("000edd60", ("char FUN_000ed030(undefined4 param_1,int *param_2,undefined4 *param_3)",)),
    ("000f8080", ("undefined4 * FUN_0010c850(void)",)),
    ("000f9470", ("undefined4 FUN_000f93c0(void)",)),
    ("000fbea0", ("void FUN_000fbe60(void)",)),
    ("00106860", ("float10 FUN_001067a0(void)",)),
    ("00107a40", ("undefined1 FUN_00107d50(int param_1)",)),
    ("00109a00", ("undefined4 FUN_001095b0(void)",)),
    ("0010ae40", ("void FUN_000b2070(float param_1)",)),
    ("0010c890", ("void FUN_0010c7d0(void)",)),
    ("0010d600", ("void FUN_00101170(void)",)),
    ("0010d660", ("void FUN_00101170(void)",)),
    ("0010e500", ("int FUN_0006ef00(void)",)),
    ("0010d700", ("int FUN_0010d600(void)", "undefined4 FUN_0010d660(void)",)),
    ("0010d7c0", ("int FUN_0010d600(void)", "undefined4 FUN_0010d660(void)",)),
)


def source(addr: str) -> Path:
    return ROOT / "src" / "main_unclassified" / f"band_{addr[:4]}" / f"0x{addr}.cpp"


BLOCKED_INDIRECT_ABI = frozenset({"000c10d0", "000c5e20", "000f8080", "000fbea0"})


class MainCaller17(unittest.TestCase):
    def test_declarations_match_callee_drafts_and_keep_original_provenance(self):
        self.assertEqual(len(CASES), 17)
        self.assertEqual(len({caller for caller, _ in CASES}), 17)
        for caller, signatures in CASES:
            with self.subTest(caller=caller):
                src = source(caller).read_text(encoding="utf-8")
                comment = SINGLE if len(signatures) == 1 else DOUBLE
                snippet = comment + "\n" + "".join(f"extern {sig};\n" for sig in signatures)
                self.assertEqual(src.count(snippet), 1)
                self.assertIn(f"Entry: 0x{caller}", src)
                self.assertRegex(src, r"Input x86 body SHA-256: [0-9A-F]{64}")
                self.assertIn("ABI_UNVERIFIED", src)
                for sig in signatures:
                    m = re.search(r"FUN_([0-9a-f]{8})\(", sig)
                    self.assertIsNotNone(m)
                    callee = m.group(1)
                    draft = source(callee).read_text(encoding="utf-8")
                    norm = lambda s: re.sub(r"\s+", "", s)
                    self.assertIn(norm(sig), norm(draft))
                    self.assertIn(f"FUN_{callee}(", src.replace(snippet, "", 1))

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_13_single_error_callers_compile_with_cpp17(self):
        self.assertEqual(len(CASES) - len(BLOCKED_INDIRECT_ABI), 13)
        for caller, _ in CASES:
            if caller in BLOCKED_INDIRECT_ABI:
                continue
            with self.subTest(caller=caller):
                cmd = [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                       "-ferror-limit=3", "-I", str(ROOT / "include"), str(source(caller))]
                result = subprocess.run(cmd, capture_output=True, text=True,
                                        timeout=60, check=False)
                self.assertEqual(result.returncode, 0, result.stderr)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_four_indirect_call_sites_remain_explicitly_blocked(self):
        """Direct declarations may pass while original virtual-call ABI does not."""
        for caller in sorted(BLOCKED_INDIRECT_ABI):
            with self.subTest(caller=caller):
                cmd = [CLANGXX, "-std=c++17", "-x", "c++", "-fsyntax-only",
                       "-ferror-limit=3", "-I", str(ROOT / "include"), str(source(caller))]
                result = subprocess.run(cmd, capture_output=True, text=True,
                                        timeout=60, check=False)
                self.assertNotEqual(result.returncode, 0)
                self.assertIn("too many arguments to function call, expected 0", result.stderr)
                self.assertNotIn("use of undeclared identifier", result.stderr)

    @unittest.skipUnless(CLANGXX, "clang++ required")
    def test_invalid_pointer_argument_is_not_worked_around(self):
        bad = "extern int FUN_0006ef00(void); void caller(){FUN_0006ef00(1);}\n"
        result = subprocess.run([CLANGXX, "-std=c++17", "-x", "c++",
                                 "-fsyntax-only", "-"], input=bad,
                                capture_output=True, text=True, check=False)
        self.assertNotEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
