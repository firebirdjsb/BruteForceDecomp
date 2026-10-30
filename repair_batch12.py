#!/usr/bin/env python3
"""Iteratively apply compiler-guided operator fixes (remove & / dereference *)
to queued C++17 failures. Repeats until no more errors of our category remain,
then records whether the file fully passes. Keeps every applied fix (files are
strictly better even if other error categories remain)."""
import json
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent
QUEUE = ROOT / "repair_queue_batch12.json"
INCLUDE = ROOT / "include"
CLANG = "clang++"
FLAGS = ["-std=c++17", "-x", "c++", "-fsyntax-only", "-ferror-limit=1"]

results = {"fixed_our_errors": 0, "now_passing": 0, "still_failing": 0,
           "skipped": 0, "details": []}


def compile_file(path):
    p = subprocess.run(
        [CLANG, *FLAGS, "-I", str(INCLUDE), str(path)],
        capture_output=True, text=True, errors="replace",
    )
    return p.returncode, p.stderr


def first_error(stderr):
    for line in stderr.splitlines():
        if ": error:" in line:
            parts = line.split(":")
            try:
                return int(parts[-4]), int(parts[-3]), line
            except (ValueError, IndexError):
                continue
    return None, None, None


def is_our_error(message, ftype):
    if ftype == "remove_amp":
        return "remove &" in message
    return "dereference with *" in message


def apply_fix(lines, ln, col, ftype):
    idx = ln - 1
    if idx < 0 or idx >= len(lines):
        return False
    line = lines[idx]
    pos = col - 1
    if pos < 0 or pos >= len(line):
        return False
    if ftype == "remove_amp":
        if line[pos] != "&":
            return False
        lines[idx] = line[:pos] + line[pos + 1:]
    else:
        ch = line[pos]
        if not (ch.isalnum() or ch == "_"):
            if pos > 0 and (line[pos - 1].isalnum() or line[pos - 1] == "_"):
                pos -= 1
                ch = line[pos]
            else:
                return False
        lines[idx] = line[:pos] + "*" + line[pos:]
    return True


def main():
    queue = json.loads(QUEUE.read_text())
    for item in queue:
        entry = item["entry"]; rel = item["source"]; ftype = item["fix"]
        path = ROOT / rel
        if not path.is_file():
            results["skipped"] += 1; continue
        original = path.read_text()
        applied = 0
        # Iteratively fix errors of our category
        for _ in range(50):
            rc, stderr = compile_file(path)
            if rc == 0:
                break
            ln, col, msg = first_error(stderr)
            if ln is None:
                break
            if "remove &" in msg:
                cur_ftype = "remove_amp"
            elif "dereference with *" in msg:
                cur_ftype = "deref_star"
            else:
                break
            lines = path.read_text().splitlines(keepends=True)
            if not apply_fix(lines, ln, col, cur_ftype):
                break
            path.write_text("".join(lines))
            applied += 1
        results["fixed_our_errors"] += applied
        rc_final, _ = compile_file(path)
        if rc_final == 0:
            results["now_passing"] += 1
            results["details"].append({"entry": entry, "source": rel, "fix": ftype,
                                       "fixes_applied": applied, "outcome": "pass"})
        else:
            results["still_failing"] += 1
            results["details"].append({"entry": entry, "source": rel, "fix": ftype,
                                       "fixes_applied": applied, "outcome": "still_failing"})

    print(json.dumps({k: v for k, v in results.items() if k != "details"}, indent=2))
    (ROOT / "repair_batch12_results.json").write_text(json.dumps(results, indent=2))


if __name__ == "__main__":
    main()
