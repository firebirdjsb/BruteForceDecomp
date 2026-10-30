#!/usr/bin/env python3
"""Rank compiler failure root causes by distinct affected functions, not error lines.

Reports opportunities only. A shared C11 declaration must never be treated as
proof of original Xbox ABI, and this tool deliberately performs no source edits.
"""
import argparse
from collections import defaultdict
import csv
import json
import re
from pathlib import Path

PATTERNS = (
    ("x86_stack_register_contract", r"stack0x[0-9a-f]+|register0x[0-9a-f]+|unaff_[a-z0-9]+"),
    ("float_pointer_reconstruction", r"pointer cannot be cast to type 'float'|operand of type 'float' cannot be cast to a pointer type|double.*pointer|pointer.*double"),
    ("simd_storage_and_members", r"undefined1\[16\]|array type .* is not assignable|vector"),
    ("invalid_scalar_member", r"member reference base type"),
    ("xbox_d3d_device_global", r"undeclared identifier 'D3D8__D3D_g_pDevice'"),
    ("xbox_d3d_stream_global", r"undeclared identifier '(?:D3D8LTCG__)?D3D_g_Stream'"),
    ("xbox_d3d_texture_global", r"undeclared identifier 'D3D_g_DeferredTextureState'"),
    ("xbox_crt_file_type", r"unknown type name 'FILE'|undeclared identifier 'FILE'"),
    ("unresolved_global_or_function", r"undeclared identifier"),
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("report", type=Path)
    ap.add_argument("-o", "--output", type=Path, default=Path("root_cause_impact.csv"))
    args = ap.parse_args()
    report = json.loads(args.report.read_text(encoding="utf-8"))
    if not isinstance(report.get("results"), list) or not report.get("checked_commit_sha"):
        ap.error("requires complete C11 sweep JSON with checked_commit_sha")
    impacted = defaultdict(set)
    occurrences = defaultdict(int)
    examples = defaultdict(list)
    failing = set()
    for item in report["results"]:
        if item.get("status") != "fail":
            continue
        entry = item["entry"]
        failing.add(entry)
        for error in item.get("errors", []):
            matches = [name for name, regex in PATTERNS if re.search(regex, error, re.I)]
            if not matches:
                matches = ["other"]
            for name in matches:
                impacted[name].add(entry)
                occurrences[name] += 1
                if len(examples[name]) < 3 and entry not in examples[name]:
                    examples[name].append(entry)
    rows = [
        dict(root_cause=name, affected_functions=len(entries),
             diagnostic_occurrences=occurrences[name],
             example_entries=";".join(examples[name]),
             audited_commit=report["checked_commit_sha"],
             verification="original_x86_required")
        for name, entries in impacted.items()
    ]
    rows.sort(key=lambda row: (-row["affected_functions"], row["root_cause"]))
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("w", newline="", encoding="utf-8") as fp:
        writer = csv.DictWriter(fp, fieldnames=[
            "root_cause", "affected_functions", "diagnostic_occurrences",
            "example_entries", "audited_commit", "verification"])
        writer.writeheader()
        writer.writerows(rows)
    print(f"Audit {report['checked_commit_sha']}: {len(failing)} failing functions")
    for row in rows:
        print(f"{row['affected_functions']:4d} functions / {row['diagnostic_occurrences']:4d} errors: {row['root_cause']}")
    print("Categories overlap. Counts are not additive. No source repairs are inferred.")

if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

if __name__ == "__main__":
    main()
