#!/usr/bin/env python3
"""Cross-check public provenance gates and reject independent digest drift."""
from pathlib import Path
from verify_0011c810_matrix_frame import BODIES, check_source_body_ids


def main():
    root = Path(__file__).resolve().parents[1]
    check_source_body_ids(root)
    cases = 1
    for entry, (length, digest) in BODIES.items():
        altered = dict(BODIES)
        changed = ("1" if digest[0] == "0" else "0") + digest[1:]
        altered[entry] = (length, changed)
        try:
            check_source_body_ids(root, altered)
        except ValueError as error:
            assert f"0x{entry:08x}" in str(error)
        else:
            raise AssertionError(f"Verifier digest drift accepted for {entry:#x}")
        cases += 1
    print(f"PASS {cases} source/verifier body-digest registry and mutation cases")


if __name__ == "__main__":
    main()
