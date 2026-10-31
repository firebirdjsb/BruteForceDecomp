#!/usr/bin/env python3
"""Fail closed if a C++17 audit report does not describe the exact source tree.

No original XBE is used here. Matching source bytes and embedded original-body
hash *labels* to the inventory is provenance hygiene, not x86/ABI verification.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
from collections import Counter
from pathlib import Path

from body_hash_labels import read_body_digest
from source_layout import discovered_sources

EXPECTED = 13694
ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
SHA256 = re.compile(r"[0-9a-fA-F]{64}\Z")
COMMIT = re.compile(r"[0-9a-fA-F]{40}\Z")


def verify(report: dict, root: Path, expected_sha: str, *,
           expected_count: int = EXPECTED, sources: list[Path] | None = None) -> dict:
    """Validate report, inventory and unchanged bytes; sources injection is test-only."""
    root = root.resolve()
    if not COMMIT.fullmatch(expected_sha) or report.get("checked_commit_sha", "").lower() != expected_sha.lower():
        raise ValueError("audit commit differs from the checked-out GitHub SHA")
    if report.get("scope") != "full_inventory" or report.get("passing_is_not_1_to_1") is not True:
        raise ValueError("not a full C++17 syntax-only audit")
    if report.get("checked") != expected_count or report.get("original_function_count") != expected_count:
        raise ValueError("wrong original function count")
    inventory = root / "metadata/bulk_13694_inventory.csv"
    with inventory.open(encoding="utf-8-sig", newline="") as stream:
        inventory_rows = list(csv.DictReader(stream))
    indexed = {}
    for row in inventory_rows:
        entry, digest = row["entry"].lower(), row["original_body_sha256"].upper()
        if not ENTRY.fullmatch(entry) or not SHA256.fullmatch(digest) or entry in indexed:
            raise ValueError("invalid or duplicate original inventory entry")
        indexed[entry] = digest
    if len(indexed) != expected_count:
        raise ValueError("original inventory count mismatch")
    source_list = discovered_sources(root) if sources is None else sources
    source_index = {}
    for path in source_list:
        entry = path.stem.lower()
        if not ENTRY.fullmatch(entry) or entry in source_index:
            raise ValueError("invalid or duplicate canonical C++ source")
        source_index[entry] = path
    if set(source_index) != set(indexed):
        raise ValueError("canonical C++ source inventory drift")
    rows = report.get("results")
    if not isinstance(rows, list) or len(rows) != expected_count:
        raise ValueError("missing per-function audit results")
    counts, seen = Counter(), set()
    for row in rows:
        if not isinstance(row, dict):
            raise ValueError("invalid per-function result")
        entry = row.get("entry", "")
        if entry not in indexed or entry in seen:
            raise ValueError("missing, invalid or duplicate audited function")
        seen.add(entry)
        path = source_index[entry]
        if row.get("source") != path.relative_to(root).as_posix():
            raise ValueError(f"source path drift for {entry}")
        data = path.read_bytes()
        if row.get("source_sha256") != hashlib.sha256(data).hexdigest():
            raise ValueError(f"source changed since C++ audit: {entry}")
        if row.get("original_body_sha256", "").upper() != indexed[entry]:
            raise ValueError(f"original XBE body digest inventory drift: {entry}")
        digest, conflict = read_body_digest(data.decode("utf-8", "replace"))
        if conflict or digest != indexed[entry] or row.get("body_provenance") != "match":
            raise ValueError(f"original body-hash label drift: {entry}")
        status = row.get("status")
        if status not in ("pass", "fail"):
            raise ValueError(f"incomplete compiler status: {entry}")
        counts[status] += 1
    if set(seen) != set(indexed):
        raise ValueError("missing original function audit result")
    reported = report.get("counts")
    if not isinstance(reported, dict) or set(reported) - {"pass", "fail"}:
        raise ValueError("unexpected aggregate C++ audit status")
    if any(type(reported.get(status, 0)) is not int or reported.get(status, 0) != counts[status]
           for status in ("pass", "fail")):
        raise ValueError("C++ summary differs from per-function results")
    return {"checked": expected_count, "pass": counts["pass"], "fail": counts["fail"],
            "audited_commit": expected_sha.lower(), "meaning": "syntax and source provenance only; Xbox ABI unverified"}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--report", type=Path, required=True)
    parser.add_argument("--expected-sha", required=True)
    args = parser.parse_args()
    state = verify(json.loads(args.report.read_text(encoding="utf-8")), args.root, args.expected_sha)
    print(f"PASS exact-tree C++17 audit: {state['pass']}/{state['checked']} passing, "
          f"{state['fail']} failing at {state['audited_commit']}; Xbox ABI UNVERIFIED")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
