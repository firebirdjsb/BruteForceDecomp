#!/usr/bin/env python3
"""Historical source/header pin regressions; not Xbox ABI or game execution QA."""
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location(
    "five_source_only", ROOT / "scripts/verify_cpp_20261102_five_source_only.py")
VERIFY = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(VERIFY)


class FiveSourceOnlyHistoryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.header = (ROOT / "include/bf_ghidra_types.h").read_bytes()
        cls.historical = cls.header.replace(VERIFY.HEADER_ADDITION, b"", 1)

    def test_exact_header_evolution_agrees_with_existing_primitive_manifest(self):
        VERIFY.assert_header_history(self.header)
        self.assertEqual(VERIFY.HEADER_BLOB, "dd77bc872c0f6240d6035f775b1d64df7cc33094")
        self.assertEqual(VERIFY.EVOLVED_HEADER_BLOB, "b282a40b581257dce6d7e459c873a4e4be12e36f")
        self.assertEqual(VERIFY.blob_sha(self.historical), VERIFY.HEADER_BLOB)
        manifest = json.loads((ROOT / "metadata/cpp_20261104_integer_primitives.json").read_text())
        self.assertEqual(VERIFY.HEADER_ADDITION, manifest["concat_added_line"].encode())
        self.assertEqual(VERIFY.hashlib.sha256(self.header).hexdigest(), manifest["concat_header_after_sha256"])
        self.assertEqual(VERIFY.hashlib.sha256(self.historical).hexdigest(), manifest["concat_header_before_sha256"])

    def test_rejects_header_rollback_duplicate_move_and_semantic_changes(self):
        addition = VERIFY.HEADER_ADDITION
        mutations = {
            "rollback": self.historical,
            "duplicate": self.header.replace(addition, addition + addition, 1),
            "moved addition": self.historical + addition,
            "wrong result width": self.header.replace(addition, addition.replace(b"uint64_t", b"uint32_t"), 1),
            "wrong low width": self.header.replace(addition, addition.replace(b",1,4)", b",1,3)"), 1),
            "unrelated append": self.header + b"\n",
            "CRLF conversion": self.header.replace(b"\n", b"\r\n"),
            "empty header": b"",
        }
        for name, value in mutations.items():
            with self.subTest(mutation=name), self.assertRaises(AssertionError):
                VERIFY.assert_header_history(value)

    def test_rejects_every_single_byte_header_mutation(self):
        for offset in range(len(self.header)):
            value = self.header[:offset] + bytes([self.header[offset] ^ 1]) + self.header[offset + 1:]
            with self.subTest(offset=offset), self.assertRaises(AssertionError):
                VERIFY.assert_header_history(value)

    def test_preimage_pin_rejects_drift_even_if_postimage_pin_is_replaced(self):
        mutated = self.header + b"\n"
        with patch.object(VERIFY, "EVOLVED_HEADER_BLOB", VERIFY.blob_sha(mutated)):
            with self.assertRaisesRegex(AssertionError, "historical source drift"):
                VERIFY.assert_header_history(mutated)

    def test_postimage_pin_rejects_move_that_would_restore_original(self):
        moved = self.historical + VERIFY.HEADER_ADDITION
        self.assertEqual(VERIFY.blob_sha(moved.replace(VERIFY.HEADER_ADDITION, b"", 1)), VERIFY.HEADER_BLOB)
        with self.assertRaisesRegex(AssertionError, "evolved source drift"):
            VERIFY.assert_header_history(moved)

    def test_exact_sources_pass_and_all_caller_callee_mutations_fail(self):
        VERIFY.assert_source_only(ROOT)
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "include").mkdir()
            header_path = root / "include/bf_ghidra_types.h"
            header_path.write_bytes(self.header)
            for ident in set(VERIFY.CALLERS) | set(VERIFY.CALLEES):
                path = VERIFY.source_path(root, ident)
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(VERIFY.source_path(ROOT, ident).read_bytes())
            VERIFY.assert_source_only(root)
            for ident, (_, _, declarations) in VERIFY.CALLERS.items():
                path = VERIFY.source_path(root, ident)
                original = path.read_bytes()
                block = (VERIFY.BLOCK_NOTE + "\n".join(declarations) + "\n").encode()
                mutations = {
                    "missing block": original.replace(block, b"", 1),
                    "duplicate block": original.replace(block, block + block, 1),
                    "moved block": original.replace(block, b"", 1) + block,
                    "caller drift": original + b"\n",
                }
                for name, value in mutations.items():
                    with self.subTest(caller=ident, mutation=name):
                        path.write_bytes(value)
                        with self.assertRaises(AssertionError):
                            VERIFY.assert_source_only(root)
                path.write_bytes(original)
            for ident in VERIFY.CALLEES:
                path = VERIFY.source_path(root, ident)
                original = path.read_bytes()
                with self.subTest(callee=ident):
                    path.write_bytes(original + b"\n")
                    with self.assertRaisesRegex(AssertionError, "callee source drift"):
                        VERIFY.assert_source_only(root)
                path.write_bytes(original)
            header_path.write_bytes(self.historical)
            with self.assertRaisesRegex(AssertionError, "evolved source drift"):
                VERIFY.assert_source_only(root)


if __name__ == "__main__":
    unittest.main(verbosity=2)
