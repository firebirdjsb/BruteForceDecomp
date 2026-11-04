#!/usr/bin/env python3
"""Positive, ordering, exact-source, stale-audit and duplicate controls."""
from __future__ import annotations
import copy
import importlib.util
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts" / "prioritize_cpp_declaration_edges.py"
spec = importlib.util.spec_from_file_location("bf_priority", SCRIPT)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


def check() -> None:
    sha = "a" * 40
    results = []
    for i in range(13694):
        entry = f"0x{i + 0x10000:08x}"
        results.append({"entry": entry, "source": f"src/{entry}.cpp",
                        "source_sha256": "b" * 64, "original_body_sha256": "c" * 64,
                        "errors": ["one"] if i in (1, 3) else ["one", "two"]})
    audit = {"scope": "full_inventory", "checked": 13694,
             "original_function_count": 13694, "checked_commit_sha": sha,
             "counts": {"pass": 13694, "fail": 0}, "results": results}
    def row(i, arity=1):
        r = results[i]
        return {"caller": r["entry"], "callee": results[0]["entry"],
                "source": r["source"], "source_sha256": r["source_sha256"],
                "original_body_sha256": r["original_body_sha256"],
                "caller_draft_arity": arity,
                "triage": module.ELIGIBLE}
    edges = {"audited_commit": sha, "candidates": [row(2, 0), row(3, 2), row(1, 0)]}
    out = module.prioritize(audit, edges)
    assert [x["caller"] for x in out["candidates"]] == [row(1)["caller"], row(3)["caller"], row(2)["caller"]]
    assert out["priority_summary"] == {"eligible": 3, "eligible_single_error": 2,
                                       "first_400_eligible_single_error": 2}
    assert edges["candidates"][0] == row(2, 0), "must not mutate input"
    for field, replacement in [("audited_commit", "d" * 40)]:
        bad = copy.deepcopy(edges)
        bad[field] = replacement
        try:
            module.prioritize(audit, bad)
        except ValueError:
            pass
        else:
            raise AssertionError("stale audit accepted")
    bad = copy.deepcopy(edges)
    bad["candidates"].append(row(2, 0))
    try:
        module.prioritize(audit, bad)
    except ValueError:
        pass
    else:
        raise AssertionError("duplicate candidate accepted")
    bad = copy.deepcopy(edges)
    bad["candidates"][0]["source_sha256"] = "f" * 64
    try:
        module.prioritize(audit, bad)
    except ValueError:
        pass
    else:
        raise AssertionError("source drift accepted")
    print("PASS: deterministic single-error priority, no mutation, SHA mismatch, duplicates, source drift")


if __name__ == "__main__":
    check()
