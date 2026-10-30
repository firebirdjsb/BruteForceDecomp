#!/usr/bin/env python3
"""Check the scoped stack model; Windows also executes a byte-checked i686 oracle."""

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
HEADER = ROOT / "include/bf_x86_stack_probe_002ebea0.h"
TEST = ROOT / "tests/test_002ebea0_stack_probe.c"
NATIVE = ROOT / "tests/test_002ebea0_native.c"
ASM = ROOT / "tests/x86_2ebea0_reference.S"
BODY_SHA = "b77ad187f6f3db2a5ae4f8e214b023d7c62ce25a38ce769a993d2a8c81643760"


def native_body(path):
    """Read exported label RVAs from the temporary PE, without executing it."""
    data = path.read_bytes()
    pe = struct.unpack_from("<I", data, 0x3c)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise ValueError("Native oracle is not a PE image")
    machine, count = struct.unpack_from("<HH", data, pe + 4)
    optional_size = struct.unpack_from("<H", data, pe + 20)[0]
    optional = pe + 24
    if machine != 0x14c or struct.unpack_from("<H", data, optional)[0] != 0x10b:
        raise ValueError("Native oracle must be i686 PE32")
    sections = []
    for i in range(count):
        at = optional + optional_size + i * 40
        virtual_size, va, raw_size, raw = struct.unpack_from("<IIII", data, at + 8)
        sections.append((va, min(virtual_size, raw_size), raw))

    def offset(rva, size=1):
        for va, length, raw in sections:
            if va <= rva and rva - va + size <= length:
                return raw + rva - va
        raise ValueError("Unbacked native PE RVA")

    export = struct.unpack_from("<I", data, optional + 96)[0]
    fields = struct.unpack_from("<IIHHIIIIIII", data, offset(export, 40))
    functions, names, ordinals = fields[8:11]
    exports = {}
    for i in range(fields[7]):
        name_rva = struct.unpack_from("<I", data, offset(names + 4 * i, 4))[0]
        at = offset(name_rva)
        name = data[at:data.index(b"\0", at)].decode("ascii")
        ordinal = struct.unpack_from("<H", data, offset(ordinals + 2 * i, 2))[0]
        exports[name] = struct.unpack_from("<I", data,
                                           offset(functions + 4 * ordinal, 4))[0]
    begin = exports["bf_stack_probe_native_begin"]
    end = exports["bf_stack_probe_native_end"]
    size = end - begin
    if size != 65:
        raise ValueError(f"Native body has {size} bytes, expected 65")
    at = offset(begin, size)
    body = data[at:at + size]
    if hashlib.sha256(body).hexdigest() != BODY_SHA:
        raise ValueError("Assembled native body differs from pinned original digest")
    return body


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path)
    args = parser.parse_args()
    clang = shutil.which("clang")
    if not clang:
        parser.exit(1, "clang required\n")
    if args.xbe:
        subprocess.run([sys.executable, str(ROOT / "scripts/verify_stack_storage_repairs.py"),
                        str(args.xbe)], check=True)
    else:
        print("Original XBE absent: private instruction provenance not rechecked", flush=True)
    source = HEADER.read_text(encoding="utf-8")
    with tempfile.TemporaryDirectory(prefix="bf-stack-probe-") as directory:
        folder = Path(directory)
        executable = folder / ("portable.exe" if sys.platform == "win32" else "portable")
        command = [clang, "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic",
                   "-I", str(ROOT / "include")]
        for opt in ("-O0", "-O2"):
            subprocess.run(command + [opt, str(TEST), "-o", str(executable)], check=True)
            subprocess.run([str(executable)], check=True)
        if sys.platform == "win32":
            exports = folder / "oracle.def"
            exports.write_text("EXPORTS\n"
                "bf_stack_probe_native_begin\n"
                "bf_stack_probe_native_end\n", encoding="utf-8")
            native = folder / "native.exe"
            for opt in ("-O0", "-O2"):
                subprocess.run(command + ["-target", "i686-pc-windows-msvc", opt,
                    "-DBF_STACK_PROBE_NATIVE", str(TEST), str(NATIVE), str(ASM),
                    "-Wl,/def:" + str(exports), "-o", str(native)], check=True)
                body = native_body(native)  # Refuse execution until bytes authenticate.
                print("PASS assembled 65-byte i686 body matches original SHA-256", flush=True)
                # Exercise the fail-closed gate without executing altered code.
                image = native.read_bytes()
                if image.count(body) != 1:
                    raise ValueError("Ambiguous native body in temporary image")
                changed = bytearray(image)
                changed[image.index(body) + 64] ^= 1
                damaged = folder / "altered-oracle.exe"
                damaged.write_bytes(changed)
                try:
                    native_body(damaged)
                except ValueError as error:
                    if "differs from pinned original digest" not in str(error):
                        raise
                else:
                    raise ValueError("Altered native oracle was not rejected")
                print("PASS rejected altered native body before execution", flush=True)
                subprocess.run([str(native)], check=True)
        else:
            print("Native i686 execution is Windows-only; portable checks ran here")
        mutants = (
            ("lost final exact-page probe",
             "    if (!mem->read32(mem->user, address, &value)) goto read_fault;\n"
             "    bf_sp_002ebea0_logic(s, value & s->eax);\n"
             "    s->eip = UINT32_C(0x002ebed8);",
             "    if ((input.eax & 4095u) != 0 &&\n"
             "        !mem->read32(mem->user, address, &value)) goto read_fault;\n"
             "    bf_sp_002ebea0_logic(s, value & s->eax);\n"
             "    s->eip = UINT32_C(0x002ebed8);"),
            ("wrong final TEST operand",
             "    bf_sp_002ebea0_logic(s, value & s->eax);\n"
             "    s->eip = UINT32_C(0x002ebed8);",
             "    bf_sp_002ebea0_logic(s, value & s->ecx);\n"
             "    s->eip = UINT32_C(0x002ebed8);"),
            ("fabricated AF definedness",
             "(s->eflags_defined | defined) & ~BF_SP_002EBEA0_AF",
             "(s->eflags_defined | defined | BF_SP_002EBEA0_AF)"),
        )
        for label, before, after in mutants:
            if source.count(before) != 1:
                raise ValueError("Missing or ambiguous mutation site: " + label)
            (folder / HEADER.name).write_text(source.replace(before, after), encoding="utf-8")
            subprocess.run([clang, "-std=c11", "-O2", "-I", str(folder),
                            "-I", str(ROOT / "include"), str(TEST), "-o", str(executable)],
                           check=True)
            result = subprocess.run([str(executable)], capture_output=True, text=True)
            if result.returncode != 1 or "FAIL line " not in result.stderr:
                raise ValueError("Negative control did not fail: " + label)
            print("PASS rejected negative control:", label)
    print("PASS scoped stack contract; entry bridges and Xbox exception delivery unverified")


if __name__ == "__main__":
    main()
