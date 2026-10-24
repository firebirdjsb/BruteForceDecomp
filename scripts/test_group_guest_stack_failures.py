#!/usr/bin/env python3
"""Synthetic stack-offset grouping checks; no original Xbox XBE required."""
import csv
from pathlib import Path
import subprocess
import sys
from tempfile import TemporaryDirectory

from group_guest_stack_failures import FIELDS, group

EXAMPLES = [
    {"entry": "0x00000001", "category": "unresolved_stack", "first_error": "use of undeclared identifier 'stack0xfffffffc'"},
    {"entry": "0x00000002", "category": "unresolved_stack", "first_error": "use of undeclared identifier 'stack0xFFFFFFFC'"},
    {"entry": "0x00000003", "category": "unresolved_stack", "first_error": "use of undeclared identifier 'stack0x00000004'"},
    {"entry": "0x00000004", "category": "invalid_member_access", "first_error": "member reference base type 'undefined4'"},
]

rows = group(EXAMPLES)
assert len(rows) == 2
assert rows[0] == {"guest_identifier": "stack0xfffffffc", "signed_offset": -4,
                   "first_error_functions": 2, "entries": "0x00000001;0x00000002"}
assert rows[1] == {"guest_identifier": "stack0x00000004", "signed_offset": 4,
                   "first_error_functions": 1, "entries": "0x00000003"}
assert group([EXAMPLES[3]]) == []
for bad in ([EXAMPLES[0], EXAMPLES[0]],
            [{"entry": "0x00000005", "category": "unresolved_stack", "first_error": "missing guest operand"}],
            [{"entry": "bad", "category": "unresolved_stack", "first_error": "use of undeclared identifier 'stack0x00000004'"}]):
    try:
        group(bad)
    except ValueError:
        pass
    else:
        raise AssertionError("Corrupt stack triage was accepted")

script = Path(__file__).with_name("group_guest_stack_failures.py")
with TemporaryDirectory() as folder:
    root = Path(folder)
    source, output = root / "failure_triage.csv", root / "grouped.csv"
    for examples, expected in ((EXAMPLES, 3), ([EXAMPLES[3]], 0)):
        with source.open("w", newline="", encoding="utf-8") as f:
            writer = csv.DictWriter(f, fieldnames=("entry", "category", "first_error"))
            writer.writeheader()
            writer.writerows(examples)
        result = subprocess.run([sys.executable, str(script), str(source), "--output", str(output)],
                                capture_output=True, text=True, check=True)
        assert f"stack failures={expected};" in result.stdout
        with output.open(newline="", encoding="utf-8") as f:
            reader = csv.DictReader(f)
            assert tuple(reader.fieldnames) == FIELDS
            grouped = list(reader)
            assert sum(int(r["first_error_functions"]) for r in grouped) == expected
    source.write_text("entry,first_error\n", encoding="utf-8")
    result = subprocess.run([sys.executable, str(script), str(source), "--output", str(output)],
                            capture_output=True, text=True)
    assert result.returncode != 0 and "Missing required" in result.stderr
print("Guest stack first-error grouping: signed offsets, duplicates, empty output and malformed input passed")
