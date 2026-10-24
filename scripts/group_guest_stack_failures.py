#!/usr/bin/env python3
"""Group first-error unresolved guest stack identifiers without guessing host C storage."""
import argparse
import csv
import re
from collections import defaultdict
from pathlib import Path

IDENT = re.compile(r"'(stack0x[0-9a-fA-F]{8})'")
ENTRY = re.compile(r"0x[0-9a-f]{8}\\Z")
FIELDS = ("guest_identifier", "signed_offset", "first_error_functions", "entries")


def group(rows):
    """Summarize validated first-error stack entries, including an empty result."""
    groups = defaultdict(list)
    seen = set()
    for row in rows:
        entry = row.get("entry", "")
        if not ENTRY.fullmatch(entry) or entry in seen:
            raise ValueError(f"Invalid or duplicate triage entry: {entry}")
        seen.add(entry)
        if row.get("category") != "unresolved_stack":
            continue
        match = IDENT.search(row.get("first_error", ""))
        if match is None:
            raise ValueError("Unclassified stack diagnostic: " + entry)
        offset = int(match.group(1)[7:], 16)
        signed = offset if offset < 0x80000000 else offset - 0x100000000
        groups[(match.group(1).lower(), signed)].append(entry)
    result = [
        {"guest_identifier": key[0], "signed_offset": key[1],
         "first_error_functions": len(entries), "entries": ";".join(sorted(entries))}
        for key, entries in groups.items()
    ]
    result.sort(key=lambda r: (-r["first_error_functions"], r["signed_offset"]))
    return result


def main():
    p = argparse.ArgumentParser()
    p.add_argument("triage_csv", type=Path, help="failure_triage.csv from a completed full-c11-inventory artifact")
    p.add_argument("--output", type=Path, help="optional grouped CSV output")
    a = p.parse_args()
    with a.triage_csv.open(newline="", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        if not {"entry", "category", "first_error"}.issubset(reader.fieldnames or []):
            raise SystemExit("Missing required failure-triage CSV columns")
        try:
            rows = group(reader)
        except ValueError as exc:
            raise SystemExit(str(exc)) from exc
    positive = sum(row["first_error_functions"] for row in rows if row["signed_offset"] >= 0)
    negative = sum(row["first_error_functions"] for row in rows if row["signed_offset"] < 0)
    print(f"stack failures={positive + negative}; nonnegative={positive}; negative={negative}; unique offsets={len(rows)}")
    for row in rows[:20]:
        print(f"{row['guest_identifier']} ({row['signed_offset']:+d}): {row['first_error_functions']} functions")
    if a.output:
        with a.output.open("w", newline="", encoding="utf-8") as f:
            writer = csv.DictWriter(f, fieldnames=FIELDS)
            writer.writeheader()
            writer.writerows(rows)


if __name__ == "__main__":
    main()
