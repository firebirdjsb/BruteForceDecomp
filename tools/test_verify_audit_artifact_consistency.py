#!/usr/bin/env python3
"""Synthetic audit-artifact corruption regression; original XBE not needed."""
from __future__ import annotations
import csv
import json
from pathlib import Path
from tempfile import TemporaryDirectory
from verify_audit_artifact_consistency import verify


def write_csv(path, fields, rows):
    with path.open("w", encoding="utf-8", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


with TemporaryDirectory() as directory:
    root = Path(directory)
    report = {
        "checked_commit_sha": "a" * 40, "source_tree_entries": 3,
        "group_index_present": True, "body_hash_mismatches": 0,
        "body_hash_missing": 0, "body_hash_unindexed": 0,
        "counts": {"pass": 1, "fail": 2},
        "results": [
            {"entry": "0x00000001", "status": "pass"},
            {"entry": "0x00000002", "status": "fail", "errors": ["use of undeclared identifier 'stack0xfffffffc'"]},
            {"entry": "0x00000003", "status": "fail", "errors": ["member reference base type 'undefined4' is not a structure or union"]},
        ],
    }
    summary = {
        "audited_commit": "a" * 40, "source_tree_entries": 3,
        "counts": {"pass": 1, "fail": 2},
        "classification_basis": "first recorded Clang C11 error only; not a verified root cause or runtime result",
        "first_error_categories": {"unresolved_stack": 1, "invalid_member_access": 1},
    }
    triage = [
        {"entry": "0x00000002", "category": "unresolved_stack", "first_error": report["results"][1]["errors"][0]},
        {"entry": "0x00000003", "category": "invalid_member_access", "first_error": report["results"][2]["errors"][0]},
    ]
    syntax = [{"entry": row["entry"], "status": "fail", "first_error": row["first_error"]} for row in triage]
    stack = [{"guest_identifier": "stack0xfffffffc", "signed_offset": "-4",
              "first_error_functions": "1", "entries": "0x00000002"}]
    (root / "c11_sweep_report.json").write_text(json.dumps(report), encoding="utf-8")
    (root / "failure_triage.json").write_text(json.dumps(summary), encoding="utf-8")
    write_csv(root / "syntax_failures.csv", ("entry", "status", "first_error"), syntax)
    write_csv(root / "failure_triage.csv", ("entry", "category", "first_error"), triage)
    write_csv(root / "guest_stack_offsets.csv",
              ("guest_identifier", "signed_offset", "first_error_functions", "entries"), stack)
    assert verify(root, expected_total=3) == {"pass": 1, "fail": 2, "stack": 1}

    def rejects(path, changed):
        original = path.read_text(encoding="utf-8")
        path.write_text(changed, encoding="utf-8")
        try:
            try:
                verify(root, expected_total=3)
            except ValueError:
                pass
            else:
                raise AssertionError(f"Corrupt audit accepted: {path.name}")
        finally:
            path.write_text(original, encoding="utf-8")

    for key, bad in (("body_hash_missing", 1), ("group_index_present", False),
                     ("counts", {"pass": 2, "fail": 1})):
        rejects(root / "c11_sweep_report.json", json.dumps(dict(report, **{key: bad})))
    rejects(root / "failure_triage.json", json.dumps(dict(summary, audited_commit="b" * 40)))
    rejects(root / "failure_triage.json",
            json.dumps(dict(summary, first_error_categories={"unresolved_stack": 2})))
    rejects(root / "syntax_failures.csv", "entry,status,first_error\n")
    rejects(root / "failure_triage.csv", "entry,category,first_error\n")
    rejects(root / "guest_stack_offsets.csv", "guest_identifier,signed_offset,first_error_functions,entries\n")
    rejects(root / "guest_stack_offsets.csv",
            "guest_identifier,signed_offset,first_error_functions,entries\nstack0xfffffffc,-8,1,0x00000002\n")
    rejects(root / "failure_triage.csv",
            "entry,category,first_error\n0x00000002,unresolved_stack,use of undeclared identifier 'stack0xfffffffc'\n0x00000002,invalid_member_access,bad\n")
    # Prior to category recomputation, coordinated corruption of both the
    # triage CSV and its summary could hide a genuine unresolved stack error.
    # Preserve the Clang diagnostic while falsifying only its category.
    bad_triage = [dict(row) for row in triage]
    bad_triage[0]["category"] = "other_first_error"
    bad_summary = dict(summary, first_error_categories={
        "other_first_error": 1, "invalid_member_access": 1,
    })
    write_csv(root / "failure_triage.csv",
              ("entry", "category", "first_error"), bad_triage)
    (root / "failure_triage.json").write_text(json.dumps(bad_summary), encoding="utf-8")
    try:
        try:
            verify(root, expected_total=3)
        except ValueError:
            pass
        else:
            raise AssertionError("Coordinated diagnostic misclassification was accepted")
    finally:
        write_csv(root / "failure_triage.csv",
                  ("entry", "category", "first_error"), triage)
        (root / "failure_triage.json").write_text(json.dumps(summary), encoding="utf-8")
    assert verify(root, expected_total=3) == {"pass": 1, "fail": 2, "stack": 1}
    print("PASS: artifact consistency and 11 synthetic corruption cases")
