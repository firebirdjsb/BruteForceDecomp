#!/usr/bin/env python3
"""Triage unresolved C++ draft-fidelity flags, without granting 1:1 credit.

Read the structural draft report from audit_cpp_draft_coverage.py.
No game code, original XBE, Ghidra dump or ABI hypothesis is modified.
"""
from __future__ import annotations

import argparse
import csv
import json
import re
from collections import Counter
from pathlib import Path

FLAGS = {
    "empty_or_return_only_body_requires_original_x86_review": (
        "HIGH", "authenticate original XBE; disassemble complete function and confirm return-only semantics"
    ),
    "explicit_missing_ghidra_export_marker": (
        "HIGH", "recover private Ghidra function export and compare original x86 bytes"
    ),
    "canonical_function_symbol_not_found_review_renaming": (
        "REVIEW", "compare Ghidra label and assembly-reviewed aliases; do not rename speculatively"
    ),
}
LABEL = re.compile(r"\blabel:\s*([A-Za-z_][A-Za-z_0-9]*)")
DEFINITION = re.compile(r"\b([A-Za-z_]\w*)\s*\([^;{}]*\)\s*\{", re.S)
EXPECTED_SHA = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"


def triage(report: dict, root: Path) -> dict:
    """Fail closed on malformed or inconsistent audit data."""
    if report.get("schema_version") != 1 or report.get("structural_problem_count") != 0:
        raise ValueError("requires a structurally clean C++ draft audit (schema_version=1)")
    functions = report.get("functions")
    queue = report.get("fidelity_review_queue")
    if not isinstance(functions, list) or not isinstance(queue, list):
        raise ValueError("missing per-function inventory or fidelity-review queue")
    by_entry = {r.get("entry"): r for r in functions}
    if len(by_entry) != len(functions):
        raise ValueError("duplicate function identities in structural report")
    emitted = []
    for flag in queue:
        entry, reason = flag.get("entry"), flag.get("reason")
        if reason not in FLAGS or entry not in by_entry:
            raise ValueError(f"unrecognized or unindexed fidelity-review flag: {flag!r}")
        function = by_entry[entry]
        if reason not in function.get("review_flags", []):
            raise ValueError(f"queue disagrees with function flags for {entry}")
        source = function.get("source")
        if not source or Path(source).is_absolute() or ".." in Path(source).parts:
            raise ValueError(f"missing or unsafe source path for {entry}")
        file_path = (root / source).resolve()
        if not file_path.is_relative_to(root.resolve()) or not file_path.is_file():
            raise ValueError(f"source not present in audit checkout: {source}")
        body = file_path.read_text(encoding="utf-8", errors="replace")
        label = LABEL.search(body)
        definition = DEFINITION.search(body)
        priority, evidence = FLAGS[reason]
        emitted.append({
            "entry": entry,
            "source": source,
            "reason": reason,
            "priority": priority,
            "ghidra_label": label.group(1) if label else "",
            "first_lexical_definition": definition.group(1) if definition else "",
            "evidence_required": evidence,
            "original_xbe_evidence": "NOT_RECHECKED_BY_THIS_TOOL",
            "original_ghidra_body_match": "NOT_CHECKED",
            "behavioral_fidelity": "ABI_UNVERIFIED",
        })
    if len(emitted) != report.get("fidelity_review_flag_count"):
        raise ValueError("review count disagrees with structural audit")
    # Ensure flags omitted from the flattened queue cannot disappear silently.
    expected_pairs = Counter((f["entry"], reason)
                             for f in functions for reason in f.get("review_flags", []))
    actual_pairs = Counter((r["entry"], r["reason"]) for r in emitted)
    if expected_pairs != actual_pairs:
        raise ValueError("per-function and flattened fidelity flags disagree")
    emitted.sort(key=lambda r: (0 if r["priority"] == "HIGH" else 1, r["reason"], r["entry"]))
    return {
        "schema_version": 1,
        "metric": "UNRESOLVED structural draft-fidelity review flags only",
        "original_xbe_sha256_required": EXPECTED_SHA,
        "original_xbe_authenticated_in_this_run": False,
        "audited_commit": report.get("audited_commit"),
        "function_count": len(functions),
        "flag_count": len(emitted),
        "functions_flagged": len({r["entry"] for r in emitted}),
        "counts_by_reason": dict(sorted(Counter(r["reason"] for r in emitted).items())),
        "counts_by_priority": dict(sorted(Counter(r["priority"] for r in emitted).items())),
        "resolved_without_xbe": 0,
        "semantic_fidelity": "NOT_VERIFIED",
        "flags": emitted,
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--report", type=Path, default=Path("cpp_compat_results/cpp_draft_coverage.json"))
    parser.add_argument("--out", type=Path, default=Path("cpp_compat_results"))
    args = parser.parse_args()
    result = triage(json.loads(args.report.read_text(encoding="utf-8")), args.root)
    args.out.mkdir(parents=True, exist_ok=True)
    (args.out / "cpp_fidelity_review_triage.json").write_text(
        json.dumps(result, indent=2) + "\n", encoding="utf-8"
    )
    with (args.out / "cpp_fidelity_review_triage.csv").open("w", newline="", encoding="utf-8") as stream:
        writer = csv.DictWriter(stream, fieldnames=list(result["flags"][0]) if result["flags"] else
                                ["entry", "source", "reason", "priority", "ghidra_label",
                                 "first_lexical_definition", "evidence_required",
                                 "original_xbe_evidence", "original_ghidra_body_match",
                                 "behavioral_fidelity"])
        writer.writeheader()
        writer.writerows(result["flags"])
    print(f"Fidelity triage: {result['flag_count']} unresolved flags across "
          f"{result['functions_flagged']} functions; 0 original-XBE checks claimed")
    for reason, count in result["counts_by_reason"].items():
        print(f"  {count:5d} {reason}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
