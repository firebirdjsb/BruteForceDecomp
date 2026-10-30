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
import tempfile
from publish_cpp_progress import update as publish_cpp, progress_svg, overall_svg

EXPECTED_TOTAL = 13694
START = '<!-- BF_PROGRESS_START -->'
END = '<!-- BF_PROGRESS_END -->'
SHA = re.compile(r'[0-9a-f]{40}\Z')


def check_historical_c11(root: Path) -> None:
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


def check(root: Path) -> None:
    """Validate only the canonical C++ publication; never reinterpret C11 counts."""
    state = json.loads((root / 'docs/progress/current.json').read_text(encoding='utf-8'))
    known_statuses = {'complete_host_cpp_syntax_audit',
                      'last_confirmed_full_cpp_audit_newer_source_reaudit_required'}
    if state.get('schema_version') != 2 or state.get('status') not in known_statuses:
        raise ValueError('Active progress requires a complete C++ audit, not historical C11 counts')
    if not SHA.fullmatch(state.get('audited_commit', '')):
        raise ValueError('Missing complete audited commit identity')
    run = state.get('workflow_run_id')
    if type(run) is not int or run <= 0:
        raise ValueError('Missing positive completed-audit workflow run ID')
    passing, failing, total = (state.get(k) for k in ('passing', 'failing', 'total'))
    if any(type(n) is not int or n < 0 for n in (passing, failing, total)) or total != EXPECTED_TOTAL or passing + failing != total:
        raise ValueError('C++ publication must have exactly 13,694 terminal compiler results')
    if state.get('body_hash_mismatches') != 0 or state.get('native_pc_build') != 'not_yet_buildable_or_playable':
        raise ValueError('C++ provenance/build boundary changed')
    if state.get('roadmap_method') != 'seven_equal_phases_cpp_syntax_fraction_six_unverified_zero_credited':
        raise ValueError('C++ roadmap must not credit historical C11 results')
    if state.get('percentage') != round(100 * passing / total, 2) or state.get('roadmap_percentage') != round(100 * passing / (total * 7), 2):
        raise ValueError('Published C++ percentages do not derive from compiler counts')
    text = (root / 'README.md').read_text(encoding='utf-8')
    if text.count(START) != 1 or text.count(END) != 1:
        raise ValueError('README requires one unique progress section')
    section = text.split(START, 1)[1].split(END, 1)[0]
    if state['status'] == 'last_confirmed_full_cpp_audit_newer_source_reaudit_required':
        # Preserve the separately labelled last-confirmed audit while newer
        # source awaits its own full report. Do not turn it into current coverage.
        pct, roadmap, sha = state['percentage'], state['roadmap_percentage'], state['audited_commit']
        required = (f'Last confirmed full C++17 syntax audit: {pct:.2f}%',
                    f'{passing:,} / {total:,} passing; {failing:,} failing',
                    f'/commit/{sha}', f'/actions/runs/{run}',
                    'Newer source repairs are awaiting their own full audit.',
                    f'roadmap proxy: {roadmap:.2f}%',
                    'not actual game completion', 'NOT yet buildable or playable')
        if any(token not in section for token in required):
            raise ValueError('Last-confirmed C++ README counts/identity/boundary are inconsistent')
        syntax = (root/'docs/progress/cpp-syntax.svg').read_text(encoding='utf-8')
        roadmap_svg = (root/'docs/progress/overall.svg').read_text(encoding='utf-8')
        syntax_tokens = (f'C++17 syntax coverage: {pct:.2f} percent',
                         f'{passing} of {total}', f'{passing:,} / {total:,}', sha[:7])
        # Existing last-confirmed artwork uses the displayed rounded percent;
        # the publisher uses the exact fraction. Both represent these counts.
        syntax_width_ok = any(f'width="{width:.2f}"' in syntax
                              for width in (744 * passing / total, 744 * pct / 100))
        roadmap_tokens = (f'roadmap tracking: {roadmap:.2f} percent',
                          f'width="{744 * roadmap / 100:.2f}"', 'not verified game completion')
        if not syntax_width_ok or any(token not in syntax for token in syntax_tokens) or any(token not in roadmap_svg for token in roadmap_tokens):
            raise ValueError('Last-confirmed C++ SVG counts/identity/boundary are inconsistent')
        return
    with tempfile.TemporaryDirectory(prefix='bf_cpp_publication_') as directory:
        temp = Path(directory)
        (temp / 'docs/progress').mkdir(parents=True)
        (temp / 'README.md').write_text(START + END, encoding='utf-8')
        publish_cpp(temp, state)
        expected = (temp / 'README.md').read_text(encoding='utf-8').split(START, 1)[1].split(END, 1)[0]
    if section != expected:
        raise ValueError('README C++ progress section differs from the exact publisher output')
    for name, expected in (('cpp-syntax.svg', progress_svg(state)), ('overall.svg', overall_svg(state))):
        if (root / 'docs/progress' / name).read_text(encoding='utf-8') != expected:
            raise ValueError(f'C++ publication SVG is out of sync: {name}')


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
