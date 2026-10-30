#!/usr/bin/env python3
"""Batch 2: add forward declarations for undeclared FUN_xxxx identifiers whose
callee is defined in-tree. Prototype = callee's own parsed signature (evidence,
no guessing). Iterates per file until pass or no fixable undeclared error."""
import csv, json, re, subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent
CALLEE_SIG = json.loads((ROOT / "callee_sig_map.json").read_text())
QUEUE = ROOT / "cpp_failures_classified2.json" / "cpp_repair_queue.csv"
INCLUDE = ROOT / "include"
CLANG = "clang++"
FLAGS = ["-std=c++17", "-x", "c++", "-fsyntax-only", "-ferror-limit=50"]

UNDECL_RE = re.compile(r"use of undeclared identifier '(FUN_0[0-9a-f]{7})'")


def compile_file(path):
    p = subprocess.run([CLANG, *FLAGS, "-I", str(INCLUDE), str(path)],
                       capture_output=True, text=True, errors="replace")
    return p.returncode, p.stderr


def undeclared_callees(stderr):
    seen, out = set(), []
    for line in stderr.splitlines():
        if "error:" not in line:
            continue
        m = UNDECL_RE.search(line)
        if m and m.group(1) not in seen:
            seen.add(m.group(1)); out.append(m.group(1))
    return out


def insert_forward_declarations(text, declarations):
    lines = text.splitlines(keepends=True)
    insert_at = 0
    for i, line in enumerate(lines):
        if line.lstrip().startswith("#include"):
            insert_at = i + 1
    while insert_at < len(lines) and (lines[insert_at].strip() == ""
                                      or lines[insert_at].lstrip().startswith(("/*", "*", "//"))):
        insert_at += 1
    block = "\n".join(f"extern {d};" for d in declarations) + "\n\n"
    lines.insert(insert_at, block)
    return "".join(lines)


rows = list(csv.DictReader(open(QUEUE, encoding="utf-8")))
failing = [r for r in rows if r["category"] == "missing_declaration_or_type"]
print("missing_declaration failing entries:", len(failing))

results = {"declarations_added": 0, "now_passing": 0, "still_failing": 0,
           "skipped_callee_not_in_tree": 0, "details": []}

for i, row in enumerate(failing):
    entry = row["entry"]; rel = row["source"]
    path = ROOT / rel
    if not path.is_file():
        continue
    text = path.read_text()
    added = 0
    for _ in range(8):
        rc, stderr = compile_file(path)
        if rc == 0:
            break
        callees = undeclared_callees(stderr)
        if not callees:
            break
        to_add = [CALLEE_SIG[c] for c in callees if c in CALLEE_SIG]
        if not to_add:
            results["skipped_callee_not_in_tree"] += 1
            break
        seen, uniq = set(), []
        for d in to_add:
            if d not in seen:
                seen.add(d); uniq.append(d)
        text = insert_forward_declarations(text, uniq)
        path.write_text(text)
        added += len(uniq)
    results["declarations_added"] += added
    rc_final, _ = compile_file(path)
    if rc_final == 0:
        results["now_passing"] += 1
        results["details"].append({"entry": entry, "source": rel, "declarations_added": added, "outcome": "pass"})
    else:
        results["still_failing"] += 1
        results["details"].append({"entry": entry, "source": rel, "declarations_added": added, "outcome": "still_failing"})
    if (i + 1) % 500 == 0:
        print(f"progress {i+1}/{len(failing)}: passing={results['now_passing']} added={results['declarations_added']}")

print(json.dumps({k: v for k, v in results.items() if k != "details"}, indent=2))
(ROOT / "repair_batch2_results.json").write_text(json.dumps(results, indent=2))
