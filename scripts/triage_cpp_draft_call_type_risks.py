#!/usr/bin/env python3
"""Read-only exact-source C++17 declaration dry-run; NOT Xbox ABI evidence.

A matching draft arity is insufficient: inserting the actual callee draft's
signature often exposes pointer-width, return-value or argument-type errors.
This gate finds such false positives *without* changing canonical sources.
"""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys
import tempfile

ELIGIBLE = "DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE"
ENTRY = re.compile(r"0x[0-9a-f]{8}\Z")
COMMIT = re.compile(r"[0-9a-f]{40}\Z")
SHA256 = re.compile(r"[0-9a-fA-F]{64}\Z")


def validate_audit(audit: dict, edges: dict) -> dict[str, dict]:
    """Reject incomplete or contradictory audit metadata before any dry-run.

    This checks report consistency only. Selected caller/callee source bytes
    are still checked separately; metadata is not original-XBE evidence.
    """
    if not isinstance(audit, dict) or not isinstance(edges, dict):
        raise ValueError("audit and declaration triage must be JSON objects")
    if (audit.get("scope") != "full_inventory" or audit.get("checked") != 13694
            or audit.get("original_function_count") != 13694
            or audit.get("passing_is_not_1_to_1") is not True):
        raise ValueError("requires completed 13,694-function syntax-only audit")
    sha = audit.get("checked_commit_sha")
    if not isinstance(sha, str) or not COMMIT.fullmatch(sha):
        raise ValueError("missing or invalid exact audited commit SHA")
    if edges.get("audited_commit") != sha:
        raise ValueError("audit and declaration triage SHAs disagree")
    rows = audit.get("results")
    if not isinstance(rows, list) or len(rows) != 13694:
        raise ValueError("missing or duplicate canonical audit entries")
    results = {}
    counts = Counter()
    for row in rows:
        if not isinstance(row, dict):
            raise ValueError("invalid per-function audit result")
        entry = row.get("entry")
        if not isinstance(entry, str) or not ENTRY.fullmatch(entry) or entry in results:
            raise ValueError("invalid or duplicate canonical audit identity")
        if row.get("status") not in ("pass", "fail") or row.get("body_provenance") != "match":
            raise ValueError("incomplete compiler status or unmatched provenance")
        for field in ("source_sha256", "original_body_sha256"):
            value = row.get(field)
            if not isinstance(value, str) or not SHA256.fullmatch(value):
                raise ValueError("missing or invalid audit source/body digest")
        if not isinstance(row.get("source"), str) or not row["source"]:
            raise ValueError("missing audit source path")
        errors = row.get("errors", [])
        if not isinstance(errors, list) or any(not isinstance(error, str) for error in errors):
            raise ValueError("invalid compiler diagnostic list")
        results[entry] = row
        counts[row["status"]] += 1
    reported = audit.get("counts")
    if (not isinstance(reported, dict) or set(reported) - {"pass", "fail"}
            or any(type(reported.get(status, 0)) is not int
                   or reported.get(status, 0) != counts[status] for status in ("pass", "fail"))):
        raise ValueError("syntax counts disagree with per-function results")
    candidates = edges.get("candidates")
    if not isinstance(candidates, list):
        raise ValueError("missing declaration candidates")
    seen = set()
    for edge in candidates:
        if not isinstance(edge, dict):
            raise ValueError("invalid declaration candidate")
        caller, callee = edge.get("caller"), edge.get("callee")
        if (not isinstance(caller, str) or not isinstance(callee, str)
                or not ENTRY.fullmatch(caller) or not ENTRY.fullmatch(callee)):
            raise ValueError("invalid declaration candidate identity")
        pair = (caller, callee)
        if pair in seen or caller not in results:
            raise ValueError("duplicate or missing declaration candidate identity")
        seen.add(pair)
        source = results[caller]
        errors = source.get("errors", [])
        if (source["status"] != "fail" or not errors
                or not re.fullmatch(r"use of undeclared identifier 'FUN_" + re.escape(callee[2:]) + "'",
                                    errors[0], flags=re.I)):
            raise ValueError("candidate does not identify the caller's first undeclared-call error")
        if any(edge.get(field) != source[field] for field in
               ("source", "source_sha256", "original_body_sha256")):
            raise ValueError("candidate caller does not match exact audit source")
        if edge.get("triage") == ELIGIBLE:
            if callee not in results:
                raise ValueError("missing eligible callee audit identity")
            arity = edge.get("caller_draft_arity")
            if type(arity) is not int or arity < 0:
                raise ValueError("invalid eligible draft arity")
    return results


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def definition(source: str, entry: str) -> str | None:
    # A definition, never an extern prototype; preserve exact draft types.
    rx = re.compile(
        rf"(?m)^[ \t]*(?P<signature>[A-Za-z_][A-Za-z_0-9 \t\r\n*&]*?"
        rf"\bFUN_{re.escape(entry[2:])}\s*\([^;{{}}]*\))\s*\{{"
    )
    found = list(rx.finditer(source))
    return " ".join(found[0].group("signature").split()) if len(found) == 1 else None


def run_clang(clang: str, include: Path, source_dir: Path, source: str, opt: str) -> tuple[bool, str]:
    with tempfile.TemporaryDirectory(prefix="bf-cpp-dryrun-") as temp:
        path = Path(temp) / "candidate.cpp"
        path.write_text(source, encoding="utf-8")
        proc = subprocess.run(
            [clang, "-std=c++17", "-fsyntax-only", opt,
             # Host syntax can silently convert a float to a guest DWORD, or
             # a guest IEEE-754 bit-pattern word to a numeric float. Neither
             # conversion establishes the original Xbox CALL/stack contract.
             # Conservative source-only triage quarantines these cases.
             "-Werror=float-conversion", "-Werror=implicit-int-float-conversion",
             "-I", str(include),
             "-I", str(source_dir), str(path)],
            capture_output=True, text=True, check=False,
        )
        return proc.returncode == 0, proc.stderr[:2500]


def insert_declaration(source: str, signature: str) -> str | None:
    includes = list(re.finditer(r"(?m)^#include[^\n]*\n", source))
    if not includes:
        return None
    # File-scope insertion immediately after the final include. Never rewrite
    # original function bodies, calls, parameters, casts or register inputs.
    pos = includes[-1].end()
    declaration = (
        "/* C++17 source-matched draft declaration only. ABI_UNVERIFIED.\n"
        " * Original Xbox register/stack/RET contract NOT established. */\n"
        f"extern {signature};\n"
    )
    return source[:pos] + declaration + source[pos:]


def triage(root: Path, audit: dict, edges: dict, clang: str, limit: int,
           max_arity: int, only_single_error: bool) -> dict:
    results = validate_audit(audit, edges)
    sha = audit["checked_commit_sha"]
    output = []
    for edge in edges["candidates"]:
        if len(output) >= limit:
            break
        if edge.get("triage") != ELIGIBLE or edge.get("caller_draft_arity", 999) > max_arity:
            continue
        caller, callee = edge["caller"], edge["callee"]
        cr, dr = results.get(caller, {}), results.get(callee, {})
        errors = cr.get("errors", [])
        if only_single_error and len(errors) != 1:
            continue
        if not errors or f"use of undeclared identifier 'FUN_{callee[2:]}'" not in errors[0]:
            continue
        record = {"caller": caller, "callee": callee, "source": edge["source"],
                  "audited_commit": sha, "xbox_abi": "ABI_UNVERIFIED",
                  "original_xbe_reauthenticated": False}
        output.append(record)
        if cr.get("body_provenance") != "match" or dr.get("body_provenance") != "match":
            record["status"] = "QUARANTINED_PROVENANCE"; continue
        cp = root / edge["source"]
        dp = root / dr.get("source", "__missing__")
        if not cp.is_file() or not dp.is_file():
            record["status"] = "QUARANTINED_MISSING_LOCAL_SOURCE"; continue
        cb, db = cp.read_bytes(), dp.read_bytes()
        if digest(cb) != cr["source_sha256"] or digest(db) != dr["source_sha256"]:
            record["status"] = "QUARANTINED_EXACT_TREE_DRIFT"; continue
        cs, ds = cb.decode("utf-8"), db.decode("utf-8")
        if (f"Input x86 body SHA-256: {cr['original_body_sha256']}" not in cs or
                f"Input x86 body SHA-256: {dr['original_body_sha256']}" not in ds or
                f"Entry: {caller}" not in cs or f"Entry: {callee}" not in ds or
                "ABI_UNVERIFIED" not in cs or "ABI_UNVERIFIED" not in ds):
            record["status"] = "QUARANTINED_IDENTITY_LABEL"; continue
        signature = definition(ds, callee)
        if not signature:
            record["status"] = "QUARANTINED_CALLEE_DEFINITION"; continue
        candidate = insert_declaration(cs, signature)
        if not candidate:
            record["status"] = "QUARANTINED_INSERTION_POINT"; continue
        record["callee_draft_signature"] = signature
        # Only declarations are inserted; original function bodies are never rewritten.
        for opt in ("-O0", "-O2"):
            ok, stderr = run_clang(clang, root / "include", cp.parent, candidate, opt)
            if not ok:
                record["status"] = "QUARANTINED_CPP_TYPE_OR_OTHER_ERROR"
                record["compiler_error"] = stderr
                break
        else:
            # A positive syntax result still does NOT verify the Xbox ABI,
            # cross-file linkage or behavior; manual review remains required.
            record["status"] = "SOURCE_ONLY_CPP17_READY_FOR_MANUAL_REVIEW"
    return {"schema_version": 1, "meaning": "read-only C++17 source-only dry-run; never Xbox ABI evidence",
            "audited_commit": sha, "screened": len(output),
            "ready_for_manual_review": sum(x["status"] == "SOURCE_ONLY_CPP17_READY_FOR_MANUAL_REVIEW" for x in output),
            "candidates": output}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    ap.add_argument("--audit", type=Path, required=True, help="completed cpp_compat_report.json")
    ap.add_argument("--edges", type=Path, required=True, help="same-SHA cpp_declaration_edge_triage.json")
    ap.add_argument("--clang", default="clang++")
    ap.add_argument("--limit", type=int, default=50)
    ap.add_argument("--max-arity", type=int, default=2)
    ap.add_argument("--include-multiple-errors", action="store_true")
    ap.add_argument("--out", type=Path, required=True)
    args = ap.parse_args()
    if args.limit < 1 or args.max_arity < 0:
        ap.error("limit must be positive and max-arity nonnegative")
    report = triage(args.root.resolve(), json.loads(args.audit.read_text()),
                    json.loads(args.edges.read_text()), args.clang, args.limit,
                    args.max_arity, not args.include_multiple_errors)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(f"{report['screened']} candidates screened; {report['ready_for_manual_review']} source-only C++17 ready; "
          "no original Xbox ABI or behavior certified")
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except (OSError, ValueError, KeyError, subprocess.SubprocessError) as exc:
        print(f"FAIL: {exc}", file=sys.stderr)
        sys.exit(1)
