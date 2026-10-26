#!/usr/bin/env python3
"""Check 0x00052120 original x87 float stack slots and C11 source.

The caller proves the ECX=this and three stack-argument contract. A second
caller reads three floats from the second output. Actual callee identity and
full write lengths remain unverified; host-native execution is unsupported.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import struct

SOURCE = "src/main_unclassified/band_0005/0x00052120.c"
XBE_SHA256 = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA256 = "a9bb04ff684df913b8d6f81e92e4d06b88773586b58567cf41746be7570bea45"
ENTRY = 0x00052120
BODY_LEN = 157
OPCODES = (
    (0x52120, "83ec28"), (0x52123, "8b06"), (0x52125, "8d4c2410"),
    (0x52129, "51"), (0x5212a, "8d542404"), (0x5212e, "52"),
    (0x5212f, "53"), (0x52130, "8bce"), (0x52132, "ff5020"),
    (0x52135, "8b06"), (0x52137, "8d4c241c"), (0x5213b, "51"),
    (0x5213c, "8d542408"), (0x52140, "52"), (0x52141, "57"),
    (0x52142, "8bce"), (0x52144, "ff5020"),
    (0x5214e, "d9442414"), (0x52157, "d9442400"),
    (0x5215f, "d864242c"), (0x52176, "d9442420"),
    (0x5217d, "d9442404"), (0x521ab, "b001"),
    (0x521b0, "c20400"), (0x521b5, "32c0"), (0x521ba, "c20400"),
    # Independent caller 0x52816 reads three floats from the second output.
    (0x52816, "8b06"), (0x52818, "8d4c2440"),
    (0x5281c, "51"), (0x5281d, "8d542420"),
    (0x52821, "52"), (0x52822, "57"),
    (0x52823, "8bce"), (0x52825, "ff5020"),
    (0x52860, "d9442448"), (0x52867, "d9442444"),
    (0x5286e, "d9442440"),
    # Two independent callers supply a 32-bit float word to 0x52120.
    (0x52315, "8b5c2420"),  # mov ebx,[esp+0x20]
    (0x52319, "8b74241c"),  # mov esi,[esp+0x1c]
    (0x5231d, "680000803f"), # push 1.0f
    (0x52322, "e8f9fdffff"), # call 0x52120
    (0x5283d, "8b4500"),    # mov eax,[ebp]: preceding virtual getter
    (0x52840, "683333333f"), # push pending 0.7f word
    (0x52845, "8bcd"),       # mov ecx,ebp, prior call receiver
    (0x52847, "ff5004"),     # call [eax+4] BETWEEN push and 0x52120
    (0x5284a, "8bd8"),       # mov ebx,eax
    (0x5284c, "e8cff8ffff"), # call 0x52120
)
MARKERS = (
    "undefined1 guest_frame[0x28];",
    "__attribute__((thiscall))",
    "#if defined(_MSC_VER) && defined(_M_IX86)",
    "#define BF_52120_THISCALL __thiscall",
    "get_outputs = (bf_52120_virtual_output_call)*(code **)(*unaff_ESI + 0x20);",
    "get_outputs(unaff_ESI, unaff_EBX, guest_frame + 0x00, guest_frame + 0x10);",
    "get_outputs(unaff_ESI, unaff_EDI, guest_frame + 0x04, guest_frame + 0x1c);",
    "memcpy(&guest_first_y, guest_frame + 0x14, sizeof guest_first_y);",
    "memcpy(&guest_first_x, guest_frame + 0x00, sizeof guest_first_x);",
    "memcpy(&guest_second_y, guest_frame + 0x20, sizeof guest_second_y);",
    "memcpy(&guest_second_x, guest_frame + 0x04, sizeof guest_second_x);",
    "STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED",
)


def check_layout():
    """Model 12-byte float3 outputs as a regression, not callee proof."""
    frame = bytearray(0x28)
    for offset in (0, 0x10, 4, 0x1c):
        assert offset + 12 <= len(frame)
    assert set(range(0, 12)) & set(range(4, 16))
    assert not (set(range(0x10, 0x1c)) & set(range(0x1c, 0x28)))
    struct.pack_into("<fff", frame, 0, 1., 2., 3.)
    struct.pack_into("<fff", frame, 0x10, 4., 5., 6.)
    struct.pack_into("<fff", frame, 4, 7., 8., 9.)
    struct.pack_into("<fff", frame, 0x1c, 10., 11., 12.)
    observed = tuple(struct.unpack_from("<f", frame, offset)[0]
                     for offset in (0, 0x14, 4, 0x20))
    assert observed == (1., 5., 7., 11.), observed


def check_i386_thiscall(clang, source):
    """Probe actual source typedef on both Linux x86 and Windows MSVC x86."""
    import tempfile
    begin = source.index("#if defined(_MSC_VER) && defined(_M_IX86)")
    end = source.index("uint FUN_00052120(float param_1)")
    typedef = source[begin:end]
    probe = ("typedef unsigned char undefined1;\n" + typedef +
             "void test(bf_52120_virtual_output_call f,int *s,int *a,int *b,undefined1 *g) {\n"
             "  f(s,a,g+0,g+0x10);\n"
             "  f(s,b,g+4,g+0x1c);\n"
             "}\n")
    with tempfile.TemporaryDirectory(prefix="bf_52120_thiscall_") as tmp:
        path = Path(tmp) / "thiscall.c"
        path.write_text(probe, encoding="utf-8")
        for target in ("i386-pc-linux-gnu", "i686-pc-windows-msvc"):
            run = subprocess.run([clang, "-target", target, "-fms-extensions",
                                  "-nostdinc", "-S", "-emit-llvm",
                                  str(path), "-o", "-"],
                                 text=True, capture_output=True)
            if run.returncode or run.stdout.count("call x86_thiscallcc void") != 2:
                raise SystemExit(f"two x86 thiscall invocations missing ({target}):\n"
                                 + run.stderr)


def test_source_negative_controls(source):
    """Six mutations must fail source-invariant verification."""
    for old, new in (
        ("guest_frame[0x28]", "guest_frame[0x24]"),
        ("guest_frame + 0x14", "guest_frame + 0x10"),
        ("guest_frame + 0x20", "guest_frame + 0x1c"),
        ("guest_frame + 0x04", "guest_frame + 0x08"),
        ("#define BF_52120_THISCALL __thiscall",
         "#define BF_52120_THISCALL"),
        ("get_outputs(unaff_ESI, unaff_EDI",
         "get_outputs(unaff_EDI, unaff_ESI"),
    ):
        if old not in source:
            raise SystemExit("negative control anchor missing: " + old)
        mutated = source.replace(old, new, 1)
        if all(marker in mutated for marker in MARKERS):
            raise SystemExit("unsafe source mutation accepted: " + old)


def run_synthetic_guest_frame(clang, root):
    """Test 3-DWORD capacity and guards, not the unresolved virtual callee."""
    import tempfile
    with tempfile.TemporaryDirectory(prefix="bf_52120_frame_") as tmp:
        for opt in ("-O0", "-O2"):
            exe = Path(tmp) / ("guest_frame_" + opt[2:])
            build = subprocess.run(
                [clang, "-std=c11", "-Wall", "-Wextra", "-Werror",
                 "-pedantic-errors", opt,
                 str(root / "tests/test_00052120_guest_frame.c"),
                 "-o", str(exe)], text=True, capture_output=True)
            if build.returncode:
                raise SystemExit(f"failed synthetic frame compilation {opt}:\n"
                                 + build.stderr)
            run = subprocess.run([str(exe)], text=True, capture_output=True)
            if run.returncode:
                raise SystemExit(f"synthetic output-frame guard failure {opt}:\n"
                                 + run.stderr)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    source = (args.root / SOURCE).read_text(encoding="utf-8")
    for marker in MARKERS:
        if marker not in source:
            raise SystemExit("missing verified source invariant: " + marker)
    if source.count("get_outputs(unaff_ESI,") != 2:
        raise SystemExit("expected two explicit guest-thiscall calls")
    check_layout()
    test_source_negative_controls(source)
    for invalid in ("(**(code **)(*unaff_ESI + 0x20))();",
                    "(float)puStack_2c", "(float)unaff_EDI", "(float)&puStack_30"):
        if invalid in source:
            raise SystemExit("host pointer-to-float arithmetic returned: " + invalid)
    if args.xbe:
        binary = args.xbe.read_bytes()
        if hashlib.sha256(binary).hexdigest() != XBE_SHA256:
            raise SystemExit("Original XBE SHA-256 mismatch")
        offset = ENTRY - 0x10000
        if hashlib.sha256(binary[offset:offset + BODY_LEN]).hexdigest() != BODY_SHA256:
            raise SystemExit("Original function-body SHA-256 mismatch")
        for address, hexdigits in OPCODES:
            instruction = bytes.fromhex(hexdigits)
            start = address - 0x10000
            if binary[start:start + len(instruction)] != instruction:
                raise SystemExit(f"Original x86 instruction mismatch at 0x{address:08x}")
        for site in (0x52322, 0x5284c):
            offset = site - 0x10000
            rel = int.from_bytes(binary[offset + 1:offset + 5], "little", signed=True)
            if (site + 5 + rel) & 0xffffffff != ENTRY:
                raise SystemExit(f"independent caller no longer targets 0x{ENTRY:08x}")
        assert (binary[0x52125-0x10000+3],
                binary[0x5212a-0x10000+3] - 4) == (0x10, 0)
        assert (binary[0x52137-0x10000+3],
                binary[0x5213c-0x10000+3] - 4) == (0x1c, 4)
    clang = shutil.which("clang")
    if not clang:
        raise SystemExit("clang required for C11 and i386 thiscall verification")
    check_i386_thiscall(clang, source)
    run_synthetic_guest_frame(clang, args.root)
    if clang:
        flags = ["-std=c11", "-fsyntax-only", "-ferror-limit=4",
                 "-Wno-implicit-function-declaration", "-Wno-int-conversion",
                 "-Wno-incompatible-pointer-types", "-Wno-pointer-to-int-cast",
                 "-Wno-int-to-pointer-cast", "-Wno-return-type",
                 "-Wno-deprecated-non-prototype"]
        cmd = [clang, *flags, "-I", str(args.root / "include"), str(args.root / SOURCE)]
        run = subprocess.run(cmd, text=True, capture_output=True)
        if run.returncode:
            raise SystemExit("Focused Clang failed:\n" + run.stderr)
    print(f"PASS: {len(OPCODES) if args.xbe else 0} original opcode windows, 2 independent parent CALLs, 6 negative controls, synthetic buffer guards, Clang C11 and GNU/MSVC i386 thiscall")
    print("Virtual callee identity, complete write lengths, guest registers, x87 precision and native runtime remain unverified.")

if __name__ == "__main__":
    main()
