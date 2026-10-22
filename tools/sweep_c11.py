#!/usr/bin/env python3
"""Repository-wide C11 audit. A syntax pass does NOT verify Xbox behavior."""
from __future__ import annotations
import argparse
from collections import Counter
from concurrent.futures import ThreadPoolExecutor
import csv
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import time

BODY = re.compile(r"(?:Input x86 body SHA-256|Original body SHA-256):\s*([A-Fa-f0-9]{64})")
ERR = re.compile(r"error:\s*([^\n]+)")
FLAGS = [
    "-std=c11", "-fsyntax-only", "-ferror-limit=3",
    "-Wno-implicit-function-declaration", "-Wno-int-conversion",
    "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
    "-Wno-int-to-pointer-cast", "-Wno-return-type",
    "-Wno-deprecated-non-prototype",
]
def check(task):
    clang, root, row = task
    name = row["entry"]
    path = root / "src" / (name + ".c")
    result = {"entry":name, "original_body_sha256":row["original_body_sha256"]}
    if not path.is_file():
        result.update(status="missing_source", diagnostic="Source file missing")
        return result
    content = path.read_bytes()
    result["c_sha256_actual"] = hashlib.sha256(content).hexdigest()
    result["c_sha256_matches_inventory"] = (
        result["c_sha256_actual"].lower() == row.get("c_sha256","").lower()
    )
    text = content.decode("utf-8", "replace")
    m = BODY.search(text)
    result["body_provenance"] = (
        "match" if m and m.group(1).upper()==row["original_body_sha256"].upper()
        else "mismatch" if m else "missing"
    )
    try:
        p = subprocess.run(
            [clang] + FLAGS + ["-I",str(root/"include"),str(path)],
            capture_output=True,text=True,timeout=60,errors="replace"
        )
        result["status"] = "pass" if p.returncode == 0 else "fail"
        if p.returncode:
            result["errors"] = ERR.findall(p.stderr)[:3]
            result["diagnostic"] = p.stderr[-2400:]
    except Exception as e:
        result["status"]="check_error"
        result["diagnostic"]=str(e)
    return result

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument("--out",type=Path,default=Path("c11_sweep_results"))
    ap.add_argument("--jobs",type=int,default=8)
    args=ap.parse_args()
    root=args.root.resolve()
    args.out.mkdir(parents=True,exist_ok=True)
    compiler=shutil.which("clang")
    if not compiler: raise SystemExit("clang required")
    with (root/"metadata/function_inventory.csv").open(newline="",encoding="utf-8") as f:
        rows=list(csv.DictReader(f))
    before=time.monotonic()
    with ThreadPoolExecutor(max_workers=max(1,min(args.jobs,16))) as pool:
        results=list(pool.map(check,((compiler,root,row) for row in rows)))
    count=Counter(r["status"] for r in results)
    groups=Counter(err for r in results if r["status"]=="fail" for err in r.get("errors",[])[:1])
    output={
        "scope":"Exact checked-out repository, individual host Clang C11 syntax; ABI/linking/behavior NOT verified",
        "source_tree_entries":len(results),"counts":dict(count),
        "body_hash_mismatches":sum(r["body_provenance"]=="mismatch" for r in results),
        "body_hash_missing":sum(r["body_provenance"]=="missing" for r in results),
        "c_source_hash_drift":sum(not r.get("c_sha256_matches_inventory",False) for r in results),
        "duration_seconds":round(time.monotonic()-before,1),
        "top_error_groups":groups.most_common(30),
        "results":results,
    }
    (args.out/"c11_sweep_report.json").write_text(json.dumps(output,indent=2)+"\n",encoding="utf-8")
    with (args.out/"syntax_failures.csv").open("w",newline="",encoding="utf-8") as f:
        writer=csv.writer(f)
        writer.writerow(["entry","status","first_error"])
        for r in results:
            if r["status"]!="pass":
                writer.writerow([r["entry"],r["status"],(r.get("errors") or [r.get("diagnostic","")])[0][:900]])
    summary=f"Checked {len(results)} functions; pass {count['pass']}; fail {count['fail']}; other {len(results)-count['pass']-count['fail']}; XBE body hash mismatches {output['body_hash_mismatches']}; C source digest drift {output['c_source_hash_drift']}; time {output['duration_seconds']}s."
    print(summary,flush=True)
    github_summary=os.environ.get("GITHUB_STEP_SUMMARY")
    if github_summary:
        with open(github_summary,"a",encoding="utf-8") as f:
            f.write("## Exact main-tree C11 audit (NOT a game build)\n\n"+summary+"\n\n")
            f.write("Source-hash drift is expected when source was edited without updating the historical inventory. Original body digests are immutable.\n")
    return 0  # Report failures without turning evidence-collection into a falsely green validation gate.
if __name__=="__main__":
    raise SystemExit(main())
