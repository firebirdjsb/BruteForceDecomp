#!/usr/bin/env python3
"""Mutation checks for the partial guest-byte contracts and pinned evidence."""
import argparse
import importlib.util
from pathlib import Path
import tempfile
from types import SimpleNamespace
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location(
    "guest_byte_alias_verifier", ROOT / "scripts/verify_two_guest_byte_aliases.py")
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
    originals = {entry: verifier.source_path(ROOT, f"0x{entry:08x}").read_text(encoding="utf-8")
                 for entry in verifier.SOURCES}
    with tempfile.TemporaryDirectory() as directory:
        folder = Path(directory)
        paths = {entry: folder / f"0x{entry:08x}.c" for entry in originals}

        def check_source(entry, altered):
            for key, path in paths.items():
                path.write_text(altered if key == entry else originals[key], encoding="utf-8")
            with patch.object(verifier, "source_path",
                              side_effect=lambda _root, name: paths[int(name, 16)]):
                verifier.verify_source(ROOT, contracts_only=True)

        first, second = sorted(originals)
        source = originals[first]
        old = "if (local_101 != '\\0')"
        assert source.count(old) == 1
        rejects("wrong stack-byte read", "missing byte contract",
                lambda: check_source(first, source.replace(old, "if (local_8c != '\\0')")))
        label = verifier.BODIES[first][1].upper()
        assert source.count(label) == 1
        rejects("wrong source body label", "original body label",
                lambda: check_source(first, source.replace(label, "0" * 64)))
        source = originals[second]
        old = "(int32_t)*(int8_t *)(uintptr_t)(param_1 + 0x16)"
        assert source.count(old) == 1
        rejects("unsigned selector byte", "missing byte contract",
                lambda: check_source(second, source.replace(old,
                    "(int32_t)*(uint8_t *)(uintptr_t)(param_1 + 0x16)")))
        wrong = folder / "wrong.xbe"
        wrong.write_bytes(b"XBEH" + bytes(512))
        rejects("wrong XBE", "XBE SHA256 mismatch", lambda: verifier.verify_xbe(wrong))

    # The strict default must continue to reject actual compiler failures.
    # Injecting the compiler outcome keeps this test valid after either source
    # eventually gains an independently reviewed full syntax repair.
    with patch.object(verifier.shutil, "which", return_value="clang"), \
         patch.object(verifier.subprocess, "run", return_value=SimpleNamespace(
             returncode=1, stderr="error: injected syntax failure")):
        rejects("strict-mode compiler failure", "error: injected syntax failure",
                lambda: verifier.verify_source(ROOT))

    if args.xbe:
        entry = first
        size, digest = verifier.BODIES[entry]
        verifier.BODIES[entry] = (size, "0" * 64)
        try:
            rejects("wrong original body digest", "Original function-body digest mismatch",
                    lambda: verifier.verify_xbe(args.xbe))
        finally:
            verifier.BODIES[entry] = (size, digest)
        address = next(iter(verifier.X86))
        opcode = verifier.X86[address]
        verifier.X86[address] = "00"
        try:
            rejects("wrong opcode window", "Original instruction mismatch",
                    lambda: verifier.verify_xbe(args.xbe))
        finally:
            verifier.X86[address] = opcode


if __name__ == "__main__":
    main()
