#!/usr/bin/env python3
"""Fail closed when a full Clang C11 audit's generated tables disagree.

Only verifies report/CSV consistency; does not validate original Xbox semantics.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import json
from pathlib import Path
import re

ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
SHA = re.compile(r"[0-9a-f]{40}\Z")
STACK = re.compile(r"'(stack0x[0-9a-fA-F]{8})'")
TRIAGE = ("entry", "category", "first_error")
SYNTAX = ("entry", "status", "first_error")
GROUP = ("guest_identifier", "signed_offset", "first_error_functions", "entries")


def read_csv(path: Path, fields: tuple[str, ...]) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", newline="") as stream:
        reader = csv.DictReader(stream)
        if tuple(reader.fieldnames or ()) != fields:
            raise ValueError(f"{path.name}: invalid columns")
        rows = list(reader)
    if any(None in row or any(value is None for value in row.values()) for row in rows):
        raise ValueError(f"{path.name}: malformed CSV record")
    return rows


def verify(folder: Path, expected_total: int = 13694) -> dict[str, int]:
    report = json.loads((folder / "c11_sweep_report.json").read_text(encoding="utf-8"))
    summary = json.loads((folder / "failure_triage.json").read_text(encoding="utf-8"))
    sha = report.get("checked_commit_sha")
    if not isinstance(sha, str) or not SHA.fullmatch(sha):
        raise ValueError("Missing exact audited commit SHA")
    if report.get("source_tree_entries") != expected_total or report.get("group_index_present") is not True:
        raise ValueError("Incomplete source inventory")
    if any(report.get(field) != 0 for field in ("body_hash_mismatches", "body_hash_missing", "body_hash_unindexed")):
        raise ValueError("Missing or mismatched original body-hash provenance")
    results = report.get("results")
    if not isinstance(results, list) or len(results) != expected_total:
        raise ValueError("Incomplete per-function audit")
    counts = report.get("counts")
    if not isinstance(counts, dict) or set(counts) != {"pass", "fail"} or any(type(v) is not int or v < 0 for v in counts.values()):
        raise ValueError("Invalid terminal counts")
    seen = set()
    actual = Counter()
    failed = []
    for result in results:
        entry, status = result.get("entry"), result.get("status")
        if not isinstance(entry, str) or not ENTRY.fullmatch(entry) or entry in seen:
            raise ValueError(f"Duplicate or malformed entry: {entry}")
        if status not in ("pass", "fail"):
            raise ValueError(f"Nonterminal function status: {entry}")
        seen.add(entry)
        actual[status] += 1
        if status == "fail":
            errors = result.get("errors")
            if not isinstance(errors, list) or not errors or not isinstance(errors[0], str) or not errors[0]:
                raise ValueError(f"Missing first diagnostic: {entry}")
            failed.append({"entry": entry, "status": status, "first_error": errors[0]})
    if dict(actual) != counts:
        raise ValueError("Report counts disagree with function results")
    failed.sort(key=lambda row: row["entry"])
    syntax = read_csv(folder / "syntax_failures.csv", SYNTAX)
    # The sweep CSV is source-path ordered, not necessarily entry-address ordered.
    if len({row["entry"] for row in syntax}) != len(syntax) or sorted(syntax, key=lambda row: row["entry"]) != failed:
        raise ValueError("Syntax CSV disagrees with the full audit")
    triage = read_csv(folder / "failure_triage.csv", TRIAGE)
    if [(r["entry"], r["first_error"]) for r in triage] != [(r["entry"], r["first_error"]) for r in failed]:
        raise ValueError("Triage CSV disagrees with full audit")
    if summary.get("audited_commit") != sha or summary.get("source_tree_entries") != expected_total:
        raise ValueError("Triage summary refers to a different audit")
    if summary.get("counts") != counts or summary.get("first_error_categories") != dict(Counter(r["category"] for r in triage)):
        raise ValueError("Triage categories or counts disagree")
    if summary.get("classification_basis") != "first recorded Clang C11 error only; not a verified root cause or runtime result":
        raise ValueError("Triage summary overstates evidence")
    grouped = defaultdict(list)
    for row in triage:
        if row["category"] != "unresolved_stack":
            continue
        match = STACK.search(row["first_error"])
        if not match:
            raise ValueError(f"Unparseable stack first error: {row['entry']}")
        name = match.group(1).lower()
        word = int(name[7:], 16)
        offset = word if word < 0x80000000 else word - 0x100000000
        grouped[(name, offset)].append(row["entry"])
    expected = [
        {"guest_identifier": name, "signed_offset": str(offset),
         "first_error_functions": str(len(entries)), "entries": ";".join(sorted(entries))}
        for (name, offset), entries in grouped.items()
    ]
    expected.sort(key=lambda row: (-int(row["first_error_functions"]), int(row["signed_offset"])))
    if read_csv(folder / "guest_stack_offsets.csv", GROUP) != expected:
        raise ValueError("Stack-offset CSV disagrees with first-error triage")
    return {"pass": actual["pass"], "fail": actual["fail"],
            "stack": sum(map(len, grouped.values()))}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--artifact-dir", type=Path, required=True)
    args = parser.parse_args()
    try:
        counts = verify(args.artifact_dir)
    except (ValueError, OSError, KeyError, TypeError) as exc:
        parser.exit(1, f"FAIL: inconsistent full-audit artifact: {exc}\n")
    print(f"PASS: {counts['pass']} passing, {counts['fail']} failing, "
          f"{counts['stack']} first-error stack references; no XBE verification")


if __name__ == "__main__":
    main()
