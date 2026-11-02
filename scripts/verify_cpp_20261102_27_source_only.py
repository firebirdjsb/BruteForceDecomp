#!/usr/bin/env python3
"""Exact-source C++17 declaration regression: 26 partial nullary edges and one syntax pass.

SOURCE-ONLY. Original retail Xbox CALL/register/stack/RET contracts are NOT
verified by this test. The 26 thunk calls intentionally remain ABI_UNVERIFIED.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import subprocess
import sys
import tempfile

PREIMAGES = {
    "001fbae0": "37507d708d8e9fba9d7141129414e167f27780b491da2de69fbaac12b643732b",
    "001fbb90": "44b01f17519caec8a975d177f71c9321ccacbb472ff1d36e82fb68e05e8377f8",
    "001fbd30": "255b4529e5973551513845b6acb6044faa797e8af0cb3079b3506079b66d3a00",
    "001fbde0": "64a50c42880104000db20eb59ffaff2223a4ec8d858257b40fd392155ec1c8db",
    "001fbe60": "0ba86f8491b2ae941bd409ea60654cfb9a8ec50b01c552813d111a6fbe5ea77d",
    "001fbef0": "97e5615789ac64d9652a33f813631aa0d095b4e4941102ab6d993218a48dd6dc",
    "001fbf70": "53faeffe56d5ecf8792a557f7ff1783e0d715cd9a204de7250b244d3e008fdb1",
    "001fbff0": "fa0b9c259e662bc363306f6b73d6c5cda3460cee020b5821d0969a879b46971f",
    "001fc190": "697ba14488a590020d7aa13d3eaea0cfef63c9a0fb749c9198e13d48c45f86cd",
    "001fc230": "206d80e8a1a4c326336fec5df79565ca8aff2980f488e2a4eca55e98d402595e",
    "001fc2c0": "2e2c64241c8b55bbc9f24eadc9621dc6a6dbc79f9a887b74e1a7ac7330dde0b6",
    "001fc330": "c4c0ec78fa2080d68c21903f9be5d44f6d1dec9e54ea891460aee2a5e0802d34",
    "001fc3b0": "0a663ceedee54ed3c3e6e591291f74a56714f29e3b4257c7556343e31fb42690",
    "001fc450": "f88b2349419a85367ca5bc3810ae3f8e407904a487f7d24ca554abed20683d45",
    "001fc7b0": "33db03f56f04c8d91cff065eac69e87efcb97bfab53a2e5150f7094bfda7d8ed",
    "001fcc20": "80ced9474d34fd6e4a5dec27c36a4a5790d5384e38a5ab054d3a9fff492707d8",
    "001fcd00": "2d74af19f779c34a5ce81e505135a0289bdc21b42f657a525f3f86c1619a9546",
    "001fd480": "0595a417478a7b3fa27213b352e5c403b1a8946d70f1c588b1a9962691b5f95a",
    "001fd500": "7184f6fa6287094cf57bcb700e4955bcbb8b2110578a5e48349b8717d1d12996",
    "001fd5a0": "017ad2dbc5943f7e5eb09e2e6df14e4da848a20dcb6284f29ef433fa26101360",
    "001fdbb0": "5aff45c7199150cb4e53e93776f85212553d84fbc48d82d9ceaa771aed892523",
    "001fdc50": "3612777a198d1f3c86cbc2540ebaba02dbe97f8fdeb87c663b3bb059ea186487",
    "001fdcf0": "b88bb045e901a0458abec56fcfd3a3f8521df07326d9628e0e0cdc3da6814eef",
    "001fdd90": "304eb815f12298d2b34837eba6d7be847f78427562cd2f3df3bb92bc07fca611",
    "001fde70": "75422cb13f1de4e2c05d2e5c5212a634d5c0f65136e3511ad7d6a6c6ebcafa18",
    "001fe130": "299082249a27ef43fc5349b843b29aba3e7490589f265b937af22de92da9490d",
    "002e3500": "7dd822c1d797ce48729bb3ef67644c2d72f212c063cbde14fb0039915cc7d477",
}
DECL_NULLARY = (
    "/* Source-matched C++17 declaration only; Xbox ABI_UNVERIFIED. */\n"
    "extern void FUN_001fe150(void);\n"
)
DECL_DWORD = (
    "/* Source-matched C++17 declaration only; Xbox ABI_UNVERIFIED. */\n"
    "extern uint FUN_002e3490(undefined4 param_1,undefined4 param_2);\n"
)
CALLEES = {
    "001fe150": ("src/main_unclassified/band_001f/0x001fe150.cpp",
                 "09ff4d200feaccf2c7ae95e068f46c07d800a7dc65bed4495d317bd3fa0d253c",
                 r"\bvoid\s+FUN_001fe150\s*\(\s*void\s*\)"),
    "002e3490": ("src/main_unclassified/band_002e/0x002e3490.cpp",
                 "048b344e441c6c56d1e72f71a75a259ec3054bce55f3c0c218de71cba0139e1f",
                 r"\buint\s+FUN_002e3490\s*\(\s*undefined4\s+param_1\s*,\s*undefined4\s+param_2\s*\)"),
}

def sha256(source: str) -> str:
    return hashlib.sha256(source.encode("utf-8")).hexdigest()

def errors(clang: str, include: Path, path: Path, opt: str) -> list[str]:
    run = subprocess.run([clang, "-std=c++17", "-fsyntax-only", "-ferror-limit=0",
                          opt, "-I", str(include), str(path)],
                         capture_output=True, text=True, check=False)
    return [line for line in run.stderr.splitlines() if "error:" in line]

def verify(root: Path, clang: str) -> None:
    include = root / "include"
    for entry, (path, expected_sha, signature) in CALLEES.items():
        content = (root / path).read_text(encoding="utf-8")
        assert sha256(content) == expected_sha, f"callee {entry}: source drift"
        assert re.search(signature, content), f"callee {entry}: draft signature drift"
        assert f"Entry: 0x{entry}" in content and "ABI_UNVERIFIED" in content

    for entry, preimage in PREIMAGES.items():
        is_dword = entry == "002e3500"
        path = root / f"src/main_unclassified/band_{entry[:4]}/0x{entry}.cpp"
        content = path.read_text(encoding="utf-8")
        declaration = DECL_DWORD if is_dword else DECL_NULLARY
        assert content.count(declaration) == 1, f"{entry}: declaration missing/duplicated"
        original = content.replace(declaration, "", 1)
        assert sha256(original) == preimage, f"{entry}: original source/body changed"
        assert f"Entry: 0x{entry}" in content and "ABI_UNVERIFIED" in content
        assert re.search(r"Input x86 body SHA-256: [0-9A-F]{64}", content)
        if is_dword:
            assert content.count("FUN_002e3490(") == 4, "original three calls changed"
        else:
            assert content.count("FUN_001fe150();") == 1
            assert content.count("thunk_FUN_00237ec0();") == 1
        for opt in ("-O0", "-O2"):
            positive = errors(clang, include, path, opt)
            if is_dword:
                assert not positive, f"{entry} {opt}: {positive}"
            else:
                assert len(positive) == 1 and "undeclared identifier 'thunk_FUN_00237ec0'" in positive[0], (
                    f"{entry} {opt}: unexpected residual diagnostics {positive}")
        with tempfile.TemporaryDirectory() as tmp:
            negative_path = Path(tmp) / path.name
            negative_path.write_text(original, encoding="utf-8")
            negative = errors(clang, include, negative_path, "-O0")
            target = "FUN_002e3490" if is_dword else "FUN_001fe150"
            assert any(f"undeclared identifier '{target}'" in e for e in negative), (
                f"{entry}: missing-declaration negative control failed {negative}")
            if not is_dword:
                assert len(negative) == 2 and any("thunk_FUN_00237ec0" in e for e in negative), (
                    f"{entry}: expected separate thunk blocker missing {negative}")
    print(f"PASS: {len(PREIMAGES)} exact-source C++17 declaration gates; "
          f"{len(PREIMAGES) - (1 if '002e3500' in PREIMAGES else 0)} partial, "
          f"{1 if '002e3500' in PREIMAGES else 0} syntax pass")
    print("ABI_UNVERIFIED: original retail XBE, thunk, guest32 linkage and gameplay not tested")

def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--clang", default="clang++")
    args = parser.parse_args()
    try:
        verify(args.root.resolve(), args.clang)
    except (AssertionError, OSError) as exc:
        print(f"FAIL: {exc}", file=sys.stderr)
        return 1
    return 0

if __name__ == "__main__":
    sys.exit(main())
