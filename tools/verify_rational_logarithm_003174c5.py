#!/usr/bin/env python3
"""Public exact-rational foundation gate; no hardware or game implementation claim."""
import sys
sys.dont_write_bytecode = True  # Before any repository import, including test imports.

import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import subprocess
import tempfile

MANIFEST = "metadata/rational_logarithm_003174c5.json"
MANIFEST_SHA256 = "d4d4550ebb0355cba13ed3845e9d5c55eb547c8c17533f5b5f8b00ccefd3a77f"
SUPPORT = "tests/support/rational_logarithm_003174c5"
RAW_NAMES = ("rational_model.py", "test_rational_model.py", "generate_vectors.py", "DERIVATION.md")
EXPECTED_ARTIFACTS = frozenset({SUPPORT + "/" + name for name in RAW_NAMES} | {
    "docs/evidence/rational_logarithm_003174c5.md",
    "src/platform/audio_dsound/0x003174c5.cpp",
})
EXPECTED_OUTPUTS = frozenset({"edge-threshold-vectors.json", "random-certificate.json", "vector-summary.json"})

# -I excludes ambient PYTHONPATH/user-site, -B suppresses bytecode. Only the
# already hash-checked raw snapshots in external scratch are added to sys.path.
CHILD_PREFIX = """import sys
sys.dont_write_bytecode = True
from pathlib import Path
sys.path.insert(0, str(Path(sys.argv[1]).resolve()))
"""
IMPORT_ONLY = CHILD_PREFIX + """import rational_model
import test_rational_model
import generate_vectors
print('PASS inert support imports')
"""
UNIT_TESTS = CHILD_PREFIX + """import json
import unittest
import test_rational_model
suite = unittest.defaultTestLoader.loadTestsFromModule(test_rational_model)
count = suite.countTestCases()
result = unittest.TextTestRunner(verbosity=2).run(suite)
if count != 13 or not result.wasSuccessful():
    raise SystemExit(1)
print(json.dumps({'authored_unit_tests': count, 'successful': True}, sort_keys=True))
"""
GENERATE = CHILD_PREFIX + """import generate_vectors
generate_vectors.OUT = Path(sys.argv[2]).resolve()
generate_vectors.main()
"""


class GateFailure(RuntimeError):
    pass


def require(condition, message):
    if not condition:
        raise GateFailure(message)


def digest(data):
    return hashlib.sha256(data).hexdigest()


def safe_relative(relative):
    require(type(relative) is str and relative != "" and "\\" not in relative,
            "invalid relative artifact path")
    path = PurePosixPath(relative)
    require(not path.is_absolute() and all(part not in ("", ".", "..") for part in relative.split("/")),
            "artifact path escapes or is not normalized")
    require(str(path) == relative, "artifact path is not canonical")
    return path


def read_regular(root, relative):
    safe_relative(relative)
    path = root / relative
    require(path.is_file() and path.resolve() == path, "missing or linked artifact: " + relative)
    return path.read_bytes()


def parse_manifest(raw):
    require(digest(raw) == MANIFEST_SHA256, "manifest identity mismatch")
    manifest = json.loads(raw)
    require(manifest["schema"] == 1 and manifest["entry"] == "003174c5", "manifest schema/entry mismatch")
    require(set(manifest["artifact_sha256"]) == EXPECTED_ARTIFACTS, "artifact set mismatch")
    require(set(manifest["output_sha256"]) == EXPECTED_OUTPUTS, "output set mismatch")
    require(manifest["authored_unit_test_count"] == 13, "authored test count mismatch")
    for relative in manifest["artifact_sha256"]:
        safe_relative(relative)
    return manifest


def validate_snapshot(raw_manifest, artifacts):
    manifest = parse_manifest(raw_manifest)
    require(set(artifacts) == EXPECTED_ARTIFACTS, "snapshot artifact set mismatch")
    for relative, expected in manifest["artifact_sha256"].items():
        require(digest(artifacts[relative]) == expected, "artifact identity mismatch: " + relative)
    return manifest


def snapshot(root):
    raw_manifest = read_regular(root, MANIFEST)
    manifest = parse_manifest(raw_manifest)  # Fail before trusting manifest paths.
    artifacts = {relative: read_regular(root, relative) for relative in manifest["artifact_sha256"]}
    validate_snapshot(raw_manifest, artifacts)
    return raw_manifest, artifacts


def expect_failure(action, message):
    try:
        action()
    except GateFailure:
        return
    raise GateFailure("corruption control survived: " + message)


def source_corruption_controls(raw_manifest, artifacts):
    count = 0
    expect_failure(lambda: validate_snapshot(raw_manifest + b"\n", artifacts), "changed manifest")
    count += 1
    for relative in sorted(artifacts):
        for kind in ("missing", "truncated", "modified"):
            changed = dict(artifacts)
            if kind == "missing":
                del changed[relative]
            elif kind == "truncated":
                changed[relative] = changed[relative][:-1]
            else:
                changed[relative] += b"\nraise RuntimeError('must not execute changed support')\n"
            expect_failure(lambda: validate_snapshot(raw_manifest, changed), kind + " " + relative)
            count += 1
    require(count == 19, "source corruption count mismatch")
    return count


def validate_outputs(manifest, outputs):
    require(set(outputs) == EXPECTED_OUTPUTS, "generated output set mismatch")
    for name, expected in manifest["output_sha256"].items():
        require(digest(outputs[name]) == expected, "generated output identity mismatch: " + name)
    summary = json.loads(outputs["vector-summary.json"])
    require(summary == manifest["expected_summary"], "vector summary mismatch")
    return summary


def output_corruption_controls(manifest, outputs):
    count = 0
    for name in sorted(outputs):
        for kind in ("missing", "modified"):
            changed = dict(outputs)
            if kind == "missing":
                del changed[name]
            else:
                changed[name] += b"\n"
            expect_failure(lambda: validate_outputs(manifest, changed), kind + " " + name)
            count += 1
    changed = dict(outputs)
    changed["unexpected.json"] = b"{}"
    expect_failure(lambda: validate_outputs(manifest, changed), "unexpected output")
    count += 1
    require(count == 7, "output corruption count mismatch")
    return count


def external_destination(root, destination):
    root = root.resolve()
    destination = destination.resolve()
    require(destination != root and not destination.is_relative_to(root),
            "output directory must be outside the repository")
    require(not destination.exists(), "output directory must not already exist")
    return destination


def child(script, stage, output=None):
    command = [sys.executable, "-I", "-B", "-c", script, str(stage)]
    if output is not None:
        command.append(str(output))
    result = subprocess.run(command, capture_output=True, text=True, cwd=stage,
                            env={**os.environ, "PYTHONDONTWRITEBYTECODE": "1"}, timeout=180)
    require(result.returncode == 0, "isolated support check failed:\n" + result.stdout + result.stderr)
    return result


def execute(root, destination, raw_manifest, artifacts):
    # All repository inputs are verified before creating executable copies.
    manifest = validate_snapshot(raw_manifest, artifacts)
    destination = external_destination(root, destination)
    source_controls = source_corruption_controls(raw_manifest, artifacts)
    destination.mkdir(parents=True, exist_ok=False)
    stage = destination / "frozen-support"
    stage.mkdir()
    for name in RAW_NAMES:
        (stage / name).write_bytes(artifacts[SUPPORT + "/" + name])
    before = {p.name: p.read_bytes() for p in stage.iterdir()}
    imports = child(IMPORT_ONLY, stage)
    require(imports.stdout.strip() == "PASS inert support imports" and not imports.stderr,
            "import-only output mismatch")
    require({p.name: p.read_bytes() for p in stage.iterdir()} == before,
            "support import generated or changed files")
    tested = child(UNIT_TESTS, stage)
    require(json.loads(tested.stdout) == {"authored_unit_tests": 13, "successful": True},
            "authored unit-test summary mismatch")
    (destination / "authored-unit-tests.txt").write_text(tested.stderr + tested.stdout)
    output_dir = destination / "vectors"
    generated = child(GENERATE, stage, output_dir)
    require(not generated.stderr, "unexpected generator stderr")
    outputs = {p.name: p.read_bytes() for p in output_dir.iterdir() if p.is_file()}
    require(len(list(output_dir.iterdir())) == len(outputs), "non-file generated output")
    summary = validate_outputs(manifest, outputs)
    require(json.loads(generated.stdout) == summary, "generator stdout mismatch")
    output_controls = output_corruption_controls(manifest, outputs)
    require({p.name: p.read_bytes() for p in stage.iterdir()} == before,
            "frozen execution snapshot changed")
    require(not list(destination.rglob("__pycache__")) and not list(destination.rglob("*.pyc")),
            "unexpected generated bytecode")
    # Recheck actual repository bytes, not only the pre-execution snapshot.
    final_manifest, final_artifacts = snapshot(root)
    require(final_manifest == raw_manifest and final_artifacts == artifacts,
            "repository inputs changed during gate")
    result = {"status": "passed", "scope": "ideal_math_and_conditional_conversion_only",
              "authored_unit_tests": 13, "source_corruption_controls": source_controls,
              "output_corruption_controls": output_controls, **summary}
    (destination / "gate-summary.json").write_text(json.dumps(result, sort_keys=True, indent=2) + "\n")
    print(json.dumps(result, sort_keys=True, indent=2))
    print("PASS: no syntax gain, FYL2X hardware error/PE guarantee, game implementation, or original-CPU claim")
    return result


def main(argv=None):
    require(__debug__, "optimized Python is unsupported; do not use -O or PYTHONOPTIMIZE")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--out", type=Path, help="new output directory outside repository; default temporary")
    args = parser.parse_args(argv)
    root = args.root.resolve()
    require(root.is_dir(), "repository root is not a directory")
    raw_manifest, artifacts = snapshot(root)
    if args.out is not None:
        destination = external_destination(root, args.out)
        execute(root, destination, raw_manifest, artifacts)
    else:
        with tempfile.TemporaryDirectory(prefix="bf-rational-logarithm-") as temporary:
            destination = external_destination(root, Path(temporary) / "run")
            execute(root, destination, raw_manifest, artifacts)
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (GateFailure, OSError, ValueError, subprocess.TimeoutExpired) as error:
        print("FAIL: " + str(error), file=sys.stderr)
        raise SystemExit(1)
