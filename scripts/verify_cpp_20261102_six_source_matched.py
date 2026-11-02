#!/usr/bin/env python3
"""Verify six source-matched C++17 forward-declaration repairs (not Xbox ABI proof)."""
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
    '0x00105af0': (
        'src/main_unclassified/band_0010/0x00105af0.cpp',
        '99f2fe8394f28e6cd3f1102234c33b10444824632b13fa43d7c0d7f53c1bd2e5',
        '6CFECA41E4082F91EF1A24D4AB47F9306763A7E0978DD335A070FA9A563F9856',
        ('extern void FUN_00105910(void);',),
    ),
    '0x0014d470': (
        'src/main_unclassified/band_0014/0x0014d470.cpp',
        '9fbbd31d0cb473c99b93426f459a73354524fc39f11c45be16200ecf8d9641a1',
        'F709F372266ACCFF93C0B3C0F58F0E23170BF8FA1A9114B73F5C0F51DFC747F6',
        ('extern void FUN_0014ae80(void);',),
    ),
    '0x0014d500': (
        'src/main_unclassified/band_0014/0x0014d500.cpp',
        '90ff71c84548cedb6816886e3c6f6f89588836a3a1c54699ca8bd8a5b086ec25',
        '8CC791CABB7F2F6E9ECBCEA1AE8EABCE22820406F2AF9F1F16EB21699938309C',
        ('extern void FUN_0014ae80(void);',),
    ),
    '0x0014d570': (
        'src/main_unclassified/band_0014/0x0014d570.cpp',
        '9524469bb39921372b32cf4957c1cccb87fd353ebef6a90c32325e3aff41f1e5',
        '791298B00E86320C127A644F080C0910B7351609165231CD937E185297FA9A71',
        ('extern void FUN_0014ae80(void);',),
    ),
    '0x0015b9d0': (
        'src/main_unclassified/band_0015/0x0015b9d0.cpp',
        'e113046418ddb4814cc32559717835c3925d132d04decb2697597844a6fbeb49',
        '179124130DEAF4C1E9D5CF52AA84585082E2EA08D9913A2D195C4CC94977239B',
        ('extern void FUN_0010bc40(void);',),
    ),
    '0x00289fa0': (
        'src/main_unclassified/band_0028/0x00289fa0.cpp',
        'ce7dc6925ac9e58dbc93114f05acd185f579572077284911cab9493f0aed1ec9',
        'A44A1A2B03D7A47ACAC718AE813AB3C716D8EE37B130F0DDB929A1B6B44B3FF6',
        ('extern void FUN_0028a460(void);',),
    ),
}

DECLARED_CALLEE = {
    '0x00105af0': '0x00105910',
    '0x0014d470': '0x0014ae80',
    '0x0014d500': '0x0014ae80',
    '0x0014d570': '0x0014ae80',
    '0x0015b9d0': '0x0010bc40',
    '0x00289fa0': '0x0028a460',
}
CALLEE_SHA = {
    '0x00105910': 'dae9743dd90953dca7077d671e15b1a17fb8be291179132cfd91ac3e7b3b06aa',
    '0x0014ae80': '53d1281c5cfa3672164296347e5edadaf95706b87b965310ce1b608bd5f706bf',
    '0x0010bc40': 'bf55d5d45247431e40d2ab807c41e80d3868f8140c6344d81bb5297b2e0c6a70',
    '0x0028a460': 'a1b4aa05db8825083a3c29cf12ca49816aa6fea76d4c8e8d25956ebcd363a373',
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
    import sys
    sys.path.insert(0, str(root / 'tools'))
    from source_layout import source_path
    for entry, (path, _, _, _) in CASES.items():
        if source_path(root, entry) != root / path:
            raise ValueError(f'{entry}: source layout mismatch')
        callee = DECLARED_CALLEE[entry]
        callee_text = source_path(root, callee).read_text(encoding='utf-8')
        if hashlib.sha256(callee_text.encode('utf-8')).hexdigest() != CALLEE_SHA[callee]:
            raise ValueError(f'{entry}: callee draft source drift')
        if f'void FUN_{callee[2:]}(void)' not in callee_text:
            raise ValueError(f'{entry}: callee draft signature changed')
        text = (root / path).read_text(encoding='utf-8')
        declarations = validate_text(entry, text)
        for opt in ('-O0', '-O2'):
            code, err = clang_check(compiler, include, text, opt)
            if code:
                raise RuntimeError(f'{entry} {opt}: {err[-1200:]}')
            with tempfile.TemporaryDirectory(prefix='bf-six-obj-') as d:
                candidate = Path(d) / 'candidate.cpp'
                candidate.write_text(text, encoding='utf-8')
                obj = subprocess.run([compiler, '-std=c++17', opt, '-c',
                                      '-I', str(include), str(candidate),
                                      '-o', str(Path(d) / 'candidate.o')],
                                     capture_output=True, text=True)
                if obj.returncode:
                    raise RuntimeError(f'{entry} {opt}: host object compile: {obj.stderr[-1200:]}')
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
    print(f'PASS: {count} exact-source C++17 declarations, O0/O2 syntax/object and negative controls; Xbox ABI_UNVERIFIED')


if __name__ == '__main__':
    main()
