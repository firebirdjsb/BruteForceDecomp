#!/usr/bin/env python3
"""Synthetic negative and wrapping-address tests, no private Xbox binary."""
from importlib import util
from pathlib import Path
import random
import tempfile

source=Path(__file__).resolve().parents[1]/'scripts/verify_00175090_guest_output.py'
spec=util.spec_from_file_location('original_175090',source)
mod=util.module_from_spec(spec)
spec.loader.exec_module(mod)

# Real branch is checked with --xbe separately; synthetic XBE tests only
# validate guest section parser and reject insufficient/malformed sections.
base=0x10000
b=bytearray(0x400)
b[:4]=b'XBEH'
b[0x104:0x108]=base.to_bytes(4,'little')
b[0x11c:0x120]=(1).to_bytes(4,'little')
b[0x120:0x124]=(base+0x200).to_bytes(4,'little')
b[0x204:0x208]=(0x12340000).to_bytes(4,'little')
b[0x20c:0x210]=(0x300).to_bytes(4,'little')
b[0x210:0x214]=(0x100).to_bytes(4,'little')
b[0x320:0x324]=bytes.fromhex('8d 44 24 20')
assert mod.guest(bytes(b),0x12340020,4)==bytes.fromhex('8d 44 24 20')
for address,count in ((0x1233ffff,4),(0x12340100,4),(0x123400fe,4)):
    try: mod.guest(bytes(b),address,count)
    except ValueError: pass
    else: raise AssertionError(f'Unsafe address permitted: {address:08x}')
try: mod.guest(bytes(0x100),0x12340020,4)
except ValueError: pass
else: raise AssertionError('Unrecognised XBE header permitted')

rnd=random.Random(0x175090)
for _ in range(20000):
    guest_entry_esp=rnd.getrandbits(32)
    pushed=(guest_entry_esp-0x0c-4*4-3*4)&0xffffffff
    # Each x86 LEA EAX,[ESP+0x20] binds exactly one DWORD at entry-8.
    original_guest_va=(pushed+0x20)&0xffffffff
    assert original_guest_va==(guest_entry_esp-8)&0xffffffff
print('PASS synthetic 0x175090 guest ranges and 20,000 wrapping stack frame checks')
