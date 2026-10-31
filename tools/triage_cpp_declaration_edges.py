#!/usr/bin/env python3
"""Read-only, SHA-gated triage of undeclared original-address C++ calls.

An arity match is ONLY a comparison of Ghidra drafts, never an Xbox ABI,
linkage, or 1:1 behavioral certification. No source edits are performed.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
from collections import Counter
from pathlib import Path

from source_layout import relative_source_path

ERROR = re.compile(r"^use of undeclared identifier '(FUN_([0-9a-f]{8}))'$", re.I)
BODY = re.compile(r"Input x86 body SHA-256:\s*([0-9a-f]{64})", re.I)


def argument_count(text: str, open_paren: int) -> int | None:
    """Count top-level C-style arguments; reject incomplete/unbalanced calls."""
    if open_paren >= len(text) or text[open_paren] != "(":
        return None
    depth = 0
    commas = 0
    has_token = False
    quote = None
    escaped = False
    for char in text[open_paren:]:
        if quote:
            if escaped:
                escaped = False
            elif char == "\\":
                escaped = True
            elif char == quote:
                quote = None
            continue
        if char in ("'", '"'):
            quote = char
        elif char == "(":
            depth += 1
        elif char == ")":
            depth -= 1
            if depth == 0:
                return 0 if not has_token else commas + 1
            if depth < 0:
                return None
        elif depth == 1:
            if char == ",":
                commas += 1
            elif not char.isspace():
                has_token = True
    return None


def callee_draft_arity(text: str, symbol: str) -> int | None:
    # Restrict to a top-level definition with a one-line signature, followed
    # by its opening brace. Complex declarators are deliberately deferred.
    pattern = re.compile(r"(?m)^\s*[^\n;{}]+\b" + re.escape(symbol) + r"\s*\(")
    candidates = []
    for match in pattern.finditer(text):
        opening = text.find("(", match.start(), match.end())
        closing = text.find(")", opening)
        if closing < 0 or "(" in text[opening + 1:closing]:
            continue
        if not re.match(r"\s*\{", text[closing + 1:]):
            continue
        args = text[opening + 1:closing].strip()
        if args == "void" or not args:
            candidates.append(0)
        else:
            candidates.append(argument_count("(" + args + ")", 0))
    return candidates[0] if len(candidates) == 1 else None


def recorded_edges(path: Path) -> set[tuple[str, str]]:
    if not path.is_file():
        return set()
    with path.open(newline="", encoding="utf-8") as stream:
        return {
            (row["caller_entry"].lower(), row["callee_entry"].lower())
            for row in csv.DictReader(stream)
            if re.fullmatch(r"0x[0-9a-f]{8}", row["caller_entry"].lower())
            and re.fullmatch(r"0x[0-9a-f]{8}", row["callee_entry"].lower())
        }


def triage(root: Path, audit: dict, limit: int | None = None) -> dict:
    if audit.get("scope") != "full_inventory" or audit.get("checked") != 13694:
        raise ValueError("Requires a completed 13,694-entry full_inventory audit")
    results = audit.get("results")
    if not isinstance(results, list) or len(results) != 13694:
        raise ValueError("Incomplete exact-tree C++17 audit results")
    if len({row.get("entry") for row in results}) != 13694:
        raise ValueError("Duplicate or missing original-address audit entries")
    audited_sha = audit.get("checked_commit_sha")
    if not re.fullmatch(r"[0-9a-f]{40}", str(audited_sha or "")):
        raise ValueError("Missing exact audited commit SHA")
    edges = recorded_edges(root / "metadata/x86_verified_call_edges.csv")
    rows = []
    for result in results:
        if result.get("status") != "fail":
            continue
        errors = result.get("errors", [])
        if not errors:
            continue
        match = ERROR.fullmatch(errors[0])
        if not match:
            continue
        entry, symbol, callee = result["entry"].lower(), match[1], "0x" + match[2].lower()
        path = root / result["source"]
        row = {"caller": entry, "callee": callee, "source": result["source"],
               "source_sha256": result["source_sha256"],
               "original_body_sha256": result["original_body_sha256"],
               "recorded_x86_edge_partial": (entry, callee) in edges,
               "abi_status": "ABI_UNVERIFIED", "link_status": "NOT_LINK_TESTED",
               "behavior_status": "NOT_BEHAVIOR_TESTED"}
        if not path.is_file():
            row["triage"] = "MISSING_CALLER_SOURCE"
        else:
            content = path.read_bytes()
            body = content.decode("utf-8")
            label = BODY.search(body)
            if hashlib.sha256(content).hexdigest() != result["source_sha256"]:
                row["triage"] = "STALE_SOURCE"
            elif not label or label[1].upper() != result["original_body_sha256"].upper() or f"Entry: {entry}" not in body:
                row["triage"] = "PROVENANCE_MISMATCH"
            else:
                call = re.search(r"\b" + re.escape(symbol) + r"\s*\(", body)
                caller_arity = argument_count(body, body.find("(", call.start(), call.end())) if call else None
                callee_path = root / relative_source_path(root, callee)
                if not call or caller_arity is None:
                    row["triage"] = "CALL_UNPARSEABLE"
                elif not callee_path.is_file():
                    row["triage"] = "CALLEE_SOURCE_MISSING"
                else:
                    draft_arity = callee_draft_arity(callee_path.read_text(encoding="utf-8"), symbol)
                    row["caller_draft_arity"] = caller_arity
                    row["callee_draft_arity"] = draft_arity
                    if draft_arity is None:
                        row["triage"] = "CALLEE_DRAFT_UNPARSEABLE"
                    elif caller_arity != draft_arity:
                        row["triage"] = "DRAFT_ARITY_MISMATCH"
                    else:
                        row["triage"] = "DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE"
        rows.append(row)
        if limit is not None and len(rows) >= limit:
            break
    return {"schema_version": 1, "meaning": "Read-only C++17 draft triage, not Xbox ABI/linkage/behavior proof",
            "audited_commit": audited_sha, "audit_checked": audit["checked"],
            "reviewed": len(rows), "categories": dict(sorted(Counter(r["triage"] for r in rows).items())),
            "candidates": rows}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--audit", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--limit", type=int)
    args = parser.parse_args()
    if args.limit is not None and args.limit <= 0:
        parser.error("--limit must be positive")
    result = triage(args.root.resolve(), json.loads(args.audit.read_text(encoding="utf-8")), args.limit)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(f"Audited {result['audited_commit']}; triaged {result['reviewed']} first-error calls: {result['categories']}")


if __name__ == "__main__":
    main()
