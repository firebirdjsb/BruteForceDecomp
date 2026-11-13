#!/usr/bin/env python3
"""Link constructor guest models and optionally compare against native retail x86."""
import argparse
import hashlib
import io
from pathlib import Path
import random
import shutil
import struct
import subprocess
import sys
import tempfile

from body_hash_labels import read_body_digest
from check_cpp_direct_call_batches import ROOT, XBE_SHA256, file_offset, require, sections
from source_layout import source_path

# Order matches the dispatch array in the linked fixture.
BODIES = {
    "0x00092330": (88, "E805E1BA7DF3574644C849BD018870B4AB3BDB33EC928D9D82F17BFD56259609"),
    "0x00093480": (114, "108B6E5C8501BA77F4103F4C1F62B26794BBBF52964AB0420062E929A45CB9DE"),
    "0x00094f20": (108, "1C7243D9BF5B03DE96A7F9E1CC6AEE0C942D1811E91DA023778515825F6774C3"),
    "0x000979d0": (65, "21DDAB2FB58E5E233DA717C49CABB13A44D5864E36B15DE5D0AAB1FDCEA47F56"),
    "0x00099210": (79, "B686AD91DFA8141678552F23C06FD0F2DF500FC9EDC3FC8F1EEC63E2F67B3AAB"),
    "0x000998c0": (66, "56AF7A4BBC9EE0560436C8562DE5BF6AD964E94D437101506289F00190AD03BF"),
    "0x0009a690": (93, "2F80EF5239DC488F935B07465F6CAE75FADBAC5DED6DBCEF40A0909345C34F2C"),
    "0x0009e740": (68, "19352416C5DE929E8FC869C4B794B95AE0B27D1CDAC199EE4C8BEDF04BF6AC2F"),
    "0x000a3b80": (199, "49D6389AAEE66C80DFDAA8343539FEBDA0773C868FD0ACEE79B75BE400553C3E"),
    "0x000a91e0": (61, "BEAD1F78C43C62168FC699627F8346E0BFA342B3A472DDC81501F7EF598E6E6B"),
    "0x00255b70": (45, "E8ACB3CEF8ED988BF2E7B14F129DB0B646130F9B2CFCA5A64D68DDF4E2E75952"),
    "0x00256d80": (105, "9578F74CD30AEB9CED11D2285047B3FEE1D0D965129B2F45B7D4C1F81958DE6D"),
    "0x0025bd50": (80, "A40C381CF72B4B50AB316CF2079A43553BE3C1484D8EA2AB7EA52896561FD020"),
    "0x00261fb0": (52, "CCCB1036388E1081DD57AE02BDF946D114D0DCE7A6D7143B902C406E6B4C0166"),
    "0x00263270": (70, "2B1C3DB089EB9B0C47E1B121A630ABED77ECD5B9FFFD86259B9E69B39F3A7E7E"),
    "0x0027c260": (80, "7A175F3557C5AFE0E3822533CAA0A3B67805A227387ECD61A832F8E9A66059D9"),
    "0x0027c3e0": (80, "C06C8DD4878EAABB287D3AB724771341B860854D375610D2890830C02BF5D4E0"),
    "0x0029fbe0": (65, "6B90EDAD0D9A78B6F7D0727F4F306C8F624BEE8495A8F8A31FD1CCE0D41C968B"),
}
BASE = 0x460000
SIZE = 0x10000
FLAGS = 0xCD5  # CF, PF, AF, ZF, SF, DF, OF
CMP_ZERO = {"0x00093480", "0x00094f20", "0x000979d0", "0x00099210",
            "0x0009e740", "0x000a91e0", "0x00256d80", "0x00263270"}
EDI_CONTEXT = {"0x00093480", "0x00094f20", "0x000a91e0", "0x00256d80", "0x00263270"}
FIXTURE = ROOT / "tests/fixtures/guest32_constructors.cpp"
NATIVE = ROOT / "tests/fixtures/guest32_constructors_native.s"


def build_oracle(temp, image, layout):
    sections_asm = []
    sections_ld = []
    for entry, (length, digest) in BODIES.items():
        address = int(entry, 16)
        offset = file_offset(layout, address, length)
        body = image[offset:offset + length]
        require(hashlib.sha256(body).hexdigest().upper() == digest,
                f"retail body mismatch at {entry}")
        path = temp / f"{entry}.bin"
        path.write_bytes(body)
        sections_asm.append(f'.section .retail_{entry},"ax"\n.incbin "{path}"\n')
        sections_ld.append(f".retail_{entry} {entry} : {{ *(.retail_{entry}) }}")
    sources = temp / "oracle.s"
    sources.write_text(NATIVE.read_text(encoding="ascii") + "\n".join(sections_asm))
    script = temp / "oracle.ld"
    script.write_text("ENTRY(_start)\nSECTIONS {\n" + "\n".join(sections_ld) +
                      "\n.guest 0x460000 (NOLOAD) : { . += 0x10000; }\n"
                      ".text 0x8048000 : { *(.text) }\n"
                      ".bss 0x8050000 (NOLOAD) : { *(.bss) }\n}\n")
    obj = temp / "oracle.o"
    exe = temp / "oracle"
    subprocess.run(["as", "--32", "-o", obj, sources], check=True, timeout=10)
    subprocess.run(["ld", "-m", "elf_i386", "-T", script, "-o", exe, obj], check=True, timeout=10)
    syms = subprocess.check_output(["nm", exe], text=True, timeout=10)
    returns = tuple(int(line.split()[0], 16) for line in syms.splitlines()
                    if line.split()[-1] in {"normal_return", "alternate_return"})
    require(len(returns) == 2, "missing native return labels")
    return exe, returns


def corpus(returns):
    rng = random.Random(0xB6EA5D4D)
    for selection, entry in enumerate(BODIES):
        field = {"0x00092330": 0x40, "0x00093480": 0xA0, "0x00094f20": 0xD4,
                 "0x000979d0": 0x5C, "0x00099210": 0x44, "0x000998c0": 0x30,
                 "0x0009a690": 0x9C, "0x0009e740": 0x5C, "0x000a91e0": 0x30,
                 "0x00255b70": 4, "0x00256d80": 0x50, "0x0025bd50": 0x14,
                 "0x00261fb0": 0x1C, "0x00263270": 0x44, "0x0027c260": 0x70,
                 "0x0027c3e0": 0x70, "0x0029fbe0": 8}.get(entry)
        for scenario in range(12):
            image = bytearray(rng.randbytes(SIZE))
            obj = BASE + 0x3110 + (scenario % 3)
            frame = BASE + 0x6100
            context = BASE + 0x7124
            target = BASE + 0x8118
            if scenario == 3 and field is not None:
                # The late context head aliases the untouched predecessor field.
                context = obj + field - 8
                # Its next DWORD is the initialized embedded record's table.
                # Select zero to exercise this alias without writing through it.
            if scenario == 4:
                target = obj + field if field is not None else obj
            if scenario == 5:
                # The last object store overlaps the saved register slot.
                frame = obj + field + 16 if field is not None else obj + 0x80
            if scenario == 6:
                # Late nonzero target write aliases an unaligned object field.
                target = obj + 2
            if scenario == 7:
                # Target slot aliases the just-pushed register for stack users.
                context = frame - 16
            if scenario == 8 and entry == "0x0029fbe0":
                obj = 0x46984C  # The absolute global and first object field coincide.
            if scenario == 9 and field is not None:
                # Earlier writes populate both context fields. The late target
                # load sees the object address at the end of its embedded record.
                context = obj + field
            head = [0, 0x80000001, 0x7FFFFFFF, 0, 1, 0, 0xFFFFFFFF, 1,
                    1, target, 0x80000000, 0x00000080][scenario]
            struct.pack_into("<I", image, context + 8 - BASE, head)
            struct.pack_into("<I", image, context + 12 - BASE, target)
            struct.pack_into("<I", image, 0x46984C - BASE,
                             [0xFFFFFFFF, 0x7FFFFFFF, 0xFFFFFFFE][scenario % 3])
            flags = (rng.getrandbits(12) & FLAGS & ~0x400) | 2
            if scenario % 2:
                flags |= 0x400
            esi = obj + 0x300 if entry in EDI_CONTEXT else context
            edi = context if entry in EDI_CONTEXT else obj + 0x400
            regs = [obj, target, rng.getrandbits(32), rng.getrandbits(32),
                    esi, edi, rng.getrandbits(32), frame, int(entry, 16), flags, FLAGS]
            if entry == "0x0009a690":
                regs[3] = obj
            # Seed POP/RET neighbors after all object/context placement.
            struct.pack_into("<I", image, frame - BASE, returns[scenario % 2])
            yield selection, entry, regs, image


def execute(exe, requests, temp):
    input_file = temp / "requests.bin"
    input_file.write_bytes(requests)
    with input_file.open("rb") as file:
        return subprocess.check_output([exe], stdin=file, timeout=30)


def model_records(raw, cases):
    output = io.BytesIO(raw)
    for selection, entry, regs, _ in cases:
        result = struct.unpack("<11I", output.read(44))
        image = output.read(SIZE)
        require(len(image) == SIZE, f"truncated model memory at {entry}")
        count, = struct.unpack("<I", output.read(4))
        trace = [struct.unpack("<4I", output.read(16)) for _ in range(count)]
        require(trace[-1] == (ord("r"), regs[7], result[8], 4),
                f"wrong final return access at {entry}")
        require(result[7] == regs[7] + 4, f"wrong RET stack adjustment at {entry}")
        require(result[10] == (FLAGS if entry in CMP_ZERO else FLAGS & ~0x10),
                f"wrong flag definedness at {entry}")
        require(all(width in (1, 4) for _, _, _, width in trace), f"access width at {entry}")
        yield result, image, trace
    require(not output.read(1), "trailing model output")


def trace_controls(records):
    # The primary and repeated object writes at 0025bd50 cannot be folded;
    # neither can the intervening zero write before replacement of the link.
    model, _, trace = records[list(BODIES).index("0x0025bd50") * 12]
    obj, _, link = model[:3]
    expected = [
        ("w", obj + 4, 0x3931B0, 4), ("w", obj + 0xC, 0, 4),
        ("w", obj + 0x10, 0, 4), ("w", obj + 8, 0xFFFFFFFF, 4),
        ("w", obj, 0x393208, 4), ("w", obj + 4, 0x3931E4, 4),
        ("w", link, 0x3931A4, 4), ("w", link + 4, 1, 4),
        ("w", link + 8, obj, 4), ("r", 0x46712C, 0, 4),
        ("w", obj + 0x14, 0, 4), ("w", obj + 0x14, link, 4),
    ]
    require(trace[:-1] == [(ord(op), address, value, width)
                           for op, address, value, width in expected],
            "0025bd50 ordered repeated writes or late read changed")
    for scenario, step in ((0, 4), (1, -4)):
        model, _, trace = records[list(BODIES).index("0x0009a690") * 12 + scenario]
        obj = model[0]
        require(trace[4:21] == [(ord("w"), obj + 12 + n * step, 0, 4)
                                 for n in range(17)], "0009a690 REP direction/width changed")
    _, _, trace = records[0]
    require(trace[1][0::3] == (ord("r"), 1) and trace[2][0::3] == (ord("w"), 1)
            and trace[2][2] == trace[1][2] | 3, "00092330 byte RMW was widened or reordered")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, help="private retail image (native i386 Linux runner)")
    args = parser.parse_args()
    clang = shutil.which("clang++")
    require(clang, "clang++ is required")
    paths = []
    for entry, (_, digest) in BODIES.items():
        path = source_path(ROOT, entry)
        require(read_body_digest(path.read_text(encoding="utf-8")) == (digest, False),
                f"source body identity differs at {entry}")
        paths.append(path)
    with tempfile.TemporaryDirectory(prefix="bf-guest32-constructors-") as directory:
        temp = Path(directory)
        returns = (0x8048000, 0x8048100)
        if args.xbe:
            require(sys.platform.startswith("linux"), "native oracle requires x86 Linux")
            image = args.xbe.read_bytes()
            require(hashlib.sha256(image).hexdigest() == XBE_SHA256, "retail image SHA-256 mismatch")
            oracle, returns = build_oracle(temp, image, sections(image))
        cases = list(corpus(returns))
        request = b"".join(struct.pack("<12I", selection, *regs) + image
                           for selection, _, regs, image in cases)
        if args.xbe:
            try:
                native = execute(oracle, request, temp)
            except subprocess.CalledProcessError as error:
                index = len(error.output) // (40 + SIZE)
                raise ValueError(f"native runner failed at {cases[index][1]} scenario {index % 12}") from error
            require(len(native) == len(cases) * (40 + SIZE), "truncated native oracle result")
        baseline = None
        for optimization in ("-O0", "-O2"):
            model = temp / "model"
            subprocess.run([clang, "-std=c++17", "-pedantic-errors", "-Wall", "-Wextra", "-Werror",
                            optimization, "-I", ROOT / "include", FIXTURE, *paths, "-o", model],
                           check=True, timeout=90)
            actual = execute(model, request, temp)
            require(baseline is None or actual == baseline, "optimization changed guest result")
            baseline = actual
            records = list(model_records(actual, cases))
            trace_controls(records)
            if args.xbe:
                for index, ((_, entry, _, _), (result, memory, _)) in enumerate(zip(cases, records)):
                    offset = index * (40 + SIZE)
                    oracle_result = struct.unpack_from("<10I", native, offset)
                    oracle_memory = native[offset + 40:offset + 40 + SIZE]
                    context = f"{entry} scenario {index % 12} ({optimization})"
                    require(result[:9] == oracle_result[:9], f"{context}: register/return difference")
                    mask = result[10]
                    require(((result[9] ^ oracle_result[9]) & mask) == 0,
                            f"{context}: defined status/DF difference")
                    require(memory == oracle_memory, f"{context}: guest memory difference")
            print(f"PASS {optimization}: {len(cases)} constructor cases and focused access traces" +
                  (" with native retail register/flags/memory comparison" if args.xbe else ""))


if __name__ == "__main__":
    main()
