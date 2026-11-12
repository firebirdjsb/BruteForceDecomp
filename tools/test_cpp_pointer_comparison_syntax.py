#!/usr/bin/env python3
"""Bounded C++ pointer-comparison spelling controls; not Xbox ABI proof."""
from __future__ import annotations

import hashlib
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
CASES = (
    ("0x0037fc3c", "6eab3cfb8fc7c38075c7e3e548f0c709825caf8136f8a9e415976039f21a4afa",
     "600a86f6934be8fa2262c03b694b52e517bd0e6af3b108b1936e1d4a3ce0ba0f",
     "5ACBAE7CCAB7EB9D729DF5E1828B8599C7916BABD94686BB4287A4BF36867409",
     "*ppuVar1 != (char *)0x0", "*ppuVar1 != nullptr"),
    ("0x0030df50", "d23e60082c50455cd8871d01748cd7f6d31a2c9ac114b13953ee29495778cea4",
     "3dcd57d15fe312be85fa996f24530d6dc7b42dee2d2b88d7b6ed838e242def45",
     "751C935473773D3D00377D9959808752CC9F30D3C8536C9120CFE37F12CCC7C7",
     "piVar3 == puVar5 + -3",
     "static_cast<const void*>(piVar3) == static_cast<const void*>(puVar5 + -3)"),
)

# Header-free, so the 32-bit expression checks do not require multilib libc.
# This exercises the two predicates only, not the unresolved full functions.
FIXTURE = r'''
using undefined = unsigned char;
constexpr bool non_null(undefined * const *ppuVar1) {
    return *ppuVar1 != nullptr;
}
constexpr undefined *nil = nullptr;
static_assert(!non_null(&nil), "null predicate must remain false");
static_assert(sizeof(int) == 4 && sizeof(unsigned int) == 4, "DWORD operands");
#ifdef REQUIRE_GUEST_POINTER_WIDTH
static_assert(sizeof(void*) == 4, "expression-only i386 target");
#endif
bool same_address(int *piVar3, unsigned int *puVar5) {
    return static_cast<const void*>(piVar3) == static_cast<const void*>(puVar5 + -3);
}
int main() {
    undefined bytes[2] = {0, 1};
    undefined *pointers[] = {nullptr, &bytes[0], &bytes[1]};
    for (auto p : pointers) {
        if (non_null(&p) != (p != static_cast<undefined*>(nullptr))) return 1;
    }
    unsigned int words[5] = {};
    // No signed dereference: only compare object addresses with the original
    // unsigned-pointer arithmetic retained inside its real array.
    int *same = reinterpret_cast<int*>(&words[0]);
    int *other = reinterpret_cast<int*>(&words[1]);
    if (!same_address(same, &words[3])) return 2;
    if (same_address(other, &words[3])) return 3;
    if (same_address(nullptr, &words[3])) return 4;
    if (static_cast<const void*>(same) != static_cast<const void*>(&words[0])) return 5;
    return 0;
}
'''


class PointerComparisonSyntaxTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.compiler = shutil.which("clang++")
        if not cls.compiler:
            raise unittest.SkipTest("clang++ required; no syntax result claimed")

    def compile(self, path, *flags):
        return subprocess.run([self.compiler, "-std=c++17", *flags, str(path)],
                              capture_output=True, text=True, timeout=60)

    def test_exact_bounded_source_and_provenance(self):
        for entry, before_sha, after_sha, body_sha, old, new in CASES:
            with self.subTest(entry=entry):
                data = (ROOT / relative_source_path(ROOT, entry)).read_bytes()
                self.assertEqual(hashlib.sha256(data).hexdigest(), after_sha)
                source = data.decode()
                self.assertEqual(source.count(new), 1)
                self.assertNotIn(old, source)
                original = source.replace(new, old)
                self.assertEqual(hashlib.sha256(original.encode()).hexdigest(), before_sha)
                self.assertIn(f"Input x86 body SHA-256: {body_sha}", source)
                self.assertIn(f"Entry: {entry}", source)
                self.assertIn("ABI_UNVERIFIED", source)

    def test_complete_sources_and_original_negative_controls(self):
        with tempfile.TemporaryDirectory() as temp:
            for entry, _, _, _, old, new in CASES:
                path = ROOT / relative_source_path(ROOT, entry)
                original = Path(temp) / f"original_{entry}.cpp"
                original.write_text(path.read_text().replace(new, old))
                for opt in ("-O0", "-O2"):
                    with self.subTest(entry=entry, opt=opt):
                        flags = (opt, "-fsyntax-only", "-I", str(ROOT / "include"))
                        good = self.compile(path, *flags)
                        self.assertEqual(good.returncode, 0, good.stderr)
                        bad = self.compile(original, *flags)
                        self.assertNotEqual(bad.returncode, 0)
                        self.assertIn("comparison of distinct pointer types", bad.stderr)

    def test_host_predicates_and_i386_expression_only(self):
        with tempfile.TemporaryDirectory() as temp:
            source = Path(temp) / "predicates.cpp"
            source.write_text(FIXTURE)
            for opt in ("-O0", "-O2"):
                with self.subTest(opt=opt):
                    executable = Path(temp) / f"predicates{opt}"
                    result = self.compile(source, opt, "-Wall", "-Wextra", "-Werror",
                                          "-o", str(executable))
                    self.assertEqual(result.returncode, 0, result.stderr)
                    result = subprocess.run([str(executable)], capture_output=True, timeout=10)
                    self.assertEqual(result.returncode, 0)
                    result = self.compile(source, opt, "-target", "i386-unknown-none-elf",
                                          "-ffreestanding", "-nostdinc", "-fsyntax-only",
                                          "-DREQUIRE_GUEST_POINTER_WIDTH", "-Wall", "-Wextra", "-Werror")
                    self.assertEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__":
    unittest.main()
