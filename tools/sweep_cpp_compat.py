#!/usr/bin/env python3
"""Read-only C++17 compatibility audit of the 13,694 original-address drafts.

Compiles canonical .cpp source drafts without modifying their contents.
A syntax pass is not Xbox ABI, object model, link or behavior verification.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import os
import re
import shutil
import subprocess
from collections import Counter
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

from body_hash_labels import read_body_digest
from source_layout import discovered_sources

EXPECTED = 13694
ERROR = re.compile(r"error:\s*([^\n]+)")
FLAGS = ("-std=c++17", "-x", "c++", "-fsyntax-only", "-ferror-limit=3")


def check_one(compiler: str, include: Path, path: Path, entry: str,
              expected_body_sha: str, timeout: int = 60) -> dict:
    content = path.read_bytes()
    embedded, conflict = read_body_digest(content.decode("utf-8", "replace"))
    expected = expected_body_sha.upper()
    provenance_ok = bool(expected) and not conflict and embedded == expected
    result = {
        "entry": entry,
        "source_sha256": hashlib.sha256(content).hexdigest(),
        "original_body_sha256": expected,
        "body_provenance": "match" if provenance_ok else "mismatch_or_missing",
    }
    if not provenance_ok:
        result.update(status="provenance_error", diagnostic="Original XBE body digest absent or differs")
        return result
    try:
        process = subprocess.run(
            [compiler, *FLAGS, "-I", str(include), str(path)],
            capture_output=True, text=True, timeout=timeout, errors="replace",
            check=False,
        )
    except (OSError, subprocess.TimeoutExpired) as exc:
        result.update(status="check_error", diagnostic=str(exc))
        return result
    if process.returncode:
        result.update(status="fail", errors=ERROR.findall(process.stderr)[:3],
                      diagnostic=process.stderr[-2400:])
    else:
        result["status"] = "pass"
    return result


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--out", type=Path, default=Path("cpp_compat_results"))
    parser.add_argument("--jobs", type=int, default=8)
    parser.add_argument("--limit", type=int, default=0,
                        help="Optional first N function samples; 0 audits the entire tree")
    args = parser.parse_args()
    if args.limit < 0 or not 1 <= args.jobs <= 16:
        parser.error("--limit must be >=0 and --jobs must be 1..16")
    compiler = shutil.which("clang++")
    if not compiler:
        parser.error("clang++ is required")
    root = args.root.resolve()
    inventory = root / "metadata/bulk_13694_inventory.csv"
    if not inventory.is_file():
        parser.error("missing original function inventory")
    with inventory.open(encoding="utf-8-sig", newline="") as stream:
        rows = list(csv.DictReader(stream))
    indexed = {row["entry"].lower(): row["original_body_sha256"].upper() for row in rows}
    sources = discovered_sources(root)
    if len(rows) != EXPECTED or len(indexed) != EXPECTED or len(sources) != EXPECTED:
        parser.error("cannot audit: original 13,694-function inventory/source count drift")
    if {p.stem.lower() for p in sources} != set(indexed):
        parser.error("source identities do not match original inventory")
    scope = sources[:args.limit] if args.limit else sources
    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        results = list(pool.map(
            lambda p: check_one(compiler, root / "include", p, p.stem.lower(), indexed[p.stem.lower()]),
            scope,
        ))
    for path, result in zip(scope, results):
        result["source"] = path.relative_to(root).as_posix()
    counts = Counter(result["status"] for result in results)
    report = {
        "metric": "isolated host Clang C++17 compatibility of existing C drafts",
        "scope": "sample" if args.limit else "full_inventory",
        "checked_commit_sha": os.environ.get("GITHUB_SHA", "local-checkout"),
        "original_function_count": EXPECTED,
        "checked": len(results),
        "counts": dict(counts),
        "passing_is_not_1_to_1": True,
        "results": results,
    }
    args.out.mkdir(parents=True, exist_ok=True)
    (args.out / "cpp_compat_report.json").write_text(
        json.dumps(report, indent=2) + "\n", encoding="utf-8"
    )
    with (args.out / "cpp_syntax_failures.csv").open("w", newline="", encoding="utf-8") as stream:
        writer = csv.writer(stream)
        writer.writerow(("entry", "status", "first_error"))
        for row in results:
            if row["status"] != "pass":
                writer.writerow((row["entry"], row["status"],
                                 (row.get("errors") or [row.get("diagnostic", "")])[0][:900]))
    print(f"C++17 compatibility: {len(results)} checked, {counts['pass']} pass, "
          f"{counts['fail']} fail, {counts['provenance_error']} provenance errors, "
          f"{counts['check_error']} check errors (NOT a game build).")
    return 1 if counts["provenance_error"] or counts["check_error"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
