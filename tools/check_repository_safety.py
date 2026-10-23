#!/usr/bin/env python3
"""Check all git-tracked files for proprietary artifacts and likely credentials.

This is a preventative working-tree audit, NOT Git history / provider-side
secret scanning. Do not print matching secret contents into Actions logs.
"""
from __future__ import annotations
import argparse
from pathlib import Path, PurePosixPath
import re
import subprocess

PROHIBITED_EXTENSIONS = {
    ".xbe", ".xiso", ".iso", ".img", ".bin", ".pak", ".xwb", ".xpr",
    ".bik", ".mgf", ".jwad", ".gbf", ".sqlite3", ".zip", ".7z", ".rar",
    ".p12", ".pfx", ".pem", ".key", ".kdbx", ".keystore",
}
PROHIBITED_BASENAMES = {
    ".env", ".npmrc", ".netrc", ".pypirc", "id_rsa", "id_ed25519",
    "credentials.json", "service-account.json", "service_account.json",
}
PATTERNS = (
    ("GitHub personal or fine-grained token",
     re.compile(r"\b(?:gh[pousr]_[A-Za-z0-9_]{36,}|github_pat_[A-Za-z0-9_]{50,})\b")),
    ("AWS access key identifier",
     re.compile(r"\b(?:AKIA|ASIA)[A-Z0-9]{16}\b")),
    ("Google API key",
     re.compile(r"\bAIza[0-9A-Za-z_-]{35}\b")),
    ("Slack service token",
     re.compile(r"\bxox[baprs]-[A-Za-z0-9-]{22,}\b")),
    ("Stripe live secret",
     re.compile(r"\bsk_live_[A-Za-z0-9]{20,}\b")),
    ("Private key block",
     re.compile(r"-----BEGIN (?:RSA |EC |OPENSSH |DSA |ENCRYPTED )?PRIVATE KEY-----")),
    ("Embedded HTTP URL credentials",
     re.compile(r"https?://[A-Za-z0-9._~-]+:[^/\s@]{8,}@[^/\s]+", re.I)),
)

def bad_path(name: str) -> bool:
    p = PurePosixPath(name)
    basename = p.name.lower()
    if basename in PROHIBITED_BASENAMES:
        return True
    if basename.startswith(".env.") and basename not in {".env.example", ".env.sample"}:
        return True
    if p.suffix.lower() in PROHIBITED_EXTENSIONS:
        return True
    if any(piece in {"functionexport", "ghidraprojects"} for piece in
           (item.lower() for item in p.parts)):
        return True
    return False

def matches(text: str) -> list[str]:
    return [label for label, expr in PATTERNS if expr.search(text)]

def tracked_paths(root: Path) -> list[str]:
    proc = subprocess.run(["git", "-C", str(root), "ls-files", "-z"],
                          check=True, stdout=subprocess.PIPE)
    return [part.decode("utf-8", "surrogateescape")
            for part in proc.stdout.split(b"\0") if part]

def audit(root: Path) -> tuple[int, list[tuple[str, str]]]:
    root = root.resolve()
    problems = []
    paths = tracked_paths(root)
    for name in paths:
        path = root / name
        if bad_path(name):
            problems.append((name, "restricted artifact/credential filename"))
            continue
        if not path.is_file() or path.is_symlink():
            problems.append((name, "tracked file missing or symlink"))
            continue
        try:
            content = path.read_text(encoding="utf-8", errors="replace")
        except OSError:
            problems.append((name, "unable to read tracked file"))
            continue
        for kind in matches(content):
            problems.append((name, kind))
    return len(paths), problems

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = ap.parse_args()
    count, failures = audit(args.root)
    for name, category in failures[:50]:
        print(f"SECURITY REVIEW REQUIRED: {name} — {category}")
    if len(failures) > 50:
        print(f"... and {len(failures)-50} additional paths")
    print(f"Scanned {count} tracked paths; high-confidence alerts: {len(failures)}")
    print("This does not scan Git history, CI artifacts or all possible secrets.")
    if failures:
        raise SystemExit(1)

if __name__ == "__main__":
    main()
