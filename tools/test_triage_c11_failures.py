#!/usr/bin/env python3
"""Synthetic first-error triage regression; does not require an XBE."""
from __future__ import annotations

from copy import deepcopy
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
from triage_c11_failures import category, triage

sha = "a" * 40
entries = [f"0x{i:08x}" for i in range(0x10000, 0x10000 + 13694)]
results = [{"entry": entry, "status": "pass"} for entry in entries]
examples = [
    ("use of undeclared identifier 'stack0xffffff94'", "unresolved_stack"),
    ("member reference base type 'undefined4' is not a structure or union", "invalid_member_access"),
    ("operand of type 'float' cannot be cast to a pointer type", "invalid_float_pointer_cast"),
    ("use of undeclared identifier 'LAB_00316530'", "unresolved_label"),
]
for index, (error, expected) in enumerate(examples):
    assert category(error) == expected
    results[index].update(status="fail", errors=[error])
report = {"checked_commit_sha": sha, "source_tree_entries": 13694,
          "body_hash_mismatches": 0, "body_hash_missing": 0,
          "counts": {"pass": 13690, "fail": 4}, "results": results}
summary, rows = triage(report)
assert summary["counts"] == {"fail": 4, "pass": 13690}
assert sum(summary["first_error_categories"].values()) == 4
assert [row["entry"] for row in rows] == entries[:4]
for mutation in (
    lambda x: x["counts"].update(fail=3),
    lambda x: x.update(body_hash_missing=1),
    lambda x: x.update(checked_commit_sha="not-a-commit"),
    lambda x: x["results"].pop(),
    lambda x: x["results"][1].update(entry=x["results"][0]["entry"]),
    lambda x: x["results"][0].pop("errors"),
):
    damaged = deepcopy(report)
    mutation(damaged)
    try:
        triage(damaged)
    except ValueError:
        pass
    else:
        raise AssertionError("Unsafe or incomplete audit was accepted")
print("First-error triage: categories, 13,694 identities and six fail-closed cases passed")
