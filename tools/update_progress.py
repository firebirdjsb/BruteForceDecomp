#!/usr/bin/env python3
"""Update README and docs/progress from an exact successful full-C11 audit report.

Counts represent *isolated host syntax*, not original Xbox ABI/semantics, link,
assets or runnable native PC game. No network operations or game binaries.
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

EXPECTED = 13694
ROADMAP_STAGE_COUNT = 7  # Equal-weight planning proxy; not measured game completion.
START = "<!-- BF_PROGRESS_START -->"
END = "<!-- BF_PROGRESS_END -->"
SHA = re.compile(r"[a-fA-F0-9]{40}\Z")


def snapshot(report: dict, run_id: int, expected_sha: str) -> dict:
    sha = report.get("checked_commit_sha", "")
    if not SHA.fullmatch(sha) or sha.lower() != expected_sha.lower():
        raise ValueError("Audit commit SHA does not match the trusted workflow run")
    if report.get("source_tree_entries") != EXPECTED:
        raise ValueError("Source count does not match original 13694-function inventory")
    if any(report.get(field) != 0 for field in ("body_hash_mismatches", "body_hash_missing", "body_hash_unindexed")):
        raise ValueError("Original body provenance failed; cannot publish progress")
    if report.get("group_index_present") is not True:
        raise ValueError("Missing complete function-group index; cannot publish progress")
    counts = report.get("counts", {})
    passing, failing = counts.get("pass"), counts.get("fail")
    if set(counts) != {"pass", "fail"} or type(passing) is not int or type(failing) is not int:
        raise ValueError("Incomplete syntax result")
    other = EXPECTED - passing - failing
    if min(passing, failing, other) < 0 or other != 0:
        raise ValueError("Missing, duplicate or unclassified source status")
    if type(run_id) is not int or run_id <= 0:
        raise ValueError("Invalid workflow run identifier")
    return {
        "schema_version": 1,
        "metric": "isolated host Clang C11 syntax coverage",
        "audited_commit": sha.lower(),
        "workflow_run_id": run_id,
        "total": EXPECTED,
        "passing": passing,
        "failing": failing,
        "other": other,
        "percentage": round(100 * passing / EXPECTED, 2),
        "roadmap_percentage": round(100 * passing / (EXPECTED * ROADMAP_STAGE_COUNT), 2),
        "roadmap_method": "seven_equal_phases_syntax_fraction_six_unverified_zero_credited",
        "body_hash_mismatches": 0,
        "body_hash_missing": 0,
        # Operand evidence in individual notes is not a complete contract census.
        "verified_instruction_contracts": None,
        "verified_interfaces": None,
        "verification_counts_scope": "whole_function_counts_not_comprehensively_audited",
        "native_pc_build": "not_yet_buildable_or_playable",
    }


def progress_svg(s: dict) -> str:
    passes, total, fails = s["passing"], s["total"], s["failing"]
    pct = f'{s["percentage"]:.2f}'
    width = f"{744 * passes / total:.2f}"
    return f'''<svg xmlns="http://www.w3.org/2000/svg" width="800" height="160" viewBox="0 0 800 160" role="img" aria-labelledby="title desc">
<title id="title">C11 syntax coverage: {pct} percent</title>
<desc id="desc">{passes} out of {total} source drafts pass isolated host C11 syntax checks; {fails} fail. The native PC game is not buildable.</desc>
<rect width="800" height="160" rx="14" fill="#0f172a"/>
<text x="28" y="42" fill="#e2e8f0" font-family="system-ui,Segoe UI,sans-serif" font-weight="700" font-size="21">C11 syntax coverage</text>
<text x="772" y="42" fill="#7dd3fc" font-family="system-ui,Segoe UI,sans-serif" font-weight="700" font-size="29" text-anchor="end">{pct}%</text>
<rect x="28" y="69" width="744" height="22" rx="11" fill="#334155"/>
<rect x="28" y="69" width="{width}" height="22" rx="11" fill="#38bdf8"/>
<text x="28" y="119" fill="#cbd5e1" font-family="system-ui,Segoe UI,sans-serif" font-size="16">{passes:,} / {total:,} syntax passing · {fails:,} remaining</text>
<text x="28" y="144" fill="#94a3b8" font-family="system-ui,Segoe UI,sans-serif" font-size="12">Syntax only · no linked or playable native PC game yet</text>
</svg>
'''



def roadmap_svg(s: dict) -> str:
    """Seven-stage planning indicator, never a claim of playable-game completion."""
    pct = f'{s["roadmap_percentage"]:.2f}'
    width = f'{744 * s["roadmap_percentage"] / 100:.2f}'
    return f'''<svg xmlns="http://www.w3.org/2000/svg" width="800" height="160" viewBox="0 0 800 160" role="img" aria-labelledby="title desc">
<title id="title">BruteForce Reloaded tracked roadmap: {pct} percent</title>
<desc id="desc">Seven equal phases: C11 syntax pass fraction credited to one, six not yet verified. Planning proxy only, not verified game completion.</desc>
<rect width="800" height="160" rx="14" fill="#0f172a"/>
<text x="28" y="42" fill="#e2e8f0" font-family="system-ui,Segoe UI,sans-serif" font-weight="700" font-size="21">Overall roadmap tracking</text>
<text x="772" y="42" fill="#fbbf24" font-family="system-ui,Segoe UI,sans-serif" font-weight="700" font-size="29" text-anchor="end">{pct}%</text>
<rect x="28" y="69" width="744" height="22" rx="11" fill="#334155"/>
<rect x="28" y="69" width="{width}" height="22" rx="11" fill="#f59e0b"/>
<text x="28" y="119" fill="#cbd5e1" font-family="system-ui,Segoe UI,sans-serif" font-size="16">7 equal phases · syntax partially credited · 6 unverified</text>
<text x="28" y="144" fill="#94a3b8" font-family="system-ui,Segoe UI,sans-serif" font-size="12">Conservative milestone proxy · not verified game completion</text>
</svg>
'''


def readme_section(s: dict) -> str:
    sha, run_id = s["audited_commit"], s["workflow_run_id"]
    p, t, f = s["passing"], s["total"], s["failing"]
    pct = f'{s["percentage"]:.2f}'
    overall_pct = f'{s["roadmap_percentage"]:.2f}'
    return f'''{START}
## Reconstruction progress

[![C11 source audit](https://github.com/firebirdjsb/BruteForceDecomp/actions/workflows/full-c11-inventory.yml/badge.svg?branch=main)](https://github.com/firebirdjsb/BruteForceDecomp/actions/workflows/full-c11-inventory.yml)

![Overall roadmap tracking: {overall_pct}%](docs/progress/overall.svg)

**Overall tracked roadmap: {overall_pct}%** (conservative milestone indicator, **not verified game completion**). Seven equally weighted phases: the audited C11 syntax pass fraction contributes to one phase, while the other six are unverified and receive zero completion credit until evidence-based metrics exist. This is a planning proxy, not a verified 1:1 or playable-game percentage.

![C11 source syntax coverage: {pct}%](docs/progress/c11-syntax.svg)

**{pct}% C11 syntax coverage** · **{p:,} / {t:,}** individually checked functions · **{f:,}** still fail. [Exact audited commit](https://github.com/firebirdjsb/BruteForceDecomp/commit/{sha}) · [GitHub Actions report](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/{run_id}).

**Native PC game: NOT buildable/playable yet.** A syntax pass is not Xbox ABI verification, cross-function linking, platform compatibility, or a 1:1 match. This percentage is **not** game-completion percentage.

**Fully verified instruction contracts / interfaces:** not yet comprehensively counted. Partial operand and storage evidence is recorded per entry; it is not credited as whole-function verification.

| Roadmap phase | Credited progress |
| --- | --- |
| 1. Isolated host C11 syntax | {pct}% source drafts passing |
| 2. Original Xbox ABI, types and structures | Unverified |
| 3. Cross-function linking | Unverified |
| 4. Original 1:1 behavioral testing | Unverified |
| 5. Xbox-to-Windows platform services | Unverified |
| 6. Playable native Windows baseline | Unverified |
| 7. Optional Reloaded enhancements | Unverified |

[Machine-readable progress](docs/progress/current.json) · [Detailed status](docs/STATUS.md) · [Native PC milestones](docs/NATIVE_PC_PORT_GOALS.md)

{END}'''


def update(root: Path, state: dict, *, historical_archive: bool = False) -> None:
    """Historical renderer: explicit opt-in and an archive destination only."""
    root = Path(root).resolve()
    repository = Path(__file__).resolve().parents[1]
    archive = repository / 'docs/archive'
    if (not historical_archive or root == repository or
            not any(part.lower() in {'archive', 'archives'} for part in root.parts) or
            (repository in root.parents and archive not in (root, *root.parents))):
        raise ValueError('Historical C11 rendering requires an explicit archive destination; active progress is C++ only')
    readme = root / "README.md"
    current = readme.read_text(encoding="utf-8")
    if current.count(START) != 1 or current.count(END) != 1:
        raise ValueError("Exactly one pair of README progress markers is required")
    before, following = current.split(START, 1)
    _, after = following.split(END, 1)
    changed = before + readme_section(state) + after
    folder = root / "docs/progress"
    folder.mkdir(parents=True, exist_ok=True)
    readme.write_text(changed, encoding="utf-8")
    (folder / "current.json").write_text(json.dumps(state, indent=2) + "\n", encoding="utf-8")
    (folder / "c11-syntax.svg").write_text(progress_svg(state), encoding="utf-8")
    (folder / "overall.svg").write_text(roadmap_svg(state), encoding="utf-8")


def main() -> None:
    """The old command name now publishes only the exact C++ audit schema."""
    from publish_cpp_progress import main as publish_cpp_main
    publish_cpp_main()


if __name__ == "__main__":
    main()
