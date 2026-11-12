#!/usr/bin/env python3
"""Bounded integer primitive spelling tests, not original-game execution or ABI QA.

Only the synthetic primitive harness executes. Canonical sources retain their
unverified register/overflow assumptions and are parsed, never called or linked.
"""
from __future__ import annotations

import csv
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

from body_hash_labels import read_body_digest
from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / "metadata/cpp_20261104_integer_primitives.json"
MANIFEST_SHA = "c6ab37c18d9b2f7fb3e6379f088c387926bbb1c35cfafd9098af95055854ec66"
ENTRIES = {"0x002ebd50", "0x002efa30", "0x002f0d30", "0x002fe6a0", "0x002fe780"}
UNCHANGED_CONCAT_USERS = {
    "0x002f032e": "ff13ee6742f7234ec831fd5aadf12769135e8b98008b4878d33c1c3bd8272860",
    "0x0036b170": "4c9ff2f334f1fb76767bb4fd73f307c9289197c2b812fc2f6b0df53587dd5633",
}
INCLUDES = '#include "bf_ghidra_types.h"\n#include "bf_x86_dword_operations.h"\n'

# This fixture uses initialized scalar inputs only, not the five draft functions.
PRIMITIVE_FIXTURE = INCLUDES + r"""
#include <cassert>
#include <initializer_list>
#include <type_traits>

static bool reference_carry(uint32_t left, uint32_t right) {
    uint32_t ignored;
    return __builtin_add_overflow(left, right, &ignored);
}

static void check_shift(bool carry, uint32_t word) {
    const uint32_t shifted = static_cast<uint32_t>(CONCAT14(carry, word) >> 1);
    const uint32_t expected = (word >> 1) | (carry ? UINT32_C(0x80000000) : 0);
    assert(shifted == expected);
}

int main() {
    static_assert(std::is_same<decltype(CONCAT14(0u, 0u)), uint64_t>::value,
                  "Five-byte concatenation needs uint64_t storage");
    static_assert(std::is_same<decltype(CARRY4(uint32_t(0), uint32_t(0))), bool>::value,
                  "Carry is boolean");
    static_assert(noexcept(CARRY4(uint32_t(0), uint32_t(0))), "Existing helper contract");
    assert(CONCAT14(0x123u, UINT64_C(0xabcdef0123456789)) == UINT64_C(0x2323456789));
    assert(CONCAT14(-1, -1) == UINT64_C(0xffffffffff));
    assert(CONCAT14(true, 0) == UINT64_C(0x100000000));
    assert(CONCAT14(false, -1) == UINT64_C(0xffffffff));
    assert(CONCAT14(int8_t(-1), uint32_t(0x80000000)) == UINT64_C(0xff80000000));
    assert(CONCAT14(UINT64_MAX, UINT64_MAX) == UINT64_C(0xffffffffff));

    // Existing integer concatenation spellings retain their original behavior.
    assert(CONCAT11(0x1234u, 0x5678u) == 0x3478u);
    assert(CONCAT12(0xab, 0x12345) == 0xab2345u);
    assert(CONCAT13(0x1234u, 0x12345678u) == 0x34345678u);
    assert(CONCAT21(0x12345u, 0x678u) == 0x234578u);
    assert(CONCAT22(0x12345u, 0x67890u) == 0x23457890u);
    assert(CONCAT31((int3)-1, 0x100u) == 0xffffff00u);
    assert(CONCAT44(0x12345678u, 0x9abcdef0u) == UINT64_C(0x123456789abcdef0));

    const uint32_t edges[] = {0, 1, 2, 0x7ffffffe, 0x7fffffff,
                             0x80000000, 0x80000001, 0xfffffffe, 0xffffffff};
    for (uint32_t left : edges) for (uint32_t right : edges) {
        assert(CARRY4(left, right) == reference_carry(left, right));
        // Copy bits rather than assuming a signed conversion outside its range.
        int32_t signed_left, signed_right;
        memcpy(&signed_left, &left, sizeof(left));
        memcpy(&signed_right, &right, sizeof(right));
        assert(CARRY4(signed_left, signed_right) == reference_carry(left, right));
    }
    for (uint32_t word : edges) {
        check_shift(false, word);
        check_shift(true, word);
    }
    assert(!CARRY4(uint32_t(0x7fffffff), uint32_t(1)));
    assert(CARRY4(uint32_t(0x80000000), uint32_t(0x80000000)));
    assert(CARRY4(int32_t(-1), int32_t(1)));

    // Each argument has its own object; there is no operand-order dependency.
    int high = 1, low = 2;
    assert(CONCAT14(high++, low++) == UINT64_C(0x100000002));
    assert(high == 2 && low == 3);
    uint32_t left = 0, right = 0;
    assert(!CARRY4(left++, right++));
    assert(left == 1 && right == 1);

    uint64_t state = UINT64_C(0xf00dcafebeef1234);
    for (unsigned i = 0; i < 1000000; ++i) {
        state ^= state << 13; state ^= state >> 7; state ^= state << 17;
        const uint64_t h = state;
        state = state * UINT64_C(6364136223846793005) + 1;
        const uint64_t l = state;
        const uint64_t expected = ((h % 256) * UINT64_C(0x100000000)) +
                                  (l % UINT64_C(0x100000000));
        assert(CONCAT14(h, l) == expected);
        // Existing CARRY4 intentionally requires explicit four-byte operands.
        const uint32_t a = static_cast<uint32_t>(h), b = static_cast<uint32_t>(l);
        assert(CARRY4(a, b) == reference_carry(a, b));
        check_shift(false, a);
        check_shift(true, a);
    }
    for (unsigned h = 0; h < 256; ++h) {
        for (uint32_t l : {0u, 1u, 0x7fffffffu, 0x80000000u, UINT32_MAX}) {
            assert(CONCAT14(h, l) == uint64_t(h) * UINT64_C(0x100000000) + l);
        }
    }
    return 0;
}
"""


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


class IntegerPrimitiveTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
        cls.compiler = shutil.which("clang++")

    def compile(self, path: Path, *flags: str):
        if not self.compiler:
            self.skipTest("clang++ unavailable; no compiler result claimed")
        return subprocess.run(
            [self.compiler, "-std=c++17", "-I", str(ROOT / "include"),
             *flags, str(path)], capture_output=True, text=True, timeout=60)

    def test_exact_manifest_header_and_source_provenance(self):
        manifest = self.manifest
        self.assertEqual(digest(MANIFEST.read_bytes()), MANIFEST_SHA)
        self.assertEqual({case["entry"] for case in manifest["cases"]}, ENTRIES)
        self.assertEqual(len(manifest["cases"]), 5)
        self.assertFalse(manifest["original_xbe_reauthenticated"])
        self.assertFalse(manifest["original_game_functions_executed"])
        self.assertEqual(manifest["original_xbe_sha256"],
                         "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721")
        header = (ROOT / manifest["concat_header"]).read_bytes()
        addition = manifest["concat_added_line"].encode()
        self.assertEqual(header.count(addition), 1)
        self.assertEqual(digest(header), manifest["concat_header_after_sha256"])
        self.assertEqual(digest(header.replace(addition, b"", 1)),
                         manifest["concat_header_before_sha256"])
        self.assertEqual(digest((ROOT / manifest["carry_header"]).read_bytes()),
                         manifest["carry_header_sha256"])
        with (ROOT / "metadata/bulk_13694_inventory.csv").open(encoding="utf-8-sig", newline="") as stream:
            inventory = {row["entry"]: row for row in csv.DictReader(stream)}
        for case in manifest["cases"]:
            with self.subTest(entry=case["entry"]):
                self.assertEqual(case["source"], relative_source_path(ROOT, case["entry"]).as_posix())
                raw = (ROOT / case["source"]).read_bytes()
                added_line = manifest["added_source_line"].encode()
                self.assertEqual(raw.count(added_line), 1)
                self.assertEqual(digest(raw), case["source_after_sha256"])
                self.assertEqual(digest(raw.replace(added_line, b"", 1)), case["source_before_sha256"])
                # Bounded provenance guards reject unrelated source mutations.
                for mutation in (raw + b"\n", raw.replace(b"CONCAT14(", b"CONCAT13(", 1)):
                    self.assertNotEqual(digest(mutation), case["source_after_sha256"])
                self.assertEqual(read_body_digest(raw.decode()), (case["original_body_sha256"], False))
                self.assertEqual(inventory[case["entry"]]["original_body_sha256"],
                                 case["original_body_sha256"])
                self.assertIn("ABI_UNVERIFIED", raw.decode())

    def test_other_two_concat_users_remain_unchanged_and_blocked(self):
        # All seven current CONCAT14 users were reviewed; only five gain a pass.
        for entry, before_sha in UNCHANGED_CONCAT_USERS.items():
            with self.subTest(entry=entry):
                path = ROOT / relative_source_path(ROOT, entry)
                self.assertEqual(digest(path.read_bytes()), before_sha)
                result = self.compile(path, "-fsyntax-only", "-ferror-limit=0")
                self.assertNotEqual(result.returncode, 0)
                self.assertNotIn("use of undeclared identifier 'CONCAT14'", result.stderr)
                blocker = "ABS" if entry == "0x002f032e" else "CONCAT41"
                self.assertIn("use of undeclared identifier '" + blocker + "'", result.stderr)

    def test_five_complete_sources_parse_without_executing(self):
        for case in self.manifest["cases"]:
            for opt in ("-O0", "-O2"):
                with self.subTest(entry=case["entry"], optimization=opt):
                    result = self.compile(ROOT / case["source"], opt, "-fsyntax-only", "-ferror-limit=0")
                    self.assertEqual(result.returncode, 0, result.stderr)

    def test_original_missing_helpers_and_individual_negative_controls(self):
        # Disable only the newly available spelling/include in temporary copies.
        # No original-game source or shared header is rewritten by these controls.
        with tempfile.TemporaryDirectory(prefix="bf_integer_negatives_") as tmp:
            for case in self.manifest["cases"]:
                source = (ROOT / case["source"]).read_text(encoding="utf-8")
                for missing in (("CONCAT14",), ("CARRY4",), ("CONCAT14", "CARRY4")):
                    with self.subTest(entry=case["entry"], missing=missing):
                        text = source
                        if "CARRY4" in missing:
                            text = text.replace(self.manifest["added_source_line"], "", 1)
                        if "CONCAT14" in missing:
                            text = text.replace('#include "bf_ghidra_types.h"\n',
                                                '#include "bf_ghidra_types.h"\n#undef CONCAT14\n', 1)
                        path = Path(tmp) / "missing.cpp"
                        path.write_text(text, encoding="utf-8")
                        result = self.compile(path, "-fsyntax-only", "-ferror-limit=0")
                        self.assertNotEqual(result.returncode, 0)
                        for helper in missing:
                            self.assertIn("use of undeclared identifier '" + helper + "'", result.stderr)

    def test_synthetic_boundaries_random_pairs_and_single_evaluation(self):
        with tempfile.TemporaryDirectory(prefix="bf_integer_oracle_") as tmp:
            path = Path(tmp) / "primitives.cpp"
            path.write_text(PRIMITIVE_FIXTURE, encoding="utf-8")
            for opt in ("-O0", "-O2"):
                with self.subTest(optimization=opt):
                    executable = Path(tmp) / "primitives"
                    result = self.compile(path, opt, "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                                          "-o", str(executable))
                    self.assertEqual(result.returncode, 0, result.stderr)
                    result = subprocess.run([str(executable)], capture_output=True, text=True, timeout=30)
                    self.assertEqual(result.returncode, 0, result.stderr)

    def test_nonintegral_concat_and_unevidenced_carry_widths_are_rejected(self):
        rejects = {
            "CONCAT14": ("1.0f", "1.0", "static_cast<int *>(nullptr)"),
            "CARRY4": ("1.0f", "static_cast<int *>(nullptr)",
                       "uint64_t(1)", "uint8_t(1)", "true"),
        }
        with tempfile.TemporaryDirectory(prefix="bf_integer_types_") as tmp:
            for helper, expressions in rejects.items():
                for expression in expressions:
                    for side in (0, 1):
                        with self.subTest(helper=helper, expression=expression, side=side):
                            operands = ["uint32_t(1)", "uint32_t(1)"]
                            operands[side] = expression
                            text = INCLUDES + "auto rejected() { return " + helper + "(" + ",".join(operands) + "); }\n"
                            path = Path(tmp) / "rejected.cpp"
                            path.write_text(text, encoding="utf-8")
                            result = self.compile(path, "-fsyntax-only")
                            self.assertNotEqual(result.returncode, 0)
                            message = ("CONCAT requires integral bytes" if helper == "CONCAT14"
                                       else "Requires evidenced DWORD operands")
                            self.assertIn(message, result.stderr)

    def test_existing_carry_header_composes_in_either_include_order(self):
        with tempfile.TemporaryDirectory(prefix="bf_integer_includes_") as tmp:
            headers = INCLUDES.splitlines(keepends=True)
            for lines in (headers, list(reversed(headers))):
                with self.subTest(headers=lines):
                    path = Path(tmp) / "include_order.cpp"
                    path.write_text("".join(lines) + r"""
uint64_t combine(uint32_t a, uint32_t b) { return CONCAT14(CARRY4(a, b), a); }
bool signed_borrow(int32_t a, int32_t b) { return SBORROW4(a, b); }
""", encoding="utf-8")
                    result = self.compile(path, "-fsyntax-only", "-pedantic-errors", "-Wall", "-Wextra", "-Werror")
                    self.assertEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
