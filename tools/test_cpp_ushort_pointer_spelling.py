#!/usr/bin/env python3
"""One exact pointer spelling; synthetic predicates are not Xbox execution."""
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
MANIFEST = ROOT / 'metadata/cpp_20261104_ushort_pointer_spelling.json'
MANIFEST_SHA = 'e16e6ba967caa2a7f6414049a9c7d897b2fafae008e25caf765e429162066e15'
FIXTURE = r'''
using uint32_t = unsigned int;
using undefined2 = unsigned short;
static_assert(sizeof(uint32_t) == 4 && sizeof(undefined2) == 2, "fixed widths");
static_assert(alignof(undefined2) <= alignof(uint32_t), "no stricter alignment");
static_assert((char)-1 < 0, "original signed-char expression assumption");
#ifdef REQUIRE_GUEST_POINTER_WIDTH
static_assert(sizeof(void*) == 4, "i386 expression fixture only");
#endif
static uint32_t words[64 * 0x3600 + 1];
int main() {
    // Only the original branch's nonnegative, defined signed-char inputs.
    // No execution of the source's uninitialized register pseudo-variables.
    for (int input = 0; input < 64; ++input) {
        char byte_value = static_cast<char>(input);
        int index = ((int)(char)(byte_value << 1) >> 1);
        if (index != input) return 1;
        uint32_t *before_conversion = words + index * 0x3600;
        undefined2 *converted = reinterpret_cast<undefined2 *>(words + index * 0x3600);
        if (static_cast<const void*>(converted) != static_cast<const void*>(before_conversion)) return 2;
        if (reinterpret_cast<uint32_t*>(converted) != before_conversion) return 3;
        if (before_conversion - words != input * 0x3600) return 4;
        if ((before_conversion - words) * sizeof(uint32_t) != input * 0xd800u) return 5;
        // Casting before arithmetic would scale by two, not four: guard that ordering.
        if (input && static_cast<unsigned long long>(index) * 0x3600 * sizeof(undefined2)
                  == static_cast<unsigned long long>(before_conversion - words) * sizeof(uint32_t)) return 6;
    }
    return 0;
}
'''

class UshortPointerSpellingTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.case = json.loads(MANIFEST.read_text())
        cls.path = ROOT / cls.case['source']
        cls.compiler = shutil.which('clang++')

    def original(self):
        source = self.path.read_text()
        self.assertEqual(hashlib.sha256(source.encode()).hexdigest(), self.case['source_after_sha256'])
        self.assertEqual(source.count(self.case['new']), 1)
        original = source.replace(self.case['new'], self.case['old'], 1)
        self.assertEqual(hashlib.sha256(original.encode()).hexdigest(), self.case['source_before_sha256'])
        return original

    def compile(self, path, *flags):
        if not self.compiler: self.skipTest('clang++ unavailable; no compiler result claimed')
        return subprocess.run([self.compiler, '-std=c++17', '-I', str(ROOT/'include'), *flags, str(path)],
                              capture_output=True, text=True, timeout=60)

    def test_exact_reversible_spelling(self):
        self.assertEqual(hashlib.sha256(MANIFEST.read_bytes()).hexdigest(), MANIFEST_SHA)
        self.assertFalse(self.case['original_xbe_reauthenticated'])
        self.assertEqual(self.case['entry'], '0x00072890')
        self.assertEqual(self.case['source'], relative_source_path(ROOT, self.case['entry']).as_posix())
        source = self.path.read_text()
        self.assertIn('Input x86 body SHA-256: ' + self.case['original_body_sha256'], source)
        self.assertIn('ABI_UNVERIFIED', source)
        self.original()
        for mutated in (source+'\n', source.replace(' * 0x3600)', ' * 0x3601)')):
            self.assertNotEqual(hashlib.sha256(mutated.encode()).hexdigest(), self.case['source_after_sha256'])

    def test_complete_source_and_original_negative(self):
        with tempfile.TemporaryDirectory() as temp:
            old = Path(temp)/'original.cpp'; old.write_text(self.original())
            for opt in ('-O0', '-O2'):
                good = self.compile(self.path, opt, '-fsyntax-only')
                self.assertEqual(good.returncode, 0, good.stderr)
                obj = self.compile(self.path, opt, '-c', '-o', str(Path(temp)/'source.o'))
                self.assertEqual(obj.returncode, 0, obj.stderr)
                bad = self.compile(old, opt, '-fsyntax-only')
                self.assertNotEqual(bad.returncode, 0)
                self.assertIn('incompatible pointer types', bad.stderr)

    def test_bounded_address_predicates_and_i386_expression(self):
        with tempfile.TemporaryDirectory() as temp:
            fixture = Path(temp)/'fixture.cpp'; fixture.write_text(FIXTURE)
            for opt in ('-O0', '-O2'):
                exe = Path(temp)/'fixture'
                result = self.compile(fixture, opt, '-Wall', '-Wextra', '-Werror', '-o', str(exe))
                self.assertEqual(result.returncode, 0, result.stderr)
                self.assertEqual(subprocess.run([str(exe)], timeout=10).returncode, 0)
                result = self.compile(fixture, opt, '-target', 'i386-unknown-none-elf', '-ffreestanding',
                                      '-nostdinc', '-DREQUIRE_GUEST_POINTER_WIDTH', '-c', '-o', str(Path(temp)/'fixture.o'))
                self.assertEqual(result.returncode, 0, result.stderr)

if __name__ == '__main__': unittest.main()
