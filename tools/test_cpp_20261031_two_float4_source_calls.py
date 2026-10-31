#!/usr/bin/env python3
"""Source-proven C++17 float4 caller declarations and partial host linkage.

No original Xbox XBE, register ABI, SSE semantics, or 1:1 behavior is certified.
The declarations reproduce the existing callee draft signature without changing
any original caller expression, memory representation, or function body.
"""
from __future__ import annotations

import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CALLEE = ROOT / "src/main_unclassified/band_0023/0x00233b10.cpp"
CALLEE_SHA256 = "c7793f04d0b26116c84f7ec7243dc493de91665235c347656dc0b9195b14555c"
CALLEE_BODY_SHA256 = "4911F4E987F45DF85A910E477357C52F90778B138EED1EC08B40AB9D5839C479"
NOTE = "/* Source-matched callee draft declaration only; original Xbox ABI_UNVERIFIED. */\n"
DECL = "extern float *FUN_00233b10(float *param_1,float *param_2,float *param_3,float param_4);\n"
INSERT = NOTE + DECL
CASES = (
    (
        "0027ff20", "0027",
        "2c76c85c1d4e0b24f7c459250afa3f9a926336222a0623a0e387200e846fc6e8",
        "2CC3BFE9FD06298DBABCFF840AA55CBC5B975F0376E8BA2CB3E4B4B6B17D4B5F",
        "FUN_00233b10(param_5 + 3,param_2 + 3,param_3 + 3,param_4);",
    ),
    (
        "002907b0", "0029",
        "74f0e6bd9d827393a14e07b96aef4e1974acb0de0ddf1067950f3bf52b4b3316",
        "95305422DBD355639EA6A3379F21B49679B350E8431B413371BFEF9AD13B6DA2",
        "FUN_00233b10(in_EAX + 3,in_EDX + 3,in_ECX + 3,param_2);",
    ),
)


def sha256(content: bytes) -> str:
    return hashlib.sha256(content).hexdigest()


def source_path(row: tuple[str, ...]) -> Path:
    return ROOT / "src/main_unclassified" / ("band_" + row[1]) / ("0x" + row[0] + ".cpp")


def verify_source(row: tuple[str, ...], content: str) -> None:
    address, _, preimage_sha, original_body_sha, call = row
    if content.count(INSERT) != 1:
        raise ValueError("missing exact source-only declaration " + address)
    if content.count(call) != 1 or f"Entry: 0x{address}" not in content:
        raise ValueError("call expression or original address changed " + address)
    if f"Input x86 body SHA-256: {original_body_sha}" not in content:
        raise ValueError("original machine-code digest label changed " + address)
    if "ABI_UNVERIFIED" not in content:
        raise ValueError("unverified Xbox ABI label removed " + address)
    original = content.replace(INSERT, "", 1).encode("utf-8")
    if sha256(original) != preimage_sha:
        raise ValueError("original source body changed " + address)


def clang(source: Path, opt: str, *, output: Path | None = None) -> subprocess.CompletedProcess[str]:
    compiler = shutil.which("clang++")
    if compiler is None:
        raise RuntimeError("clang++ unavailable")
    command = [compiler, "-std=c++17", opt, "-I", str(ROOT / "include")]
    if output is None:
        command += ["-fsyntax-only", str(source)]
    else:
        command += ["-c", str(source), "-o", str(output)]
    return subprocess.run(command, text=True, capture_output=True, timeout=90)


class Float4CallerDeclarations(unittest.TestCase):
    def test_callee_identity(self):
        text = CALLEE.read_text(encoding="utf-8")
        self.assertEqual(sha256(text.encode("utf-8")), CALLEE_SHA256)
        self.assertIn("Input x86 body SHA-256: " + CALLEE_BODY_SHA256, text)
        self.assertIn(
            "float *FUN_00233b10(float *param_1, float *param_2, float *param_3, float param_4)",
            text,
        )

    def test_unchanged_original_source_bodies(self):
        for row in CASES:
            with self.subTest(caller=row[0]):
                verify_source(row, source_path(row).read_text(encoding="utf-8"))

    @unittest.skipUnless(shutil.which("clang++"), "clang++ required")
    def test_strict_cpp17_o0_o2_and_negative_controls(self):
        with tempfile.TemporaryDirectory() as tmp:
            for row in CASES:
                source = source_path(row)
                text = source.read_text(encoding="utf-8")
                for opt in ("-O0", "-O2"):
                    with self.subTest(caller=row[0], opt=opt):
                        result = clang(source, opt)
                        self.assertEqual(result.returncode, 0, result.stderr)
                for name, changed in (
                    ("missing", text.replace(INSERT, "", 1)),
                    ("wrong_arity", text.replace(DECL, "extern float *FUN_00233b10(float *,float *);\n", 1)),
                    ("wrong_pointer", text.replace(DECL, "extern float *FUN_00233b10(int *,float *,float *,float);\n", 1)),
                ):
                    bad = Path(tmp) / (row[0] + "_" + name + ".cpp")
                    bad.write_text(changed, encoding="utf-8")
                    with self.subTest(caller=row[0], control=name):
                        result = clang(bad, "-O0")
                        self.assertNotEqual(result.returncode, 0, "negative control unexpectedly compiled")

    @unittest.skipUnless(shutil.which("clang++") and shutil.which("nm"), "host toolchain required")
    def test_partial_host_symbol_linkage(self):
        """Only C++ symbol resolution; not Xbox ABI, runtime, or native PC linkage."""
        with tempfile.TemporaryDirectory() as tmp:
            objects = []
            for i, source in enumerate((CALLEE, *(source_path(row) for row in CASES))):
                obj = Path(tmp) / f"function_{i}.o"
                result = clang(source, "-O0", output=obj)
                self.assertEqual(result.returncode, 0, result.stderr)
                objects.append(str(obj))
            linked = Path(tmp) / "partial.o"
            result = subprocess.run(
                [shutil.which("clang++"), "-r", *objects, "-o", str(linked)],
                capture_output=True, text=True, timeout=90,
            )
            self.assertEqual(result.returncode, 0, result.stderr)
            symbols = subprocess.run(
                [shutil.which("nm"), "-C", str(linked)],
                capture_output=True, text=True, timeout=30,
            )
            self.assertEqual(symbols.returncode, 0, symbols.stderr)
            target = "FUN_00233b10(float*, float*, float*, float)"
            definitions = [line for line in symbols.stdout.splitlines() if target in line and " T " in line]
            unresolved = [line for line in symbols.stdout.splitlines() if target in line and " U " in line]
            self.assertEqual(len(definitions), 1, symbols.stdout)
            self.assertFalse(unresolved, symbols.stdout)

    def test_provenance_negative_controls(self):
        row = CASES[0]
        original = source_path(row).read_text(encoding="utf-8")
        for bad in (
            original.replace("ABI_UNVERIFIED", "ABI_VERIFIED"),
            original.replace("Input x86 body SHA-256:", "Input x86 body SHA-255:"),
            original.replace(row[4], row[4].replace("param_4", "param_1")),
        ):
            with self.assertRaises(ValueError):
                verify_source(row, bad)


if __name__ == "__main__":
    unittest.main()
