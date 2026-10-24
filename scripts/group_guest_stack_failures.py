#!/usr/bin/env python3
"""Group first-error unresolved guest stack identifiers without guessing host C storage."""
import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path

IDENT = re.compile(r"'(stack0x[0-9a-fA-F]{8})'")
def main():
    p = argparse.ArgumentParser()
    p.add_argument("triage_csv", type=Path, help="failure_triage.csv from a completed full-c11-inventory artifact")
    p.add_argument("--output", type=Path, help="optional grouped CSV output")
    a = p.parse_args()
    groups = defaultdict(list)
    with a.triage_csv.open(newline="") as f:
        for row in csv.DictReader(f):
            if row["category"] != "unresolved_stack":
                continue
            match = IDENT.search(row["first_error"])
            if match is None:
                raise SystemExit("unclassified stack diagnostic: " + row["entry"])
            offset = int(match.group(1)[7:], 16)
            signed = offset if offset < 0x80000000 else offset - 0x100000000
            groups[(match.group(1).lower(), signed)].append(row["entry"])
    rows = [
        {"guest_identifier": key[0], "signed_offset": key[1],
         "first_error_functions": len(entries), "entries": ";".join(sorted(entries))}
        for key, entries in groups.items()
    ]
    rows.sort(key=lambda r: (-r["first_error_functions"], r["signed_offset"]))
    positive = sum(len(entries) for (name, signed), entries in groups.items() if signed >= 0)
    negative = sum(len(entries) for (name, signed), entries in groups.items() if signed < 0)
    print(f"stack failures={positive + negative}; nonnegative={positive}; negative={negative}; unique offsets={len(groups)}")
    for row in rows[:20]:
        print(f"{row['guest_identifier']} ({row['signed_offset']:+d}): {row['first_error_functions']} functions")
    if a.output:
        with a.output.open("w", newline="") as f:
            writer = csv.DictWriter(f, fieldnames=list(rows[0]))
            writer.writeheader()
            writer.writerows(rows)

if __name__ == "__main__":
    main()
