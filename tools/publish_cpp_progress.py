#!/usr/bin/env python3
"""Publish measured C++17-only syntax coverage from an exact full-tree audit.

This is syntax-only: Xbox C++ ABI, object vtables, linking, and execution are
not verified by these counts. A sample must never become a public percentage.
"""
import argparse
import json
import re
from pathlib import Path

COUNT = 13694
SHA = re.compile(r"[0-9a-fA-F]{40}\Z")
ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
START = "<!-- BF_PROGRESS_START -->"
END = "<!-- BF_PROGRESS_END -->"

def snapshot(report, expected_sha, run_id):
    if not SHA.fullmatch(expected_sha) or report.get("checked_commit_sha", "").lower() != expected_sha.lower():
        raise ValueError("C++ audit does not match the exact source commit")
    if report.get("scope") != "full_inventory" or report.get("checked") != COUNT or report.get("original_function_count") != COUNT:
        raise ValueError("Not a complete 13,694-function C++ audit")
    counts = report.get("counts", {})
    if not isinstance(counts, dict) or set(counts) - {"pass", "fail"}:
        raise ValueError("Unexpected C++ audit status")
    passes, fails = counts.get("pass", 0), counts.get("fail", 0)
    if type(passes) is not int or type(fails) is not int or passes < 0 or fails < 0 or passes + fails != COUNT:
        raise ValueError("C++ audit has incomplete compiler results")
    rows = report.get("results", [])
    if not isinstance(rows, list) or len(rows) != COUNT:
        raise ValueError("Missing per-function C++ audit provenance")
    seen = set()
    checked = {"pass": 0, "fail": 0}
    for row in rows:
        addr = row.get("entry", "")
        if not ENTRY.fullmatch(addr) or addr in seen:
            raise ValueError("Missing or duplicate original function address")
        seen.add(addr)
        if row.get("body_provenance") != "match" or row.get("status") not in checked:
            raise ValueError("Original XBE hash mismatch, compiler error, or incomplete check")
        if not row.get("source", "").endswith("/" + addr + ".cpp"):
            raise ValueError("C++ function path is missing or incorrect")
        checked[row["status"]] += 1
    if checked != {"pass": passes, "fail": fails}:
        raise ValueError("Per-function check results disagree with summary")
    if type(run_id) is not int or run_id <= 0:
        raise ValueError("Missing GitHub Actions workflow run ID")
    return {
        "schema_version": 2,
        "status": "complete_host_cpp_syntax_audit",
        "metric": "isolated Clang C++17 syntax of 13,694 source drafts",
        "audited_commit": expected_sha.lower(),
        "workflow_run_id": run_id,
        "total": COUNT,
        "passing": passes,
        "failing": fails,
        "percentage": round(100 * passes / COUNT, 2),
        "roadmap_percentage": round(100 * passes / (COUNT * 7), 2),
        "roadmap_method": "seven_equal_phases_cpp_syntax_fraction_six_unverified_zero_credited",
        "body_hash_mismatches": 0,
        "verified_instruction_contracts": None,
        "verified_interfaces": None,
        "native_pc_build": "not_yet_buildable_or_playable",
    }

def progress_svg(state):
    pct = state["percentage"]
    width = 744 * state["passing"] / COUNT
    return f'''<svg xmlns="http://www.w3.org/2000/svg" width="800" height="160" viewBox="0 0 800 160" role="img" aria-labelledby="title desc">
<title id="title">C++17 syntax coverage: {pct:.2f} percent</title>
<desc id="desc">{state["passing"]} of {COUNT} source drafts pass isolated Clang C++17 syntax; {state["failing"]} fail. No ABI or gameplay verification.</desc>
<rect width="800" height="160" rx="14" fill="#0f172a"/>
<text x="28" y="42" fill="#e2e8f0" font-family="system-ui,Segoe UI,sans-serif" font-size="21" font-weight="700">C++17 syntax coverage</text>
<text x="772" y="42" fill="#7dd3fc" font-family="system-ui,Segoe UI,sans-serif" font-weight="700" font-size="29" text-anchor="end">{pct:.2f}%</text>
<rect x="28" y="69" width="744" height="22" rx="11" fill="#334155"/>
<rect x="28" y="69" width="{width:.2f}" height="22" rx="11" fill="#38bdf8"/>
<text x="28" y="119" fill="#cbd5e1" font-family="system-ui,Segoe UI,sans-serif" font-size="16">{state["passing"]:,} / {COUNT:,} C++ syntax passing · {state["failing"]:,} failing</text>
<text x="28" y="144" fill="#94a3b8" font-family="system-ui,Segoe UI,sans-serif" font-size="12">Syntax only · no proven Xbox object ABI or playable native PC game</text>
</svg>
'''

def overall_svg(state):
    pct = state["roadmap_percentage"]
    width = 744 * pct / 100
    return f'''<svg xmlns="http://www.w3.org/2000/svg" width="800" height="160" viewBox="0 0 800 160" role="img" aria-labelledby="title desc">
<title id="title">BruteForce Reloaded planning roadmap: {pct:.2f} percent</title>
<desc id="desc">C++ syntax credits one of seven equal phases; six game/ABI phases remain unverified. Not game completion.</desc>
<rect width="800" height="160" rx="14" fill="#0f172a"/>
<text x="28" y="42" fill="#e2e8f0" font-family="system-ui,Segoe UI,sans-serif" font-size="21" font-weight="700">Overall roadmap tracking</text>
<text x="772" y="42" fill="#fbbf24" font-family="system-ui,Segoe UI,sans-serif" font-size="29" text-anchor="end">{pct:.2f}%</text>
<rect x="28" y="69" width="744" height="22" rx="11" fill="#334155"/>
<rect x="28" y="69" width="{width:.2f}" height="22" rx="11" fill="#f59e0b"/>
<text x="28" y="119" fill="#cbd5e1" font-family="system-ui,Segoe UI,sans-serif" font-size="16">C++ parser stage partially credited · six unverified stages</text>
<text x="28" y="144" fill="#94a3b8" font-family="system-ui,Segoe UI,sans-serif" font-size="12">Conservative milestone proxy · not actual game completion</text>
</svg>
'''

def update(root, state):
    readme = root / "README.md"
    text = readme.read_text(encoding="utf-8")
    if text.count(START) != 1 or text.count(END) != 1:
        raise ValueError("Missing unique progress markers")
    sha = state["audited_commit"]
    run_id = state["workflow_run_id"]
    p, f, pct = state["passing"], state["failing"], state["percentage"]
    roadmap = state["roadmap_percentage"]
    section = f'''{START}
## Reconstruction progress

[![C++ source audit](https://github.com/firebirdjsb/BruteForceDecomp/actions/workflows/cpp-compatibility-audit.yml/badge.svg?branch=main)](https://github.com/firebirdjsb/BruteForceDecomp/actions/workflows/cpp-compatibility-audit.yml)

![C++17 syntax coverage: {pct:.2f}%](docs/progress/cpp-syntax.svg)

**{pct:.2f}% C++17 syntax coverage** · **{p:,} / {COUNT:,}** function drafts passing · **{f:,}** failing. [Exact audited commit](https://github.com/firebirdjsb/BruteForceDecomp/commit/{sha}) · [Audit run](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/{run_id}).

![Overall roadmap tracking: {roadmap:.2f}%](docs/progress/overall.svg)

**Overall tracked roadmap: {roadmap:.2f}%**. This is a seven-stage planning indicator crediting *only* the C++ syntax fraction of stage one; the other six stages are not verified. **It is not verified game completion.**

**Native PC game: NOT buildable/playable yet.** Original Xbox C++ object layouts, virtual dispatch, guest ABI, cross-function linkage, platform services and 1:1 behavior still require evidence.

[Machine-readable C++ progress](docs/progress/current.json) · [C++ migration](docs/CPP_MIGRATION.md) · [Native PC milestones](docs/NATIVE_PC_PORT_GOALS.md)

{END}'''
    before, after = text.split(START, 1)
    _, following = after.split(END, 1)
    readme.write_text(before + section + following, encoding="utf-8")
    folder = root / "docs/progress"
    (folder / "current.json").write_text(json.dumps(state, indent=2) + "\n", encoding="utf-8")
    (folder / "cpp-syntax.svg").write_text(progress_svg(state), encoding="utf-8")
    (folder / "overall.svg").write_text(overall_svg(state), encoding="utf-8")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", required=True, type=Path)
    ap.add_argument("--root", default=Path(__file__).resolve().parents[1], type=Path)
    ap.add_argument("--expected-sha", required=True)
    ap.add_argument("--run-id", required=True, type=int)
    args = ap.parse_args()
    report = json.loads(args.report.read_text(encoding="utf-8"))
    state = snapshot(report, args.expected_sha, args.run_id)
    update(args.root, state)
    print(f"Published exact C++17 audit: {state['passing']} / {COUNT} ({state['percentage']:.2f}%)")

if __name__ == "__main__":
    main()
