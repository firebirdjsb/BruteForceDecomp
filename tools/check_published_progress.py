#!/usr/bin/env python3
"""Fail closed if the published README, JSON and progress SVGs disagree.

This verifies publication consistency, NOT whether a Clang audit or XBE
instruction contract is valid. The full-audit report remains the source of
truth for progress generation via tools/update_progress.py.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
import re

EXPECTED_TOTAL = 13694
START = '<!-- BF_PROGRESS_START -->'
END = '<!-- BF_PROGRESS_END -->'
SHA = re.compile(r'[0-9a-f]{40}\Z')


def check(root: Path) -> None:
    state = json.loads((root / 'docs/progress/current.json').read_text(encoding='utf-8'))
    sha = state.get('audited_commit')
    run = state.get('workflow_run_id')
    if not isinstance(sha, str) or not SHA.fullmatch(sha):
        raise ValueError('Missing complete audited commit identity')
    if type(run) is not int or run <= 0:
        raise ValueError('Missing positive completed-audit workflow run ID')
    passing, failing, total = (state.get(k) for k in ('passing', 'failing', 'total'))
    if any(type(n) is not int or n < 0 for n in (passing, failing, total)):
        raise ValueError('Invalid audited function counts')
    if total != EXPECTED_TOTAL or passing + failing != total or state.get('other') != 0:
        raise ValueError('Published audit must have exactly 13,694 terminal results')
    if state.get('body_hash_mismatches') != 0 or state.get('body_hash_missing') != 0:
        raise ValueError('Published audit has missing or mismatched provenance')
    if state.get('native_pc_build') != 'not_yet_buildable_or_playable':
        raise ValueError('Unexpected native-build status')
    pct = round(100 * passing / total, 2)
    overall = round(100 * passing / (total * 7), 2)
    if state.get('percentage') != pct or state.get('roadmap_percentage') != overall:
        raise ValueError('Published percentages do not derive from audited counts')
    if state.get('roadmap_method') != 'seven_equal_phases_syntax_fraction_six_unverified_zero_credited':
        raise ValueError('Unexpected roadmap crediting method')
    readme = (root / 'README.md').read_text(encoding='utf-8')
    if readme.count(START) != 1 or readme.count(END) != 1:
        raise ValueError('README must contain one progress section')
    section = readme.split(START, 1)[1].split(END, 1)[0]
    required = (
        f'**{pct:.2f}% C11 syntax coverage** · **{passing:,} / {total:,}** individually checked functions · **{failing:,}** still fail.',
        f'**Overall tracked roadmap: {overall:.2f}%**',
        f'![C11 source syntax coverage: {pct:.2f}%](docs/progress/c11-syntax.svg)',
        f'![Overall roadmap tracking: {overall:.2f}%](docs/progress/overall.svg)',
        f'/commit/{sha}',
        f'/actions/runs/{run}',
        'Native PC game: NOT buildable/playable yet.',
    )
    for token in required:
        if token not in section:
            raise ValueError(f'README progress section is out of sync: {token!r}')
    syntax_svg = (root / 'docs/progress/c11-syntax.svg').read_text(encoding='utf-8')
    overall_svg = (root / 'docs/progress/overall.svg').read_text(encoding='utf-8')
    for token in (f'C11 syntax coverage: {pct:.2f} percent',
                  f'{passing} out of {total} source drafts',
                  f'{passing:,} / {total:,} syntax passing · {failing:,} remaining'):
        if token not in syntax_svg:
            raise ValueError(f'C11 SVG is out of sync: {token!r}')
    if f'BruteForce Reloaded tracked roadmap: {overall:.2f} percent' not in overall_svg:
        raise ValueError('Roadmap SVG is out of sync')


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    try:
        check(args.root)
    except (ValueError, OSError, KeyError, TypeError) as exc:
        parser.exit(1, f'FAIL: published progress mismatch: {exc}\n')
    print('PASS: published README, JSON, and both SVGs agree with audited counts (not XBE verification)')


if __name__ == '__main__':
    main()
