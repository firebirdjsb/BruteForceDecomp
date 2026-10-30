#!/usr/bin/env python3
"""Private original-byte differential oracle for the isolated 155C1C tail.

Requires x86-64 Windows, Clang and Capstone. Never writes original bytes to Git.
The native oracle adapts pointer width, CALL displacement and global-byte
addressing; it is not a complete Xbox execution environment or byte match.
"""

# Archived C-only evidence: active game-core validation uses strict C++17.
if __name__ == "__main__":
    import sys as _archive_sys
    from pathlib import Path as _ArchivePath
    _archive_sys.path.insert(0, str(_ArchivePath(__file__).resolve().parents[1] / "tools"))
    from historical_c11 import require_historical_c11_opt_in
    require_historical_c11_opt_in()

import argparse
import hashlib
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections

XBE_SHA = "b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721"
BODY_SHA = "f7b7ffd8d854213afa2ef6ffe9ce142c332cd7ec3a27b05bcce526f83a1a78c6"
TAIL_SHA = "26b91436b54e8c53fce7f711a5eee4a9c238f3a8765f61316c689e3f0af2b58c"
GETTER_SHA = "de39b6dece42b44e9508dd2033a9641d4725d83ce2f99f0bbc52be9d5e26a993"


def authenticated(image):
    if hashlib.sha256(image).hexdigest() != XBE_SHA:
        raise ValueError("Pinned whole-XBE hash mismatch")
    sections = xbe_sections(image)
    spans = ((0x155840, 1500, BODY_SHA), (0x155c1c, 0x11a, TAIL_SHA),
             (0x1fc40, 40, GETTER_SHA))
    out = []
    for address, size, digest in spans:
        raw = mapped_span(image, sections, address, size)
        if hashlib.sha256(raw).hexdigest() != digest:
            raise ValueError(f"Pinned span mismatch at {address:x}")
        out.append(raw)
    return out[1:]


def oracle(tail, getter):
    # In long mode EBP-relative memory uses RBP without changing opcode bytes.
    # Frame/receiver allocations are below 4 GiB, preserving LEA EAX truncation.
    # The global AL moffs load changes from absolute32 to [R8] supplied by test.
    offset = 0x155ce5 - 0x155c1c
    if tail[offset:offset+5] != bytes.fromhex("a048bd3700"):
        raise ValueError("Unexpected original global byte load")
    original = tail
    tail = bytearray()
    call = None
    index = 0
    while index < len(original):
        address = 0x155c1c + index
        if address in (0x155c28,0x155ca9):
            # Snapshot rounded RSQRT inputs outside the tested frame without
            # changing floating operations or flags consumed by the later TEST.
            displacement = 0x30 if address == 0x155c28 else 0x34
            tail.extend(bytes.fromhex("8b55e48955")+bytes([displacement]))
        if address == 0x155c4e:
            call = len(tail)
        if index == offset:
            tail.extend(bytes.fromhex("418a00"))
            index += 5
        else:
            tail.append(original[index])
            index += 1
    # PUSH RBP/RSI/RBX; RBP=RCX, RSI=RDX under Windows x64 ABI.
    prefix = bytes.fromhex("5556534889cd4889d6")
    suffix = bytes.fromhex("0f95c00fb6c05b5e5dc3")  # preserved TEST flags -> return
    # Getter SUB/ADD ESP must be widened to RSP for host scratch, retaining
    # eight-byte scratch and the exact original x87 arithmetic/copy operations.
    if not getter.startswith(bytes.fromhex("83ec08")) or getter[-4:] != bytes.fromhex("83c408c3"):
        raise ValueError("Unexpected getter scratch instructions")
    getter = b"\x48" + getter[:-4] + b"\x48" + getter[-4:]
    assert call is not None
    target = len(prefix) + len(tail) + len(suffix)
    struct.pack_into("<i", tail, call+1, target-(len(prefix)+call+5))
    return prefix + tail + suffix + getter


def access_trace(tail):
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    from capstone.x86 import X86_OP_MEM, X86_REG_EBP, X86_REG_EAX
    engine = Cs(CS_ARCH_X86, CS_MODE_32)
    engine.detail = True
    events, addresses = [], []
    def emit(kind, address):
        events.append(kind)
        addresses.append(address)
    for ins in engine.disasm(tail, 0x155c1c):
        if ins.address == 0x155c4e:
            # Independent original getter order, using the fixture's documented
            # synthetic scratch [base+20,base+24] for the callback boundary.
            for kind, addr in (("R",0x19c),("W",0x24),("R",0x190),("R",0x24),
                               ("W",0x20),("R",0x184),("R",0x20),
                               ("W",0xc8),("W",0xcc),("W",0xd0)):
                emit(kind,addr)
        if ins.mnemonic == "lea":
            continue
        for index, operand in enumerate(ins.operands):
            if operand.type != X86_OP_MEM:
                continue
            mem = operand.mem
            if mem.base == X86_REG_EBP:
                address = 0x100 + mem.disp
            elif mem.base == X86_REG_EAX:
                address = 0xc8 + mem.disp
            elif mem.base == 0 and mem.disp == 0x37bd48:
                address = 0x37bd48
            else:
                raise ValueError(f"Unexpected original memory operand: {ins}")
            kind = "B" if ins.address == 0x155ce5 else (
                "W" if ins.mnemonic in ("fst", "fstp") or
                (ins.mnemonic in ("mov", "movss") and index == 0) else "R")
            emit(kind,address)
    return events, addresses


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--xbe", type=Path, required=True)
    ap.add_argument("--clang", default=shutil.which("clang"))
    ap.add_argument("--tooldeps", type=Path)
    args = ap.parse_args()
    if sys.platform != "win32" or not args.clang:
        ap.error("This native original-byte oracle requires Windows x64 and Clang")
    if args.tooldeps:
        sys.path.insert(0, str(args.tooldeps))
    tail, getter = authenticated(args.xbe.read_bytes())
    events, addresses = access_trace(tail)
    native = oracle(tail, getter)
    header = ROOT / "include/bf_00155840_tail_operation.h"
    source = header.read_text(encoding="utf-8")
    test = ROOT / "tests/test_00155840_tail_operation.c"
    mutants = {
        "round-retained-cross-X": (
            "BF_T_EXT(155c8d,fst_m32fp,&w); BF_T_WRITE(155c8d,ebp-0x58u,w);",
            "BF_T_POP(155c8d,ebp-0x58u); BF_T_MEM(155c8d,fld_m32fp,ebp-0x58u);"),
        "round-normalized-XY": (
            "BF_T_POP(155cc5,ebp-0x50u);",
            "BF_T_POP(155cc5,ebp-0x50u); BF_T_POP(155cc5,ebp-0x54u); "
            "BF_T_POP(155cc5,ebp-0x58u); BF_T_MEM(155cc5,fld_m32fp,ebp-0x58u); "
            "BF_T_MEM(155cc5,fld_m32fp,ebp-0x54u);"),
        "reorder-integer-copy": (
            "BF_T_WRITE(155c85,ebp-0x54u,eax_bits);\n    BF_T_WRITE(155c88,ebp-0x50u,ecx_bits);",
            "BF_T_WRITE(155c88,ebp-0x50u,ecx_bits);\n    BF_T_WRITE(155c85,ebp-0x54u,eax_bits);"),
    }
    with tempfile.TemporaryDirectory(prefix="bf155840_tail_") as directory:
        temp = Path(directory)
        generated = "static const unsigned char tail_oracle_bytes[]={" + ",".join(str(b) for b in native) + "};\n"
        generated += "static const char expected_tail_events[]={" + ",".join(repr(e) for e in events) + "};\n"
        generated += "static const uint32_t expected_tail_offsets[]={" + ",".join(hex(a) for a in addresses) + "};\n"
        (temp / "tail_private_oracle.h").write_text(generated, encoding="utf-8")
        for optimization in ("-O0", "-O2"):
            flags = [args.clang,"-std=c11",optimization,"-Wall","-Wextra","-Werror",
                     "-pedantic-errors","-ffp-contract=off","-I",str(temp),"-I",str(ROOT/"include")]
            def run(label):
                exe = temp / (label+optimization+".exe")
                subprocess.run([*flags,str(test),"-o",str(exe)],check=True)
                return subprocess.run([str(exe)],capture_output=True,text=True)
            result = run("baseline")
            if result.returncode:
                raise RuntimeError(result.stdout+result.stderr)
            print(optimization+": "+result.stdout.strip())
            for name,(old,new) in mutants.items():
                if source.count(old)!=1:
                    raise ValueError(f"Negative-control anchor changed: {name}")
                (temp/header.name).write_text(source.replace(old,new),encoding="utf-8")
                result = run(name)
                (temp/header.name).unlink()
                if result.returncode==0:
                    raise RuntimeError(f"Negative control survived: {name}")
                if name.startswith("round-") and "memcmp(memory+0x98" not in result.stderr and "memcmp(t.rsqrt_inputs" not in result.stderr:
                    raise RuntimeError(f"Precision control did not change differential output: {name}: {result.stderr}")
                if name == "reorder-integer-copy" and "t.addresses[i]==" not in result.stderr:
                    raise RuntimeError(f"Order control did not fail original-derived trace: {result.stderr}")
                print(optimization+": rejected "+name)
    print("PASS pinned XBE/body/tail/getter hashes; adapted original-byte oracle")
    print("No full caller, Xbox FP environment, guest fault replay or byte-match claim")


if __name__ == "__main__":
    main()
