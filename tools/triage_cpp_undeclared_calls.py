#!/usr/bin/env python3
"""Rank unresolved C++ identifier diagnostics; do not invent call prototypes."""
from __future__ import annotations
import argparse
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

FIRST = re.compile(r"use of undeclared identifier '([^']+)'")
FUNCTION = re.compile(r"(?:FUN_|thunk_FUN_)[0-9a-fA-F]{8}\Z")


def queue(report: dict) -> dict:
    results = report.get("results")
    if not isinstance(results, list) or len(results) != report.get("checked"):
        raise ValueError("incomplete C++ function inventory")
    counts, examples, seen = Counter(), defaultdict(list), set()
    for row in results:
        entry = row.get("entry", "")
        if not re.fullmatch(r"0x[0-9a-f]{8}", entry) or entry in seen:
            raise ValueError("bad or duplicate original address")
        seen.add(entry)
        if row.get("status") != "fail":
            continue
        errors = row.get("errors") or []
        if not errors:
            continue
        match = FIRST.search(errors[0])
        if not match:
            continue
        symbol = match.group(1)
        counts[symbol] += 1
        if len(examples[symbol]) < 8:
            examples[symbol].append({"caller": entry, "source": row.get("source", "")})
    rows = []
    for symbol, count in sorted(counts.items(), key=lambda x: (-x[1], x[0])):
        group = "original_address_or_thunk" if FUNCTION.fullmatch(symbol) else "other_unresolved_identifier"
        rows.append({"symbol": symbol, "first_error_functions": count,
                     "group": group, "sample_callers": examples[symbol],
                     "signature_status": "UNVERIFIED_REQUIRES_ORIGINAL_XBE"})
    return {"schema_version": 1, "meaning": "C++ first-error ranking, not verified original Xbox calling conventions",
            "audited_commit": report.get("checked_commit_sha"), "scope": report.get("scope"),
            "checked": len(results), "unresolved_identifiers": rows}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--report", required=True, type=Path)
    parser.add_argument("--out", default=Path("cpp_compat_results"), type=Path)
    args = parser.parse_args()
    result = queue(json.loads(args.report.read_text(encoding="utf-8")))
    args.out.mkdir(parents=True, exist_ok=True)
    (args.out / "unresolved_cpp_identifier_queue.json").write_text(
        json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print("Top original-address/C++ undeclared identifiers (ABI still unverified):")
    for row in result["unresolved_identifiers"][:20]:
        print(f"  {row['first_error_functions']:>4}  {row['symbol']}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
