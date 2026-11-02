#!/usr/bin/env python3
"""Deterministically prioritize source-only C++17 declaration dry-runs.

This is a read-only *scheduling* tool, not Xbox ABI or 1:1 evidence.
It retains all SHA-gated candidate records; no caller/callee is rewritten.
"""
from __future__ import annotations

import argparse
from collections import Counter
import json
from pathlib import Path
import re

ELIGIBLE = "DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE"
HEX_SHA = re.compile(r"[0-9a-f]{40}\Z")


def prioritize(audit: dict, edges: dict) -> dict:
    sha = audit.get("checked_commit_sha")
    if (audit.get("scope") != "full_inventory" or audit.get("checked") != 13694
            or audit.get("original_function_count") not in (None, 13694)
            or not isinstance(sha, str) or not HEX_SHA.fullmatch(sha)
            or edges.get("audited_commit") != sha):
        raise ValueError("requires matching completed 13,694-entry exact-tree C++17 audit")
    counts = audit.get("counts", {})
    if counts.get("pass", -1) + counts.get("fail", -1) != 13694:
        raise ValueError("incomplete audit pass/fail counts")
    results = audit.get("results")
    if not isinstance(results, list) or len(results) != 13694:
        raise ValueError("missing audit entries")
    by_entry = {r.get("entry"): r for r in results}
    if len(by_entry) != 13694:
        raise ValueError("duplicate audit entries")
    candidates = edges.get("candidates")
    if not isinstance(candidates, list):
        raise ValueError("missing declaration candidates")
    seen = set()
    for row in candidates:
        caller, callee = row.get("caller"), row.get("callee")
        key = (caller, callee)
        if key in seen or caller not in by_entry or callee not in by_entry:
            raise ValueError("duplicate or missing caller/callee identity")
        seen.add(key)
        source = by_entry[caller]
        if (source.get("source") != row.get("source") or
                source.get("source_sha256") != row.get("source_sha256") or
                source.get("original_body_sha256") != row.get("original_body_sha256")):
            raise ValueError("candidate caller does not match exact audit source")

    def priority(row: dict) -> tuple:
        record = by_entry[row["caller"]]
        errors = record.get("errors") or []
        eligible = row.get("triage") == ELIGIBLE
        # Isolated single-error callers have the best chance of turning a
        # declaration-only change into one *measurable* C++17 syntax pass.
        # Arity is only a draft heuristic, not a recovered call contract.
        arity = row.get("caller_draft_arity")
        arity = arity if isinstance(arity, int) and arity >= 0 else 999
        return (not eligible, len(errors) != 1, arity > 3, len(errors), arity,
                row["caller"], row["callee"])

    ordered = sorted(candidates, key=priority)
    eligible = [x for x in ordered if x.get("triage") == ELIGIBLE]
    single = sum(len(by_entry[x["caller"]].get("errors") or []) == 1 for x in eligible)
    return {
        "schema_version": 1,
        "meaning": "read-only scheduling of source-only Clang++17 triage; ABI_UNVERIFIED",
        "audited_commit": sha,
        "audit_checked": 13694,
        "reviewed": len(ordered),
        "categories": dict(sorted(Counter(x.get("triage") for x in ordered).items())),
        "priority_summary": {"eligible": len(eligible), "eligible_single_error": single,
                             "first_400_eligible_single_error": sum(
                                 len(by_entry[x["caller"]].get("errors") or []) == 1
                                 for x in ordered[:400] if x.get("triage") == ELIGIBLE)},
        "candidates": ordered,
    }


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--audit", type=Path, required=True)
    parser.add_argument("--edges", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    result = prioritize(json.loads(args.audit.read_text(encoding="utf-8")),
                        json.loads(args.edges.read_text(encoding="utf-8")))
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(f"Prioritized {result['reviewed']} declaration edges; "
          f"{result['priority_summary']['eligible_single_error']} single-error candidates; "
          "no Xbox ABI or behavior certified")


if __name__ == "__main__":
    try:
        main()
    except (ValueError, OSError, KeyError, TypeError) as exc:
        parser_message = f"FAIL: {exc}"
        raise SystemExit(parser_message)
