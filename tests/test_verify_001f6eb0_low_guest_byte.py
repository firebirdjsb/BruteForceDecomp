#!/usr/bin/env python3
"""Negative controls for the byte-only source and original-XBE verifier."""
import argparse
import importlib.util
from pathlib import Path
import tempfile
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location(
    "low_guest_byte_verifier", ROOT / "scripts/verify_001f6eb0_low_guest_byte.py")
verifier = importlib.util.module_from_spec(spec)
spec.loader.exec_module(verifier)


def rejects(label, expected, action):
    try:
        action()
    except SystemExit as exc:
        if expected not in str(exc):
            raise AssertionError(f"{label}: wrong rejection: {exc}") from exc
        print(f"PASS rejected {label}")
    else:
        raise AssertionError(f"{label}: mutation was accepted")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="optional private pinned original")
    args = parser.parse_args()
    source_path = verifier.source_path(ROOT, f"0x{verifier.ENTRY:08x}")
    source = source_path.read_text(encoding="utf-8")
    byte_store = "bf_x86_word_store_byte(&local_4,0U,1);"
    old_rmw = "local_4 = (local_4 & (int)UINT32_C(0xffffff00)) | 1;"
    assert source.count(byte_store) == 1
    with tempfile.TemporaryDirectory() as directory:
        folder = Path(directory)
        mutant = folder / "0x001f6eb0.c"

        def check_source(text):
            mutant.write_text(text, encoding="utf-8")
            with patch.object(verifier, "source_path", return_value=mutant):
                verifier.verify_source(ROOT)

        rejects("restored whole-word RMW", "missing original source/storage invariant",
                lambda: check_source(source.replace(byte_store, old_rmw)))
        rejects("whole-word RMW beside byte store", "whole-word read-modify-write remains",
                lambda: check_source(source.replace(byte_store, byte_store + "\n" + old_rmw)))
        rejects("wrong source body label", "Original body digest label",
                lambda: check_source(source.replace(verifier.BODY_SHA256.upper(), "0" * 64)))
        wrong_xbe = folder / "wrong.xbe"
        wrong_xbe.write_bytes(b"XBEH" + bytes(512))
        rejects("wrong XBE", "Original XBE digest mismatch",
                lambda: verifier.verify_xbe(wrong_xbe))

    if args.xbe:
        original = verifier.BODY_SHA256
        verifier.BODY_SHA256 = "0" * 64
        try:
            rejects("wrong original body digest", "Original function-body digest mismatch",
                    lambda: verifier.verify_xbe(args.xbe))
        finally:
            verifier.BODY_SHA256 = original
        address = next(iter(verifier.OPCODES))
        opcode = verifier.OPCODES[address]
        verifier.OPCODES[address] = "00"
        try:
            rejects("wrong opcode window", "Xbox opcode mismatch",
                    lambda: verifier.verify_xbe(args.xbe))
        finally:
            verifier.OPCODES[address] = opcode


if __name__ == "__main__":
    main()
