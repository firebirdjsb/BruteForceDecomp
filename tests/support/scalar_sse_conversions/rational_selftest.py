#!/usr/bin/env python3
"""Reproduce the rational oracle's 81,993 checks, plus seven CLI negatives.

Run with Python 3.9 or newer, with no third-party packages required:
    python3 -B rational_selftest.py

The 41 manually expected edge vectors are independent of the oracle's formulas.
The randomized checks intentionally reuse its exact binary32 decoder, as in the
original in-memory validation. They check mathematical rounding invariants, not
equivalence against an independent second conversion model or native hardware.
No corpus, bytecode cache, or other output file is created.
"""

import importlib.util
import json
from pathlib import Path
import random
import subprocess
import sys


# This also protects callers who omit -B from creating an oracle bytecode cache.
sys.dont_write_bytecode = True
ORACLE_PATH = Path(__file__).resolve().with_name("rational_oracle.py")
MASKED_MXCSR = 0x1F80
SEED = 20261105


# (binary32 DWORD, expected signed32 DWORD, operation exception flags).
# DAZ's four nonzero subnormal cases are adjusted explicitly in test_edges.
TT_CASES = (
    (0x00000000, 0x00000000, 0),
    (0x80000000, 0x00000000, 0),
    (0x3F800000, 0x00000001, 0),
    (0xBF800000, 0xFFFFFFFF, 0),
    (0x3FC00000, 0x00000001, 32),
    (0xBFC00000, 0xFFFFFFFF, 32),
    (0x3F000000, 0x00000000, 32),
    (0xBF000000, 0x00000000, 32),
    (0x3FFFFFFF, 0x00000001, 32),
    (0x00000001, 0x00000000, 32),
    (0x80000001, 0x00000000, 32),
    (0x007FFFFF, 0x00000000, 32),
    (0x807FFFFF, 0x00000000, 32),
    (0x00800000, 0x00000000, 32),
    (0x80800000, 0x00000000, 32),
    (0x4AFFFFFF, 0x007FFFFF, 32),
    (0xCAFFFFFF, 0xFF800001, 32),
    (0x4EFFFFFF, 0x7FFFFF80, 0),
    (0xCEFFFFFF, 0x80000080, 0),
    (0xCF000000, 0x80000000, 0),
    (0x4F000000, 0x80000000, 1),
    (0xCF000001, 0x80000000, 1),
    (0x7F7FFFFF, 0x80000000, 1),
    (0xFF7FFFFF, 0x80000000, 1),
    (0x7F800000, 0x80000000, 1),
    (0xFF800000, 0x80000000, 1),
    (0x7F800001, 0x80000000, 1),
    (0xFF800001, 0x80000000, 1),
    (0x7FC00000, 0x80000000, 1),
    (0xFFFFFFFF, 0x80000000, 1),
)

# (signed integer, expected binary32 DWORDs in RC order 0/1/2/3, flags).
# Explicit lists cover nearest-even ties, directed rounding for both signs,
# exact INT_MIN, and significand carry at INT_MAX.
SI_CASES = (
    (0, (0x00000000, 0x00000000, 0x00000000, 0x00000000), 0),
    (1, (0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000), 0),
    (-1, (0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000), 0),
    (16777216, (0x4B800000, 0x4B800000, 0x4B800000, 0x4B800000), 0),
    (16777217, (0x4B800000, 0x4B800000, 0x4B800001, 0x4B800000), 32),
    (16777219, (0x4B800002, 0x4B800001, 0x4B800002, 0x4B800001), 32),
    (-16777217, (0xCB800000, 0xCB800001, 0xCB800000, 0xCB800000), 32),
    (-16777219, (0xCB800002, 0xCB800002, 0xCB800001, 0xCB800001), 32),
    (2147483647, (0x4F000000, 0x4EFFFFFF, 0x4F000000, 0x4EFFFFFF), 32),
    (-2147483648, (0xCF000000, 0xCF000000, 0xCF000000, 0xCF000000), 0),
    (-2147483647, (0xCF000000, 0xCF000000, 0xCEFFFFFF, 0xCEFFFFFF), 32),
)


def require(condition, context):
    """Unlike assert, these checks remain active under python -O."""
    if not condition:
        raise AssertionError(context)


def load_oracle():
    spec = importlib.util.spec_from_file_location("rational_oracle", ORACLE_PATH)
    if spec is None or spec.loader is None:
        raise RuntimeError(f"Cannot load oracle: {ORACLE_PATH}")
    oracle = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(oracle)
    # Reproduce the original in-memory source compilation without writing .pyc.
    compile(ORACLE_PATH.read_text(encoding="utf-8"), str(ORACLE_PATH), "exec")
    return oracle


def test_edges(oracle):
    count = 0
    for rc in range(4):
        for daz in range(2):
            for ftz in range(2):
                for sticky in range(64):
                    csr = (MASKED_MXCSR | (rc << 13) | (daz << 6)
                           | (ftz << 15) | sticky)
                    for bits, result, flags in TT_CASES:
                        raised = flags
                        if daz and (bits & 0x7F800000) == 0:
                            raised = 0
                        expected = (result, raised, csr | raised)
                        actual = oracle.evaluate("tt", bits, csr)
                        require(actual == expected,
                                ("tt edge", hex(bits), hex(csr), actual, expected))
                        count += 1
                    for integer, results, raised in SI_CASES:
                        expected = (results[rc], raised, csr | raised)
                        actual = oracle.evaluate("si", integer & 0xFFFFFFFF, csr)
                        require(actual == expected,
                                ("si edge", integer, hex(csr), actual, expected))
                        count += 1
    return count


def test_random_rounding(oracle):
    count = 0
    rng = random.Random(SEED)
    for sample in range(10000):
        bits = rng.getrandbits(32)
        integer = bits if bits < 0x80000000 else bits - 0x100000000
        for rc in range(4):
            csr = MASKED_MXCSR | (rc << 13)
            result, raised, after = oracle.evaluate("si", bits, csr)
            context = ("rounding property", sample, hex(bits), rc, hex(result))
            value = oracle._finite_binary32(result)
            require(raised == (32 if value != integer else 0), context + ("PE",))
            require(after == csr | raised, context + ("sticky",))

            magnitude = result & 0x7FFFFFFF
            lo = (oracle._finite_binary32(magnitude - 1)
                  if magnitude else value)
            hi = oracle._finite_binary32(magnitude + 1)
            lower, upper = (-hi, -lo) if integer < 0 else (lo, hi)
            if rc == 0:
                distance = abs(value - integer)
                require(distance <= abs(lower - integer)
                        and distance <= abs(upper - integer), context + ("nearest",))
                if distance == abs(lower - integer) or distance == abs(upper - integer):
                    require(result & 1 == 0, context + ("even tie",))
            elif rc == 1:
                require(value <= integer < upper, context + ("down",))
            elif rc == 2:
                require(lower < integer <= value, context + ("up",))
            else:
                require(abs(value) <= abs(integer) < hi, context + ("zero",))
            count += 1
    return count


def test_api_negatives(oracle):
    cases = (
        ("bad", 0, MASKED_MXCSR),
        ("tt", -1, MASKED_MXCSR),
        ("si", 1 << 32, MASKED_MXCSR),
        ("si", True, MASKED_MXCSR),
        ("tt", 0, 0),
        ("tt", 0, 0x11F80),
        ("tt", 0, 1.0),
    )
    for case in cases:
        try:
            oracle.evaluate(*case)
        except ValueError:
            continue
        raise AssertionError(("API input was not rejected", case))
    return len(cases)


def run_cli(text):
    return subprocess.run(
        [sys.executable, "-B", str(ORACLE_PATH)],
        input=text, text=True, capture_output=True, check=False, timeout=30,
    )


def test_cli_examples():
    rows = (
        {"op": "tt", "bits": 1069547520, "mxcsr": 8064},
        {"op": "si", "bits": 16777217, "mxcsr": 8064},
    )
    expected = (
        {"op": "tt", "bits": 1069547520, "mxcsr": 8064,
         "result": 1, "raised": 32, "after": 8096},
        {"op": "si", "bits": 16777217, "mxcsr": 8064,
         "result": 1266679808, "raised": 32, "after": 8096},
    )
    completed = run_cli("".join(json.dumps(row) + "\n" for row in rows))
    require(completed.returncode == 0, ("CLI examples exit", completed.returncode))
    require(completed.stderr == "", ("CLI examples stderr", completed.stderr))
    actual = tuple(json.loads(line) for line in completed.stdout.splitlines())
    require(len(actual) == len(expected), ("CLI example row count", actual))
    for got, want in zip(actual, expected):
        require(got == want, ("CLI example", got, want))
    return len(expected)


def test_cli_negatives():
    # These seven checks extend, rather than inflate, the original 81,993 total.
    cases = (
        ("malformed JSON", "{\n"),
        ("non-object", "[]\n"),
        ("missing bits", '{"op":"tt","mxcsr":8064}\n'),
        ("unknown operation", '{"op":"bad","bits":0,"mxcsr":8064}\n'),
        ("negative DWORD", '{"op":"tt","bits":-1,"mxcsr":8064}\n'),
        ("unmasked exceptions", '{"op":"tt","bits":0,"mxcsr":0}\n'),
        ("reserved MXCSR bits", '{"op":"si","bits":0,"mxcsr":73600}\n'),
    )
    for name, request in cases:
        completed = run_cli(request)
        require(completed.returncode == 2,
                ("CLI negative exit", name, completed.returncode, completed.stderr))
        require(completed.stdout == "", ("CLI negative stdout", name, completed.stdout))
        require(completed.stderr.startswith("line 1: "),
                ("CLI negative error", name, completed.stderr))
    return len(cases)


def main():
    oracle = load_oracle()
    counts = {
        "edge_matrix": test_edges(oracle),
        "random_rounding": test_random_rounding(oracle),
        "api_negatives": test_api_negatives(oracle),
        "cli_examples": test_cli_examples(),
    }
    original_total = sum(counts.values())
    require(original_total == 81993, ("original check total", counts))
    counts["cli_negatives"] = test_cli_negatives()
    total = sum(counts.values())
    require(total == 82000, ("extended check total", counts))
    print(json.dumps({
        "status": "passed",
        "checks_passed": total,
        "original_checks_reproduced": original_total,
        "checks_by_category": counts,
        "edge_vectors": len(TT_CASES) + len(SI_CASES),
        "mxcsr_states_per_edge": 1024,
        "random_signed_inputs": 10000,
        "random_seed": SEED,
    }, sort_keys=True))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
