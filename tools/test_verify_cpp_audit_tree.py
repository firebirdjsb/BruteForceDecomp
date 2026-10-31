#!/usr/bin/env python3
"""Negative controls for exact-tree C++17 audit provenance (no Xbox XBE)."""
from __future__ import annotations

import copy
import csv
import hashlib
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from verify_cpp_audit_tree import verify

SHA = "a" * 40


class ExactCppTreeTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        (self.root / "metadata").mkdir()
        (self.root / "src/mock").mkdir(parents=True)
        self.paths = []
        self.rows = []
        inventory = []
        for i in range(3):
            entry = f"0x{i + 0x12000:08x}"
            body_sha = f"{i + 1:064x}".upper()
            path = self.root / "src/mock" / (entry + ".cpp")
            data = f"/* Input x86 body SHA-256: {body_sha} */\nint f{i}() {{ return {i}; }}\n".encode()
            path.write_bytes(data)
            self.paths.append(path)
            inventory.append({"entry": entry, "original_body_sha256": body_sha})
            self.rows.append({"entry": entry, "source": path.relative_to(self.root).as_posix(),
                              "source_sha256": hashlib.sha256(data).hexdigest(),
                              "original_body_sha256": body_sha, "body_provenance": "match",
                              "status": "pass" if i != 2 else "fail"})
        with (self.root / "metadata/bulk_13694_inventory.csv").open("w", newline="") as stream:
            writer = csv.DictWriter(stream, fieldnames=("entry", "original_body_sha256"))
            writer.writeheader()
            writer.writerows(inventory)
        self.report = {"checked_commit_sha": SHA, "scope": "full_inventory", "passing_is_not_1_to_1": True,
                       "checked": 3, "original_function_count": 3, "counts": {"pass": 2, "fail": 1},
                       "results": self.rows}

    def check(self, report=None):
        return verify(report or self.report, self.root, SHA, expected_count=3, sources=self.paths)

    def test_valid_exact_tree(self):
        self.assertEqual(self.check()["fail"], 1)

    def test_reject_source_changed_after_audit(self):
        self.paths[0].write_bytes(self.paths[0].read_bytes() + b"// changed\n")
        with self.assertRaisesRegex(ValueError, "source changed"):
            self.check()

    def test_reject_source_path_substitution(self):
        bad = copy.deepcopy(self.report)
        bad["results"][0]["source"] = "src/elsewhere/0x00012000.cpp"
        with self.assertRaisesRegex(ValueError, "path drift"):
            self.check(bad)

    def test_reject_duplicate_result_and_false_counts(self):
        bad = copy.deepcopy(self.report)
        bad["results"][2] = copy.deepcopy(bad["results"][0])
        with self.assertRaisesRegex(ValueError, "duplicate"):
            self.check(bad)
        bad = copy.deepcopy(self.report)
        bad["counts"] = {"pass": 3, "fail": 0}
        with self.assertRaisesRegex(ValueError, "summary"):
            self.check(bad)

    def test_reject_original_body_digest_and_conflicting_label(self):
        bad = copy.deepcopy(self.report)
        bad["results"][1]["original_body_sha256"] = "f" * 64
        with self.assertRaisesRegex(ValueError, "inventory drift"):
            self.check(bad)
        path = self.paths[1]
        data = path.read_bytes() + b"/* Input x86 body SHA-256: " + b"f" * 64 + b" */\n"
        path.write_bytes(data)
        bad = copy.deepcopy(self.report)
        bad["results"][1]["source_sha256"] = hashlib.sha256(data).hexdigest()
        with self.assertRaisesRegex(ValueError, "label drift"):
            self.check(bad)

    def test_reject_sample_and_stale_commit_and_unknown_status(self):
        for field, value, expected in (("scope", "sample", "full C\\+\\+17"),
                                       ("checked_commit_sha", "b" * 40, "commit")):
            bad = copy.deepcopy(self.report)
            bad[field] = value
            with self.assertRaisesRegex(ValueError, expected):
                self.check(bad)
        bad = copy.deepcopy(self.report)
        bad["results"][0]["status"] = "check_error"
        with self.assertRaisesRegex(ValueError, "compiler status"):
            self.check(bad)


if __name__ == "__main__":
    unittest.main()
