#!/usr/bin/env python3
"""Compiler-independent corruption controls for declaration dry-run inputs."""
from __future__ import annotations

import copy
import hashlib
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
import triage_cpp_draft_call_type_risks as gate


def fixture():
    rows = [{"entry": f"0x{0x10000 + i:08x}", "source": f"src/0x{0x10000 + i:08x}.cpp",
             "source_sha256": "b" * 64, "original_body_sha256": "C" * 64,
             "body_provenance": "match", "status": "pass"}
            for i in range(13694)]
    rows[0].update(status="fail", errors=["use of undeclared identifier 'FUN_00010001'"])
    audit = {"scope": "full_inventory", "checked": 13694,
             "original_function_count": 13694, "passing_is_not_1_to_1": True,
             "checked_commit_sha": "a" * 40, "counts": {"pass": 13693, "fail": 1},
             "results": rows}
    edge = {"caller": rows[0]["entry"], "callee": rows[1]["entry"],
            "triage": gate.ELIGIBLE, "caller_draft_arity": 0,
            **{key: rows[0][key] for key in ("source", "source_sha256", "original_body_sha256")}}
    return audit, {"audited_commit": "a" * 40, "candidates": [edge]}


class AuditGateTests(unittest.TestCase):
    def setUp(self):
        self.audit, self.edges = fixture()

    def rejects_before_compiler(self):
        with patch.object(gate, "run_clang") as compiler:
            with self.assertRaises(ValueError):
                gate.triage(Path("unused"), self.audit, self.edges, "unused", 1, 3, True)
            compiler.assert_not_called()

    def test_valid_report_is_read_only(self):
        before = copy.deepcopy((self.audit, self.edges))
        rows = gate.validate_audit(self.audit, self.edges)
        self.assertEqual(len(rows), 13694)
        self.assertEqual(rows[self.edges["candidates"][0]["caller"]]["status"], "fail")
        self.assertEqual((self.audit, self.edges), before)

    def test_suggestion_is_accepted_for_missing_callee_only(self):
        diagnostic = "use of undeclared identifier 'FUN_00010001'; did you mean 'FUN_00010000'?"
        for message in (diagnostic, diagnostic.upper()):
            with self.subTest(message=message):
                self.audit["results"][0]["errors"] = [message]
                before = copy.deepcopy((self.audit, self.edges))
                self.assertEqual(len(gate.validate_audit(self.audit, self.edges)), 13694)
                self.assertEqual((self.audit, self.edges), before)
        self.edges["candidates"][0]["callee"] = "0x00010000"
        self.rejects_before_compiler()

    def test_suggestion_never_substitutes_for_missing_callee(self):
        self.audit["results"][0]["errors"] = [
            "use of undeclared identifier 'FUN_00010002'; did you mean 'FUN_00010001'?"
        ]
        self.rejects_before_compiler()

    def test_malformed_suggestions_rejected_before_compiler(self):
        bare = "use of undeclared identifier 'FUN_00010001'"
        for suffix in ("; did you mean 'FUN_00010000'", "; did you mean FUN_00010000?",
                       "; did you mean 'FUN_00010000?", "; did you mean 'FUN_0001000'?",
                       "; did you mean 'FUN_000100000'?", "; did you mean 'FUN_0001000g'?",
                       "; did you mean 'other_symbol'?", "; did you mean 'FUN_00010000'? trailing",
                       "; did you mean 'FUN_00010000'?\n", "\n", " trailing",
                       "; did you mean 'FUN_00010000'?; did you mean 'FUN_00010001'?"):
            with self.subTest(suffix=suffix):
                self.audit["results"][0]["errors"] = [bare + suffix]
                self.rejects_before_compiler()

    def test_upstream_quarantined_missing_callee_is_not_screened(self):
        edge = self.edges["candidates"][0]
        edge.update(callee="0x99999999", triage="CALLEE_SOURCE_MISSING")
        self.audit["results"][0]["errors"] = ["use of undeclared identifier 'FUN_99999999'"]
        with patch.object(gate, "run_clang") as compiler:
            result = gate.triage(Path("unused"), self.audit, self.edges, "unused", 1, 3, True)
            self.assertEqual(result["screened"], 0)
            compiler.assert_not_called()
        edge["triage"] = gate.ELIGIBLE
        self.rejects_before_compiler()

    def test_metadata_gate_preserves_source_checks_with_mocked_compiler(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / "src").mkdir()
            for index in (0, 1):
                row = self.audit["results"][index]
                body = "FUN_00010001();" if index == 0 else "return;"
                text = (f"/* Entry: {row['entry']} ABI_UNVERIFIED\n"
                        f"Input x86 body SHA-256: {row['original_body_sha256']} */\n"
                        '#include "bf_ghidra_types.h"\n'
                        f"void FUN_{row['entry'][2:]}(void) {{ {body} }}\n")
                data = text.encode()
                (root / row["source"]).write_bytes(data)
                row["source_sha256"] = hashlib.sha256(data).hexdigest()
            edge = self.edges["candidates"][0]
            edge["source_sha256"] = self.audit["results"][0]["source_sha256"]
            with patch.object(gate, "run_clang", return_value=(True, "")) as compiler:
                result = gate.triage(root, self.audit, self.edges, "unused", 1, 3, True)
                self.assertEqual(result["ready_for_manual_review"], 1)
                self.assertEqual(compiler.call_count, 2)
                self.assertEqual([call.args[-1] for call in compiler.call_args_list], ["-O0", "-O2"])
                self.assertEqual(result["candidates"][0]["xbox_abi"], "ABI_UNVERIFIED")
                self.assertFalse(result["candidates"][0]["original_xbe_reauthenticated"])
            # A valid report never replaces the existing exact-source-byte gate.
            (root / edge["source"]).write_text("changed after audit")
            with patch.object(gate, "run_clang") as compiler:
                result = gate.triage(root, self.audit, self.edges, "unused", 1, 3, True)
                self.assertEqual(result["candidates"][0]["status"], "QUARANTINED_EXACT_TREE_DRIFT")
                compiler.assert_not_called()

    def test_missing_or_invalid_exact_audit_metadata(self):
        for key, value in (("scope", "sample"), ("checked", 13693),
                           ("original_function_count", None), ("passing_is_not_1_to_1", False),
                           ("checked_commit_sha", "local-checkout"), ("checked_commit_sha", None)):
            with self.subTest(key=key, value=value):
                self.audit, self.edges = fixture()
                self.audit[key] = value
                self.rejects_before_compiler()

    def test_mismatched_commit(self):
        self.edges["audited_commit"] = "d" * 40
        self.rejects_before_compiler()

    def test_non_object_reports(self):
        for audit, edges in ((None, self.edges), (self.audit, [])):
            with self.assertRaises(ValueError):
                gate.validate_audit(audit, edges)

    def test_candidate_must_match_first_error(self):
        for errors in ([], ["unrelated compiler error"],
                       ["use of undeclared identifier 'FUN_00010002'"]):
            self.audit["results"][0]["errors"] = errors
            self.rejects_before_compiler()
        self.audit, self.edges = fixture()
        self.audit["results"][0]["status"] = "pass"
        self.audit["counts"] = {"pass": 13694}
        self.rejects_before_compiler()

    def test_missing_duplicate_and_extra_rows(self):
        for change in (lambda rows: rows.pop(), lambda rows: rows.append(rows[0]),
                       lambda rows: rows.__setitem__(1, rows[0])):
            self.audit, self.edges = fixture()
            change(self.audit["results"])
            self.rejects_before_compiler()

    def test_bad_rows_anywhere_in_inventory(self):
        for key, value in (("entry", "unknown"), ("status", "check_error"),
                           ("status", "provenance_error"), ("body_provenance", "mismatch_or_missing"),
                           ("source_sha256", "not-a-digest"), ("original_body_sha256", None),
                           ("source", ""), ("errors", "not-a-list"), ("errors", [None])):
            with self.subTest(key=key, value=value):
                self.audit, self.edges = fixture()
                self.audit["results"][-1][key] = value
                self.rejects_before_compiler()
        self.audit, self.edges = fixture()
        self.audit["results"][-1] = None
        self.rejects_before_compiler()

    def test_contradictory_counts(self):
        for counts in ({"pass": 13694, "fail": 0}, {"pass": 13693, "fail": True},
                       {"pass": 13693, "fail": 1, "check_error": 1},
                       {"pass": 13693.0, "fail": 1}, None):
            with self.subTest(counts=counts):
                self.audit["counts"] = counts
                self.rejects_before_compiler()

    def test_candidate_identity_and_source_binding(self):
        for key, value in (("caller", "0x99999999"), ("callee", None), ("source", "other.cpp"),
                           ("source_sha256", "d" * 64), ("original_body_sha256", "E" * 64),
                           ("caller_draft_arity", -1), ("caller_draft_arity", True),
                           ("caller_draft_arity", "0")):
            with self.subTest(key=key, value=value):
                self.audit, self.edges = fixture()
                self.edges["candidates"][0][key] = value
                self.rejects_before_compiler()
        self.audit, self.edges = fixture()
        self.edges["candidates"].append(self.edges["candidates"][0])
        self.rejects_before_compiler()

    def test_invalid_candidate_containers(self):
        for candidates in (None, {}, [None]):
            self.edges["candidates"] = candidates
            self.rejects_before_compiler()


if __name__ == "__main__":
    unittest.main()
