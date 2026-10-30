#!/usr/bin/env python3
"""Join observed x86 call edges to C++ diagnostics without inventing prototypes.

This is a prioritization report, not a reconstructed C++ calling convention.
Previously recorded call edges are partial evidence and must be re-checked
against the hash-pinned retail XBE before source ABI changes are approved.
"""
from __future__ import annotations
import argparse
import csv
import json
import re
from collections import defaultdict
from pathlib import Path

MISSING = re.compile(r"use of undeclared identifier '(?:thunk_)?FUN_([0-9a-fA-F]{8})'")


def identify(report: dict, ledger_rows: list[dict]) -> dict:
    results = report.get("results")
    if not isinstance(results, list) or len(results) != report.get("checked"):
        raise ValueError("incomplete C++ sweep")
    edges = defaultdict(list)
    for row in ledger_rows:
        caller, callee = row.get("caller_entry", "").lower(), row.get("callee_entry", "").lower()
        if not re.fullmatch(r"0x[0-9a-f]{8}", caller) or not re.fullmatch(r"0x[0-9a-f]{8}", callee):
            # Unclassified callers are not tied to a particular original function.
            continue
        edges[(caller, callee)].append(row)
    matches = []
    seen = set()
    for row in results:
        caller = row.get("entry", "")
        if not re.fullmatch(r"0x[0-9a-f]{8}", caller) or caller in seen:
            raise ValueError("invalid or duplicate caller identity")
        seen.add(caller)
        if row.get("status") != "fail":
            continue
        for message in row.get("errors", []):
            m = MISSING.search(message)
            if not m:
                continue
            callee = "0x" + m.group(1).lower()
            for edge in edges.get((caller, callee), []):
                matches.append({
                    "caller": caller, "callee": callee, "call_va": edge["call_va"],
                    "source": row.get("source"), "compiler_error": message,
                    "recorded_stack_words": edge["observed_stack_words"],
                    "recorded_register_inputs": edge["observed_register_inputs"],
                    "recorded_callee_reads": edge["callee_read_evidence"],
                    "recorded_cleanup": edge["caller_cleanup_evidence"],
                    "ledger_abi_status": edge["abi_verification_status"],
                    "signature_status": "UNVERIFIED_RECHECK_ORIGINAL_XBE",
                })
    matches.sort(key=lambda r: (r["callee"], r["caller"], r["call_va"]))
    return {
        "schema_version": 1,
        "metric": "existing recorded x86 direct-call edges related to C++ undeclared identifier diagnostics",
        "audited_commit": report.get("checked_commit_sha"),
        "scope": report.get("scope"),
        "matches": matches, "matched_edges": len(matches),
        "not_proof_of_cpp_abi": True,
        "warnings": [
            "Only previously recorded original direct-call edges are matched.",
            "Call/RET stack contracts may be partial; unverified data is never converted to a C++ prototype.",
            "XBE opcode and body digest must be rechecked before changing source signatures.",
        ],
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--report", required=True, type=Path)
    parser.add_argument("--ledger", type=Path,
                        default=Path(__file__).resolve().parents[1] / "metadata" / "x86_verified_call_edges.csv")
    parser.add_argument("--out", default=Path("cpp_compat_results"), type=Path)
    args = parser.parse_args()
    with args.ledger.open(newline="", encoding="utf-8-sig") as f:
        ledger = list(csv.DictReader(f))
    result = identify(json.loads(args.report.read_text(encoding="utf-8")), ledger)
    args.out.mkdir(parents=True, exist_ok=True)
    (args.out / "cpp_original_call_edge_review.json").write_text(
        json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(f"Matched {result['matched_edges']} recorded direct-call edges to C++ diagnostics; "
          "no C++ interfaces declared.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
