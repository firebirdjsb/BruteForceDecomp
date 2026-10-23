#!/usr/bin/env python3
"""Synthetic scanner tests; never store real credentials in repository tests."""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from check_repository_safety import bad_path, matches

for filename in [".env", ".env.production", "secret.pem", "config.p12",
                 "game/default.xbe", "FunctionExport/output.txt",
                 "private/id_rsa", "configs/.npmrc", "backups/source.zip"]:
    assert bad_path(filename), filename
for filename in ["src/main_unclassified/band_0006/0x0006a610.c",
                 "README.md", ".env.example", "docs/progress/c11-syntax.svg",
                 "tools/check_repository_safety.py"]:
    assert not bad_path(filename), filename

gh = "gh" + "p_" + "a" * 40
aws = "AK" + "IA" + "A" * 16
google = "AI" + "za" + "A" * 35
pem = "-----BEGIN " + "PRIVATE KEY-----"
for token in (gh, aws, google, pem):
    assert matches("test: " + token), token[:8]
for safe in ("API key: REDACTED", "token: <placeholder>", "github.com/firebirdjsb/BruteForceDecomp",
             "Original x86 body SHA-256: " + "a" * 64, "http://127.0.0.1:8000/"):
    assert not matches(safe), safe
print("Repository safety checker: paths, token classes, and safe values verified.")
