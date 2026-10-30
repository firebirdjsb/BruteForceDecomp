#!/usr/bin/env python3
"""Verify three related one-byte-header, 4-byte-payload serializers.

Source-only CI checks local storage and vtable method/data widths.
When the original Xbox XBE is supplied, assert exact opcode bytes.
The implicit EAX/ESI/EDI guest calling convention remains unresolved.
"""
import argparse
from pathlib import Path

CHECKS = (
    (0x2A6630, "83ec0c"),
    (0x2A6635, "8b6c2418"),
    (0x2A6640, "ff5030"),
    (0x2A6647, "88442413"),
    (0x2A664B, "ff5138"),
    (0x2A6652, "88442420"),
    (0x2A6658, "8d442417"),
    (0x2A6667, "8d542424"),
    (0x2A6683, "8d4c2418"),
    (0x2A668D, "c744242000000000"),
    (0x2A6695, "ff5020"),
    (0x2A66B1, "8d4c2414"),
    (0x2A66B8, "ff5024"),
    (0x2A66BF, "6a04"),
    (0x2A66C1, "8d442420"),
    (0x2A66CE, "e87dfdffff"),
    (0x2A8100, "83ec0c"),
    (0x2A8105, "8b6c2418"),
    (0x2A8110, "ff5030"),
    (0x2A8117, "88442413"),
    (0x2A811B, "ff5138"),
    (0x2A8122, "88442420"),
    (0x2A8128, "8d442417"),
    (0x2A8137, "8d542424"),
    (0x2A8153, "8d4c2418"),
    (0x2A815D, "c744242000000000"),
    (0x2A8165, "ff5020"),
    (0x2A8181, "8d4c2414"),
    (0x2A8188, "ff5024"),
    (0x2A818F, "6a04"),
    (0x2A8191, "8d442420"),
    (0x2A819E, "e83dfeffff"),
    (0x2A81D0, "83ec0c"),
    (0x2A81D5, "8b6c2418"),
    (0x2A81E0, "ff5034"),
    (0x2A81E7, "88442413"),
    (0x2A81EB, "ff513c"),
    (0x2A81F2, "88442420"),
    (0x2A81F8, "8d442417"),
    (0x2A8207, "8d542424"),
    (0x2A8223, "8d4c2418"),
    (0x2A822D, "c744242000000000"),
    (0x2A8235, "ff5024"),
    (0x2A8251, "8d4c2414"),
    (0x2A8258, "ff5028"),
    (0x2A825F, "6a04"),
    (0x2A8261, "8d442420"),
    (0x2A826E, "e8fdfdffff"),
)
SERIALIZERS = (
    ("002a6630", "0x30", "0x38", "0x20", "0x24", "FUN_002a6450"),
    ("002a8100", "0x30", "0x38", "0x20", "0x24", "FUN_002a7fe0"),
    ("002a81d0", "0x34", "0x3c", "0x24", "0x28", "FUN_002a8070"),
)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("xbe", nargs="?", type=Path)
    ap.add_argument("--root", type=Path, default=Path("."))
    a = ap.parse_args()
    for identifier, getter_a, getter_b, slot_a, slot_b, helper in SERIALIZERS:
        path = a.root / "src/main_unclassified/band_002a" / f"0x{identifier}.cpp"
        src = path.read_text(encoding="utf-8")
        normalized = "".join(src.split())
        required = (
            "uint8_t guest_header_a", "uint8_t guest_header_b",
            "uint32_t guest_payload_word;", "uint32_t guest_child_word = 0;",
            "for (uint8_t index = 0; index < guest_header_b; index++)",
            f"(*param_1 + {getter_a}))(param_1)",
            f"(*param_1 + {getter_b}))(param_1)",
            f"(*param_1 + {slot_a}))(param_1,(uint32_t)index,&guest_payload_word)",
            f"(*param_1 + {slot_b}))(param_1,(uint32_t)index,&guest_child_word)",
            "(*guest_writer + 0x14))(guest_writer,&guest_payload_word,4,0)",
            f"{helper}();",
            "if (guest_child_word != 0)",
            "(*child + 8))(child)",
        )
        for token in required:
            if "".join(token.split()) not in normalized:
                raise SystemExit(f"{path}: missing source invariant: {token}")
        if "stack0x" in src:
            raise SystemExit(f"{path}: unresolved guest stack")
    if a.xbe is None:
        print("PASS: three original serializer source contracts (no XBE in CI)")
        return
    data = a.xbe.read_bytes()
    for address, bytecode in CHECKS:
        want = bytes.fromhex(bytecode)
        if data[address - 0x10000:address - 0x10000 + len(want)] != want:
            raise SystemExit(f"XBE opcode mismatch at 0x{address:08X}")
    print(f"PASS: {len(CHECKS)} original Xbox opcode signatures, three serializer contracts")
    print("Guest register handoff, host callback ABI and native gameplay are unverified")

if __name__ == "__main__":
    main()
