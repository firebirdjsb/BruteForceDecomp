#!/usr/bin/env python3
"""Verify original XBE direct-call/EAX-consumer windows for 17 constructor edges.

The manifest records SHA-256 of complete original callee bodies (through both
RET paths). Independent instruction review found no EAX writes, calls, or
out-of-body jumps in those 17 bodies. This tool checks their original bytes,
not full guest ABI, linkage, or native execution. Never commit the XBE.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
MANIFEST = Path(__file__).resolve().parents[1] / "metadata/cpp_ctor_eax_passthrough_20261101.csv"


def sections(raw):
    if raw[:4] != b"XBEH":
        raise ValueError("not an XBE")
    base, count, table = (struct.unpack_from("<I", raw, offset)[0]
                          for offset in (0x104, 0x11c, 0x120))
    if base != 0x10000 or not 1 <= count <= 64:
        raise ValueError("unexpected XBE layout")
    result = []
    for index in range(count):
        _, va, virtual_size, offset, size = struct.unpack_from(
            "<5I", raw, table - base + index * 0x38)
        if offset + size > len(raw):
            raise ValueError("invalid XBE section")
        result.append((va, va + min(virtual_size, size), offset))
    return result


def read_va(raw, layout, va, length):
    for first, end, offset in layout:
        if first <= va and va + length <= end:
            return raw[offset + va - first:offset + va - first + length]
    raise ValueError(f"unmapped XBE address {va:#x}")


def rows():
    with MANIFEST.open(newline="", encoding="utf-8") as handle:
        items = list(csv.DictReader(handle))
    if len(items) != 17 or len({item["site"] for item in items}) != 17:
        raise ValueError("expected 17 unique source-matched edges")
    return items


def verify(raw, check_hash=True):
    if check_hash and hashlib.sha256(raw).hexdigest() != XBE_SHA256:
        raise ValueError("retail XBE SHA-256 mismatch")
    layout = sections(raw)
    for item in rows():
        site = int(item["site"], 16)
        callee = int(item["callee"], 16)
        call = bytes.fromhex(item["call_hex"])
        post = bytes.fromhex(item["post_hex"])
        if len(call) != 5 or call[0] != 0xe8:
            raise ValueError("invalid direct CALL")
        target = (site + 5 + struct.unpack_from("<i", call, 1)[0]) & 0xffffffff
        if target != callee:
            raise ValueError("E8 displacement mismatch")
        if post[:4] != bytes.fromhex("8bc885c9"):
            raise ValueError("MOV ECX,EAX / TEST ECX,ECX not present")
        if read_va(raw, layout, site, 5) != call:
            raise ValueError("original CALL bytes mismatch")
        if read_va(raw, layout, site + 5, 5) != post:
            raise ValueError("original caller output-use window mismatch")
        body = read_va(raw, layout, callee, int(item["callee_len"]))
        if hashlib.sha256(body).hexdigest() != item["callee_sha256"]:
            raise ValueError("original callee body SHA-256 mismatch")
    return len(rows())


def self_test():
    count = 0
    for item in rows():
        call = bytearray.fromhex(item["call_hex"])
        site = int(item["site"], 16)
        target = int(item["callee"], 16)
        for index in range(1, 5):
            changed = bytearray(call)
            changed[index] ^= 1
            candidate = (site + 5 + struct.unpack_from("<i", changed, 1)[0]) & 0xffffffff
            if candidate == target:
                raise AssertionError("displacement negative control accepted")
            count += 1
    print(f"PASS: 17 edge fixtures and {count} synthetic displacement negatives")


def original_negative_controls(raw):
    layout = sections(raw)
    first = rows()[0]
    site, callee = int(first["site"], 16), int(first["callee"], 16)
    for address in (site, site + 5, callee):
        changed = bytearray(raw)
        for start, end, offset in layout:
            if start <= address < end:
                changed[offset + address - start] ^= 1
                break
        try:
            verify(changed, check_hash=False)
        except ValueError:
            continue
        raise AssertionError("mutated original-XBE bytes accepted")
    print("PASS: 3 original-XBE mutation negative controls")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail XBE, never commit")
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    if not args.self_test and not args.xbe:
        parser.error("supply --self-test and/or --xbe")
    if args.self_test:
        self_test()
    if args.xbe:
        raw = args.xbe.read_bytes()
        print(f"PASS: authenticated retail XBE; {verify(raw)} direct CALLs and callee body digests")
        original_negative_controls(raw)
        print("ABI_UNVERIFIED: guest registers, native linkage, and runtime behavior")


if __name__ == "__main__":
    main()
