#!/usr/bin/env python3
"""Tests for the shared source-body provenance-label parser."""
import unittest

from body_hash_labels import read_body_digest


class BodyHashLabelTests(unittest.TestCase):
    DIGEST = "A1" * 32
    OTHER = "B2" * 32

    def test_all_original_export_label_variants(self):
        for label in (
            "Input x86 body SHA-256",
            "Original body SHA-256",
            "Ghidra function-body SHA-256",
        ):
            with self.subTest(label=label):
                self.assertEqual(
                    read_body_digest(f"// {label}: {self.DIGEST.lower()}\n"),
                    (self.DIGEST, False),
                )

    def test_identical_duplicate_labels(self):
        body = (
            f"/* Original body SHA-256: {self.DIGEST} */\n"
            f"// Ghidra function-body SHA-256: {self.DIGEST.lower()}\n"
        )
        self.assertEqual(read_body_digest(body), (self.DIGEST, False))

    def test_conflicting_labels_fail_closed(self):
        body = (
            f"/* Input x86 body SHA-256: {self.DIGEST} */\n"
            f"// Ghidra function-body SHA-256: {self.OTHER}\n"
        )
        self.assertEqual(read_body_digest(body), (None, True))

    def test_non_sha_or_truncated_label_not_accepted(self):
        self.assertEqual(read_body_digest("/* DRAFT: ABI_UNVERIFIED */"), (None, False))
        self.assertEqual(
            read_body_digest(f"/* Ghidra function-body SHA-256: {self.DIGEST[:-1]} */"),
            (None, False),
        )
        self.assertEqual(
            read_body_digest(f"/* Original body SHA-256: {self.DIGEST}F */"),
            (None, False),
        )


if __name__ == "__main__":
    unittest.main()
