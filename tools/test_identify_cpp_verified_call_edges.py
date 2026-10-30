#!/usr/bin/env python3
"""Recorded x86 call-edge triage tests; does not infer C++ prototypes."""
import unittest
from identify_cpp_verified_call_edges import identify


class CallEdgeTriageTests(unittest.TestCase):
    def test_matches_one_edge_but_retains_unknown_status(self):
        ledger = [{
            "caller_entry": "0x000874a0", "callee_entry": "0x00087630",
            "call_va": "0x000874ea", "observed_stack_words": "first=EBX",
            "observed_register_inputs": "EAX=EBP",
            "callee_read_evidence": "reads [ESP+8]",
            "caller_cleanup_evidence": "caller ADD ESP",
            "abi_verification_status": "partial_original_x86_only",
        }]
        report = {
            "checked": 1, "scope": "sample", "checked_commit_sha": "abc",
            "results": [{
                "entry": "0x000874a0", "status": "fail",
                "source": "src/main_unclassified/band_0008/0x000874a0.cpp",
                "errors": ["use of undeclared identifier 'FUN_00087630'"],
            }],
        }
        result = identify(report, ledger)
        self.assertEqual(result["matched_edges"], 1)
        edge = result["matches"][0]
        self.assertEqual(edge["recorded_stack_words"], "first=EBX")
        self.assertEqual(edge["ledger_abi_status"], "partial_original_x86_only")
        self.assertEqual(edge["signature_status"], "UNVERIFIED_RECHECK_ORIGINAL_XBE")
        self.assertTrue(result["not_proof_of_cpp_abi"])

    def test_no_match_for_unrecorded_abi(self):
        report = {"checked": 1, "results": [{
            "entry": "0x000874a0", "status": "fail",
            "errors": ["use of undeclared identifier 'FUN_002ea01d'"],
        }]}
        self.assertEqual(identify(report, [])["matched_edges"], 0)
        report["results"][0]["entry"] = "invalid"
        with self.assertRaisesRegex(ValueError, "invalid"):
            identify(report, [])


if __name__ == "__main__":
    unittest.main()
