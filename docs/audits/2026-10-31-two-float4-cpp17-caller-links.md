# Two C++17 float4 caller declarations and partial host linkage — 2026-10-31

## Exact-tree baseline and scope

- Starting `main` HEAD: `a60e4349e78444abfd38ae2f05d44036d441aea5`, a progress-only child of completed exact-tree audit `a60ac0f32beb0afdaeb340cbeb6d6d6f6edfcc2b`.
- Completed strict Clang++17 inventory: **3,541 / 13,694** passing (25.86%), **10,153** failing, zero body-provenance mismatches; [audit run 41223056575](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41223056575).
- Screened 41 single-first-error undeclared-call candidates with a syntax-passing callee draft and matching draft arity. Only two caller files had existing four-argument call expressions matching the callee's **float pointer, float pointer, float pointer, float scalar** source signature without additional casts, operands, or guest-address conversions.
- Both source preimages matched the exact-tree audit SHA-256 before inserting one declaration each. These are **source-only C++17 repairs**, not recovered Xbox prototypes.

| Caller | Callee draft | Preimage SHA-256 | Preserved original x86 body SHA-256 |
| --- | --- | --- | --- |
| `0x0027FF20` | `0x00233B10` | `2c76c85c1d4e0b24f7c459250afa3f9a926336222a0623a0e387200e846fc6e8` | `2CC3BFE9FD06298DBABCFF840AA55CBC5B975F0376E8BA2CB3E4B4B6B17D4B5F` |
| `0x002907B0` | `0x00233B10` | `74f0e6bd9d827393a14e07b96aef4e1974acb0de0ddf1067950f3bf52b4b3316` | `95305422DBD355639EA6A3379F21B49679B350E8431B413371BFEF9AD13B6DA2` |

Callee draft `0x00233B10` was already syntax-passing and had source SHA-256 `c7793f04d0b26116c84f7ec7243dc493de91665235c347656dc0b9195b14555c` and original body digest label `4911F4E987F45DF85A910E477357C52F90778B138EED1EC08B40AB9D5839C479`.

## Preflight and regression

`python3 -m unittest discover -s tools -p 'test_cpp_20261031_two_float4_source_calls.py' -v`

The five focused tests passed locally with Clang++17 at O0/O2 against the source-matched caller/callee files and repository header. Removing either declaration, changing its argument count or changing the first float pointer to an integer pointer caused compilation failure. Original source-preimage, body-hash-label, call-expression, callee-source and `ABI_UNVERIFIED` tampering controls were rejected.

Both callers and the callee compiled to host objects; `clang++ -r` resolved the one `FUN_00233b10(float*, float*, float*, float)` C++ symbol in a relocatable host object. This is **partial host symbol linkage only**, not full transitive dependency resolution, Xbox-compatible calling convention, runtime execution, or a native PC game build.

## Original-XBE evidence boundary

The private retail XBE bytes were **not available** during this batch. Required SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. No new original E8 CALL sites, register producers, guest-stack cleanup, return/output contracts or machine-code negative controls were authenticated.

The callee's existing SSE source comments describe prior instruction review, but that is **not a fresh binary check**. Its four-float load/store extents and both callers' actual guest register inputs remain unverified. The 0x002907B0 caller uses unbound `in_EAX`, `in_ECX` and `in_EDX`; the 0x0027FF20 caller has unreviewed doubleword-to-float draft conversions. Neither body was edited. All interfaces remain `ABI_UNVERIFIED`, `NOT_BEHAVIOR_TESTED`.

## Deferred candidates and next queue

The remaining 39 screened pairs were **not** patched. Examples:

- `0x0027E5F0 -> 0x0027E580`: void-return draft consumed as an integer; do not invent an EAX return.
- `0x0017AA30 -> 0x0017AA70`: unsigned DWORD to floating argument; requires actual bit/number semantics.
- `0x0031A81C -> 0x0031A72F`: `undefined4 **` versus `uint *` output alias.
- `0x002E4A30 -> 0x002E49C0`: byte buffer and signed/unsigned pointer storage mismatches.
- `0x00165970 -> 0x0001FE00`: callback function return/signature mismatch.
- `0x003718C0 -> 0x00375A20`: guest device address versus host float-pointer contract.
- `0x001F3840 -> 0x000D0AA0`: void-return draft cast into a pointer; allocator and implicit register contracts unresolved.

Next original-XBE-backed investigation should identify both float4 call sites, validate the callee's complete register/stack/RET and output contracts, prove the four-float source/destination extents, and test original-vs-reconstructed SSE edge cases (including aliasing, zero-length normalization, NaN and sign-flip paths). Quarantine SEH, x87/SSE details, vtables and indirect calls until independently evidenced.

Do not update README syntax or overall progress from two isolated successes. Only a completed provenance-clean full 13,694-function exact-tree audit at the pushed SHA may publish the new percentage.
