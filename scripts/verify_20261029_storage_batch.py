#!/usr/bin/env python3
"""Check three actual-source storage projections; not complete guest execution."""

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
import re
import shutil
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_00226cc0_vectors import balanced, start_at

BODIES = {
    "0x00340983": (884, "BC2E07FA2B3F4D317175F53B94CD7BDA637F179A73C84A4F61919C4C4574BB8F"),
    "0x00342562": (722, "CC74015227A92774806260A6750CE6585FC4FE1066B401AA074C52D92678A324"),
    "0x0035b680": (696, "3FF21DD071F13A661216E296A1D0E1E7358ED2A33F667B84DC071811ACB934BC"),
    "0x00341d7a": (283, "48DCD119EE6ED5BE01661502267F1566E8CFAB064545BF5B2149E240467AB1D9"),
}
OPS = {
    0x34098F: "b8d0070000",  # Exact fixed allocation size.
    0x3409A8: "8bfc8d87d00700008945a033c0b9f4010000897d9c897da4f3ab",
    0x342565: "81ec3c030000",  # Original fixed local frame.
    0x34258B: "8d85f4fcffff8945f4",  # Content at record+0x30.
    0x342594: "8d85dcfcffff8945ec",  # Values at record+0x18.
    0x34259E: "8d85c8fcffff8945e8",  # Names at record+4.
    0x3425A8: "8d85f0fcffff894508",  # Count at record+0x2c.
    0x3425B1: "6a345b8d85dcfcffff2bc38945e0",  # Previous-row values, 0x34 stride.
    0x3425BF: "8d85c8fcffff8d95c4fcffff2bc38955f08945e4",
    0x342640: "8079ff2f",  # Opening/self-close path.
    0x342651: "837dfc0f0f83c5010000",  # Reject an opening at depth 15.
    0x34268F: "6a05",  # Five name/value outputs per record.
    0x3426C0: "ff45fc8b45fc015df0015d08015de8015de4015dec015de0015df4",  # Advance all cursors.
    0x3427E0: "ff4dfc295df0295d08295de8295de4295dec295de0295df4",  # Pop all cursors.
    0x341DFB: "8b06893c83",  # Name-pointer DWORD write.
    0x341D90: "8906",  # The helper initializes its count DWORD.
    0x341E41: "8b068b5d10893c83",  # Value-pointer DWORD write.
    0x341E78: "ff068b063b45147203",  # Count increment and output cap.
    0x35B680: "b888400000e81608f9ff",  # Fixed allocation, original helper call.
    0x35B6CC: "8db42498000000",  # Samples S+0x98 after four saved registers.
    0x35B75E: "d91e",  # First F32 output.
    0x35B7D7: "d95e04",  # Second F32 output.
    0x35B83A: "d95cb430",  # Coefficient F32 indexed store at S+0x30.
    0x35B861: "508d4c24345157568d542424e81efbffff",  # Same coefficient base passed after push.
}


def region(source, first, last):
    start = start_at(source, first)
    end = source.index(last, start) + len(last)
    return source[start:end]


def declaration(source, name):
    matches = re.findall(r"(?:uint32_t|float) " + name + r"\[[^\]]+\];", source)
    if len(matches) != 1:
        raise ValueError("Missing or ambiguous declaration: " + name)
    return matches[0]


def render(root, sources):
    for entry, source in sources.items():
        digest, conflict = read_body_digest(source)
        if conflict or digest != BODIES[entry][1] or "ABI_UNVERIFIED" not in source and "UNVERIFIED" not in source:
            raise ValueError("Source provenance/boundary changed: " + entry)
    scratch, records, workspace = (sources[e] for e in ("0x00340983", "0x00342562", "0x0035b680"))
    start = start_at(scratch, "local_64 = (undefined1 *)")
    loop = scratch.index("for (iVar5 =", start)
    scratch_init = scratch[start:balanced(scratch, scratch.index("{", loop))]
    blocks = {
        "SCRATCH_DECL": declaration(scratch, "scratch_words"),
        "SCRATCH_INIT": scratch_init,
        "RECORD_DECL": declaration(records, "record_words"),
        "RECORD_INIT": region(records, "local_10 = record_words", "param_1 = (char *)(record_words + 13 + 11);"),
        "RECORD_ADVANCE": region(records, "local_8 = local_8 + 1;", "local_10 = local_10 + 0xd;"),
        "RECORD_POP": region(records, "local_8 = local_8 - 1;", "local_10 = local_10 + -0xd;"),
        "WORKSPACE_DECL": declaration(workspace, "frame_f32"),
        "SAMPLE_BASE": region(workspace, "pfVar4 = frame_f32 +", ";"),
        "COEFFICIENT": "frame_f32[uVar3] = (float)fVar5;",
        "COEFFICIENT_ALIAS": "frame_f32[uVar3] = (float)fVar5;",
        "SAMPLE_X": "*pfVar4 = fVar1;",
        "SAMPLE_Y": "pfVar4[1] = fVar1;",
    }
    for name in ("SAMPLE_BASE", "COEFFICIENT", "SAMPLE_X", "SAMPLE_Y"):
        if workspace.count(blocks[name]) != 1:
            raise ValueError("Workspace excerpt missing/ambiguous: " + name)
    for call in ("FUN_00342480(param_2,param_3,record_words + 13,&local_c)",
                 "FUN_00341c77(param_2,param_3,record_words + 13,&local_c)",
                 "FUN_00342002(*local_30,*(undefined4 *)(*param_2 + uVar8 * 4),record_words + 13,0,"):
        if call not in records:
            raise ValueError("Record call base changed")
    if "FUN_0035b390(pfVar4,in_stack_0000408c,frame_f32,in_stack_000040b0)" not in workspace:
        raise ValueError("Coefficient call base changed")
    template = (root / "tests/test_20261029_storage_batch.c").read_text(encoding="utf-8")
    for name, block in blocks.items():
        marker = "/* INSERT_" + name + " */"
        if template.count(marker) != 1:
            raise ValueError("Fixture template marker differs")
        template = template.replace(marker, block)
    return template


def verify_xbe(path):
    raw = path.read_bytes()
    sections = xbe_sections(raw)
    for entry, (size, digest) in BODIES.items():
        if hashlib.sha256(mapped_span(raw, sections, int(entry, 16), size)).hexdigest().upper() != digest:
            raise ValueError("Original complete body differs: " + entry)
    for address, encoded in OPS.items():
        expected = bytes.fromhex(encoded)
        if mapped_span(raw, sections, address, len(expected)) != expected:
            raise ValueError(f"Original instruction differs at {address:08x}")
    print("PASS pinned XBE and four complete original bodies plus instruction windows")


def check_library(path):
    lib = ctypes.CDLL(str(path))
    for name in ("bf_test_scratch", "bf_test_workspace"):
        function = getattr(lib, name)
        function.argtypes, function.restype = [], ctypes.c_int
        result = function()
        if result != 0:
            raise AssertionError(f"{name} storage mismatch: {result}")
    function = lib.bf_test_records
    function.argtypes, function.restype = [ctypes.c_uint], ctypes.c_int
    for attributes in range(6):
        result = function(attributes)
        if result != 0:
            raise AssertionError(f"Record storage mismatch attributes={attributes}: {result}")
    print("PASS 500-DWORD zero/base/end, six 15-level record traversals and 4122-F32 alias boundaries")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--xbe", type=Path)
    parser.add_argument("--library", type=Path, help=argparse.SUPPRESS)
    args = parser.parse_args()
    if args.library:
        check_library(args.library)
        return
    root = args.root.resolve()
    sources = {e: source_path(root, e).read_text(encoding="utf-8") for e in BODIES if e != "0x00341d7a"}
    if args.xbe:
        verify_xbe(args.xbe)
    else:
        print("No original XBE supplied; instruction provenance not rechecked")
    compiler = shutil.which("clang")
    if compiler is None:
        parser.error("Clang is required")
    flags = [compiler, "-std=c11", "-Wall", "-Wextra", "-Werror", "-pedantic-errors", "-shared"]
    if sys.platform != "win32":
        flags.append("-fPIC")
    with tempfile.TemporaryDirectory(prefix="bf_storage_batch_") as directory:
        fixture = Path(directory) / "fixture.c"
        library = Path(directory) / ("fixture.dll" if sys.platform == "win32" else "fixture.so")
        def run(changed, opt, negative=False):
            fixture.write_text(render(root, changed), encoding="utf-8")
            subprocess.run([*flags, opt, str(fixture), "-o", str(library)], check=True)
            result = subprocess.run([sys.executable, str(Path(__file__).resolve()), "--library", str(library)],
                                    capture_output=negative, text=True)
            if negative:
                if result.returncode != 1 or "AssertionError" not in result.stderr:
                    raise ValueError("Negative control did not produce a storage mismatch")
            else:
                result.check_returncode()
        for opt in ("-O0", "-O2"):
            run(sources, opt)
        for entry, name, old, new in (
            ("0x00340983", "short zero loop", "iVar5 = 500;", "iVar5 = 499;"),
            ("0x00342562", "wrong previous value lane", "local_24 = record_words + 6;", "local_24 = record_words + 5;"),
            ("0x00342562", "wrong record stride", "local_14 = local_14 + 0xd;", "local_14 = local_14 + 0xc;"),
            ("0x0035b680", "wrong sample base", "pfVar4 = frame_f32 + 26;", "pfVar4 = frame_f32 + 25;"),
        ):
            changed = dict(sources)
            if changed[entry].count(old) != 1:
                raise ValueError("Ambiguous negative control: " + name)
            changed[entry] = changed[entry].replace(old, new)
            run(changed, "-O2", True)
            print("PASS rejected negative control:", name)
    print("PASS isolated storage; original probe/guest frame, helper ABI and runtime remain unverified")


if __name__ == "__main__":
    main()
