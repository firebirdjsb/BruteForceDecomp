#!/usr/bin/env python3
"""XAPI 0x0037EF88 two-byte record regression; not Xbox ABI verification."""
import argparse
import hashlib
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile

ENTRY = 0x0037EF88
BODY_SIZE = 525
BODY_SHA = '1fa29251255b7728bfddb11ec635833498096b51fec6842bad614dbffd88d178'
XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
FINGERPRINTS = {
    0x0037EF88:'558bec83ec60', 0x0037F12E:'be4cee3700',
    0x0037F138:'80254cee370000', 0x0037F140:'a24dee3700',
    0x0037F155:'c6054cee370002', 0x0037F15C:'a24dee3700',
    0x0037F171:'c6054cee370001', 0x0037F178:'a24dee3700',
    0x0037F192:'c20400',
}
PAIRS = [('0','local_c'), ('2','local_10'), ('1','local_8')]


def source_check(s):
    if 'Entry: 0x0037ef88' not in s or BODY_SHA.upper() not in s:
        raise ValueError('original entry/body provenance changed')
    if 'extern uint32_t PTR_XBE_FILE_HEADER_0037ee4d;' in s:
        raise ValueError('overlapping guest byte represented as independent global')
    if not re.search(r'uint8_t\s*\*const\s+device_descriptor_bytes\s*=\s*\(uint8_t\s*\*\)\s*\(void\s*\*\)\s*&DAT_0037ee4c\s*;', s):
        raise ValueError('single byte-addressable backing missing')
    found = re.findall(r'device_descriptor_bytes\[0\]\s*=\s*(\d+)\s*;\s*device_descriptor_bytes\[1\]\s*=\s*\(uint8_t\)(local_\w+)\s*;',s)
    if found != PAIRS or s.count('FUN_0037f2ce(&DAT_0037ee4c);') != 3:
        raise ValueError('three byte pairs/call sites changed')
    if re.search(r'(?<!&)\bDAT_0037ee4c\s*=(?!=)',s):
        raise ValueError('wide write would corrupt guest record')


def original_xbe_check(xbe):
    # Reuse the repository's independently tested section/VA mapper.
    from audit_xbe_first_100 import mapped_span, xbe_sections
    b=xbe.read_bytes()
    if hashlib.sha256(b).hexdigest()!=XBE_SHA:
        raise ValueError('original XBE SHA-256 mismatch')
    sections=xbe_sections(b)
    if hashlib.sha256(mapped_span(b,sections,ENTRY,BODY_SIZE)).hexdigest()!=BODY_SHA:
        raise ValueError('original complete function body digest mismatch')
    for va,expected in FINGERPRINTS.items():
        data=bytes.fromhex(expected)
        if mapped_span(b,sections,va,len(data))!=data:
            raise ValueError(f'original opcode mismatch at 0x{va:08X}')


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument('--xbe',type=Path)
    a=p.parse_args()
    root=a.root.resolve()
    source=root/'src/platform/xpp_role_unverified/0x0037ef88.c'
    try:
        s=source.read_text(encoding='utf-8')
        source_check(s)
        for bad in (s.replace('device_descriptor_bytes[0] = 0;', 'DAT_0037ee4c = 0;',1),
                    s.replace('device_descriptor_bytes[1] = (uint8_t)local_c;', 'device_descriptor_bytes[0] = (uint8_t)local_c;',1),
                    s.replace('device_descriptor_bytes[0] = 2;', 'device_descriptor_bytes[0] = 1;',1),
                    s.replace('FUN_0037f2ce(&DAT_0037ee4c);','FUN_0037f2ce(0);',1)):
            try:source_check(bad)
            except ValueError:continue
            raise ValueError('negative control accepted incorrect source')
        clang=shutil.which('clang')
        if not clang:raise ValueError('clang not installed')
        for opt in ('-O0','-O2'):
            subprocess.run([clang,'-std=c11','-fsyntax-only',opt,'-Wno-implicit-function-declaration',
                            '-Wno-int-conversion','-Wno-incompatible-pointer-types',
                            '-Wno-pointer-to-int-cast','-Wno-int-to-pointer-cast',
                            '-Wno-return-type','-Wno-deprecated-non-prototype',
                            '-I',str(root/'include'),str(source)],check=True)
            with tempfile.TemporaryDirectory() as tmp:
                exe=Path(tmp)/'byte_test'
                subprocess.run([clang,'-std=c11','-Wall','-Wextra','-Werror',
                                '-pedantic-errors',opt,
                                str(root/'tests/test_0037ef88_device_descriptor_bytes.c'),
                                '-o',str(exe)],check=True)
                subprocess.run([str(exe)],check=True)
        if a.xbe:
            sys.path.insert(0,str(root/'tools'))
            original_xbe_check(a.xbe)
            print('Original XBE and 9 x86 instruction windows verified')
        else:print('Original XBE absent: instruction verification unavailable in public CI')
    except (ValueError,OSError,subprocess.CalledProcessError) as e:
        p.exit(1,f'FAIL: {e}\n')
    print('PASS: source, Clang O0/O2, guarded byte regression, four negative controls; runtime/ABI unverified')

if __name__=='__main__':main()
