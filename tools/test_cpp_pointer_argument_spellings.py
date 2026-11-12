#!/usr/bin/env python3
"""Four bounded signed/unsigned pointer spellings, not original Xbox behavior."""
from __future__ import annotations
import csv
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
from body_hash_labels import read_body_digest
from source_layout import relative_source_path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'metadata/cpp_20261104_pointer_argument_spellings.json'
MANIFEST_SHA = '4b579e9ea27e3d19be93341e805f7b1f1a9faaf75babfae840a3cab073052ca8'
CASES = json.loads(MANIFEST.read_text())['cases']

def sha(text):
    return hashlib.sha256(text.encode()).hexdigest()

def reverse(source, case):
    for change in case['replacements']:
        if source.count(change['new']) != change['occurrences']:
            raise ValueError('replacement count drift')
        source = source.replace(change['new'], change['old'])
    return source

def valid(source, case):
    try:
        original = reverse(source, case)
    except ValueError:
        return False
    digest, conflict = read_body_digest(source)
    return (sha(source) == case['source_after_sha256'] and
            sha(original) == case['source_before_sha256'] and
            digest == case['original_body_sha256'] and not conflict and
            case['existing_declaration'] in source)

# Header-free expression fixture. These capture functions are test shims, not
# recovered game prototypes. Only pointer address identity and signed/unsigned
# scalar alias access are exercised, never any unresolved original function.
FIXTURE = r'''
using undefined4 = unsigned int;
static_assert(sizeof(int) == 4 && sizeof(undefined4) == 4, "DWORD width");
#ifdef REQUIRE_GUEST_POINTER_WIDTH
static_assert(sizeof(void *) == 4, "i386 expression fixture");
#endif
static undefined4 *seen;
static void capture(undefined4 *p) { seen = p; *p = 19u; }
static void capture4(unsigned int, unsigned int, unsigned int, undefined4 *p) {
    capture(p);
}
int main() {
    int local_4 = -1;
    capture(reinterpret_cast<undefined4 *>(&local_4));
    if (static_cast<void *>(seen) != static_cast<void *>(&local_4) || local_4 != 19) return 1;
    int param_1 = -7;
    capture4(1u, 2u, 3u, reinterpret_cast<undefined4 *>(&param_1));
    if (static_cast<void *>(seen) != static_cast<void *>(&param_1) || param_1 != 19) return 2;
    int local_c = 0;
    capture(reinterpret_cast<undefined4 *>(&local_c));
    if (static_cast<void *>(seen) != static_cast<void *>(&local_c) || local_c != 19) return 3;
    local_c = 0;
    capture(reinterpret_cast<undefined4 *>(&local_c));
    if (local_c != 19) return 4;
    return 0;
}
'''

class PointerArgumentSpellings(unittest.TestCase):
    def test_exact_sources_reversal_provenance_and_callee_binding(self):
        self.assertEqual(hashlib.sha256(MANIFEST.read_bytes()).hexdigest(), MANIFEST_SHA)
        with (ROOT / 'metadata/bulk_13694_inventory.csv').open(encoding='utf-8-sig', newline='') as stream:
            inventory = {r['entry'].lower(): r['original_body_sha256'].upper() for r in csv.DictReader(stream)}
        self.assertEqual({c['entry'] for c in CASES}, {'0x0004cb60','0x00073550','0x0008dfb0','0x000de540'})
        for case in CASES:
            with self.subTest(entry=case['entry']):
                self.assertEqual(case['source'], relative_source_path(ROOT, case['entry']).as_posix())
                source = (ROOT / case['source']).read_text()
                self.assertTrue(valid(source, case))
                self.assertEqual(inventory[case['entry']], case['original_body_sha256'])
                self.assertIn('Entry: ' + case['entry'], source)
                self.assertIn('ABI_UNVERIFIED', source)
                before = reverse(source, case)
                self.assertEqual([l for l in before.splitlines() if l.startswith('extern ')],
                                 [l for l in source.splitlines() if l.startswith('extern ')])
                callee = (ROOT / case['callee_source']).read_text()
                self.assertEqual(sha(callee), case['callee_source_sha256'])
                self.assertEqual(case['existing_declaration'].removeprefix('extern ').removesuffix(';'),
                                 case['callee_definition'])
                self.assertEqual(callee.splitlines().count(case['callee_definition']), 1)
                self.assertFalse(valid(before, case))
                self.assertFalse(valid(source + '\n// mutation\n', case))
                self.assertFalse(valid(source.replace(case['original_body_sha256'], '0' * 64), case))
                self.assertFalse(valid(source.replace(case['existing_declaration'], ''), case))
                change = case['replacements'][0]
                self.assertFalse(valid(source.replace(change['new'], change['new'].replace('undefined4 *', 'float *'), 1), case))

    def compile(self, path, *flags):
        return subprocess.run([self.compiler, '-std=c++17', *flags, str(path)], capture_output=True, text=True, timeout=60)

    def setUp(self):
        self.compiler = shutil.which('clang++')

    def test_full_o0_o2_and_original_no_matching_negatives(self):
        if not self.compiler:
            self.skipTest('clang++ required')
        with tempfile.TemporaryDirectory() as temp:
            for case in CASES:
                path = ROOT / case['source']
                old = Path(temp) / ('old_' + path.name)
                old.write_text(reverse(path.read_text(), case))
                for opt in ('-O0', '-O2'):
                    with self.subTest(entry=case['entry'], opt=opt):
                        flags = (opt, '-I', str(ROOT / 'include'), '-ferror-limit=0')
                        good = self.compile(path, *flags, '-fsyntax-only')
                        self.assertEqual(good.returncode, 0, good.stderr)
                        obj = self.compile(path, *flags, '-c', '-o', str(Path(temp) / 'source.o'))
                        self.assertEqual(obj.returncode, 0, obj.stderr)
                        bad = self.compile(old, *flags, '-fsyntax-only')
                        self.assertNotEqual(bad.returncode, 0)
                        self.assertIn('no matching function for call', bad.stderr)

    def test_header_free_i386_and_host_address_alias_fixture(self):
        if not self.compiler:
            self.skipTest('clang++ required')
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / 'fixture.cpp'
            path.write_text(FIXTURE)
            for opt in ('-O0', '-O2'):
                with self.subTest(opt=opt):
                    target = self.compile(path, opt, '-target', 'i386-unknown-none', '-DREQUIRE_GUEST_POINTER_WIDTH', '-ffreestanding', '-c', '-o', str(Path(temp) / 'i386.o'))
                    self.assertEqual(target.returncode, 0, target.stderr)
                    exe = Path(temp) / 'fixture'
                    host = self.compile(path, opt, '-fstrict-aliasing', '-o', str(exe))
                    self.assertEqual(host.returncode, 0, host.stderr)
                    run = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
                    self.assertEqual(run.returncode, 0, run.stderr)

if __name__ == '__main__':
    unittest.main()
