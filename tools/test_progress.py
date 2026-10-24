#!/usr/bin/env python3
"""No-XBE deterministic tests for the public source progress renderer."""
import json
import sys
import tempfile
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from update_progress import snapshot, update, progress_svg, roadmap_svg, START, END
sha = "a" * 40
report = {
    "checked_commit_sha": sha,
    "source_tree_entries": 13694,
    "counts": {"pass": 12391, "fail": 1303},
    "body_hash_mismatches": 0,
    "body_hash_missing": 0,
}
state = snapshot(report, 39992327184, sha)
assert state["percentage"] == 90.48
assert state["verified_instruction_contracts"] is None
assert state["verified_interfaces"] is None
assert state["roadmap_percentage"] == round(100 * 12391 / (13694 * 7), 2)
assert "roadmap" in roadmap_svg(state).lower()
assert "90.48%" in progress_svg(state)
for bad in (
    {**report, "checked_commit_sha": "b" * 40},
    {**report, "source_tree_entries": 13693},
    {**report, "body_hash_mismatches": 1},
    {**report, "counts": {"pass": 13695, "fail": 0}},
    {**report, "counts": {"pass": 12, "fail": 2}},
):
    try:
        snapshot(bad, 42, sha)
    except ValueError:
        pass
    else:
        raise AssertionError(f"Unsafe report accepted: {bad}")
with tempfile.TemporaryDirectory() as directory:
    root = Path(directory)
    original = f'# Test project\n\n{START}\nold\n{END}\n\nfooter\n'
    (root / "README.md").write_text(original, encoding="utf-8")
    update(root, state)
    assert (root / "README.md").read_text(encoding="utf-8").count(START) == 1
    assert (root / "README.md").read_text(encoding="utf-8").endswith("\n\nfooter\n")
    assert (root / "docs/progress/current.json").exists()
    assert json.loads((root / "docs/progress/current.json").read_text())["passing"] == 12391
    assert json.loads((root / "docs/progress/current.json").read_text())["roadmap_percentage"] == state["roadmap_percentage"]
    assert "90.48%" in (root / "docs/progress/c11-syntax.svg").read_text()
    assert f'{state["roadmap_percentage"]:.2f}%' in (root / "docs/progress/overall.svg").read_text()
    assert "Overall tracked roadmap" in (root / "README.md").read_text()
    assert "not yet comprehensively counted" in (root / "README.md").read_text()
print("Progress renderer: exact audit gate, markers, and deterministic SVG verified.")
