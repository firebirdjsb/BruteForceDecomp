#!/usr/bin/env python3
"""Exercise the audit CLI with the relative roots used by GitHub Actions."""
import csv
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest


SCRIPT = Path(__file__).resolve().with_name("audit_entrypoint_symbols.py")


class AuditRootTests(unittest.TestCase):
    def test_relative_and_absolute_roots_produce_same_portable_rows(self):
        with tempfile.TemporaryDirectory() as directory:
            parent = Path(directory).resolve()
            root = parent / "fixture"
            sources = root / "src/main_unclassified/band_0001"
            sources.mkdir(parents=True)
            metadata = root / "metadata"
            metadata.mkdir()
            (metadata / "asm_supported_readable_names.csv").write_text(
                "entry,readable_alias\n", encoding="utf-8")
            (sources / "0x00012000.cpp").write_text(
                "void FUN_00012000(void) {}\n", encoding="utf-8")
            (sources / "0x00012050.cpp").write_text(
                "void uncertain_name(void) {}\n", encoding="utf-8")
            expected = [
                {"entry": "0x00012000",
                 "source_file": "src/main_unclassified/band_0001/0x00012000.cpp",
                 "lexical_symbol_status": "direct_name_candidate",
                 "definition_candidate": "FUN_00012000"},
                {"entry": "0x00012050",
                 "source_file": "src/main_unclassified/band_0001/0x00012050.cpp",
                 "lexical_symbol_status": "requires_identity_review",
                 "definition_candidate": "uncertain_name"},
            ]
            for cwd, argument in ((root, "."), (parent, "fixture"),
                                  (parent, str(root))):
                with self.subTest(root=argument):
                    output = parent / "audit.csv"
                    result = subprocess.run(
                        [sys.executable, str(SCRIPT), "--root", argument,
                         "--out", str(output)], cwd=cwd,
                        capture_output=True, text=True, timeout=30)
                    self.assertEqual(result.returncode, 0, result.stderr)
                    with output.open(encoding="utf-8", newline="") as stream:
                        self.assertEqual(list(csv.DictReader(stream)), expected)


if __name__ == "__main__":
    unittest.main()
