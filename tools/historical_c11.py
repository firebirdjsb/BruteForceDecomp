"""Explicit opt-in boundary for archived pre-C++ evidence runners."""
from __future__ import annotations
import sys


def require_historical_c11_opt_in() -> None:
    """Keep old fixture commands reproducible without making them active gates."""
    flag = "--historical-c11"
    if flag not in sys.argv[1:]:
        raise SystemExit(
            "ARCHIVED historical C11 evidence runner; it does not validate the active C++ tree.\n"
            "Active equivalent: python tools/sweep_cpp_compat.py --root . --out cpp_compat_results --jobs 8\n"
            "For deliberate historical fixture reproduction only, add --historical-c11. "
            "Historical results must not be credited as C++ or 1:1 behavior."
        )
    sys.argv.remove(flag)
    print("HISTORICAL C11 reproduction only; no active C++ or 1:1 verification credit.", file=sys.stderr)
