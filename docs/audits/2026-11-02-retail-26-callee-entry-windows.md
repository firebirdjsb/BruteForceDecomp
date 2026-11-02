# Retail-XBE callee entry evidence — 26 original functions

Original retail XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The executable is user-provided and must never enter Git. This review extends the existing 40 authenticated direct-call edges and 66 body identities. The 26 **distinct** callees are pinned by their first four disassembler-aligned complete instructions in `scripts/verify_cpp_20261102_26_callee_prologues.py`. Original body lengths/digests are inherited from the existing pinned `metadata/cpp_20261102_40_body_provenance.csv`; no new function identities are guessed.

## Original instruction observations

- `0x00038B70`, `0x00075F00`, `0x000A2840`, and `0x000A7BA0` each begin by reading `[EAX+4]`, then reading a second pointer at `[EAX+4]`, then testing a byte at an independently evidenced offset (`0xA9`, `0x29`, `0x15`, or `0x19`). This confirms an implicit **incoming EAX register dependency** in those entry paths. It does **not** establish a C++ object layout or host pointer representation.
- `0x000A0C60` begins with `SUB ESP,0xC`, `FLD [EDX]`, `FSUB [ECX+0x24]`, and `FSTP [ESP+8]`: x87 operations and incoming EDX/ECX memory dependencies. The audited caller `0x0017E200` still consumes a `void`-typed draft as a pointer. **Do not repair that conflict with a fabricated pointer return.**
- `0x000CD9C0` begins with `TEST EDI,EDI`, `PUSH EBP`, a conditional jump, and `MOV EDX,[ESI+0x2C0]`. The caller-side host pointer-to-guest-word mismatch is still quarantined. The register inputs are not represented by its zero-argument C++ draft.
- `0x0017BEB0` begins with `PUSH ECX`, `MOV EDX,[EAX+0xC]`, `PUSH EBX`, `MOV EBX,[EAX+8]`. Its EAX input is explicit in the original entry instructions; this is not proof that the current draft's `uint*` parameter captures it.
- `0x001D2D60` begins with `PUSH EBX`, `MOV EBX,EAX`, `MOV EAX,[EBX]`, `PUSH EBP`. This independently corroborates the previously pinned EAX source-register handoff at caller `0x001D10B0`, but the stack destination and guest32 storage still need a faithful representation.
- `0x001ED100` begins with `PUSH EBX`, `PUSH ESI`, `MOV ESI,EAX`, `MOV ECX,[ESI+0x18]`. Combined with previously pinned `REP MOVSD` and `RET 4` evidence, this reinforces the implicit EAX dependency and the 548-byte guest-stack copy. **Do not treat the draft's 532-byte local array as a complete 548-byte native destination.**
- `0x00144620`, `0x001CC3B0`, `0x001CCA00`, and `0x001E0DD0` begin with stack-frame and sentinel/handler-address setup. This is a reason to quarantine SEH reconstruction, not evidence for a portable host exception layout.

## Verification and limits

The local private-XBE gate authenticates the full retail SHA-256, verifies all **26 complete original callee body SHA-256 digests**, and checks **26 four-instruction entry windows**. The binary-free test runs 26 byte-mutation negative controls plus manifest, address, and provenance drift controls. CI requires no original XBE. These windows are not complete liveness analyses, C++ prototypes, guest32 address translations, virtual class evidence, cross-function linkage, or runtime behavior tests.

**Repair queue:** 40 previously reviewed source candidates; **0 new source edits** in this evidence batch. The original-address `.cpp` files, their body labels, and the README syntax percentage remain unchanged. The next source changes must first resolve original stack/register producers, output widths, and guest32 storage; x87, SEH, indirect calls, and vtables stay evidence-needed. No demo-only content is introduced.
