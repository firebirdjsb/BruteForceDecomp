#!/usr/bin/env python3
"""Verify four source-matched C++17 forward-declaration repairs (not Xbox ABI proof)."""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import tempfile

HEADER = '#include "bf_ghidra_types.h"\n'
CASES = {
    '0x0014a3e0': (
        'src/main_unclassified/band_0014/0x0014a3e0.cpp',
        '489c4f26b7bba152ed6000d4c16f55bac56dd8872e9c16d191bfabe52d536539',
        '6F540BCF033CDFD6D8D59C3C11AC29DD58C70D969487F7483F9BDD20A891066D',
        ('void FUN_0014a170(void);', 'undefined4 FUN_00158140(undefined4 param_1);'),
    ),
    '0x002a60b0': (
        'src/main_unclassified/band_002a/0x002a60b0.cpp',
        'de2132c4ed680cb3ab47ae9b2c1a9be2cb132b9d35fc646ca35400b64edcbef2',
        'ED3C157AACC57691C215ECE6957FF27EE479435D9E9921D5387FE00CF424C586',
        ('void FUN_002a0340(void);', 'void FUN_002a0000(int param_1);'),
    ),
    '0x002a86d0': (
        'src/main_unclassified/band_002a/0x002a86d0.cpp',
        'f70736f14ab8276066102584bc572f7f45ffef69d53591768d6277771d9c8a44',
        'D9EFA7760DE1EB4C9C77AFFA9754F769B832C5F48283C37F4C0D6763C1C0D2A3',
        ('void FUN_002a0340(void);', 'void FUN_002a0000(int param_1);'),
    ),
    '0x002bdfc0': (
        'src/main_unclassified/band_002b/0x002bdfc0.cpp',
        '9fabaebe1dcaf1827ca978875e4a23c6d658bf45d74d8b233269777ed88e8695',
        '68F1F512A31C059BAED272D15C65F1CD54D387E322B106203A2C7BF015CE7638',
        ('void FUN_002ccf80(void);', 'void FUN_002be010(undefined4 param_1);'),
    ),
}


def declaration_block(declarations):
    return ('/* Source-matched callee draft declarations; Xbox ABI remains ABI_UNVERIFIED. */\n'
            + '\n'.join(declarations) + '\n')


def validate_text(entry, text):
    path, before_sha, body_sha, declarations = CASES[entry]
    block = declaration_block(declarations)
    if text.count(HEADER + block) != 1 or text.count(block) != 1:
        raise ValueError(f'{entry}: exact declaration block missing/duplicated')
    before = text.replace(HEADER + block, HEADER, 1)
    if hashlib.sha256(before.encode('utf-8')).hexdigest() != before_sha:
        raise ValueError(f'{entry}: original source preimage drift')
    if f'Input x86 body SHA-256: {body_sha}' not in before or f'Entry: {entry}' not in before:
        raise ValueError(f'{entry}: original identity/digest label changed')
    return declarations


def clang_check(compiler, include, source, opt):
    with tempfile.TemporaryDirectory(prefix='bf-four-decl-') as d:
        file = Path(d) / 'candidate.cpp'
        file.write_text(source, encoding='utf-8')
        result = subprocess.run([compiler, '-std=c++17', opt, '-fsyntax-only',
                                 '-I', str(include), str(file)],
                                capture_output=True, text=True)
        return result.returncode, result.stderr


def verify(root):
    compiler = shutil.which('clang++')
    if not compiler:
        raise RuntimeError('clang++ is required')
    include = root / 'include'
    for entry, (path, _, _, _) in CASES.items():
        text = (root / path).read_text(encoding='utf-8')
        declarations = validate_text(entry, text)
        for opt in ('-O0', '-O2'):
            code, err = clang_check(compiler, include, text, opt)
            if code:
                raise RuntimeError(f'{entry} {opt}: {err[-1200:]}')
            for declaration in declarations:
                negative = text.replace(declaration + '\n', '', 1)
                code, err = clang_check(compiler, include, negative, opt)
                name = re.search(r'FUN_[0-9a-f]{8}', declaration).group(0)
                if code == 0 or name not in err:
                    raise RuntimeError(f'{entry} {opt}: negative failed for {name}')
        try:
            validate_text(entry, text.replace('STATUS:', 'CHANGED_STATUS:', 1))
        except ValueError:
            pass
        else:
            raise RuntimeError(f'{entry}: drift negative failed')
    return len(CASES)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    count = verify(args.root.resolve())
    print(f'PASS: {count} source-matched C++17 declarations, O0/O2 and negative controls; Xbox ABI_UNVERIFIED')


if __name__ == '__main__':
    main()
