#!/usr/bin/env python3
"""Public-only signed32 SSE conversion foundation gate; no game-function claim."""
from __future__ import annotations

import argparse
import hashlib
import importlib.util
import json
import os
from pathlib import Path
import platform
import re
import shutil
import subprocess
import sys
import tempfile

sys.dont_write_bytecode = True
MANIFEST = "metadata/scalar_sse_conversion_models.json"
MANIFEST_SHA = "7090ae297716c75f4cb7850246ad55e6e0a4ea69392d46b61ea9a5826d612373"
FULL = "PASS cases=94027104 digest=3e3ff9e07e718c00"
QUICK = "PASS cases=4111712 digest=93feb65bf07f7a93"
CORPUS_INPUT = "576de321ccbd762934e9a90ce9fca5358ba07d59fbd6a687a6683d524ca00751"
CORPUS_OUTPUT = "c5498657fdb8eb99c83420c51dd64b1837ee50f68c81c797351aaaae89bc694d"


def require(condition, message):
    if not condition:
        raise AssertionError(message)


def sha(data):
    return hashlib.sha256(data).hexdigest()


def load(name, path):
    spec = importlib.util.spec_from_file_location("bf_scalar_conversion_" + name, path)
    require(spec is not None and spec.loader is not None, "module unavailable: " + name)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def run(command, env, text=None, reject_stderr=False):
    result = subprocess.run(command, input=text, text=True, capture_output=True,
                            env=env, timeout=300)
    require(result.returncode == 0, "command failed: " + " ".join(map(str, command)) +
            "\n" + result.stdout + result.stderr)
    require(not reject_stderr or not result.stderr, "unexpected sanitizer stderr: " + result.stderr)
    return result.stdout


def pins(root, expected):
    for relative, digest in expected.items():
        require(not Path(relative).is_absolute() and ".." not in Path(relative).parts,
                "manifest path escapes repository")
        require(sha((root / relative).read_bytes()) == digest, "artifact changed: " + relative)


def build(compiler, support, test, binary, opt, env, sanitize=False):
    version = run([compiler, "--version"], env)
    vector_flags = (["-fno-vectorize", "-fno-slp-vectorize"] if "clang" in version.lower()
                    else ["-fno-tree-vectorize", "-fno-tree-slp-vectorize"])
    flags = ["-std=c++17", opt, "-Wall", "-Wextra", "-Werror", "-pedantic", "-m64", "-mno-avx"]
    if sanitize:
        flags += ["-fsanitize=address,undefined", "-fno-sanitize-recover=all", "-fno-omit-frame-pointer"]
    run([compiler, *flags, *vector_flags, "-I" + str(support),
         str(support / "native_wrappers.cpp"), str(test), "-o", str(binary)], env)
    return version.splitlines()[0]


def native(binary, full, codegen, objdump, env, sanitize=False):
    output = run([str(binary), "--full" if full else "--quick"], env, reject_stderr=sanitize)
    require(output.splitlines()[-1] == (FULL if full else QUICK), "native count/digest drift")
    disassembly = run([objdump, "-d", "-M", "intel", "--no-show-raw-insn", str(binary)], env)
    regions = codegen.functions(disassembly)
    codegen.verify_regions(regions, sanitize)
    count = codegen.negatives(regions, sanitize)
    require(count == 57, "static mutation count drift")
    print(binary.name + ": " + output.splitlines()[-1] + "; 57 codegen negatives", flush=True)


def rational(binary, oracle, corpus, env):
    rows = list(corpus.corpus())
    require(len(rows) == 505088, "rational corpus count drift")
    request = "".join(f'{int(op == "si")} {bits:08x} {csr:08x}\n' for op, bits, csr in rows)
    require(sha(request.encode()) == CORPUS_INPUT, "rational input corpus changed")
    output = run([str(binary), "--stream"], env, request)
    lines = output.splitlines()
    require(len(lines) == len(rows), "native stream row count")
    for row, line in zip(rows, lines):
        op, bits, csr = row
        fields = line.split()
        require(len(fields) == 6, "native stream shape")
        require([int(fields[0]), int(fields[1], 16), int(fields[2], 16)] ==
                [int(op == "si"), bits, csr], "native stream input identity")
        require(tuple(int(value, 16) for value in fields[3:]) == oracle.evaluate(*row),
                "independent rational disagreement: " + repr(row))
    require(sha(output.encode()) == CORPUS_OUTPUT, "rational output digest drift")
    print("Independent rational/native/integer comparison: 505088 cases", flush=True)


def mutations(compiler, support, test, directory, definitions, env):
    require(len(definitions.MUTATIONS) == 25, "semantic mutation count drift")
    for name, target, old, new in definitions.MUTATIONS:
        destination = directory / name
        shutil.copytree(support, destination)
        target_path = destination / target
        text = target_path.read_text()
        require(old in text, "stale mutation: " + name)
        target_path.write_text(text.replace(old, new))
        binary = destination / "negative"
        build(compiler, destination, test, binary, "-O2", env)
        outcome = subprocess.run([str(binary), "--quick"], text=True, capture_output=True,
                                 env=env, timeout=300)
        require(outcome.returncode == 1 and "FAIL" in outcome.stderr,
                "semantic mutant survived or failed for wrong reason: " + name + "\n" +
                outcome.stdout + outcome.stderr)
    print("Compiled semantic mutation controls: 25 rejected", flush=True)


def raised_tuple_mutation(compiler, support, test, directory, oracle, env):
    # Hardware exposes sticky after, not the operation's independently raised
    # set. Demonstrate that the mandatory rational tuple comparison supplies
    # this otherwise invisible check when PE was already set on entry.
    shutil.copytree(support, directory)
    model = directory / "conversion_model.hpp"
    old = "return {bits, raised, csr | raised};"
    text = model.read_text()
    require(text.count(old) == 1, "raised mutation anchor changed")
    model.write_text(text.replace(old, "return {bits, raised & ~csr, csr | raised};"))
    binary = directory / "negative"
    build(compiler, directory, test, binary, "-O2", env)
    output = run([str(binary), "--stream"], env, "0 3fc00000 00001fa0\n")
    fields = output.split()
    require(len(fields) == 6, "raised mutation stream shape")
    actual = tuple(int(value, 16) for value in fields[3:])
    expected = oracle.evaluate("tt", 0x3fc00000, 0x1fa0)
    require(actual[0] == expected[0] and actual[2] == expected[2], "wrong mutation witness")
    require(actual[1] == 0 and expected[1] == 32, "raised delta mutant was not distinguished")
    print("Already-sticky per-operation raised-tuple mutant: rejected", flush=True)


def main():
    require(__debug__, "this gate requires Python assertions; do not use -O or PYTHONOPTIMIZE")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--compiler", action="append", help="C++ compiler executable; repeat for a matrix")
    parser.add_argument("--sanitize", action="store_true", help="also run ASan+UBSan quick corpus")
    args = parser.parse_args()
    root = args.root.resolve()
    manifest_bytes = (root / MANIFEST).read_bytes()
    require(sha(manifest_bytes) == MANIFEST_SHA, "manifest identity")
    manifest = json.loads(manifest_bytes)
    pins(root, manifest["artifact_sha256"])
    require(platform.system() == "Linux" and platform.machine() in ("x86_64", "AMD64"),
            "native checks require Linux x86-64; no unsupported-platform skip")
    objdump = shutil.which("objdump")
    require(objdump is not None, "GNU objdump is required")
    choices = args.compiler or [os.environ.get("CXX") or shutil.which("clang++") or shutil.which("g++")]
    compilers = [shutil.which(name) if name else None for name in choices]
    require(all(compilers), "requested C++ compiler unavailable")
    support = root / "tests/support/scalar_sse_conversions"
    test = root / "tests/test_scalar_sse_conversions.cpp"
    codegen = load("codegen", support / "codegen.py")
    oracle = load("rational", support / "rational_oracle.py")
    corpus = load("corpus", support / "corpus.py")
    controls = load("mutations", support / "mutations.py")
    with tempfile.TemporaryDirectory(prefix="bf-scalar-conversion-gate-") as scratch:
        directory = Path(scratch)
        env = {**os.environ, "TMPDIR": scratch, "PYTHONDONTWRITEBYTECODE": "1",
               "ASAN_OPTIONS": "detect_leaks=0", "UBSAN_OPTIONS": "halt_on_error=1"}
        selftest = json.loads(run([sys.executable, "-B", str(support / "rational_selftest.py")], env))
        require(selftest["checks_passed"] == 82000 and selftest["status"] == "passed", "rational self-test")
        print("Rational edge/property/API/CLI self-test: 82000 checks", flush=True)
        for index, compiler in enumerate(compilers):
            for opt in ("-O0", "-O2"):
                binary = directory / ("compiler" + str(index) + opt)
                version = build(compiler, support, test, binary, opt, env)
                print(version, flush=True)
                native(binary, True, codegen, objdump, env)
            rational(binary, oracle, corpus, env)
            mutations(compiler, support, test, directory / ("mutants" + str(index)), controls, env)
            raised_tuple_mutation(compiler, support, test, directory / ("raised-mutant" + str(index)), oracle, env)
            if args.sanitize:
                binary = directory / ("compiler" + str(index) + "-sanitized")
                build(compiler, support, test, binary, "-O1", env, True)
                native(binary, False, codegen, objdump, env, True)
    pins(root, manifest["artifact_sha256"])
    print("PASS: reusable conversion foundation only; no candidate implementation, syntax gain, or original-CPU proof")


if __name__ == "__main__":
    main()
