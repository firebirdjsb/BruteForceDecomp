#!/usr/bin/env python3
"""Triage isolated Clang C++17 failures, never treating syntax as Xbox ABI proof."""
from __future__ import annotations
import argparse
import csv
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

RULES = (
    ("guest_pointer_width", (r"cast from pointer to smaller type", r"loses information", r"cast to (?:smaller|larger) integer type", r"pointer.*(?:32|64)-bit", r"integer to pointer cast")),
    ("call_signature", (r"too (?:few|many) arguments", r"no matching function for call", r"candidate function not viable", r"no matching member function", r"called object type", r"does not provide a call operator", r"cannot initialize a parameter of type", r"incompatible function pointer types")),
    ("member_or_object_layout", (r"no member named", r"member reference base type", r"member access into incomplete type", r"non-static member function", r"invalid use of non-static data member")),
    ("pointer_or_storage_type", (r"(?:cannot|cast).*pointer type", r"incompatible pointer", r"indirection requires pointer", r"subscripted value is not an array", r"no viable conversion from .* to .*\*", r"cannot initialize .*\*.* with")),
    ("missing_declaration_or_type", (r"use of undeclared identifier", r"unknown type name", r"undeclared (?:identifier|function)", r"incomplete type", r"does not name a type")),
    ("scalar_or_expression_type", (r"cannot convert", r"cannot initialize", r"no viable conversion", r"invalid operands to binary expression", r"ambiguous conversion")),
    ("cpp_language_or_syntax", (r"expected (?:expression|identifier|semicolon|\)|\})", r"redefinition of", r"conflicting types for", r"not allowed in c\+\+", r"requires a type specifier")),
)
PATTERNS = [(category, [re.compile(p, re.I) for p in patterns]) for category, patterns in RULES]


def classify(error: str) -> str:
    for category, patterns in PATTERNS:
        if any(pattern.search(error) for pattern in patterns):
            return category
    return "other_cpp_diagnostic"


def triage(report: dict) -> tuple[dict, list[dict]]:
    results = report.get("results")
    if not isinstance(results, list) or report.get("checked") != len(results):
        raise ValueError("incomplete per-function C++ audit report")
    counts, categories, seen, queue = Counter(), Counter(), set(), []
    examples = defaultdict(list)
    for row in results:
        entry, status = row.get("entry", ""), row.get("status", "")
        if not re.fullmatch(r"0x[0-9a-f]{8}", entry) or entry in seen:
            raise ValueError("duplicate or invalid original x86 entry address")
        seen.add(entry)
        if status not in ("pass", "fail", "provenance_error", "check_error"):
            raise ValueError(f"invalid audit status for {entry}")
        counts[status] += 1
        if status == "pass":
            continue
        first = (row.get("errors") or [row.get("diagnostic", "")])[0]
        category = classify(first) if status == "fail" else status
        categories[category] += 1
        item = dict(entry=entry, source=row.get("source", ""), status=status,
                    category=category, first_error=first.replace("\n", " ")[:900])
        queue.append(item)
    original_counts = report.get("counts", {})
    if any(original_counts.get(k, 0) != n for k, n in counts.items()) or any(
        original_counts.get(k, 0) for k in set(original_counts) - set(counts)
    ):
        raise ValueError("aggregate audit counts disagree with function statuses")
    queue.sort(key=lambda item: (item["category"], item["entry"]))
    for item in queue:
        if len(examples[item["category"]]) < 5:
            examples[item["category"]].append(dict(entry=item["entry"], first_error=item["first_error"]))
    summary = {
        "schema_version": 1,
        "meaning": "Compiler triage only; not original Xbox ABI, object, or behavior verification",
        "audit_scope": report.get("scope"),
        "audited_commit": report.get("checked_commit_sha"),
        "checked": len(results),
        "statuses": dict(sorted(counts.items())),
        "categories": dict(sorted(categories.items(), key=lambda v: (-v[1], v[0]))),
        "examples": dict(examples),
    }
    return summary, queue


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--report", type=Path, required=True)
    parser.add_argument("--out", type=Path, default=Path("cpp_compat_results"))
    args = parser.parse_args()
    summary, queue = triage(json.loads(args.report.read_text(encoding="utf-8")))
    args.out.mkdir(parents=True, exist_ok=True)
    (args.out / "cpp_failure_groups.json").write_text(
        json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    with (args.out / "cpp_repair_queue.csv").open("w", newline="", encoding="utf-8") as stream:
        writer = csv.DictWriter(stream, fieldnames=("entry", "source", "status", "category", "first_error"))
        writer.writeheader()
        writer.writerows(queue)
    print(f"Classified {len(queue)} non-passing function drafts; "
          f"scope={summary['audit_scope']}, commit={summary['audited_commit']}")
    for category, count in summary["categories"].items():
        print(f"  {category}: {count}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
