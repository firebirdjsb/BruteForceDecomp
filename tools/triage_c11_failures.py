#!/usr/bin/env python3
"""Summarize the first fatal C11 diagnostic per function from a full audit.

This is diagnostic triage only. A passing C11 parse is NOT behavioral proof.
Accepts the GitHub Actions syntax_failures.csv artifact as input.
"""
from __future__ import annotations
import argparse
import csv
import json
from collections import Counter
from pathlib import Path

def classify(message: str) -> str:
    if "stack0x" in message or "register0x" in message:
        return "x86_stack_register_unresolved"
    if "cannot be cast to a pointer" in message or "pointer cannot be cast to type 'float'" in message:
        return "float_pointer_conversion"
    if "member reference base type" in message:
        return "invalid_member_base_type"
    if "is not assignable" in message and "array type" in message:
        return "simd_or_array_assignment"
    if "too few arguments" in message or "too many arguments" in message:
        return "call_signature"
    if "undeclared identifier" in message or "unknown type name" in message:
        return "missing_symbol_or_type"
    return "other_requires_review"

def summarize(path: Path) -> dict:
    counts: Counter[str] = Counter()
    examples: dict[str, list[str]] = {}
    seen: set[str] = set()
    with path.open(newline="", encoding="utf-8-sig") as stream:
        reader = csv.DictReader(stream)
        if not {"entry", "status", "first_error"}.issubset(reader.fieldnames or []):
            raise ValueError("expected entry,status,first_error columns")
        for row in reader:
            entry = row["entry"].strip()
            if row["status"] != "fail" or not entry.startswith("0x"):
                raise ValueError("malformed failure row: " + repr(row))
            if entry in seen:
                raise ValueError("duplicate entry: " + entry)
            seen.add(entry)
            category = classify(row["first_error"])
            counts[category] += 1
            examples.setdefault(category, [])
            if len(examples[category]) < 5:
                examples[category].append(entry)
    return {"failed_functions": len(seen),
            "first_error_categories": dict(sorted(counts.items())),
            "example_entries": dict(sorted(examples.items())),
            "note": "first-error triage only; not an ABI or 1:1 validation"}

def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("syntax_failures_csv", type=Path)
    parser.add_argument("--expected-failures", type=int)
    args = parser.parse_args()
    report = summarize(args.syntax_failures_csv)
    print(json.dumps(report, indent=2))
    if args.expected_failures is not None and report["failed_functions"] != args.expected_failures:
        parser.error("count differs from expected failures")

if __name__ == "__main__":
    main()
