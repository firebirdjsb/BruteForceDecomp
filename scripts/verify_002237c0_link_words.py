#!/usr/bin/env python3
"""Check original DWORD-link instructions and exercise the actual C source block.

The copy callbacks are fixture substitutes. This is not an original-Xbox
execution comparison, complete interface audit, or working PC guest bridge.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import ctypes
import hashlib
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import textwrap

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_002c96d0_constructor import allocate_low_buffer

ENTRY = "0x002237c0"
BODY = "459BEC554406C2459C8F0F7008F0FB2786B1F40C7025C436571956D6598D1C6B"
# Pinned addresses and instruction widths. No complete original body is stored.
OPS = {
    0x2237E9: "d95c2418",  # FSTP m32fp to S+0x14 while an argument is pushed.
    0x223B59: "d95c2414",  # Later FSTP at the same four-byte slot.
    0x223BB9: "89742418",  # Zero adjacent value DWORD at S+0x18.
    0x223BC1: "89442418",  # Save the nonzero value DWORD at S+0x18.
    0x223BC7: "69c00d661900055ff36e3cc1e815",  # IMUL/ADD modulo 2^32; SHR 21.
    0x223BD5: "8b0c85a04d4100",  # MOV ECX,[0x414da0 + EAX*4].
    0x223BDC: "8d542414894c2414891485a04d4100",  # LEA node; save head; publish.
    0x223C0E: "8b442414",  # Raw first DWORD becomes the fifth copy argument.
    0x223C17: "8d4c241c",  # LEA node at S+0x14 with two pushed arguments.
    0x223C24: "83c60883c414897708",  # Eight-byte advance; caller pops 20 bytes.
    0x223C34: "8d542414",  # Other copy branch takes the same node address.
    0x223C52: "69c00d661900055ff36e3cc1e815",  # Same unsigned bucket calculation.
    0x223C60: "8d0485a04d4100",  # Address of the DWORD table head.
    0x223C67: "897424183930",  # Clear value; test DWORD head against zero.
    0x223C70: "8b088d5424143bca",  # Load DWORD link and compare node address.
    0x223C82: "8b088b118910",  # Replace link with pointed node's first DWORD.
    0x223CAE: "8d44241c",  # Final cleanup takes S+0x14 after two pushes.
}


def source_block(root):
    source = source_path(root, ENTRY).read_text(encoding="utf-8")
    digest, conflict = read_body_digest(source)
    if conflict or digest != BODY:
        raise ValueError("Original function-body label changed")
    for required in ("uint32_t local_25c[2];", "extern uint32_t DAT_00414da0[];",
                     "bf_x86_f32_word((float)fVar10)",
                     "bf_x86_f32_word((float)param_5)",
                     "bf_x86_word_to_f32(local_25c[0]) <= fStack_254",
                     "FUN_00223fd0(local_25c,*local_24c,local_24c)",
                     "ABI_UNVERIFIED"):
        if required not in source:
            raise ValueError("Missing source contract: " + required)
    first = "          uVar9 = *(uint *)(local_240 + 0x10);"
    last = "          FUN_0012aba0();"
    if source.count(first) != 1 or source.count(last) != 1:
        raise ValueError("Missing or ambiguous actual-source fixture boundaries")
    start = source.index(first)
    return textwrap.dedent(source[start:source.index(last, start)])


def check_xbe(path):
    raw = path.read_bytes()
    sections = xbe_sections(raw)  # Checks the complete pinned XBE SHA-256.
    body = mapped_span(raw, sections, int(ENTRY, 16), 1286)
    if hashlib.sha256(body).hexdigest().upper() != BODY:
        raise ValueError("Original ordered body digest differs")
    for address, encoded in OPS.items():
        expected = bytes.fromhex(encoded)
        if mapped_span(raw, sections, address, len(expected)) != expected:
            raise ValueError(f"Instruction differs at {address:08x}")
    print(f"PASS pinned original XBE, complete 1286-byte body, {len(OPS)} windows")


def check_library(path):
    lib = ctypes.CDLL(str(path))
    operation = lib.bf_test_002237c0
    operation.argtypes = [ctypes.c_void_p] * 4 + [ctypes.c_uint32]
    operation.restype = None
    table = (ctypes.c_uint32 * 2048).in_dll(lib, "DAT_00414da0")
    copied = (ctypes.c_uint32 * 2).in_dll(lib, "copied_words")
    extra = ctypes.c_uint32.in_dll(lib, "copied_extra")
    branch = ctypes.c_uint32.in_dll(lib, "copy_branch")
    base, size, release = allocate_low_buffer()

    def word(address):
        return ctypes.c_uint32.from_address(address)

    try:
        cases = 0
        for key in (0, 1, 2, 4, 0xFFFFFFFE, 0x80000000, 0x80000002,
                    0x7FFFFFFE, 0x3F800000, 0x7FC12344, 0xFFFFFFFF):
            linked = key != 0 and key & 1 == 0
            bucket = ((key * 0x19660D + 0x3C6EF35F) & 0xFFFFFFFF) >> 21
            for growth in (False, True):
                for tail_present in (False, True):
                    for mode in ((0, 1, 2) if linked else (0,)):
                        ctypes.memset(base, 0xA5, size)
                        ctypes.memset(ctypes.addressof(table), 0, ctypes.sizeof(table))
                        receiver, item = base + 0x100, base + 0x200
                        record, prefix = base + 0x300, base + 0x400
                        tail = base + 0x500 if tail_present else 0
                        if tail:
                            word(tail).value = base + 0x600
                            word(base + 0x600).value = 0
                        table[bucket] = tail
                        initial = bytes(table)
                        word(receiver + 4).value = base + 0x800
                        word(receiver + 8).value = base + 0x808
                        word(receiver + 12).value = base + (0x808 if growth else 0x818)
                        word(item + 0x10).value = key
                        word(record).value = 0x7FC12345
                        word(record + 4).value = 0xAAAAAAAA
                        operation(receiver, item, record, prefix, mode)
                        expected_first = tail if linked else 0x7FC12345
                        if list(copied) != [expected_first, key]:
                            raise AssertionError("Eight-byte copy changed raw link/value bits")
                        if word(record).value != expected_first:
                            raise AssertionError("First record word changed during unlink")
                        if word(record + 4).value != (0 if linked else key):
                            raise AssertionError("Adjacent value reset differs")
                        expected_table = bytearray(initial)
                        expected_head = prefix if mode == 1 else tail
                        expected_table[bucket * 4:bucket * 4 + 4] = expected_head.to_bytes(4, "little")
                        if bytes(table) != expected_table:
                            raise AssertionError("Wrong bucket stride, head, or unlink")
                        if mode == 1 and word(prefix).value != tail:
                            raise AssertionError("Middle-of-chain removal lost the successor")
                        if branch.value != (1 if growth else 2):
                            raise AssertionError("Wrong existing-capacity/growth path")
                        if not growth and extra.value != expected_first:
                            raise AssertionError("Fifth explicit argument lost raw DWORD bits")
                        if word(receiver + 8).value != base + (0x808 if growth else 0x810):
                            raise AssertionError("Existing-capacity path did not advance eight bytes")
                        if word(record + 8).value != 0xA5A5A5A5:
                            raise AssertionError("Write outside the eight-byte record")
                        cases += 1
        if cases != 108:
            raise AssertionError("Focused fixture coverage changed")
        return cases
    finally:
        release()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--library", type=Path, help=argparse.SUPPRESS)
    args = parser.parse_args()
    if args.library:
        print(f"PASS {check_library(args.library)} actual-source DWORD-link cases")
        return
    root = args.root.resolve()
    block = source_block(root)
    if args.xbe:
        check_xbe(args.xbe)
    else:
        print("Original XBE absent; original instruction provenance not rechecked")
    compiler = shutil.which("clang")
    if compiler is None:
        parser.error("Clang is required")
    template = (root / "tests/test_002237c0_link_words.c").read_text(encoding="utf-8")
    marker = "    /* INSERT_SOURCE_BLOCK */"
    if template.count(marker) != 1:
        raise ValueError("Invalid fixture template")
    with tempfile.TemporaryDirectory(prefix="bf_002237c0_") as directory:
        folder = Path(directory)
        source = folder / "fixture.c"
        source.write_text(template.replace(marker, textwrap.indent(block, "    ")), encoding="utf-8")
        library = folder / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
        for opt in ("-O0", "-O2"):
            subprocess.run([compiler, "-std=c11", "-Wall", "-Wextra", "-Werror",
                            "-pedantic-errors", "-shared", opt,
                            *([] if sys.platform == "win32" else ["-fPIC"]),
                            str(source), "-o", str(library)], check=True)
            # Separate process releases the Windows DLL before rebuild/removal.
            subprocess.run([sys.executable, str(Path(__file__).resolve()),
                            "--library", str(library)], check=True)
        controls = (
            ("double-scaled bucket", block.replace("DAT_00414da0[uVar9]",
                 "DAT_00414da0[(uVar9 * 4) & 2047]")),
            ("wrong raw fifth argument", block.replace(
                "local_25c,param_1,local_25c[0]", "local_25c,param_1,local_25c[1]")),
            ("missing adjacent value reset", "".join(
                block.rsplit("local_25c[1] = 0;", 1))),
        )
        for name, altered in controls:
            if altered == block:
                raise ValueError("Missing negative-control mutation: " + name)
            source.write_text(template.replace(marker, textwrap.indent(altered, "    ")),
                              encoding="utf-8")
            subprocess.run([compiler, "-std=c11", "-Wall", "-Wextra", "-Werror",
                            "-pedantic-errors", "-shared", "-O2",
                            *([] if sys.platform == "win32" else ["-fPIC"]),
                            str(source), "-o", str(library)], check=True)
            result = subprocess.run([sys.executable, str(Path(__file__).resolve()),
                                     "--library", str(library)], capture_output=True, text=True)
            if result.returncode != 1 or "AssertionError" not in result.stderr:
                raise ValueError("Negative control did not report a mismatch: " + name)
            print("PASS rejected negative control:", name)
    print("PASS host source-block fixtures; guest mapping, helper ABI and game behavior unverified")


if __name__ == "__main__":
    main()
