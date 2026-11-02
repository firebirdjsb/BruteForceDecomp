#!/usr/bin/env python3
"""Local synthetic positive/negative controls for read-only C++17 triage."""
from __future__ import annotations
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile

SCRIPT = Path(__file__).resolve().parents[1] / "scripts" / "triage_cpp_draft_call_type_risks.py"


def sha(text: str) -> str:
    return hashlib.sha256(text.encode()).hexdigest()


def run() -> None:
    with tempfile.TemporaryDirectory() as tmp:
        root = Path(tmp)
        (root / "include").mkdir()
        (root / "src" / "main_unclassified" / "band_0001").mkdir(parents=True)
        (root / "include" / "bf_ghidra_types.h").write_text("#include <stdint.h>\ntypedef uint32_t undefined4;\n")
        source_dir = root / "src" / "main_unclassified" / "band_0001"
        def file(entry: str, signature: str, body: str) -> tuple[str, str]:
            digest = ("A" if entry == "0x00010010" else "B" if entry == "0x00010020" else "C") * 64
            text = (f"/* Input x86 body SHA-256: {digest}\n * Entry: {entry}, ABI_UNVERIFIED. */\n"
                    f"#include \"bf_ghidra_types.h\"\n{signature} {{\n{body}\n}}\n")
            (source_dir / f"{entry}.cpp").write_text(text)
            return text, digest
        good, good_body = file("0x00010010", "void FUN_00010010(void)", "FUN_00010030();")
        bad, bad_body = file("0x00010020", "undefined4 FUN_00010020(void)", "return FUN_00010030();")
        callee, callee_body = file("0x00010030", "void FUN_00010030(void)", "return;")
        results = []
        for entry, text, body in [("0x00010010", good, good_body),
                                  ("0x00010020", bad, bad_body),
                                  ("0x00010030", callee, callee_body)]:
            results.append({"entry": entry, "source": f"src/main_unclassified/band_0001/{entry}.cpp",
                            "source_sha256": sha(text), "original_body_sha256": body,
                            "body_provenance": "match", "status": "pass" if entry.endswith("30") else "fail",
                            "errors": [] if entry.endswith("30") else ["use of undeclared identifier 'FUN_00010030'"]})
        for i in range(13694-3):
            entry = f"0x{0x100000+i:08x}"
            results.append({"entry":entry,"source":"unused", "source_sha256":"unused", "original_body_sha256":"unused", "body_provenance":"match", "status":"pass"})
        audit = {"scope":"full_inventory","checked":13694,"checked_commit_sha":"test-sha",
                 "counts":{"pass":13692,"fail":2},"results":results}
        edges = {"audited_commit":"test-sha","candidates":[
            {"caller": caller, "callee":"0x00010030", "source":f"src/main_unclassified/band_0001/{caller}.cpp",
             "caller_draft_arity":0, "triage":"DRAFT_ARITY_MATCH_REVIEW_TYPES_AND_XBE"}
            for caller in ("0x00010010","0x00010020")]}
        (root / "audit.json").write_text(json.dumps(audit))
        (root / "edges.json").write_text(json.dumps(edges))
        cmd = [sys.executable, str(SCRIPT), "--root", str(root), "--audit", str(root / "audit.json"),
               "--edges", str(root / "edges.json"), "--out", str(root / "out.json")]
        run = subprocess.run(cmd, capture_output=True, text=True)
        assert run.returncode == 0, run.stderr
        out = json.loads((root / "out.json").read_text())
        assert out["screened"] == 2 and out["ready_for_manual_review"] == 1, out
        assert out["candidates"][0]["status"] == "SOURCE_ONLY_CPP17_READY_FOR_MANUAL_REVIEW"
        assert out["candidates"][1]["status"] == "QUARANTINED_CPP_TYPE_OR_OTHER_ERROR"
        assert "void" in out["candidates"][1]["compiler_error"]
        assert (source_dir / "0x00010010.cpp").read_text() == good
        assert (source_dir / "0x00010020.cpp").read_text() == bad
        edges["audited_commit"] = "wrong-sha"
        (root / "edges.json").write_text(json.dumps(edges))
        run = subprocess.run(cmd, capture_output=True, text=True)
        assert run.returncode != 0 and "SHAs disagree" in run.stderr, run.stderr
        print("PASS: source-only positive, void-return negative, no mutation, mismatched-SHA rejection")


if __name__ == "__main__":
    run()
