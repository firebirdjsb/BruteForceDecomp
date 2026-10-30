#!/usr/bin/env python3
"""Reject active C-language audit paths; historical evidence is not rewritten."""

from pathlib import Path
import re
from source_layout import discovered_sources
from sweep_cpp_compat import FLAGS


def workflow_errors(text):
    text = "\n".join(line for line in text.splitlines()
                     if not line.lstrip().startswith(("#", "- \"", "- "+chr(39))))
    patterns = (r"-std=(?:gnu)?c(?:89|99|11|17|23)\b", r"-x\s*c(?:\s|$)",
                r"tools/sweep_c11\.py", r"tools/update_progress\.py")
    return [pattern for pattern in patterns if re.search(pattern, text)]


def main():
    root = Path(__file__).resolve().parents[1]
    sources = discovered_sources(root)
    if len(sources) != 13694 or any(p.suffix != ".cpp" for p in sources):
        raise SystemExit("Canonical reconstruction must contain 13694 C++ entries")
    if list((root / "src").rglob("0x????????.c")):
        raise SystemExit("Original-address C sources remain in the active tree")
    if "-std=c++17" not in FLAGS or "c++" not in FLAGS:
        raise SystemExit("Canonical audit must use strict C++17")
    for path in sorted((root / ".github/workflows").glob("*.y*ml")):
        if workflow_errors(path.read_text(encoding="utf-8")):
            raise SystemExit("Active C audit route: " + path.name)
    for bad in ("clang -std=c11 a.cpp", "clang -x c a.cpp", "clang -xc a.cpp", "python tools/sweep_c11.py"):
        if not workflow_errors(bad):
            raise SystemExit("C-language negative control escaped")
    print("PASS C++17-only active audit policy; 13694 canonical entries; historical evidence excluded")


if __name__ == "__main__":
    main()
