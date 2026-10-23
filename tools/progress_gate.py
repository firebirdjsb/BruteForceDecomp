#!/usr/bin/env python3
"""Decide whether a completed full audit may replace published README metrics.

Publish exact run-scoped results if their workflow-run ID is newer than the
currently published report, even when main has advanced while an audit ran.
A newer published audit is never overwritten by an older finishing job.
The report parser separately validates the 13694 original function identities,
source hashes, and audited commit at publication time.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path


def should_publish(existing: dict, incoming_run_id: int) -> bool:
    if type(incoming_run_id) is not int or incoming_run_id <= 0:
        raise ValueError("Invalid incoming GitHub Actions run identifier")
    current = existing.get("workflow_run_id")
    if type(current) is not int or current <= 0:
        raise ValueError("Published progress has no trusted run identifier")
    if existing.get("total") != 13694:
        raise ValueError("Published progress source inventory changed")
    return incoming_run_id > current


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--current", type=Path, required=True)
    parser.add_argument("--run-id", type=int, required=True)
    parser.add_argument("--github-output", type=Path)
    args = parser.parse_args()
    state = json.loads(args.current.read_text(encoding="utf-8"))
    eligible = should_publish(state, args.run_id)
    result = "true" if eligible else "false"
    print(f"Eligible newer completed audit: {result} (audited commit is reported separately)")
    if args.github_output:
        with args.github_output.open("a", encoding="utf-8") as out:
            out.write(f"use_report={result}\n")


if __name__ == "__main__":
    main()
