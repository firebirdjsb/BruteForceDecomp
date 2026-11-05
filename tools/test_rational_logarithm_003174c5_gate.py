#!/usr/bin/env python3
"""Targeted public gate controls. No expensive work occurs at module import."""
import sys
sys.dont_write_bytecode = True  # Before loading the repository verifier.

import importlib.util
import json
from pathlib import Path
import subprocess
import tempfile
import unittest
from unittest import mock

SPEC = importlib.util.spec_from_file_location(
    "bf_rational_logarithm_gate", Path(__file__).with_name("verify_rational_logarithm_003174c5.py"))
GATE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(GATE)
ROOT = Path(__file__).resolve().parents[1]


class GateTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw, cls.artifacts = GATE.snapshot(ROOT)
        cls.manifest = GATE.validate_snapshot(cls.raw, cls.artifacts)

    def test_exact_raw_identity(self):
        expected = {
            "rational_model.py": "85f3084f3bf7163e0e26cf297cddd1f5a80a24e3f7e7b59339ce6dc02d32e5ca",
            "test_rational_model.py": "0913e21fe3e7842882d1e9a68586cda7380276ae43a16abcf85da728f5efb813",
            "generate_vectors.py": "71b436eb7accb24207cee25f29eec5231aed2bcbaafd2612c6050f0835133000",
            "DERIVATION.md": "675ace46b67888bc0204b1f85437433c283f2f495239e88f6093a9c16d307a16",
        }
        for name, digest in expected.items():
            self.assertEqual(GATE.digest(self.artifacts[GATE.SUPPORT + "/" + name]), digest)

    def test_all_source_corruption_controls(self):
        self.assertEqual(GATE.source_corruption_controls(self.raw, self.artifacts), 19)

    def test_manifest_is_pinned_before_json_parse(self):
        with mock.patch.object(GATE.json, "loads", side_effect=AssertionError("must not parse")):
            with self.assertRaisesRegex(GATE.GateFailure, "manifest identity"):
                GATE.parse_manifest(b"not a manifest")

    def test_mutation_rejected_before_copy_or_spawn(self):
        changed = dict(self.artifacts)
        changed[GATE.SUPPORT + "/rational_model.py"] += b"\nraise RuntimeError('changed')\n"
        with tempfile.TemporaryDirectory() as tmp:
            destination = Path(tmp) / "uncreated"
            with mock.patch.object(GATE, "child", side_effect=AssertionError("must not execute")):
                with self.assertRaisesRegex(GATE.GateFailure, "artifact identity"):
                    GATE.execute(ROOT, destination, self.raw, changed)
            self.assertFalse(destination.exists())

    def test_unsafe_paths(self):
        for name in ("", "/absolute", "../escape", "a/../b", "./a", "a//b", "a/./b", "a\\b", "a/"):
            with self.assertRaises(GATE.GateFailure, msg=name):
                GATE.safe_relative(name)
        self.assertEqual(str(GATE.safe_relative("tests/support/file.py")), "tests/support/file.py")

    def test_missing_and_linked_inputs_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp).resolve()
            (root / "actual").write_bytes(b"example")
            (root / "linked").symlink_to(root / "actual")
            self.assertEqual(GATE.read_regular(root, "actual"), b"example")
            for name in ("missing", "linked"):
                with self.assertRaises(GATE.GateFailure):
                    GATE.read_regular(root, name)

    def test_output_must_be_new_and_external(self):
        for path in (ROOT, ROOT / "generated", ROOT / "tests" / "generated"):
            with self.assertRaisesRegex(GATE.GateFailure, "outside"):
                GATE.external_destination(ROOT, path)
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp).resolve()
            with self.assertRaisesRegex(GATE.GateFailure, "already exist"):
                GATE.external_destination(ROOT, path)
            self.assertEqual(GATE.external_destination(ROOT, path / "new"), path / "new")

    def test_optimized_python_fails_before_work(self):
        result = subprocess.run([sys.executable, "-I", "-O", "-B", GATE.__file__, "--root", str(ROOT)],
                                capture_output=True, text=True, timeout=30)
        self.assertEqual(result.returncode, 1)
        self.assertIn("optimized Python is unsupported", result.stderr)

    def test_runner_import_is_inert(self):
        with tempfile.TemporaryDirectory() as tmp:
            script = ("import sys; sys.dont_write_bytecode=True; import importlib.util; "
                      "s=importlib.util.spec_from_file_location('probe',sys.argv[1]); "
                      "m=importlib.util.module_from_spec(s); s.loader.exec_module(m)")
            result = subprocess.run([sys.executable, "-I", "-B", "-c", script, GATE.__file__],
                                    cwd=tmp, capture_output=True, text=True, timeout=30)
            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(result.stdout, "")
            self.assertEqual(result.stderr, "")
            self.assertEqual(list(Path(tmp).iterdir()), [])

    def test_output_corruption_controls(self):
        # Synthetic fixture validates the logic independently of costly vector generation.
        outputs = {"edge-threshold-vectors.json": b"[]\n",
                   "random-certificate.json": b"{}\n", "vector-summary.json": b"{}\n"}
        manifest = {"output_sha256": {name: GATE.digest(data) for name, data in outputs.items()},
                    "expected_summary": {}}
        self.assertEqual(GATE.validate_outputs(manifest, outputs), {})
        self.assertEqual(GATE.output_corruption_controls(manifest, outputs), 7)

    def test_source_and_output_sets_are_exact(self):
        changed = dict(self.artifacts)
        changed["extra.py"] = b""
        with self.assertRaisesRegex(GATE.GateFailure, "artifact set"):
            GATE.validate_snapshot(self.raw, changed)
        self.assertEqual(set(self.manifest["output_sha256"]), GATE.EXPECTED_OUTPUTS)
        self.assertEqual(self.manifest["expected_summary"]["random_cases"], 2048)

    def test_explicit_output_rejects_repository_before_spawn(self):
        with mock.patch.object(GATE, "child", side_effect=AssertionError("must not execute")):
            with self.assertRaisesRegex(GATE.GateFailure, "outside"):
                GATE.main(["--root", str(ROOT), "--out", str(ROOT / "should-not-exist")])
        self.assertFalse((ROOT / "should-not-exist").exists())


if __name__ == "__main__":
    if not __debug__:
        raise SystemExit("optimized Python is unsupported")
    unittest.main(verbosity=2)
