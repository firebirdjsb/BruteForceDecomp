#!/usr/bin/env python3
"""Check that every local input executed by the full C11 audit triggers that workflow.

Source-only CI safeguard; this does not verify original Xbox instructions.
"""
import re
from pathlib import Path

WORKFLOW = Path(".github/workflows/full-c11-inventory.yml")
LOCAL_SOURCE = re.compile(
    r"(?<![\w./-])(?:tools|scripts|tests)/[A-Za-z0-9_.-]+"
    r"(?:/[A-Za-z0-9_.-]+)*\.(?:py|c|S)\b"
)
PATH_ITEM = re.compile(r"^\s+- ['\"]([^'\"]+)['\"]\s*$", re.MULTILINE)


def uncovered_inputs(workflow_text):
    """Return referenced local source/test inputs absent from push path filters."""
    push_start = workflow_text.find("    paths:\n")
    dispatch_start = workflow_text.find("  workflow_dispatch:", push_start)
    if push_start < 0 or dispatch_start < 0:
        raise ValueError("Cannot locate push path filters and workflow_dispatch")
    filters = set(PATH_ITEM.findall(workflow_text[push_start:dispatch_start]))
    if not filters:
        raise ValueError("Full audit has no push path filters")
    inputs = set(LOCAL_SOURCE.findall(workflow_text[dispatch_start:]))
    if not inputs:
        raise ValueError("Full audit has no local source/test inputs")
    return sorted(path for path in inputs if path not in filters and not any(
        rule.endswith("/**") and path.startswith(rule[:-3] + "/")
        for rule in filters
    ))


def main():
    workflow_text = WORKFLOW.read_text(encoding="utf-8")
    missing = uncovered_inputs(workflow_text)
    if missing:
        raise SystemExit("Full-audit push filters omit local inputs: " + ", ".join(missing))
    for target in ("tools/test_x86_float_lanes.c", "tools/test_full_audit_path_filters.py"):
        original = f"      - '{target}'\n"
        if original not in workflow_text:
            raise SystemExit("Missing expected push path: " + target)
        damaged = workflow_text.replace(original, "", 1)
        if target not in uncovered_inputs(damaged):
            raise SystemExit("Path-filter regression test failed for " + target)
    print("Full C11 audit: every referenced local source/test input triggers on push")


if __name__ == "__main__":
    main()
