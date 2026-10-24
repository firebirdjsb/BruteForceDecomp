#!/usr/bin/env python3
"""Generate a deterministic evidence-first C11 repair queue from a full sweep JSON.

Does not rewrite sources or claim syntax/runtime progress.
Usage: python scripts/queue_c11_failures.py c11_sweep_report.json -o repair_queue.csv
"""
import argparse
import csv
import json
import re
from collections import Counter
from pathlib import Path

RULES = (
    ("undeclared_guest_data", 10, r"use of undeclared identifier '(?:[ui]Ram|DAT_|_DAT_)[0-9a-fA-F]{8}'"),
    ("unresolved_symbol", 20, r"use of undeclared identifier"),
    ("scalar_member", 30, r"member reference base type"),
    ("vector_storage", 40, r"array type .* is not assignable|vector"),
    ("float_pointer", 50, r"float.*pointer|pointer.*float"),
    ("stack_contract", 60, r"stack0x|in_stack_|register0x"),
    ("other", 90, r".*"),
)
# Stack/register pseudo-symbols take precedence even when diagnosed as undeclared.
STACK_RE = re.compile(r"stack0x|in_stack_|register0x|unaff_", re.I)
LOW_ADDR_RE = re.compile(r"(?:[uibp]Ram)000000[0-9a-fA-F]{2}", re.I)

def classify(errors):
    joined = "\n".join(errors)
    if STACK_RE.search(joined):
        return "stack_contract", 60
    if LOW_ADDR_RE.search(joined):
        return "low_address_guest", 70
    for category, priority, regex in RULES:
        if re.search(regex, joined, re.I):
            return category, priority
    return "other", 90

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("report", type=Path)
    parser.add_argument("-o", "--output", type=Path, default=Path("repair_queue.csv"))
    parser.add_argument("--limit", type=int, default=0, help="0 = all failing functions")
    args = parser.parse_args()
    report = json.loads(args.report.read_text(encoding="utf-8"))
    if not isinstance(report.get("results"), list) or not report.get("checked_commit_sha"):
        parser.error("not a full c11_sweep_report.json")
    rows = []
    for item in report["results"]:
        if item.get("status") != "fail":
            continue
        errors = item.get("errors", [])
        category, priority = classify(errors)
        rows.append({
            "entry": item["entry"],
            "category": category,
            "priority": priority,
            "error_count": len(errors),
            "first_error": errors[0] if errors else "",
            "audited_commit": report["checked_commit_sha"],
            "original_body_sha256": item.get("original_body_sha256", ""),
        })
    rows.sort(key=lambda r: (r["priority"], r["error_count"], r["entry"]))
    if args.limit:
        rows = rows[:args.limit]
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("w", newline="", encoding="utf-8") as f:
        writer = csv.DictWriter(f, fieldnames=list(rows[0]) if rows else [
            "entry", "category", "priority", "error_count", "first_error",
            "audited_commit", "original_body_sha256"])
        writer.writeheader()
        writer.writerows(rows)
    print(f"Audited commit: {report['checked_commit_sha']}")
    print(f"Queued {len(rows)} functions: {dict(sorted(Counter(r['category'] for r in rows).items()))}")
    print("Warning: source may have changed after audited commit; recheck main before edits.")
    print("Priority is triage order only; x86 evidence and a new compiler audit are required.")

if __name__ == "__main__":
    main()
