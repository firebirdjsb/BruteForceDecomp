# DWORD primitives and 209 further partial repairs

Scope: **five complete C++17 syntax repairs and 209 partial operand repairs**.
The five complete syntax repairs establish bounded DWORD primitive facts, not
whole-function Xbox behavior. The other 209 files still fail syntax checks.
They receive no syntax-pass or 1:1-function credit.

## Five complete syntax repairs

- `0x000815B0` and `0x00235D50`: preserve the existing address and all four bytes
  when viewing `DAT_0046d064` through the corresponding signed DWORD pointer.
  No integer conversion, host-pointer truncation, storage copy or data object
  definition is introduced. Size, alignment and corresponding signed/unsigned
  types are compile-time requirements. The language rule is
  [C++17 draft N4659, basic.lval paragraph 8.4](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/n4659.pdf).
  Original MOV-immediate/following-load windows retain guest VA `0x0046D064`.
- `0x003476F1` and `0x00374D57`: define `CARRY4` as the carry-out of unsigned
  32-bit addition. Authenticated ADD/ADC windows show the original low-word
  addition feeding carry into the high-word operation.
- `0x0027CDB0`: define `SBORROW4` as signed 32-bit subtraction overflow (OF).
  It is not the unsigned borrow flag. The helper uses unsigned word arithmetic
  and bit tests, avoiding signed arithmetic overflow inside the helper itself.

Only the helper include/comment and the three signed-view expressions change.
Existing signed arithmetic in the caller drafts, including `iVar7 - iVar6` and
`iVar7 - iVar4` in `0x0027CDB0`, remains behaviorally unverified. Original guest
register provenance, pointer mapping and complete calling conventions remain
ABI_UNVERIFIED. No surrounding function is executed as game code by these tests.

`tests/cpp_dword_operations_oracle.cpp` compares the isolated C++ carry/overflow
operators against native x86 ADD32/SETC and SUB32/SETO. At both O0 and O2 it
checks 262,225 boundary/random input pairs, through signed and unsigned operand
types. Pointer identity, raw four-byte reads/writes and neighboring sentinels
are checked with strict aliasing enabled. FP, pointer, 64-bit and narrower
operand negative controls must fail compilation rather than invent word bits.
All five source preimages must fail and all five edited TUs must pass strict
Clang++17 O0/O2 with pointer-truncation errors enabled.

## 209 partial repairs

The next unchanged eligible cohort adds **469** exact original C7 DWORD address
immediates. Uncapped O0/O2 diagnostics decrease from **1,126 errors to 657**.
Every file remains failing. Every removed diagnostic is tied to its known-label
DWORD assignment line; remaining error-message/line multisets are strict subsets
of the original results and no warnings are introduced. Source expressions that
would change pointer arithmetic or another storage width are excluded.

These cases are disjoint from the earlier 100/250 batches and protected source
declaration owners. This exhausts the remaining 295 eligible overlays examined:
86 candidates failed the diagnostic or exact-label proof. Batch size never
overrides those gates.

## Provenance and audit

Both manifests pin original entry/body digests, complete source preimages/Git
blobs and resulting fingerprints:
[five primitives](../../metadata/cpp_20261101_dword_operations.json),
[209 partial cases](../../metadata/cpp_20261101_remaining_literal_repairs.json).
The immutable XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Local private-image checks authenticate full original bodies and instruction
boundaries. Public CI reports that private-image authenticity was not rechecked.

Run `python tools/verify_cpp_dword_operations.py` and
`python tools/verify_cpp_remaining_literal_repairs.py`; add `--xbe <private-image>`
and `--tooldeps <capstone-directory>` for original-image authentication.
The older 250-file verifier keeps its original pinned totals and default gates;
the new partial wrapper passes separately pinned totals to the same verifier.

Only the 214 affected inventory source hashes/issues change. Original-body,
historical C11, ABI and behavior fields are preserved. Final published syntax
coverage requires a complete exact-tree audit; these local totals do not update
the percentage. No XBE/assets, complete dump or private paths are committed.
No live game, installation, save or production data is changed. Rollback is a
normal revert of the scoped source/inventory and verification commits.
