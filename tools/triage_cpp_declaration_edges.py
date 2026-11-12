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

# Only the first symbol identifies the missing call. Clang's optional spelling
# suggestion is diagnostic text, never a replacement callee or ABI evidence.
# Keep this bounded and full-matched: arbitrary diagnostic suffixes are deferred.
ERROR = re.compile(
    r"^use of undeclared identifier '(FUN_([0-9a-f]{8}))'"
    r"(?:; did you mean 'FUN_[0-9a-f]{8}'\?)?$", re.I)
BODY = re.compile(r"Input x86 body SHA-256:\s*([0-9a-f]{64})", re.I)


def argument_count(text: str, open_paren: int) -> int | None:
    """Count bounded C-style argument slots, not arbitrary C++ expressions.

    Ignore comments and quoted punctuation, and balance (), [] and {}. Reject
    malformed slots/delimiters rather than manufacturing an arity match. This
    lexical heuristic is not a C++ parser or evidence of a guest call contract.
    """
    if open_paren < 0 or open_paren >= len(text) or text[open_paren] != "(":
        return None
    stack = [")"]
    commas = 0
    has_token = False
    index = open_paren + 1
    while index < len(text):
        char = text[index]
        if char.isspace():
            index += 1
            continue
        if text.startswith("//", index):
            newline = text.find("\n", index + 2)
            if newline < 0:
                return None
            # Backslash-newline splicing needs a full preprocessing lexer.
            if text[index:newline].rstrip("\r").endswith("\\"):
                return None
            index = newline + 1
            continue
        if text.startswith("/*", index):
            closing = text.find("*/", index + 2)
            if closing < 0:
                return None
            index = closing + 2
            continue
        if char in ("'", '"'):
            # Raw strings have different terminators; defer rather than guess.
            if char == '"' and index > 0 and text[index - 1] == "R":
                return None
            quote = char
            has_token = True
            index += 1
            while index < len(text):
                if text[index] == "\\":
                    index += 2
                elif text[index] == quote:
                    index += 1
                    break
                elif text[index] in "\r\n":
                    return None
                else:
                    index += 1
            else:
                return None
            continue
        if char in "([{":
            stack.append({"(": ")", "[": "]", "{": "}"}[char])
            has_token = True
        elif char in ")]}":
            if char != stack[-1]:
                return None
            stack.pop()
            if not stack:
                if not has_token:
                    return 0 if commas == 0 else None
                return commas + 1
        elif char == "," and len(stack) == 1:
            if not has_token:
                return None
            commas += 1
            has_token = False
        else:
            has_token = True
        index += 1
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
    audit_by_entry = {row["entry"].lower(): row for row in results}
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
                    # A source-matched caller is not sufficient: the callee must
                    # also belong to this exact audited tree, with unchanged
                    # bytes and its original XBE body-digest label intact.
                    callee_audit = audit_by_entry.get(callee)
                    if not callee_audit or callee_audit.get("source") != callee_path.relative_to(root).as_posix():
                        row["triage"] = "CALLEE_AUDIT_ENTRY_MISSING_OR_PATH_MISMATCH"
                    else:
                        callee_bytes = callee_path.read_bytes()
                        if hashlib.sha256(callee_bytes).hexdigest() != callee_audit.get("source_sha256"):
                            row["triage"] = "STALE_CALLEE_SOURCE"
                        else:
                            callee_body = callee_bytes.decode("utf-8")
                            callee_label = BODY.search(callee_body)
                            if (not callee_label or
                                callee_label[1].upper() != str(callee_audit.get("original_body_sha256", "")).upper() or
                                f"Entry: {callee}" not in callee_body):
                                row["triage"] = "CALLEE_PROVENANCE_MISMATCH"
                            else:
                                draft_arity = callee_draft_arity(callee_body, symbol)
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
