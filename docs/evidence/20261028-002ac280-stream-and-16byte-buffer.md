# 2026-10-28: 0x002AC280 adjacent guest count, binary32 version and 16-byte output

**Private evidence:** original XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Fourteen original instruction windows authenticated locally. Reproduce only with
the private executable via `python3 scripts/verify_002ac280_stream_float_and_buffer.py --xbe /path/to/default.xbe`.

Let B be original ESP after `0x2AC293 PUSH EDI`. First read at
`0x2AC299 LEA [ESP+0x24]` after two arguments outputs to B+0x1C,
matching four bytes at `local_154`; x87 at `0x2AC387 FLD [ESP+0x1C]`
reads those same four bytes as binary32. The second read at
`0x2AC2A7 LEA [ESP+0x20]`, also after two pushes, outputs to B+0x18,
the adjacent count word, `auStack_178[0]`. It is **not** a pointer
converted to float. A four-byte memcpy into float preserves the storage's
bit pattern for the existing comparison, but the x87 constant and
rounding behavior are not comprehensively verified.

`0x2AC313 MOV BYTE [ESP+0x68],0` anchors `cStack_138` at B+0x68,
so `auStack_150` (24 bytes before it) begins at B+0x50. The
`0x2AC39D/0x2AC3A1` read is 12 bytes into B+0x58
(`auStack_150[8..19]`). `0x2AC3A9/0x2AC3AB` reads four more bytes
into adjacent B+0x64 (`auStack_150[20..23]`). The virtual
`0x2AC3B6/0x2AC3BC` call `+0x4C` takes the *same contiguous
16-byte block* beginning at B+0x58. The C correction binds the two
read calls and this virtual-call argument to one backing buffer.

**Boundary:** no dynamic vtable implementation or complete behavioral
equivalence is claimed. CI only tests caller-side source invariants and
host Clang syntax; source fingerprints are updated. A completed new
full 13,694-source audit, not this note, establishes any net syntax
coverage change.
