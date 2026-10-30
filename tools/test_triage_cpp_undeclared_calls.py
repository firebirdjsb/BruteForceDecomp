#!/usr/bin/env python3
"""Diagnostic-only unresolved identifier ranking tests."""
import unittest
from triage_cpp_undeclared_calls import queue


class TriageUndeclaredTests(unittest.TestCase):
    def test_preserves_unknown_abi_and_deduplicated_callers(self):
        report = {"checked": 3, "scope": "sample", "checked_commit_sha": "abc",
                  "results": [
                      {"entry": "0x00000001", "source": "a.cpp", "status": "fail",
                       "errors": ["use of undeclared identifier 'FUN_00000005'"]},
                      {"entry": "0x00000002", "source": "b.cpp", "status": "fail",
                       "errors": ["use of undeclared identifier 'FUN_00000005'"]},
                      {"entry": "0x00000003", "source": "c.cpp", "status": "pass"}]}
        result = queue(report)
        top = result["unresolved_identifiers"][0]
        self.assertEqual(top["first_error_functions"], 2)
        self.assertEqual(top["group"], "original_address_or_thunk")
        self.assertEqual(top["signature_status"], "UNVERIFIED_REQUIRES_ORIGINAL_XBE")
        self.assertEqual(len(top["sample_callers"]), 2)
        report["results"][1]["entry"] = "0x00000001"
        with self.assertRaisesRegex(ValueError, "duplicate"):
            queue(report)

    def test_no_draft_prototypes(self):
        report = {"checked": 1, "results": [
            {"entry": "0x00000001", "status": "fail",
             "errors": ["use of undeclared identifier 'DirectSoundEnterCriticalSection'"]}]}
        item = queue(report)["unresolved_identifiers"][0]
        self.assertEqual(item["group"], "other_unresolved_identifier")
        self.assertNotIn("prototype", item)


if __name__ == "__main__":
    unittest.main()
