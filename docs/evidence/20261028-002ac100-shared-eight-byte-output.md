# 2026-10-28 — 0x002AC100 shared two-DWORD output and serialization repair

**Scope:** one evidence-backed guest-stack storage/call-site correction. Original
private XBE SHA-256: `b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.
The original machine instructions were locally authenticated with
`python3 scripts/verify_002ac100_eight_byte_output.py --xbe /path/to/default.xbe`
and should never be uploaded into source control.

## Caller-side proof

Take B = original ESP after `0x002AC110 PUSH EDI`. The original writer's
`0x002AC11B MOV [ESP+0x28],0x3F8CCCCD` occurs after four outgoing DWORD
pushes, so it initializes B+0x18. Its Ghidra draft counterpart is
`local_38[0]=0x3f8ccccd`. Each member of that array is one 32-bit word.

The loop at `0x002AC23A LEA ECX,[ESP+0x20]` passes B+0x20 to the
`0x002AC241 CALL [EAX+0x38]` virtual producer along with EBX=index and
EDI=receiver. Exactly eight bytes later, `0x002AC246 PUSH 0; PUSH 8` and
`0x002AC24A LEA EAX,[ESP+0x28]` pass B+0x20 again to the stream writer at
`0x002AC250 CALL [EDX+0x14]`, receiver ESI.

Thus the two-DWORD buffer is `local_38[2..3]`: one address and length 8,
not a fresh `stack0xffffffb0` host variable and not the unrelated
`puStack_5c` stream pointer slot. The corrected caller-side C arguments
represent the exact observed original output and writer interface.

## Checks and boundaries

The source-controlled verifier checks 10 authenticated original instruction
windows when the private XBE is supplied; CI checks source invariants and
the isolated Clang host-C11 syntax without the XBE. The inventory source
SHA-256 is updated atomically. The virtual +0x38 implementation and
whole-function runtime behavior are **still unverified**. This does not prove
native Xbox/PC linkage, 32-bit pointer validity, or game correctness. A new
full-tree audit is required before counting any net reduction in failures.
