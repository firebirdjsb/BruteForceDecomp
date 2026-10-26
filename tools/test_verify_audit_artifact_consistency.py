#!/usr/bin/env python3
"""Synthetic audit-artifact corruption regression; original XBE not needed."""
from __future__ import annotations
import csv
import hashlib
import json
from pathlib import Path
from tempfile import TemporaryDirectory
from verify_audit_artifact_consistency import verify
from source_layout import source_path


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
        "c_source_hash_drift": 1,
        "results": [
            {"entry": "0x00000001", "status": "pass"},
            {"entry": "0x00000002", "status": "fail", "errors": ["use of undeclared identifier 'stack0xfffffffc'"]},
            {"entry": "0x00000003", "status": "fail", "errors": ["member reference base type 'undefined4' is not a structure or union"]},
        ],
    }
    # A historical source hash can legitimately drift after a reviewed repair.
    for row in report["results"]:
        row.update(body_provenance="match", original_body_sha256="A" * 64,
                   c_sha256_actual="b" * 64, c_sha256_matches_inventory=True)
    report["results"][0]["c_sha256_matches_inventory"] = False
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
    for field, bad in (("body_provenance", "mismatch"),
                       ("original_body_sha256", "not-a-digest"),
                       ("c_sha256_actual", ""),
                       ("c_sha256_matches_inventory", "false")):
        broken = json.loads(json.dumps(report))
        broken["results"][0][field] = bad
        rejects(root / "c11_sweep_report.json", json.dumps(broken))
    rejects(root / "c11_sweep_report.json", json.dumps(dict(report, c_source_hash_drift=0)))
    rejects(root / "c11_sweep_report.json", json.dumps(dict(report, c_source_hash_drift=True)))
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
    # The source-only artifact must also agree with the canonical repository
    # inventory, not merely be internally self-consistent.
    canonical_path = root / "canonical_inventory.csv"
    columns = ("entry", "original_body_sha256", "c_sha256")
    canonical = [
        {"entry": row["entry"], "original_body_sha256": "A" * 64,
         "c_sha256": ("c" if index == 0 else "b") * 64}
        for index, row in enumerate(report["results"])
    ]
    write_csv(canonical_path, columns, canonical)
    assert verify(root, expected_total=3, inventory_path=canonical_path) == {
        "pass": 1, "fail": 2, "stack": 1,
    }

    def rejects_inventory(rows):
        write_csv(canonical_path, columns, rows)
        try:
            try:
                verify(root, expected_total=3, inventory_path=canonical_path)
            except ValueError:
                pass
            else:
                raise AssertionError("Corrupt canonical inventory accepted")
        finally:
            write_csv(canonical_path, columns, canonical)

    broken = [dict(row) for row in canonical]
    broken[0]["original_body_sha256"] = "d" * 64
    rejects_inventory(broken)
    broken = [dict(row) for row in canonical]
    broken[1]["c_sha256"] = "d" * 64
    rejects_inventory(broken)
    rejects_inventory(canonical[:-1])
    broken = [dict(row) for row in canonical]
    broken[1]["entry"] = broken[0]["entry"]
    rejects_inventory(broken)
    broken = [dict(row) for row in canonical]
    broken[1]["entry"] = "0x00000004"
    rejects_inventory(broken)

    # Unlike the generic corruption helper, these are coordinated report
    # changes that remain internally consistent but contradict the inventory.
    broken_report = json.loads(json.dumps(report))
    broken_report["results"][0]["c_sha256_matches_inventory"] = True
    broken_report["c_source_hash_drift"] = 0
    report_path = root / "c11_sweep_report.json"
    altered_body = json.loads(json.dumps(report))
    altered_body["results"][1]["original_body_sha256"] = "d" * 64
    original_report = report_path.read_text(encoding="utf-8")
    report_path.write_text(json.dumps(altered_body), encoding="utf-8")
    try:
        try:
            verify(root, expected_total=3, inventory_path=canonical_path)
        except ValueError:
            pass
        else:
            raise AssertionError("Altered original body digest accepted")
    finally:
        report_path.write_text(original_report, encoding="utf-8")
    original_report = report_path.read_text(encoding="utf-8")
    report_path.write_text(json.dumps(broken_report), encoding="utf-8")
    try:
        try:
            verify(root, expected_total=3, inventory_path=canonical_path)
        except ValueError:
            pass
        else:
            raise AssertionError("Coordinated false C-source drift accepted")
    finally:
        report_path.write_text(original_report, encoding="utf-8")

    # A self-consistent artifact can be stale or describe different C bytes.
    # Bind every compiler record to the exact source checkout and Git commit.
    checkout = root / "synthetic_checkout"
    (checkout / "metadata").mkdir(parents=True)
    (checkout / "metadata" / "asm_supported_readable_names.csv").write_text(
        "entry,readable_alias\n", encoding="utf-8"
    )
    checkout_report = json.loads(json.dumps(report))
    checkout_inventory = []
    for index, row in enumerate(checkout_report["results"]):
        path = source_path(checkout, row["entry"])
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(f"/* audited source {row['entry']} */\n".encode("ascii"))
        digest = hashlib.sha256(path.read_bytes()).hexdigest()
        row["c_sha256_actual"] = digest
        row["c_sha256_matches_inventory"] = index != 0
        checkout_inventory.append({
            "entry": row["entry"],
            "original_body_sha256": "A" * 64,
            "c_sha256": "c" * 64 if index == 0 else digest,
        })
    (root / "c11_sweep_report.json").write_text(
        json.dumps(checkout_report), encoding="utf-8"
    )
    write_csv(canonical_path, columns, checkout_inventory)
    assert verify(root, expected_total=3, inventory_path=canonical_path,
                  expected_commit="a" * 40, source_root=checkout) == {
                      "pass": 1, "fail": 2, "stack": 1,
                  }
    try:
        verify(root, expected_total=3, inventory_path=canonical_path,
               expected_commit="b" * 40, source_root=checkout)
    except ValueError:
        pass
    else:
        raise AssertionError("Stale audit commit accepted")
    first_path = source_path(checkout, checkout_report["results"][0]["entry"])
    original_bytes = first_path.read_bytes()
    first_path.write_bytes(original_bytes + b"/* post-audit mutation */\n")
    try:
        try:
            verify(root, expected_total=3, inventory_path=canonical_path,
                   expected_commit="a" * 40, source_root=checkout)
        except ValueError:
            pass
        else:
            raise AssertionError("Source modified after audit was accepted")
    finally:
        first_path.write_bytes(original_bytes)
    assert verify(root, expected_total=3, inventory_path=canonical_path,
                  expected_commit="a" * 40, source_root=checkout)["fail"] == 2

    print("PASS: artifact consistency, synthetic corruption cases, canonical "
          "inventory, exact checked-out commit and source-byte binding")
