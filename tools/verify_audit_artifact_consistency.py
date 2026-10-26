#!/usr/bin/env python3
"""Fail closed when a full Clang C11 audit's generated tables disagree.

Only verifies report/CSV consistency; does not validate original Xbox semantics.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path
import re

from triage_c11_failures import category
from source_layout import source_path

ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
SHA = re.compile(r"[0-9a-f]{40}\Z")
DIGEST = re.compile(r"[0-9a-fA-F]{64}\Z")
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


def read_canonical_inventory(path: Path, expected_total: int) -> dict[str, tuple[str, str]]:
    """Load the independently tracked address/body/source digest inventory.

    This checks artifact-to-repository provenance, NOT original XBE bytes.
    """
    with path.open(encoding="utf-8-sig", newline="") as stream:
        reader = csv.DictReader(stream)
        required = {"entry", "original_body_sha256", "c_sha256"}
        if not required.issubset(reader.fieldnames or ()):
            raise ValueError("Canonical inventory lacks entry/body/source digest columns")
        entries: dict[str, tuple[str, str]] = {}
        for row in reader:
            entry = row.get("entry")
            body = row.get("original_body_sha256")
            source = row.get("c_sha256")
            if (not isinstance(entry, str) or not ENTRY.fullmatch(entry)
                    or entry in entries or not isinstance(body, str)
                    or not DIGEST.fullmatch(body) or not isinstance(source, str)
                    or not DIGEST.fullmatch(source)):
                raise ValueError(f"Malformed or duplicate canonical inventory row: {entry}")
            entries[entry] = (body.lower(), source.lower())
    if len(entries) != expected_total:
        raise ValueError("Canonical inventory does not contain the exact expected entry count")
    return entries


def verify(folder: Path, expected_total: int = 13694,
           inventory_path: Path | None = None,
           expected_commit: str | None = None,
           source_root: Path | None = None) -> dict[str, int]:
    report = json.loads((folder / "c11_sweep_report.json").read_text(encoding="utf-8"))
    summary = json.loads((folder / "failure_triage.json").read_text(encoding="utf-8"))
    sha = report.get("checked_commit_sha")
    if not isinstance(sha, str) or not SHA.fullmatch(sha):
        raise ValueError("Missing exact audited commit SHA")
    if expected_commit is not None:
        if not SHA.fullmatch(expected_commit) or sha != expected_commit:
            raise ValueError("Audit report SHA does not match the checked-out commit")
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
    canonical = (read_canonical_inventory(inventory_path, expected_total)
                 if inventory_path is not None else None)
    seen = set()
    actual = Counter()
    failed = []
    source_drift = 0
    for result in results:
        entry, status = result.get("entry"), result.get("status")
        if not isinstance(entry, str) or not ENTRY.fullmatch(entry) or entry in seen:
            raise ValueError(f"Duplicate or malformed entry: {entry}")
        if status not in ("pass", "fail"):
            raise ValueError(f"Nonterminal function status: {entry}")
        # Check each provenance record, not just aggregate counters.
        # Source/metadata agreement is NOT independent original-XBE verification.
        if result.get("body_provenance") != "match":
            raise ValueError(f"Original body-hash label not matched: {entry}")
        for field in ("original_body_sha256", "c_sha256_actual"):
            digest = result.get(field)
            if not isinstance(digest, str) or not DIGEST.fullmatch(digest):
                raise ValueError(f"Missing or malformed {field}: {entry}")
        if type(result.get("c_sha256_matches_inventory")) is not bool:
            raise ValueError(f"Invalid C source digest comparison: {entry}")
        if source_root is not None:
            # Bind each compiler result to the actual checked-out C bytes.
            # Canonical inventory source hashes are historical and may drift;
            # the audit's recorded actual hash must never drift from checkout.
            try:
                actual_source_digest = hashlib.sha256(
                    source_path(source_root, entry).read_bytes()
                ).hexdigest()
            except OSError as exc:
                raise ValueError(f"Audited C source missing/unreadable: {entry}") from exc
            if result["c_sha256_actual"].lower() != actual_source_digest:
                raise ValueError(f"Audited C source digest differs from checkout: {entry}")
        if canonical is not None:
            if entry not in canonical:
                raise ValueError(f"Audited entry absent from canonical inventory: {entry}")
            original_body, historical_source = canonical[entry]
            if result["original_body_sha256"].lower() != original_body:
                raise ValueError(f"Original body digest disagrees with canonical inventory: {entry}")
            if result["c_sha256_matches_inventory"] != (
                    result["c_sha256_actual"].lower() == historical_source):
                raise ValueError(f"C source drift flag disagrees with canonical inventory: {entry}")
        source_drift += not result["c_sha256_matches_inventory"]
        seen.add(entry)
        actual[status] += 1
        if status == "fail":
            errors = result.get("errors")
            if not isinstance(errors, list) or not errors or not isinstance(errors[0], str) or not errors[0]:
                raise ValueError(f"Missing first diagnostic: {entry}")
            failed.append({"entry": entry, "status": status, "first_error": errors[0]})
    if canonical is not None and seen != set(canonical):
        raise ValueError("Audited entries do not exactly match canonical inventory")
    if type(report.get("c_source_hash_drift")) is not int or report["c_source_hash_drift"] != source_drift:
        raise ValueError("C source digest drift count disagrees with per-function records")
    if dict(actual) != counts:
        raise ValueError("Report counts disagree with function results")
    failed.sort(key=lambda row: row["entry"])
    syntax = read_csv(folder / "syntax_failures.csv", SYNTAX)
    # The sweep CSV is source-path ordered, not necessarily entry-address ordered.
    if len({row["entry"] for row in syntax}) != len(syntax) or sorted(syntax, key=lambda row: row["entry"]) != failed:
        raise ValueError("Syntax CSV disagrees with the full audit")
    triage = read_csv(folder / "failure_triage.csv", TRIAGE)
    # The summary must not legitimize a misclassified first diagnostic.
    # Regenerate each category from the audited compiler error itself.
    for row in triage:
        if row["category"] != category(row["first_error"]):
            raise ValueError(f"Triage category disagrees with Clang diagnostic: {row['entry']}")
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
    parser.add_argument("--inventory", type=Path,
                        default=Path("metadata/bulk_13694_inventory.csv"),
                        help="Canonical repository inventory; required for independent entry/digest cross-check")
    parser.add_argument("--expected-commit", type=str,
                        help="Require exact equality with the checked-out 40-hex Git commit")
    parser.add_argument("--source-root", type=Path,
                        help="Hash every current C file to bind audit records to checkout")
    args = parser.parse_args()
    try:
        counts = verify(args.artifact_dir, inventory_path=args.inventory,
                        expected_commit=args.expected_commit, source_root=args.source_root)
    except (ValueError, OSError, KeyError, TypeError) as exc:
        parser.exit(1, f"FAIL: inconsistent full-audit artifact: {exc}\n")
    print(f"PASS: {counts['pass']} passing, {counts['fail']} failing, "
          f"{counts['stack']} first-error stack references; no XBE verification")


if __name__ == "__main__":
    main()
