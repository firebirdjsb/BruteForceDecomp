#!/usr/bin/env python3
"""C++ audit grouping tests. Synthetic diagnostics are not original-Xbox evidence."""
import unittest
from classify_cpp_failures import classify, triage


class CppTriageTests(unittest.TestCase):
    def test_diagnostic_families(self):
        cases = {
            "cast from pointer to smaller type 'uint' loses information": "guest_pointer_width",
            "too few arguments to function call": "call_signature",
            "called object type 'uint' is not a function": "call_signature",
            "no member named 'field' in 'struct X'": "member_or_object_layout",
            "indirection requires pointer operand ('int' invalid)": "pointer_or_storage_type",
            "use of undeclared identifier 'FUN_12345678'": "missing_declaration_or_type",
            "cannot initialize a variable of type 'int' with an rvalue of type 'void *'": "scalar_or_expression_type",
            "new unexpected compiler diagnostic": "other_cpp_diagnostic",
        }
        for msg, category in cases.items():
            with self.subTest(msg=msg):
                self.assertEqual(classify(msg), category)

    def test_queue_and_counts(self):
        report = {
            "scope": "sample", "checked_commit_sha": "abc", "checked": 3,
            "counts": {"pass": 1, "fail": 1, "provenance_error": 1},
            "results": [
                {"entry": "0x00000001", "status": "pass"},
                {"entry": "0x00000002", "status": "fail", "source": "src/0x00000002.cpp",
                 "errors": ["too many arguments to function call"]},
                {"entry": "0x00000003", "status": "provenance_error",
                 "diagnostic": "original digest mismatch"},
            ],
        }
        summary, queue = triage(report)
        self.assertEqual(summary["categories"], {"call_signature": 1, "provenance_error": 1})
        self.assertEqual(len(queue), 2)
        report["results"][2]["entry"] = "0x00000002"
        with self.assertRaisesRegex(ValueError, "duplicate"):
            triage(report)

    def test_reject_incomplete_or_false_counts(self):
        with self.assertRaisesRegex(ValueError, "incomplete"):
            triage({"checked": 3, "results": []})
        with self.assertRaisesRegex(ValueError, "counts"):
            triage({"checked": 1, "results": [{"entry": "0x00000001", "status": "pass"}],
                    "counts": {"pass": 0}})


if __name__ == "__main__":
    unittest.main()
