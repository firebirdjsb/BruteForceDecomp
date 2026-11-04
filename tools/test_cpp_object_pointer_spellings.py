#!/usr/bin/env python3
"""Five exact object-pointer spelling repairs; no original-XBE/ABI claim."""
from __future__ import annotations
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / "metadata/cpp_20261104_object_pointer_spellings.json"
MANIFEST_SHA = "8d2dfe79dee946695d463669f4c39e741cb9214ead0f8fbe2a740e293b6a17ac"

PREDICATES = r'''
using byte = unsigned char;
using undefined = unsigned char;
using undefined4 = unsigned int;
static_assert(sizeof(int) == 4 && sizeof(undefined4) == 4, "DWORD widths unchanged");
static_assert(alignof(int) == alignof(undefined4), "corresponding signedness alignment");
#ifdef REQUIRE_GUEST_POINTER_WIDTH
static_assert(sizeof(void*) == 4, "i386 expression fixture only");
#endif
int main() {
    undefined4 words[24] = {};
    undefined4 *puVar4 = words;
    int *piVar3 = reinterpret_cast<int*>(puVar4 + 2);
    if (static_cast<const void*>(piVar3) != static_cast<const void*>(&words[2])) return 1;
    *piVar3 = -1;
    if (words[2] != ~0u || words[1] != 0 || words[3] != 0) return 2;
    undefined4 *puVar3 = words;
    int *piVar5 = reinterpret_cast<int*>(puVar3 + 0x12);
    if (static_cast<const void*>(piVar5) != static_cast<const void*>(&words[0x12])) return 3;
    *piVar5 = 17;
    if (words[0x12] != 17 || words[0x11] != 0 || words[0x13] != 0) return 4;
    byte *pbVar1 = reinterpret_cast<byte*>(words + 1);
    if (static_cast<const void*>(pbVar1) != static_cast<const void*>(&words[1])) return 5;
    if (pbVar1 - reinterpret_cast<byte*>(words) != 4) return 6;
    unsigned int DAT_004a5c80 = 0;
    undefined *returned = reinterpret_cast<undefined *>(&DAT_004a5c80);
    if (static_cast<const void*>(returned) != static_cast<const void*>(&DAT_004a5c80)) return 7;
    for (int in_EAX = 0; in_EAX < 7; ++in_EAX) {
        piVar3 = reinterpret_cast<int*>(words + in_EAX * 2);
        if (static_cast<const void*>(piVar3) != static_cast<const void*>(&words[in_EAX * 2])) return 8;
    }
    return 0;
}
'''

BINK_FIXTURE = r'''
#include "REPLACE_SOURCE"
uint32_t *DAT_004be760;
uint32_t *DAT_004be764;
uint32_t *DAT_004be768;
uint32_t *DAT_004be76c;
int main() {
    for (int count : {0, 1, 2, 3, 4, 6}) {
        uint32_t in_a[8], in_b[8], out_a[8] = {}, out_b[8] = {};
        for (int i = 0; i < 8; ++i) { in_a[i] = 0x1234u + i; in_b[i] = 0xabcdu + i; }
        DAT_004be760 = out_a; DAT_004be764 = out_b;
        DAT_004be768 = in_a; DAT_004be76c = in_b;
        if (FUN_0036a7c0(count, 7) != count + 7) return 1;
        const int loops = count <= 2 ? 1 : (count + 1) / 2;
        for (int i = 0; i < loops * 2; i += 2) {
            const uint32_t a = in_a[i], b = in_b[i];
            const byte a_byte = reinterpret_cast<byte*>(&in_a[i + 1])[0];
            const byte b_byte = reinterpret_cast<byte*>(&in_b[i + 1])[0];
            if (out_a[i] != ((a << 16) | a | 0x80008000u)) return 2;
            if (out_b[i] != ((b << 16) | b | 0x80008000u)) return 3;
            if (out_a[i + 1] != ((uint32_t(a_byte) << 16) | a_byte | 0x80008000u)) return 4;
            if (out_b[i + 1] != ((uint32_t(b_byte) << 16) | b_byte | 0x80008000u)) return 5;
        }
        if (DAT_004be760 != out_a + loops * 2 || DAT_004be764 != out_b + loops * 2 ||
            DAT_004be768 != in_a + loops * 2 || DAT_004be76c != in_b + loops * 2) return 6;
        for (int i = loops * 2; i < 8; ++i) if (out_a[i] || out_b[i]) return 7;
    }
    return 0;
}
'''


def reverse_case(case, source):
    if hashlib.sha256(source.encode()).hexdigest() != case["source_after_sha256"]:
        raise ValueError("source differs from reviewed spelling")
    for edit in reversed(case["replacements"]):
        if source.count(edit["new"]) != 1:
            raise ValueError("spelling occurrence changed")
        source = source.replace(edit["new"], edit["old"], 1)
    if hashlib.sha256(source.encode()).hexdigest() != case["source_before_sha256"]:
        raise ValueError("preimage differs from original draft")
    return source


class ObjectPointerSpellingTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.compiler = shutil.which("clang++")
        if not cls.compiler: raise unittest.SkipTest("clang++ unavailable; no syntax result claimed")
        cls.manifest = json.loads(MANIFEST.read_text())
        cls.cases = cls.manifest["cases"]

    def run_compiler(self, path, *flags):
        return subprocess.run([self.compiler, "-std=c++17", "-I", str(ROOT / "include"), *flags, str(path)],
                              capture_output=True, text=True, timeout=60)

    def test_exact_source_reversal_and_corruption(self):
        self.assertEqual(hashlib.sha256(MANIFEST.read_bytes()).hexdigest(), MANIFEST_SHA)
        self.assertFalse(self.manifest["original_xbe_reauthenticated"])
        self.assertEqual({c["entry"] for c in self.cases},
                         {"0x0008c210", "0x000a50b0", "0x000b8860", "0x0036a7c0", "0x0036fbe0"})
        for case in self.cases:
            with self.subTest(entry=case["entry"]):
                self.assertEqual(case["source"], relative_source_path(ROOT, case["entry"]).as_posix())
                source = (ROOT / case["source"]).read_text()
                reverse_case(case, source)
                self.assertIn("Input x86 body SHA-256: " + case["original_body_sha256"], source)
                self.assertIn("Entry: " + case["entry"], source)
                self.assertIn("ABI_UNVERIFIED", source)
                with self.assertRaises(ValueError): reverse_case(case, source + "\n")
                for edit in case["replacements"]:
                    with self.assertRaises(ValueError):
                        reverse_case(case, source.replace(edit["new"], edit["old"], 1))

    def test_complete_sources_and_original_failure_controls(self):
        with tempfile.TemporaryDirectory() as temp:
            for case in self.cases:
                path = ROOT / case["source"]
                original = Path(temp) / (case["entry"] + ".cpp")
                original.write_text(reverse_case(case, path.read_text()))
                for opt in ("-O0", "-O2"):
                    with self.subTest(entry=case["entry"], opt=opt):
                        good = self.run_compiler(path, opt, "-fsyntax-only")
                        self.assertEqual(good.returncode, 0, good.stderr)
                        bad = self.run_compiler(original, opt, "-fsyntax-only")
                        self.assertNotEqual(bad.returncode, 0)
                        self.assertIn(case["expected_diagnostic"], bad.stderr)

    def test_host_conversion_and_bounded_bink_buffers(self):
        source_path = ROOT / relative_source_path(ROOT, "0x0036a7c0")
        fixtures = {"predicates": PREDICATES,
                    "bink": "#include <initializer_list>\n" + BINK_FIXTURE.replace("REPLACE_SOURCE", source_path.as_posix())}
        with tempfile.TemporaryDirectory() as temp:
            for name, text in fixtures.items():
                source = Path(temp) / (name + ".cpp"); source.write_text(text)
                for opt in ("-O0", "-O2"):
                    executable = Path(temp) / (name + opt)
                    result = self.run_compiler(source, opt, "-Wall", "-Wextra", "-Werror", "-o", str(executable))
                    self.assertEqual(result.returncode, 0, result.stderr)
                    result = subprocess.run([str(executable)], capture_output=True, timeout=10)
                    self.assertEqual(result.returncode, 0)
                    if name == "predicates":
                        result = self.run_compiler(source, opt, "-target", "i386-unknown-none-elf",
                            "-ffreestanding", "-nostdinc", "-fsyntax-only", "-DREQUIRE_GUEST_POINTER_WIDTH")
                        self.assertEqual(result.returncode, 0, result.stderr)


if __name__ == "__main__": unittest.main()
