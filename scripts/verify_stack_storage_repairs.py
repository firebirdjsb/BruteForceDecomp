#!/usr/bin/env python3
"""Pin observed stack storage; no complete C ABI or behavior claim."""
import argparse
import hashlib
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path

# Entry, original contiguous body size, exact body SHA-256.
BODIES = (
    (0x000EDF70, 163, "0b830a44d5a18b20117b40b72f3e68476fab00ed834cc2a45c059d8fcbe2a321"),
    (0x00141630, 131, "e4eab6557c599efcd081a27ea7c39f05d404297dca1e2a6824c7d94bd7f66cb7"),
    (0x001B1810, 122, "ce32ba1039c9aa0f3cde0c123114b2a49c4d9e409cba37fab5d9429aa82ee92d"),
    (0x00200400, 126, "9cb54fb5a6e0186fa1590917ff23225a016dcfde79e4ae2d3b55a46ff8456520"),
    (0x00202AF0, 162, "efab2fac68a640c0e5d90e582f630ae7c7457da5858c226e33d4c9d2466d4aa5"),
    (0x0034D40C, 169, "d060a408242fec4d254dfc2efdb3a38fb903d3a1c053640b2bbe58dacaccd529"),
    (0x003518D4, 1169, "2d04eef67634b63204dafa78df34dd2bd3df86f3443892548236b119e8e7feec"),
    (0x000330B0, 528, "fea2683e6e913fb8e089ea0726c6b535c6cadb4d33c395c4bac409293eafcba7"),
    (0x00033B00, 379, "33ad99064a1dd6c9af61a4554cb5258cc3f42e58b721bb80ec6698a4875f4ac8"),
    (0x000410A0, 629, "d18a552122c8f7858e73681bb8e52b4fba5560e0e02abf045b20e8ced4a8c676"),
    # Unchanged dependencies whose complete selector bodies were inspected.
    (0x0034FEDF, 150, "c7c7f9180d052ab62b3a19f5cd8dff64c02feba04c1072d5b66b46f72d968cf8"),
    (0x0035055A, 145, "4a89089d7b8088677548578d0b3a8ca5d8f7083a83fde3d81d4a83639cc848ca"),
)
WINDOWS = {
    0x000EDF8C: "8844241c",  # store AL in reused input byte
    0x000EDFDC: "8a4c2454",  # load only that byte after two calls
    0x00141633: "8a442428",  # read first incoming byte
    0x0014163E: "88442414",  # copy it into helper input storage
    0x0020041C: "8844241c",  # store AL in reused third input slot
    0x00200445: "8a442430",  # read that byte after call arguments
    0x00202B0C: "8844241c",  # corresponding store in related routine
    0x00202B35: "8a442430",  # corresponding byte read
    0x001B183C: "8d54241052",  # address and push entry ESP+4 after saves
    0x001B1854: "c20400",  # RET 4 on growth path
    0x001B1887: "c20400",  # RET 4 on other path
    0x001A6835: "518bc4c700000000008d040e8bcf",  # caller writes one zero DWORD
    0x001A6843: "e8c8af0000",  # caller CALL 0x001b1810
    0x000757A3: "8b45108b08894dec",  # helper reads one DWORD through third argument
    0x0034D444: "8db3e60100008d7df8a566a5",  # LEAs, MOVSD+MOVSW into six local bytes
    0x0034D46E: "8d7df8a566a5",  # optional replacement of those same bytes
    0x0034D47E: "66f3a7742b",  # compare three words; branch on equality
    0x0034D48A: "8b45f8a3a800f0fe0fb745fca3ac00f0fe",  # DWORD then MOVZX WORD stores
    0x0034D49B: "8d75f88dbbe0010000a58bcb66a5",  # copy six local bytes back
    0x00351BBB: "c645f803",  # selector byte=3
    0x00351C66: "c645f806",  # selector byte=6
    0x00351BEF: "ff75f8",  # original argument reads full DWORD; high bytes unknown
    0x0034FF2E: "3a5510",  # ultimate consumer compares only selector byte
    0x0035057D: "ff750c",  # forwarding path 1
    0x003505A7: "ff750c",  # forwarding fallback path 2
    0x003505D0: "ff750c",  # forwarding fallback path 3
    0x0003318D: "f30f10000f1640040f28d00f59c0",  # MOVSS/MOVHPS and packed square
    0x000331B9: "f30f52c90fc6c9000f59d1f30f11100f175004",  # RSQRT/broadcast/MULPS/stores
    0x00033BAC: "f30f10000f1640040f28d00f59c0",  # same observed memory-lane load
    0x00033BD8: "f30f52c90fc6c9000f59d1f30f11100f175004",  # same observed packed stores
    0x00033C53: "d81d7c4f3a00dfe0f6c4057a14",  # x87 compare; unordered branch
    0x000410F3: "f30f51442410",  # SQRTSS memory operand
    0x00041138: "f30f1044240c0fc6c000",  # MOVSS and reciprocal-root broadcast
    0x00041146: "f30f10080f1648040f59c1",  # MOVSS/MOVHPS and packed scale
    0x003A4018: "acc5a737",  # exact binary32 normalization threshold
    0x003A5150: "00008028",  # exact binary32 first 0x410a0 threshold
    0x003A4FFC: "00000034",  # exact binary32 second threshold
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    blob = args.xbe.read_bytes()
    sections = xbe_sections(blob)  # Requires the pinned whole-XBE SHA-256.
    for entry, size, digest in BODIES:
        actual = hashlib.sha256(mapped_span(blob, sections, entry, size)).hexdigest()
        embedded, conflict = read_body_digest(
            source_path(args.root, f"0x{entry:08x}").read_text(encoding="utf-8"))
        if actual != digest or conflict or embedded is None or embedded.lower() != digest:
            parser.exit(1, f"FAIL original/source body provenance at {entry:#010x}\n")
    for address, expected in WINDOWS.items():
        expected = bytes.fromhex(expected)
        if mapped_span(blob, sections, address, len(expected)) != expected:
            parser.exit(1, f"FAIL instruction window at {address:#010x}\n")
    print(f"PASS {len(BODIES)} original/source body digests and {len(WINDOWS)} instruction windows")
    print("Byte/storage facts only; full interfaces, guest mapping and behavior remain unverified.")


if __name__ == "__main__":
    main()
