# Three source-matched C++17 declarations — retail-XBE E8 evidence (2026-11-02)

- Starting main: `e2c1ac157ac7ebf50a9c1c4f93a3e21874f5c696`. Exact-tree baseline from audited `2fe2c5eaa9b090ae5477e3b22da98f7ed0b3876e`: **3,934 / 13,694** passing C++17 syntax; 9,760 failing.
- Original retail XBE SHA-256 **B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721** authenticated locally. The XBE and disassembly dumps were not committed.
- Reviewed the prior 49-candidate source-matched queue: five had already been repaired; 44 remaining were examined. Three independently source-matched declarations were promoted; 41 remain deferred for incompatible host types, incomplete ABI, x87/SSE storage, guest32 pointers, or other unresolved errors.
- All three caller Git blobs matched the latest completed exact-tree audited SHA. Each change adds only a two-line `ABI_UNVERIFIED` comment and a declaration identical to the callee draft. No function body statement, original entry address, original-body SHA-256 label, or guest32 operation changed.

| Caller | Callee | Retail E8 CALL addresses | Callee RET addresses | Source-only declaration |
| --- | --- | --- | --- | --- |
| `0x001827B0` | `0x001814E0` | `0x00182806`, `0x00182814`, `0x00182822`, `0x00182833` | `0x001814F3`, `0x0018151A` | `float10 FUN_001814e0(void)` |
| `0x002D22B0` | `0x00150930` | `0x002D22F0`, `0x002D232F`, `0x002D235F`, `0x002D23A1` | `0x001509BB` | `void FUN_00150930(void)` |
| `0x002F1318` | `0x002EBA73` | `0x002F1451`, `0x002F14C0`, `0x002F151F`, `0x002F1603`, `0x002F164B` | `0x002EBA90`, `0x002EBA93` | `ushort FUN_002eba73(int,ushort)` |

## Evidence boundaries

The four `0x001827B0` callers set ECX from EAX-relative object offsets immediately before the direct calls; the callee returns x87 ST(0), and callers store ST(0) via `FSTP`. This supports the source-only float10 draft return **without proving host long-double ABI equivalence**. The four `0x002D22B0` callers produce EAX/EDX/ECX register inputs; the `0x00150930` callee reads those registers, writes three floats, and has an observed plain RET. The five `0x002F1318` calls push two DWORDs, call `0x002EBA73`, and clean eight bytes on the caller side; the callee reads `[ESP+4]` and `[ESP+8]` and exits via plain RET.

Local tests: 13 authenticated direct E8 targets, 5 selected RET sites, 13 E8 displacement negative controls, 5 RET-byte negative controls, and Clang++17 O0/O2 declaration-only positive and removal-negative probes (12 compiler outcomes) all passed. **These are isolated type probes, not full-source syntax passes.** The `0x001827B0` full draft still has an unrelated indirect `code` call-signature diagnostic; other callers may have further diagnostics. Do not infer a syntax delta until the completed exact-tree audit.

The new binary-free CI test pins each original caller preimage and unchanged callee source SHA256, checks exact insertion recovery, and rejects synthetic source drift. It does not authenticate the XBE on CI. Xbox C++ ABI, complete register preservation, x87 precision, indirect dispatch, native guest-memory translation, cross-function linkage, and game behavior remain **ABI_UNVERIFIED / NOT_LINK_TESTED / NOT_BEHAVIOR_TESTED**. No demo content or original binary bytes are included.
