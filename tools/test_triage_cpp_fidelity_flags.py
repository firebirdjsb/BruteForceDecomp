#!/usr/bin/env python3
"""Fail-closed synthetic checks for the review-only C++ draft triage."""
from __future__ import annotations

import json
import tempfile
import unittest
from pathlib import Path

from triage_cpp_fidelity_flags import triage

REASON = "canonical_function_symbol_not_found_review_renaming"
SHORT = "empty_or_return_only_body_requires_original_x86_review"


class FidelityTriageTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = Path(self.temp.name)
        self.path = self.root / "src/main_unclassified/band_0001/0x00012000.cpp"
        self.path.parent.mkdir(parents=True)
        self.path.write_text(
            "/* Entry: 0x00012000, label: MY_OriginalName; ABI_UNVERIFIED */\n"
            "void MY_OriginalName(void) { return; }\n",
            encoding="utf-8",
        )
        self.report = {
            "schema_version": 1,
            "audited_commit": "synthetic",
            "structural_problem_count": 0,
            "fidelity_review_flag_count": 2,
            "functions": [{
                "entry": "0x00012000",
                "source": self.path.relative_to(self.root).as_posix(),
                "review_flags": [REASON, SHORT],
            }],
            "fidelity_review_queue": [
                {"entry": "0x00012000", "reason": REASON},
                {"entry": "0x00012000", "reason": SHORT},
            ],
        }

    def tearDown(self):
        self.temp.cleanup()

    def test_flags_are_unresolved_not_promoted(self):
        result = triage(self.report, self.root)
        self.assertEqual(result["flag_count"], 2)
        self.assertEqual(result["functions_flagged"], 1)
        self.assertEqual(result["counts_by_reason"], {REASON: 1, SHORT: 1})
        self.assertEqual(result["counts_by_priority"]["HIGH"], 1)
        self.assertFalse(result["original_xbe_authenticated_in_this_run"])
        self.assertEqual(result["semantic_fidelity"], "NOT_VERIFIED")
        self.assertEqual(result["resolved_without_xbe"], 0)
        self.assertEqual(result["flags"][0]["ghidra_label"], "MY_OriginalName")
        self.assertEqual(result["flags"][0]["first_lexical_definition"], "MY_OriginalName")
        self.assertTrue(all(row["behavioral_fidelity"] == "ABI_UNVERIFIED"
                            for row in result["flags"]))

    def test_reject_mismatched_flag_count(self):
        self.report["fidelity_review_flag_count"] = 1
        with self.assertRaisesRegex(ValueError, "review count"):
            triage(self.report, self.root)

    def test_reject_missing_queue_entry(self):
        self.report["fidelity_review_queue"].pop()
        self.report["fidelity_review_flag_count"] = 1
        with self.assertRaisesRegex(ValueError, "disagree"):
            triage(self.report, self.root)

    def test_reject_unrecognized_reason(self):
        self.report["fidelity_review_queue"][0]["reason"] = "verified"
        with self.assertRaisesRegex(ValueError, "unrecognized"):
            triage(self.report, self.root)

    def test_reject_structure_errors(self):
        self.report["structural_problem_count"] = 1
        with self.assertRaisesRegex(ValueError, "structurally clean"):
            triage(self.report, self.root)

    def test_reject_path_escape(self):
        self.report["functions"][0]["source"] = "../../private.xbe"
        with self.assertRaisesRegex(ValueError, "unsafe source path"):
            triage(self.report, self.root)


if __name__ == "__main__":
    unittest.main()
