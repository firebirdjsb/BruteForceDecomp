#!/usr/bin/env python3
"""Categorize the FIRST Clang error from an exact full-tree C11 audit.

A category is a compiler-diagnostic search aid, never an ABI or behavioral claim.
No XBE, original function bodies, or GitHub access is required.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import json
from pathlib import Path
import re

ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
SHA = re.compile(r"[0-9a-f]{40}\Z")
RULES = (
    ("unresolved_stack", re.compile(r"undeclared identifier 'stack0x")),
    ("unresolved_ram", re.compile(r"undeclared identifier '[a-zA-Z]Ram")),
    ("unresolved_label", re.compile(r"undeclared identifier 'LAB_")),
    ("unresolved_function", re.compile(r"undeclared identifier 'FUN_")),
    ("unresolved_other_symbol", re.compile(r"undeclared identifier")),
    ("invalid_float_pointer_cast", re.compile(r"cannot be cast to a pointer type|cannot be cast to type 'float'")),
    ("invalid_member_access", re.compile(r"member reference base type")),
    ("invalid_array_assignment", re.compile(r"array type .* is not assignable")),
    ("invalid_type_usage", re.compile(r"used type .* where arithmetic or pointer type is required")),
)


def category(first_error: str) -> str:
    for name, pattern in RULES:
        if pattern.search(first_error):
            return name
    return "other_first_error"


def triage(report: dict, expected_total: int = 13694) -> tuple[dict, list[dict]]:
    """Fail closed on truncated/mismatched reports; never manufacture counts."""
    sha = report.get("checked_commit_sha", "")
    if not isinstance(sha, str) or not SHA.fullmatch(sha):
        raise ValueError("Report is not pinned to a full audited commit SHA")
    results = report.get("results")
    if not isinstance(results, list) or len(results) != expected_total:
        raise ValueError("Report results are missing or incomplete")
    if type(report.get("source_tree_entries")) is not int or report["source_tree_entries"] != expected_total:
        raise ValueError("Source tree entry count differs from complete audit")
    if any(report.get(field) != 0 for field in ("body_hash_mismatches", "body_hash_missing", "body_hash_unindexed")):
        raise ValueError("Original body-hash provenance gate failed")
    if report.get("group_index_present") is not True:
        raise ValueError("Missing complete function-group index")
    counts = report.get("counts")
    if not isinstance(counts, dict) or set(counts) != {"pass", "fail"} or any(type(v) is not int or v < 0 for v in counts.values()):
        raise ValueError("Invalid or incomplete compiler result counts")
    actual = Counter()
    seen = set()
    rows = []
    for result in results:
        entry, status = result.get("entry"), result.get("status")
        if not isinstance(entry, str) or not ENTRY.fullmatch(entry) or entry in seen:
            raise ValueError(f"Invalid or duplicate function entry: {entry}")
        if status not in ("pass", "fail"):
            raise ValueError(f"Non-terminal compiler status at {entry}: {status}")
        seen.add(entry)
        actual[status] += 1
        if status == "fail":
            errors = result.get("errors")
            if not isinstance(errors, list) or not errors or not isinstance(errors[0], str) or not errors[0]:
                raise ValueError(f"Missing first Clang diagnostic at {entry}")
            rows.append({"entry": entry, "category": category(errors[0]), "first_error": errors[0]})
    if dict(actual) != counts:
        raise ValueError("Reported pass/fail counts do not match per-function results")
    rows.sort(key=lambda r: r["entry"])
    grouped = Counter(row["category"] for row in rows)
    summary = {
        "audited_commit": sha,
        "source_tree_entries": expected_total,
        "counts": dict(sorted(actual.items())),
        "classification_basis": "first recorded Clang C11 error only; not a verified root cause or runtime result",
        "first_error_categories": dict(sorted(grouped.items())),
    }
    return summary, rows


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--report", required=True, type=Path)
    parser.add_argument("--out-json", required=True, type=Path)
    parser.add_argument("--out-csv", required=True, type=Path)
    args = parser.parse_args()
    summary, rows = triage(json.loads(args.report.read_text(encoding="utf-8")))
    args.out_json.write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    with args.out_csv.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=("entry", "category", "first_error"))
        writer.writeheader()
        writer.writerows(rows)
    print(f"Categorized {len(rows)} actual syntax failures at {summary['audited_commit']}; no XBE semantics inferred")


if __name__ == "__main__":
    main()
