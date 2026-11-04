#!/usr/bin/env python3
"""Fail-closed synthetic source coverage tests; original XBE not required."""
from __future__ import annotations
import csv
import hashlib
import re
import sys
import tempfile
import types
import unittest
from pathlib import Path
from unittest.mock import patch

from audit_cpp_draft_coverage import audit, source_shape

RET_HASH = hashlib.sha256(b"\xc3").hexdigest().upper()
NONRET_HASH = hashlib.sha256(b"\x90\xc3").hexdigest().upper()


def write_case(root: Path, addr: str, digest: str, body: str) -> Path:
    path = root / "src/main_unclassified" / f"band_{addr[2:6]}" / f"{addr}.cpp"
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(
        f"/* Entry: {addr}; Input x86 body SHA-256: {digest}; ABI_UNVERIFIED */\n"
        f"void FUN_{addr[2:]}(void) {{ {body} }}\n", encoding="utf-8")
    return path


class SourceShapeTests(unittest.TestCase):
    def test_original_single_byte_ret_is_plausible_not_verified(self):
        s = "/* Entry: 0x00012000 */ void FUN_00012000(void) { return; }"
        self.assertEqual(source_shape(s, "0x00012000", RET_HASH), ([], []))

    def test_nonret_short_body_gets_review(self):
        s = "/* Entry: 0x00012000 */ void FUN_00012000(void) { return; }"
        self.assertIn("empty_or_return_only_body_requires_original_x86_review",
                      source_shape(s, "0x00012000", NONRET_HASH)[1])

    def test_real_body_is_not_short_body(self):
        s = "/* Entry: 0x00012000 */ int FUN_00012000(int x) { if (x) return 1; return 0; }"
        self.assertEqual(source_shape(s, "0x00012000", NONRET_HASH), ([], []))

    def test_missing_function_definition_is_error(self):
        s = "/* Entry: 0x00012000 */ void FUN_00012000(void);"
        self.assertIn("no_lexical_function_definition", source_shape(s, "0x00012000", NONRET_HASH)[0])

    def test_explicit_missing_ghidra_export_is_reviewed(self):
        s = "/* Entry: 0x00012000; NO_GHIDRA_DRAFT */ void FUN_00012000(void) { return; }"
        self.assertIn("explicit_missing_ghidra_export_marker", source_shape(s, "0x00012000", NONRET_HASH)[1])


class SyntheticInventoryTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.root = Path(self.tmp.name)
        (self.root / "metadata").mkdir()
        self.a = write_case(self.root, "0x00012000", RET_HASH, "return;")
        self.b = write_case(self.root, "0x00012010", NONRET_HASH, "return;")
        self.inv = self.root / "metadata/bulk_13694_inventory.csv"
        self.write_inventory([("0x00012000", RET_HASH), ("0x00012010", NONRET_HASH)])
        layout = types.ModuleType("source_layout")
        layout.discovered_sources = lambda root: sorted((root / "src").rglob("0x????????.cpp"))
        hashes = types.ModuleType("body_hash_labels")
        def read_body_digest(s):
            m = re.search(r"(?:Input x86 body SHA-256|Original body SHA-256): ([0-9a-fA-F]{64})", s)
            return (m.group(1).upper() if m else None, False)
        hashes.read_body_digest = read_body_digest
        self.modules = patch.dict(sys.modules, {"source_layout": layout, "body_hash_labels": hashes})
        self.modules.start()

    def tearDown(self):
        self.modules.stop()
        self.tmp.cleanup()

    def write_inventory(self, rows):
        with self.inv.open("w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["entry", "original_body_sha256"])
            w.writerows(rows)

    def test_structure_never_promotes_game_parity(self):
        r = audit(self.root, expected=2)
        self.assertEqual(r["status"], "DRAFT_STRUCTURE_PRESENT")
        self.assertEqual(r["structural_problem_count"], 0)
        self.assertEqual(r["fidelity_review_flag_count"], 1)
        self.assertIsNone(r["verified_1_to_1_game_completion_percentage"])
        self.assertEqual(len(r["functions"]), 2)
        self.assertTrue(all(x["original_x86_semantics_1_to_1"] == "NOT_VERIFIED" for x in r["functions"]))

    def test_missing_draft_fails(self):
        self.b.unlink()
        r = audit(self.root, expected=2)
        self.assertEqual(r["status"], "DRAFT_STRUCTURE_INCOMPLETE")
        self.assertIn("missing_canonical_cpp_draft", [x["reason"] for x in r["structural_failures"]])
        self.assertEqual(len(r["functions"]), 2)

    def test_wrong_digest_label_fails(self):
        write_case(self.root, "0x00012010", RET_HASH, "return;")
        r = audit(self.root, expected=2)
        self.assertIn("original_xbe_body_hash_LABEL_mismatch", [x["reason"] for x in r["structural_failures"]])

    def test_placeholder_without_function_fails(self):
        self.b.write_text("/* Entry: 0x00012010; Input x86 body SHA-256: " + NONRET_HASH + " */\n")
        r = audit(self.root, expected=2)
        self.assertIn("no_lexical_function_definition", [x["reason"] for x in r["structural_failures"]])

    def test_duplicate_inventory_entry_fails(self):
        self.write_inventory([("0x00012000", RET_HASH), ("0x00012000", RET_HASH)])
        r = audit(self.root, expected=2)
        self.assertIn("invalid_or_duplicate_inventory_entry", [x["reason"] for x in r["structural_failures"]])


if __name__ == "__main__":
    unittest.main()
