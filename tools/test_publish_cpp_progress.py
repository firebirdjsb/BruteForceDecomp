#!/usr/bin/env python3
"""No-XBE, synthetic corruption tests for exact C++ progress publication."""
import sys
import tempfile
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from publish_cpp_progress import COUNT, snapshot, update
sha = "a" * 40
rows = [
    {"entry": f"0x{i+0x12000:08x}", "source": f"src/mock/0x{i+0x12000:08x}.cpp",
     "status": "pass" if i % 2 == 0 else "fail", "body_provenance": "match"}
    for i in range(COUNT)
]
report = {
    "checked_commit_sha": sha, "scope": "full_inventory", "checked": COUNT,
    "original_function_count": COUNT, "counts": {"pass": COUNT//2, "fail": COUNT//2},
    "results": rows,
}
state = snapshot(report, sha, 42)
assert state["metric"].find("C++17") >= 0
for bad in (
    {**report, "scope": "sample"},
    {**report, "checked": 100},
    {**report, "checked_commit_sha": "b"*40},
    {**report, "counts": {"pass": COUNT, "fail": 0}},
    {**report, "counts": {"pass": COUNT//2, "fail": COUNT//2, "check_error": 0}},
    {**report, "results": rows[:-1]},
):
    try:
        snapshot(bad, sha, 42)
    except ValueError:
        pass
    else:
        raise AssertionError("Invalid C++ progress accepted")
with tempfile.TemporaryDirectory() as temp:
    root = Path(temp)
    (root / "docs/progress").mkdir(parents=True)
    (root / "README.md").write_text("start\n<!-- BF_PROGRESS_START -->\nold\n<!-- BF_PROGRESS_END -->\nend\n")
    update(root, state)
    result = (root / "README.md").read_text()
    assert "C++17 syntax coverage" in result
    assert "c11-syntax.svg" not in result
    assert "50.00%" in (root / "docs/progress/cpp-syntax.svg").read_text()
    assert "C++" in (root / "docs/progress/current.json").read_text()
print("PASS: exact source-count C++ syntax progress and corruption regression checks")
