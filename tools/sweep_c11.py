#!/usr/bin/env python3
"""Legacy command name forwarding to the canonical strict C++17 source audit.

Historical C11 reports remain historical; this entry point emits only the
C++ report format. Syntax success never establishes Xbox ABI or 1:1 behavior.
"""
from pathlib import Path
from sweep_cpp_compat import FLAGS as _CPP_FLAGS, check_one, main
from source_layout import source_path

# Kept for callers importing the old module. No C-only permissive options.
FLAGS = list(_CPP_FLAGS)

def check(task):
    compiler, root, row = task
    root = Path(root)
    entry = row["entry"]
    return check_one(compiler, root / "include", source_path(root, entry), entry,
                     row.get("original_body_sha256", ""))

if __name__ == "__main__":
    raise SystemExit(main())
