#!/usr/bin/env python3
"""Negative controls for read-only C++17 declaration/edge triage."""
from __future__ import annotations

import hashlib
import json
import tempfile
import unittest
from pathlib import Path

from triage_cpp_declaration_edges import argument_count, triage


class DeclarationTriageTests(unittest.TestCase):
    def test_balanced_argument_counts(self):
        self.assertEqual(argument_count("()", 0), 0)
        self.assertEqual(argument_count("(a, f(b,c), (d,e))", 0), 3)
        self.assertEqual(argument_count("(a, 'x,y', \"z,z\")", 0), 3)
        self.assertIsNone(argument_count("(a, f(b)", 0))

    def test_audit_scope_must_be_complete(self):
        with tempfile.TemporaryDirectory() as temp:
            with self.assertRaisesRegex(ValueError, "full_inventory"):
                triage(Path(temp), {"scope": "sample", "checked": 3})

    def test_source_hash_arity_and_negative_controls(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            caller = root / "src/main_unclassified/band_0001/0x00012340.cpp"
            callee = root / "src/main_unclassified/band_0001/0x00012400.cpp"
            caller.parent.mkdir(parents=True)
            (root / "metadata").mkdir()
            (root / "metadata/asm_supported_readable_names.csv").write_text("entry,readable_alias\n")
            source = ("/* Entry: 0x00012340\n * Input x86 body SHA-256: " + "A" * 64 + "\n */\n"
                      "void FUN_00012340() { FUN_00012400(1, helper(2, 3)); }\n")
            caller.write_text(source)
            callee.write_text("int FUN_00012400(int x, int y) { return x+y; }\n")
            row = {"entry": "0x00012340", "source": str(caller.relative_to(root)),
                   "status": "fail", "errors": ["use of undeclared identifier 'FUN_00012400'"],
                   "source_sha256": hashlib.sha256(source.encode()).hexdigest(),
                   "original_body_sha256": "A" * 64}
            audit = {"scope": "full_inventory", "checked": 13694,
                     "checked_commit_sha": "b" * 40, "results": [row] + [
                         {"entry": f"0x{0x00500000 + i * 16:08x}", "status": "pass"}
                         for i in range(13693)]}
            found = triage(root, audit)["candidates"][0]
            self.assertEqual(found["triage"], "DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE")
            self.assertEqual(found["caller_draft_arity"], 2)
            self.assertEqual(found["abi_status"], "ABI_UNVERIFIED")
            self.assertEqual(found["link_status"], "NOT_LINK_TESTED")
            callee.write_text("int FUN_00012400(int x) { return x; }\n")
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "DRAFT_ARITY_MISMATCH")
            caller.write_text(source + "// concurrent change\n")
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "STALE_SOURCE")
            caller.write_text(source.replace("A" * 64, "B" * 64))
            row["source_sha256"] = hashlib.sha256(caller.read_bytes()).hexdigest()
            self.assertEqual(triage(root, audit)["candidates"][0]["triage"], "PROVENANCE_MISMATCH")


if __name__ == "__main__":
    unittest.main()
