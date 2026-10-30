#!/usr/bin/env python3
"""Historical C11 publication consistency regression checks; not active C++ coverage."""
from __future__ import annotations

import json
from pathlib import Path
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
from check_published_progress import check_historical_c11 as check


def fixture(root: Path) -> dict:
    s = {
        'audited_commit': 'a' * 40, 'workflow_run_id': 40136081026,
        'total': 13694, 'passing': 13250, 'failing': 444, 'other': 0,
        'percentage': 96.76, 'roadmap_percentage': 13.82,
        'roadmap_method': 'seven_equal_phases_syntax_fraction_six_unverified_zero_credited',
        'body_hash_mismatches': 0, 'body_hash_missing': 0,
        'native_pc_build': 'not_yet_buildable_or_playable',
    }
    p = root / 'docs/progress'
    p.mkdir(parents=True)
    (p / 'current.json').write_text(json.dumps(s))
    (root / 'README.md').write_text('''<!-- BF_PROGRESS_START -->
**96.76% C11 syntax coverage** · **13,250 / 13,694** individually checked functions · **444** still fail.
**Overall tracked roadmap: 13.82%**
![C11 source syntax coverage: 96.76%](docs/progress/c11-syntax.svg)
![Overall roadmap tracking: 13.82%](docs/progress/overall.svg)
/commit/''' + 'a' * 40 + '''
/actions/runs/40136081026
Native PC game: NOT buildable/playable yet.
<!-- BF_PROGRESS_END -->''')
    (p / 'c11-syntax.svg').write_text('C11 syntax coverage: 96.76 percent\n13250 out of 13694 source drafts\n13,250 / 13,694 syntax passing · 444 remaining')
    (p / 'overall.svg').write_text('BruteForce Reloaded tracked roadmap: 13.82 percent')
    return s


with tempfile.TemporaryDirectory() as tmp:
    root = Path(tmp)
    state = fixture(root)
    check(root)
    p = root / 'docs/progress/current.json'
    for field, value in [('passing', 13251), ('percentage', 96.75),
                         ('roadmap_percentage', 13.81), ('body_hash_mismatches', 1),
                         ('audited_commit', 'not_a_sha'), ('other', 1)]:
        changed = {**state, field: value}
        p.write_text(json.dumps(changed))
        try:
            check(root)
        except ValueError:
            pass
        else:
            raise AssertionError(f'Invalid {field}={value!r} accepted')
    p.write_text(json.dumps(state))
    readme = root / 'README.md'
    good = readme.read_text()
    for changed in (good.replace('444** still fail', '443** still fail'),
                    good.replace('/actions/runs/40136081026', '/actions/runs/1'),
                    good.replace('13.82%**', '13.83%**')):
        readme.write_text(changed)
        try:
            check(root)
        except ValueError:
            pass
        else:
            raise AssertionError('Mismatched README accepted')
    readme.write_text(good)
    svg = root / 'docs/progress/c11-syntax.svg'
    svg.write_text(svg.read_text().replace('444 remaining', '443 remaining'))
    try:
        check(root)
    except ValueError:
        pass
    else:
        raise AssertionError('Mismatched SVG accepted')
print('PASS: published progress consistency and deliberate corruption tests')
