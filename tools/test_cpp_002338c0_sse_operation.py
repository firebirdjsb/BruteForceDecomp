#!/usr/bin/env python3
"""Pin one source repair and test its bounded host SSE operation.

Only authored synthetic tests execute. Optional private archives are parsed as
data; no uploaded scripts or original executable instruction bytes are run.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import zipfile

from source_layout import relative_source_path

MANIFEST = "metadata/cpp_20261104_002338c0_sse_operation.json"
MANIFEST_SHA = "3c193a743be458e39f3ec6a0341160fe7af0785c24d0413e2a3c8187db07912c"
BODY_SHA = "5897040BE668154EA2E3C435098155BB2F0738FF57A70BFA63AC39F047CF75E1"
SIGNATURE = b"float * FUN_002338c0(float *param_1,float *param_2,float *param_3)"
INCLUDE = b'#include "bf_002338c0_sse_operation.h"\n'
WRAPPER = SIGNATURE + b"""
{
  /* Host SSE memory operation only. Original guest32 pointer transport,
   * stack/register ABI and game integration remain ABI_UNVERIFIED. */
  bf_002338c0_sse_operation(param_1,param_2,param_3);
  return param_1;
}
"""


def sha(data):
    return hashlib.sha256(data).hexdigest()


def blob(data):
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()


def verify_source(source, before, manifest):
    assert sha(source) == manifest["source_after_sha256"], "wrapper identity"
    assert sha(before) == manifest["source_before_sha256"], "preimage identity"
    assert blob(before) == manifest["source_before_git_blob"], "preimage Git blob"
    assert before.count(SIGNATURE) == source.count(SIGNATURE) == 1
    assert source.count(INCLUDE) == source.count(WRAPPER) == 1
    original_suffix = before[before.index(SIGNATURE):]
    restored = source.replace(WRAPPER, original_suffix, 1).replace(INCLUDE, b"", 1)
    assert restored == before, "exact source reversal"
    assert BODY_SHA.encode() in source and BODY_SHA.encode() in before
    assert b"ABI_UNVERIFIED" in source


def verify_archives(rea, exported, manifest):
    evidence = manifest["evidence"]
    assert sha(rea.read_bytes()) == evidence["rea_archive_sha256"], "REA archive identity"
    assert sha(exported.read_bytes()) == evidence["function_export_archive_sha256"], "export identity"
    with zipfile.ZipFile(rea) as archive:
        record = json.loads(archive.read(evidence["rea_member"]))
    assert not record["instructions_truncated"]
    instructions = record["instructions"]
    assert len(instructions) == record["instruction_count_recorded"] == manifest["instruction_count"]
    cursor = int(manifest["body_start"], 16)
    body = bytearray()
    for instruction in instructions:
        assert int(instruction["address"], 16) == cursor, "contiguous byte coverage"
        part = bytes.fromhex(instruction["bytes_from_ghidra"])
        assert part
        body.extend(part)
        cursor += len(part)
    assert cursor - 1 == int(manifest["body_end_inclusive"], 16)
    assert len(body) == manifest["body_byte_count"] == record["function"]["body_address_count"]
    assert sha(body).upper() == BODY_SHA
    for window in manifest["narrow_opcode_windows"]:
        offset = int(window["address"], 16) - int(manifest["body_start"], 16)
        expected = bytes.fromhex(window["hex"])
        assert body[offset:offset + len(expected)] == expected
    with zipfile.ZipFile(exported) as archive:
        rows = [json.loads(row) for row in archive.read(evidence["function_export_member"]).splitlines()]
    row, = [row for row in rows if row["entry"].lower() == manifest["entry"]]
    assert row["index"] == manifest["ghidra_index"]
    assert row["ghidra_memory_sha256"] == BODY_SHA
    assert row["body_address_count"] == len(body)
    assert len(row["body_ranges"]) == 1
    assert int(row["body_ranges"][0]["start"], 16) == int(manifest["body_start"], 16)
    assert int(row["body_ranges"][0]["end_inclusive"], 16) == cursor - 1
    print("Private evidence: 271 contiguous instruction bytes and both original body digests match")


def run(command, *, success=True, text=None, env=None):
    result = subprocess.run(command, input=text, text=True, capture_output=True, env=env)
    if success:
        if result.returncode:
            raise AssertionError(result.stdout + result.stderr)
    else:
        assert result.returncode != 0, f"negative control unexpectedly passed: {command}"
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--rea-archive", type=Path)
    parser.add_argument("--function-export", type=Path)
    args = parser.parse_args()
    root = args.root.resolve()
    manifest_bytes = (root / MANIFEST).read_bytes()
    assert sha(manifest_bytes) == MANIFEST_SHA, "manifest identity"
    manifest = json.loads(manifest_bytes)
    assert manifest["original_body_sha256"] == BODY_SHA
    assert str(relative_source_path(root, manifest["entry"])) == manifest["source"]
    source = (root / manifest["source"]).read_bytes()
    before = (root / manifest["preimage_fixture"]).read_bytes()
    header = (root / manifest["header"]).read_bytes()
    oracle = (root / manifest["oracle"]).read_bytes()
    verify_source(source, before, manifest)
    assert sha(header) == manifest["header_sha256"], "helper identity"
    assert sha(oracle) == manifest["oracle_sha256"], "oracle identity"
    with (root / "metadata/bulk_13694_inventory.csv").open(newline="") as stream:
        inventory, = [row for row in csv.DictReader(stream) if row["entry"] == manifest["entry"]]
    assert BODY_SHA in inventory.values(), "pinned inventory body identity"
    assert manifest["source_before_sha256"] in inventory.values(), "pinned historical source identity"
    controls = 0
    for mutated_source, mutated_before in ((source + b" ", before), (source, before + b" ")):
        try:
            verify_source(mutated_source, mutated_before, manifest)
        except AssertionError:
            controls += 1
        else:
            raise AssertionError("source/preimage mutation was not rejected")
    assert bool(args.rea_archive) == bool(args.function_export), "provide both private archives"
    if args.rea_archive:
        verify_archives(args.rea_archive, args.function_export, manifest)
    else:
        print("Private instruction bytes not re-read in this CI run; source/preimage/body labels are pinned")

    compiler = shutil.which("clang++")
    assert compiler, "Clang++ is required"
    common = [compiler, "-std=c++17", "-msse2", "-mno-avx", "-ffp-contract=off", "-Wall", "-Wextra", "-Werror"]
    with tempfile.TemporaryDirectory(prefix="bf-002338c0-") as directory:
        temp = Path(directory)
        for opt in ("-O0", "-O2"):
            binary = temp / ("operation" + opt)
            run(common + [opt, "-I", str(root / "include"), str(root / manifest["oracle"]),
                          str(root / manifest["source"]), "-o", str(binary)])
            print(run([str(binary)]).stdout.strip())
            old = run(common + [opt, "-I", str(root / "include"), "-x", "c++", "-fsyntax-only", "-"],
                      success=False, text=before.decode())
            assert "CONCAT requires integral bytes" in old.stderr
            controls += 1
            floating_concat = run(common + [opt, "-I", str(root / "include"), "-x", "c++", "-fsyntax-only", "-"],
                                  success=False,
                                  text='#include "bf_ghidra_types.h"\nauto invalid=CONCAT44(1.0f,2.0f);\n')
            assert "CONCAT requires integral bytes" in floating_concat.stderr
            controls += 1
        for option, diagnostic in (("-ffast-math", "must not be built with fast math"),
                                   ("-U__SSE__", "requires GNU/Clang native x86 SSE")):
            negative = run(common + [option, "-I", str(root / "include"), "-x", "c++", "-fsyntax-only", "-"],
                           success=False, text='#include "bf_002338c0_sse_operation.h"\n')
            assert diagnostic in negative.stderr
            controls += 1

        # Mutate only scratch copies. Each altered implementation must disagree
        # with the independently authored, unmodified native instruction oracle.
        replacements = {
            "wrong_lane_order": (
                "_mm_shuffle_ps(column, column, 0xe1)", "_mm_shuffle_ps(column, column, 0xe4)"),
            "early_left_snapshot": (
                "    /* All right-hand lanes are captured before the first output store. */",
                "    float snapshot[12]; __builtin_memcpy(snapshot,left,sizeof snapshot); left=snapshot;"),
            "commuted_nan_add": (
                "static inline __m128 bf_002338c0_add(__m128 destination, __m128 source)\n{",
                "static inline __m128 bf_002338c0_add(__m128 destination, __m128 source)\n{\n"
                "    const __m128 temporary=destination; destination=source; source=temporary;"),
            "reassociated_add": (
                "    product1 = bf_002338c0_add(product1, product0);\n"
                "    product2 = bf_002338c0_mul(product2, column2);\n"
                "    product2 = bf_002338c0_add(product2, product1);",
                "    product2 = bf_002338c0_mul(product2, column2);\n"
                "    product1 = bf_002338c0_add(product2, product1);\n"
                "    product2 = bf_002338c0_add(product1, product0);"),
        }
        for name, (old, new) in replacements.items():
            text = header.decode()
            assert text.count(old) == 1, name
            mutated = temp / name
            mutated.mkdir()
            (mutated / "bf_002338c0_sse_operation.h").write_text(text.replace(old, new, 1))
            binary = mutated / "test"
            run(common + ["-O2", "-I", str(mutated), "-I", str(root / "include"),
                          str(root / manifest["oracle"]), str(root / manifest["source"]), "-o", str(binary)])
            failure = run([str(binary)], success=False)
            assert failure.returncode in (1, 2), "mutation must fail an assertion, not crash"
            print(f"Rejected behavior mutation: {name}")
            controls += 1
    assert controls == 12
    print("Source reversal, C++17 O0/O2, and 12 negative controls passed")
    print("Host SSE operation only: aligned live float objects; guest ABI and Xbox runtime remain unverified")


if __name__ == "__main__":
    main()
