#!/usr/bin/env python3
"""One bounded byte-offset repair: syntax and expression checks, not Xbox ABI.

Optionally set BF_REA_EVIDENCE_ARCHIVE to the private, hash-pinned export ZIP
to recompute the complete original-body digest. CI needs no private export.
Neither that recheck nor the archive's flags reauthenticate the original XBE.
"""
from __future__ import annotations

import copy
import csv
import hashlib
import io
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
import zipfile

from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / "metadata/cpp_20261104_byte_offset_000b2720.json"
MANIFEST_SHA = "b1912f1ee20543ab9f8f26f831dd08a92ddd656fae2c332105dfd4d6ae5ff516"

FIXTURE = r'''
#include "bf_ghidra_types.h"
static_assert(std::is_same<byte, unsigned char>::value, "host byte alias");
static_assert(sizeof(byte) == 1 && sizeof(int) == 4, "fixture widths");
__attribute__((noinline)) bool bit_clear(int *piVar2) {
    return ((REPLACE_EXPRESSION & 1) == 0);
}
int main() {
    // The int pointer is never dereferenced. Conversion back to byte restores
    // the original byte-array pointer; all reads remain inside this array.
    alignas(int) byte data[128];
    for (unsigned value = 0; value < 256; ++value) {
        for (unsigned i = 0; i < 128; ++i) data[i] = 0xa5;
        data[0x13] = static_cast<byte>(value);
        int *piVar2 = reinterpret_cast<int*>(data);
        if (bit_clear(piVar2) != ((value & 1) == 0)) return 1;
        for (unsigned i = 0; i < 128; ++i) {
            const byte expected = i == 0x13 ? static_cast<byte>(value) : byte(0xa5);
            if (data[i] != expected) return 2;
        }
    }
    return 0;
}
'''

I386_FIXTURE = r'''
using byte = unsigned char;
static_assert(sizeof(void*) == 4 && sizeof(int) == 4 && sizeof(byte) == 1,
              "i386 expression fixture only, not original Xbox ABI");
bool bit_clear(int *piVar2) { return ((REPLACE_EXPRESSION & 1) == 0); }
'''


def reverse_source(source, case):
    if hashlib.sha256(source.encode()).hexdigest() != case["source_after_sha256"]:
        raise ValueError("source differs from reviewed byte-offset repair")
    old, new = (case["replacement"][key] for key in ("old", "new"))
    if source.count(new) != 1 or old in source:
        raise ValueError("replacement occurrence changed")
    original = source.replace(new, old, 1)
    if hashlib.sha256(original.encode()).hexdigest() != case["source_before_sha256"]:
        raise ValueError("original source digest changed")
    blob = original.encode()
    identity = hashlib.sha1(b"blob " + str(len(blob)).encode() + b"\0" + blob).hexdigest()
    if identity != case["preimage_git_blob"]:
        raise ValueError("original source Git blob changed")
    return original


def check_windows(windows):
    if len(windows) != 2:
        raise ValueError("expected two instruction windows")
    load, test = windows
    load_bytes, test_bytes = (bytes.fromhex(window["bytes"]) for window in windows)
    # 8B /r, mod=01 reg=ESI r/m=EBP, disp8=8.
    if (int(load["address"], 16) != 0xb2740 or len(load_bytes) != 3 or
            load_bytes[:2] != b"\x8b\x75" or load_bytes[2] != 8):
        raise ValueError("pointer load opcode, registers or displacement changed")
    # F6 /0, mod=01 r/m=ESI, disp8=0x13, imm8=1.
    if (int(test["address"], 16) != 0xb2743 or len(test_bytes) != 4 or
            test_bytes[:2] != b"\xf6\x46" or test_bytes[2:] != b"\x13\x01"):
        raise ValueError("byte TEST opcode, base, displacement or mask changed")


def check_private_body(archive, manifest):
    evidence, case = manifest["evidence"], manifest["case"]
    if hashlib.sha256(archive).hexdigest() != evidence["private_archive_sha256"]:
        raise ValueError("private archive digest changed")
    with zipfile.ZipFile(io.BytesIO(archive)) as bundle:
        record = json.loads(bundle.read(evidence["private_record"]))
    if (int(record["entry"], 16) != int(case["entry"], 16) or
            record["instructions_truncated"] or len(record["instructions"]) != 33):
        raise ValueError("private instruction record identity or completeness changed")
    memory = {}
    for instruction in record["instructions"]:
        start = int(instruction["address"], 16)
        for offset, value in enumerate(bytes.fromhex(instruction["bytes_from_ghidra"])):
            address = start + offset
            if address in memory:
                raise ValueError("overlapping instruction bytes")
            memory[address] = value
    addresses = []
    for body_range in case["body_ranges"]:
        start, end = (int(body_range[key], 16) for key in ("start", "end_inclusive"))
        if end - start + 1 != body_range["length"]:
            raise ValueError("body range length changed")
        addresses.extend(range(start, end + 1))
    if set(memory) != set(addresses) or len(addresses) != case["body_byte_count"]:
        raise ValueError("exported bytes do not exactly cover the pinned body ranges")
    if hashlib.sha256(bytes(memory[address] for address in addresses)).hexdigest().upper() != case["original_body_sha256"]:
        raise ValueError("exported full-body bytes differ from the original digest")
    for window in case["instruction_windows"]:
        start, expected = int(window["address"], 16), bytes.fromhex(window["bytes"])
        if bytes(memory[start + i] for i in range(len(expected))) != expected:
            raise ValueError("private instruction bytes differ from the reviewed window")


class ByteOffsetTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads(MANIFEST.read_text())
        cls.case = cls.manifest["case"]

    def compiler(self):
        compiler = shutil.which("clang++")
        if not compiler:
            self.skipTest("Clang++ unavailable: no compiler or expression result claimed")
        return compiler

    def compile(self, source, *flags):
        return subprocess.run([self.compiler(), "-std=c++17", "-I", str(ROOT / "include"),
                               *flags, str(source)], capture_output=True, text=True, timeout=60)

    def test_manifest_source_identity_and_corruption_controls(self):
        self.assertEqual(hashlib.sha256(MANIFEST.read_bytes()).hexdigest(), MANIFEST_SHA)
        self.assertFalse(self.manifest["original_xbe_reauthenticated"])
        self.assertEqual(self.manifest["original_xbe_sha256"],
                         "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721")
        case = self.case
        self.assertEqual(case["entry"], "0x000b2720")
        self.assertEqual(case["source"], relative_source_path(ROOT, case["entry"]).as_posix())
        source = (ROOT / case["source"]).read_text()
        reverse_source(source, case)
        self.assertIn("Input x86 body SHA-256: " + case["original_body_sha256"], source)
        self.assertIn("Entry: " + case["entry"], source)
        self.assertIn("ABI_UNVERIFIED", source)
        self.assertIn("piVar2 = (int *)puVar4[2];", source)
        with (ROOT / "metadata/bulk_13694_inventory.csv").open(newline="", encoding="utf-8-sig") as stream:
            inventory = {row["entry"].lower(): row for row in csv.DictReader(stream)}
        self.assertEqual(inventory[case["entry"]]["original_body_sha256"].upper(), case["original_body_sha256"])
        for bad in (source + "\n", source.replace("+ 0x13)", "+ 0x12)", 1),
                    source.replace(case["replacement"]["new"], case["replacement"]["old"], 1)):
            with self.assertRaises(ValueError):
                reverse_source(bad, case)
        mutated = copy.deepcopy(case)
        mutated["source_before_sha256"] = "0" * 64
        with self.assertRaises(ValueError):
            reverse_source(source, mutated)

    def test_instruction_windows_and_each_byte_corruption(self):
        windows = self.case["instruction_windows"]
        check_windows(windows)
        for index, window in enumerate(windows):
            original = bytes.fromhex(window["bytes"])
            for offset in range(len(original)):
                corrupted = copy.deepcopy(windows)
                changed = bytearray(original)
                changed[offset] ^= 1
                corrupted[index]["bytes"] = changed.hex()
                with self.subTest(window=index, byte=offset), self.assertRaises(ValueError):
                    check_windows(corrupted)
            corrupted = copy.deepcopy(windows)
            corrupted[index]["address"] = hex(int(window["address"], 16) + 1)
            with self.assertRaises(ValueError):
                check_windows(corrupted)

    def test_complete_source_and_original_failure_controls(self):
        path = ROOT / self.case["source"]
        with tempfile.TemporaryDirectory() as temp:
            original = Path(temp) / "original.cpp"
            original.write_text(reverse_source(path.read_text(), self.case))
            for opt in ("-O0", "-O2"):
                with self.subTest(opt=opt):
                    good = self.compile(path, opt, "-fsyntax-only", "-Werror=pointer-to-int-cast")
                    self.assertEqual(good.returncode, 0, good.stderr)
                    bad = self.compile(original, opt, "-fsyntax-only", "-Werror=pointer-to-int-cast")
                    self.assertNotEqual(bad.returncode, 0)
                    self.assertIn(self.case["expected_diagnostic"], bad.stderr)
                    self.assertEqual(bad.stderr.count("error:"), 1, bad.stderr)

    def test_bounded_byte_values_sentinels_and_wrong_offset_controls(self):
        expressions = (
            ("repaired", self.case["replacement"]["new"], 0),
            ("wrong_displacement", "*(reinterpret_cast<byte*>(piVar2) + 0x12)", 1),
            ("wrong_scaling", "*reinterpret_cast<byte*>(piVar2 + 0x13)", 1),
        )
        with tempfile.TemporaryDirectory() as temp:
            for name, expression, expected in expressions:
                source = Path(temp) / (name + ".cpp")
                source.write_text(FIXTURE.replace("REPLACE_EXPRESSION", expression))
                for opt in ("-O0", "-O2"):
                    with self.subTest(name=name, opt=opt):
                        executable = Path(temp) / (name + opt)
                        result = self.compile(source, opt, "-Wall", "-Wextra", "-Werror",
                                              "-pedantic-errors", "-o", str(executable))
                        self.assertEqual(result.returncode, 0, result.stderr)
                        result = subprocess.run([str(executable)], capture_output=True, timeout=10)
                        self.assertEqual(result.returncode, expected, result.stderr)

    def test_header_free_i386_original_and_repaired_expression_codegen(self):
        # This compiles both spellings at the guest pointer width. It neither
        # runs an Xbox binary nor certifies the complete function's ABI.
        with tempfile.TemporaryDirectory() as temp:
            for name in ("old", "new"):
                source = Path(temp) / (name + ".cpp")
                source.write_text(I386_FIXTURE.replace("REPLACE_EXPRESSION", self.case["replacement"][name]))
                for opt in ("-O0", "-O2"):
                    with self.subTest(name=name, opt=opt):
                        result = self.compile(source, opt, "-target", "i386-unknown-none-elf",
                                              "-ffreestanding", "-nostdinc", "-Wall", "-Wextra",
                                              "-Werror", "-pedantic-errors", "-S", "-o", os.devnull)
                        self.assertEqual(result.returncode, 0, result.stderr)

    def test_optional_private_export_body_hash(self):
        archive_path = os.environ.get("BF_REA_EVIDENCE_ARCHIVE")
        if not archive_path:
            self.skipTest("Private export not supplied: no full-body export recheck in this run")
        archive = Path(archive_path).read_bytes()
        check_private_body(archive, self.manifest)
        with self.assertRaises(ValueError):
            check_private_body(archive + b"\0", self.manifest)
        changed = copy.deepcopy(self.manifest)
        changed["case"]["body_ranges"][0]["end_inclusive"] = "0x000b273a"
        with self.assertRaises(ValueError):
            check_private_body(archive, changed)
        changed = copy.deepcopy(self.manifest)
        changed["case"]["original_body_sha256"] = "0" * 64
        with self.assertRaises(ValueError):
            check_private_body(archive, changed)


if __name__ == "__main__":
    unittest.main()
