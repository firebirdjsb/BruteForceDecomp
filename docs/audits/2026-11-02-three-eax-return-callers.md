# Three original-EAX C++17 caller repairs — 2026-11-02

Starting exact-tree Clang++17 audit: `09d60b7c0bfc11c70a2620cca4dea49139733862`, **3,940/13,694 passing**. Starting main for this batch: `bcd13da3e653c338e6df745897aba6cd2fa68aed`. All source identities and original-body SHA-256 labels remain unchanged. README progress is not updated by this batch.

## Original retail XBE verification (private local evidence)

Authenticated retail SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The complete original bodies matched their source labels at caller/callee entries `0x0005D2B0`, `0x0005D410`, `0x00075010`, `0x00075410`, `0x00073B20`, and `0x002334B0`. Body lengths: 0x3A, 0xC0, 0x30, 0xC0, 0xE0 and 0xDB bytes, respectively.

- `0x0005D2DB`: direct E8 to `0x0005D410`; caller reads `[EAX]` at `0x0005D2E0`. At callee return sites `0x0005D47F`, `0x0005D4BD`, `0x0005D4CD`, the preceding `MOV EAX,EDI` at `0x0005D479`, `0x0005D4B7`, `0x0005D4C7` is followed by `RET 4`.
- `0x00075031`: direct E8 to `0x00075410`; caller reads `[EAX]` at `0x00075036`. At callee return sites `0x0007547F`, `0x000754BD`, `0x000754CD`, the preceding `MOV EAX,EDI` at `0x00075479`, `0x000754B7`, `0x000754C7` is followed by `RET 4`.
- `0x00073B6D`: direct E8 to `0x002334B0`. The caller stores EAX at `0x00073B72` and reads from the returned address. The callee's original body writes through EAX and returns at `0x0023358A` without replacing EAX; the current callee draft already returns `float *`.

Each of the six original body digests was matched against the private XBE. The three E8 displacements, six EAX/RET4 windows and original callee RET were checked with byte-mutation negative controls. **No executable bytes or decompiler exports were committed.**

## Bounded source edits

Three caller files receive only source-matched return declarations. Two callee drafts expose the already-observed EDI output address through EAX on all three return paths. No caller expression, data write, object layout, host pointer cast or other game statement was changed. The existing guest EDI/EAX producer/consumer representation remains **ABI_UNVERIFIED**; these are not Xbox ABI, cross-function linkage or behavioral 1:1 certifications.

Three full caller files passed isolated Clang++17 syntax at O0 and O2, with six declaration-removal negative controls rejected. The two callee drafts retain unrelated pre-existing C++17 diagnostics and must not be counted as syntax passing. Full exact-tree CI is required before any syntax percentage update.

## Quarantine / next queue

Keep `0x000A2840` (five callers), `thunk_FUN_00237EC0`, `0x001ED100` (548-byte guest stack transfer), allocator guest32 pointer translation, x87/SSE, SEH, indirect dispatch and vtable layouts quarantined pending complete original register/stack/output evidence. Do not substitute host pointers for guest DWORD addresses or introduce demo content.
