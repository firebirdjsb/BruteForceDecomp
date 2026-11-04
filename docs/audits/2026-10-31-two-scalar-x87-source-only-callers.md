# 2026-10-31 — two source-matched C++17 direct-call declarations

## Audited starting point

Newest main at selection: `747672913c2f6e18ece46195c0de38229f1e8c65`.
Latest completed exact-tree strict Clang++17 audit: `da5db7345501d2b4200324c2ee948a9bf9951776`, run `41238870764`, **3,574 passing / 13,694**, **10,120 failing**, **26.10%**, zero original-body provenance mismatches.
This is the **pre-batch** baseline; no post-batch syntax increase is claimed until a completed exact-tree audit.

## Evidence-gated source-only changes

The completed audit reported exactly one first-error diagnostic per caller: undeclared direct `FUN_...` symbol.
The existing callee draft's exact return type and parameter list were copied into a file-scope `extern`.
No original caller statement, call operand, body hash, guest pointer representation, or x86 entry identity was modified.

| Caller | Existing callee draft signature | Original caller Git blob | Callee Git blob | Original x86 body SHA-256 label |
| --- | --- | --- | --- | --- |
| `0x001F2950` | `int FUN_001e8df0(float param_1)` | `1bcb1a395303a9688404efb901a1a0754447f499` | `c41c8ddd30bfbeef27fe9899de8fc989c60567c4` | `5CBF50B883D11CA762839EC419B49B9E192CD070D9F61D9A78F6643A4226FDE6` |
| `0x002C54F0` | `float10 FUN_002c5bc0(float param_1)` | `d86f943e9e4b93e81245d9259d3d0abecba4c3a9` | `e500b1bb98c21a069d7c575e8df180960a5c0d19` | `B154427F9085BABD1CABFDACEF1CEB33D4C3206F29EF18A35C2CEB2CA4AAA50E` |

## Validation and limitations

- Original caller byte-for-byte preimages were matched against their pinned Git blobs and the audit's source SHA-256 records before the declarations were added.
- Local **source-body-shaped** Clang++17 `-fsyntax-only` checks at `-O0` and `-O2` passed for both modified caller bodies, with equivalent minimal host aliases; removing the declaration made both fail with undeclared-symbol errors. The full repository header and provenance checks are CI-gated in `tools/test_cpp_20261031_two_new_source_calls.py`.
- CI tests verify original caller and callee Git blobs, original x86 body digest labels, full original-file Clang++17 `-O0`/`-O2` checks and negative controls. The full exact-tree audit must complete before any README progress update.
- `0x001F2950` passes a draft `undefined4` word to a callee draft `float` parameter. C++ implicit conversion is **not** original Xbox argument bit-layout evidence. The original register/stack producer and call ABI remain unverified.
- `0x002C54F0` consumes a draft `float10` return. Its actual x87 return path, stack cleanup and source/destination behavior remain unverified.
- No original retail XBE was available to authenticate against SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Both interfaces remain `ABI_UNVERIFIED`; no Xbox instruction, runtime, linkage or 1:1 claim is made.

## Quarantine queue

The exact-tree triage yielded 175 first-error direct-call candidates with matching draft arity, but **arity is not type compatibility**. Rejected inspected examples include:
- `0x001A80F0 -> 0x001AD080`: caller has `undefined4*`, callee draft expects `int*`; do not manufacture a signed-pointer cast.
- `0x001D0400 -> 0x001D1E30`, `0x001D10B0 -> 0x001D2D60`, `0x001D1310 -> 0x001D2DE0`: guest integer addresses are passed where callee drafts expect host pointers.
- `0x0027E5F0 -> 0x0027E580`, `0x002B7320 -> 0x00306B90`: callers consume values from void-return callee drafts.
- `0x0025D090 -> 0x000A7BA0`: a pointer return is consumed as a host integer.
- `0x0010CBB0 -> 0x000EE5C0`: storage and float-bit contracts are not source-proven.

Prioritize independently type-compatible source declarations; keep pointer-width, SEH, indirect dispatch, x87/SSE and class/vtable cases in evidence-needed queues. Host syntax and partial symbol linkage are separate from original Xbox 1:1 behavior and native PC linkage.
