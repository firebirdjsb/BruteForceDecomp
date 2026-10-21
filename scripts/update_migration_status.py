#!/usr/bin/env python3
"""Refresh the C11 migration index from source files. No behavioral verification implied."""
import argparse
import csv
import hashlib
import json
from pathlib import Path
import re

def read_index(root):
    csv_path = root / "metadata" / "legacy_drafts.csv"
    full_path = root / "metadata" / "legacy_draft_inventory.json"
    rows = None
    if csv_path.exists():
        with csv_path.open(newline="", encoding="utf-8-sig") as stream:
            rows = {r["entry"].lower(): r["body_sha256"].upper() for r in csv.DictReader(stream)}
    if full_path.exists():
        other = {r["entry"].lower(): r["body_sha256"].upper()
                 for r in json.loads(full_path.read_text(encoding="utf-8"))["records"]}
        if rows is not None and rows != other:
            raise ValueError("Legacy draft inventories disagree")
        rows = other
    if not rows:
        raise ValueError("No legacy draft inventory")
    return rows

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    root = p.parse_args().root
    rows = []
    for entry, expected_hash in sorted(read_index(root).items()):
        if not re.fullmatch(r"0x[0-9a-f]{8}", entry) or not re.fullmatch(r"[0-9A-F]{64}", expected_hash):
            raise ValueError("Invalid identity in index: " + entry)
        file = root / "src" / (entry + ".c")
        item = {"entry": entry, "original_body_sha256": expected_hash,
                "c11_status": "C11_Pending", "review_status": "Unverified"}
        if file.exists():
            source = file.read_text(encoding="utf-8")
            m = re.search(r"Original body SHA-256:\s*([A-Fa-f0-9]{64})", source)
            if not m or m.group(1).upper() != expected_hash:
                raise ValueError("Provenance mismatch: " + str(file))
            item["c11_status"] = "C11_Draft"
            item["c_sha256"] = hashlib.sha256(file.read_bytes()).hexdigest()
        rows.append(item)
    result = {"schema_version": 1,
              "original_xbe_sha256": "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721",
              "ghidra_discovered_functions": 13694, "legacy_drafts": len(rows),
              "c11_drafts": sum(r["c11_status"] == "C11_Draft" for r in rows),
              "pending_c_conversion": sum(r["c11_status"] == "C11_Pending" for r in rows),
              "behaviorally_verified": 0, "records": rows}
    (root / "metadata" / "migration_status.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(f'C11 drafts: {result["c11_drafts"]}/{len(rows)}; pending: {result["pending_c_conversion"]}')

if __name__ == "__main__":
    main()
