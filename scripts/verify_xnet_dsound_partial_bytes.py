#!/usr/bin/env python3
"""Verify three partial-byte repairs; no whole-function ABI/behavior claim."""
import argparse
import hashlib
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
# Entry, inclusive end, original body digest, observed instruction fingerprints.
CASES = (
    (0x0031B3C5, 0x0031B493,
     "68bb004f6f6e3425b301652056b1e62eec935a43d1adab4c5cf61cc0a0000ba2",
     ((0x0031B46D, "8d450f"), (0x0031B47D, "325d0f"))),
    (0x00349B99, 0x00349CAB,
     "04d538428eae7e6bf9942ebcfd5db0b9d88fa80575fce30dda9da2661bf79195",
     ((0x00349C27, "88442410"), (0x00349C9B, "8a4c2410"))),
    (0x00350CD7, 0x00350DB3,
     "f95fdc433eb1a8fdcd93ddea77bd006eef552be4f5ef7a828fd191f2eb26faec",
     ((0x00350CF5, "668b81360a0000"), (0x00350CFD, "660fb6dc"),
      (0x00350D01, "8af8"), (0x00350D0E, "66895de6"))),
)


def verify(blob, root):
    if hashlib.sha256(blob).hexdigest() != XBE_SHA:
        raise ValueError("original XBE SHA-256 mismatch")
    sections = xbe_sections(blob)
    for entry, end, digest, facts in CASES:
        body = mapped_span(blob, sections, entry, end - entry + 1)
        if hashlib.sha256(body).hexdigest() != digest:
            raise ValueError(f"original body mismatch at {entry:#010x}")
        source = source_path(root, f"0x{entry:08x}")
        embedded, conflict = read_body_digest(source.read_text(encoding="utf-8"))
        if conflict or embedded is None or embedded.lower() != digest:
            raise ValueError(f"source body-provenance mismatch at {entry:#010x}")
        for address, expected in facts:
            expected = bytes.fromhex(expected)
            if mapped_span(blob, sections, address, len(expected)) != expected:
                raise ValueError(f"instruction mismatch at {address:#010x}")
        print(f"PASS {entry:#010x}: body provenance and {len(facts)} instruction windows")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    try:
        verify(args.xbe.read_bytes(), args.root.resolve())
    except ValueError as error:
        parser.exit(1, f"FAIL: {error}\n")
    print("Original operand evidence only; compile, linkage and runtime checks are separate.")


if __name__ == "__main__":
    main()
