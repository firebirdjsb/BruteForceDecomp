#!/usr/bin/env python3
"""Synthetic tests for audit-run freshness ordering, without internet or XBE."""
import json
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from progress_gate import should_publish, main

original = {"workflow_run_id": 40008850189, "total": 13694}
assert should_publish(original, 40020522532)
assert not should_publish(original, 40008850189)
assert not should_publish(original, 40007500000)
assert not should_publish({**original, "workflow_run_id": 40020522532}, 40020321101)
for bad, incoming in [
    ({**original, "total": 13693}, 40020522532),
    ({**original, "workflow_run_id": "40008850189"}, 40020522532),
    (original, 0),
    (original, True),
]:
    try:
        should_publish(bad, incoming)
    except ValueError:
        continue
    raise AssertionError("Unsafe freshness state was accepted")
with tempfile.TemporaryDirectory() as scratch:
    root = Path(scratch)
    current = root / "current.json"
    output = root / "GITHUB_OUTPUT"
    current.write_text(json.dumps(original), encoding="utf-8")
    sys.argv = ["progress_gate.py", "--current", str(current),
                "--run-id", "40020522532", "--github-output", str(output)]
    main()
    assert output.read_text(encoding="utf-8") == "use_report=true\n"
    current.write_text(json.dumps({**original, "workflow_run_id": 40020522532}), encoding="utf-8")
    sys.argv = ["progress_gate.py", "--current", str(current),
                "--run-id", "40020522532", "--github-output", str(output)]
    main()
    assert output.read_text(encoding="utf-8").endswith("use_report=false\n")
print("Progress freshness gate: synthetic ordering and GitHub output passed.")
