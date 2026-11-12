# Six bounded C++17 syntax gains — 2026-11-04

## Exact full-inventory result

- Previous audited source tree: `80c91e2694cf5461bfe68f8712cf182830e578fe`, source-identical to starting commit `40097c03998d44d65cdaefa3ed55f0f376455f8c`.
- Pointer conversion commit: `7247fbdc`.
- Integer helper commit and audited tree: `3e362b69bf11774eb4bad6c278d1fbe75d382273`.
- Compiler: official Debian Clang **19.1.7 (3+b1)**, x86_64 Linux host.
- Before: **3,956 / 13,694**, **28.888564%**, 9,738 failing.
- After: **3,962 / 13,694**, **28.932379%**, 9,732 failing.
- Exactly six fail-to-pass changes; **no regressions**, **zero provenance errors**, **zero check errors**. Exact-tree verification passed.
- All 13,694 original body-digest labels remain unchanged; only the six listed canonical source hashes changed. The shared concat header also changed by its single new macro line.
- Cumulative gain: **17** additional complete syntax passes over the initial **3,945 / 13,694 (28.808237%)** baseline.
- Full report SHA-256: `889315be46d0bfaf99bd70d3cd68620c13a5c90fbb9a66b9a7975d0f4d626ca3`.

The metric is isolated host C++17 syntax, not original Xbox behavioral fidelity.

This follow-on batch addresses one existing object-address conversion and missing support for a bounded Ghidra integer concatenation. It does not change original-game control flow or invent external-call prototypes.

## Source changes

- `0x00072890`: cast the completed DWORD-pointer arithmetic expression to the existing `undefined2*` destination. The multiplication and pointer addition remain inside the cast: one index step remains `0xD800` bytes, not `0x6C00`. The cast adds no dereference through the new pointer type. Original hidden registers, global-storage identities/bounds, signed-char shifts, destination aliasing and guest/host pointer width remain unverified. The old assignment is also a C constraint violation, so C11 compiler acceptance must not be described as verified semantics.
- Add `CONCAT14(h,l)` alongside existing byte-concatenation macros. It reuses the existing integral-only helper and returns the low eight bits of `h` followed by the low 32 bits of `l` in a 64-bit unsigned value. No pointer or floating input is accepted.
- Include the existing, unchanged `bf_x86_dword_operations.h` in five drafts: `0x002ebd50`, `0x002efa30`, `0x002f0d30`, `0x002fe6a0`, `0x002fe780`. Their existing CARRY4 arguments are 32-bit integer expressions. No new carry implementation is added and the strict original width constraints are preserved.

The small include scope is intentional: globally importing the DWORD helper would change unrelated drafts and historical negative controls. Independent review caught and rejected a duplicate, less restrictive carry helper before integration.

## Evidence boundaries

All original body-digest labels are retained. Exact before/after sources are pinned and the source edits reverse byte-for-byte. Neither integer primitive behavior nor syntax proves the correctness of the surrounding division/remainder functions, implicit register contracts, Xbox ABI, native linkage or original game behavior. Complete canonical functions with unresolved inputs are not executed as behavior tests. No private XBE was reauthenticated. All work remained in the cloud.

## Broadened investigation and held candidates

Missing standard-library declaration probes covered 65 string-helper and 10 memory/control candidates. Three exact-source-signature overlays passed syntax (`0x002e0650`, `0x002e7b00`, `0x0034dd0a`) but were not landed without original call-edge and stack-contract evidence. Existing neighboring-call or destination-byte-offset evidence does not prove those call targets. Two floating-control-word candidates (`0x002eb4ca`, `0x002ef63f`) retain their explicit repository quarantine.

Six missing-type/include-order overlays did not produce complete passes; blanket inclusion additionally conflicts with a local `code` alias. No ordinary keyword, duplicate-qualifier or literal-parser complete-pass candidate emerged. Other integer primitive names remain entangled with independent ABI, external-call, pointer-width or storage errors. No declarations or register values were invented to turn those files green.

## Validation and explicit test limits

- New ushort-pointer suite: three tests, exact source reversal, preimage rejection, complete source syntax and object compilation at O0/O2, valid-array address/stride predicates, header-free i386 expression object compilation. The full register-dependent canonical function is not executed.
- New integer-primitive suite: seven tests; all five sources parse at O0/O2; original and independently missing-helper negative controls; unsupported operand-type/width rejection; both header include orders; exact source/header hashes; unchanged other two CONCAT14 users and their remaining failures.
- Synthetic tests cover one million randomized pairs at O0/O2, all high-byte values against boundary DWORDs, signed/wide truncation, boolean carry-shift identities, and single evaluation with independent objects. They do not claim operand evaluation order.
- Existing concatenation tests pass. Complete historical DWORD verifier passes with unchanged helper, historical negative controls, and the 262,225-pair native CF/OF oracle at O0/O2.
- Source layout, original body labels, C++17-only policy, repository safety, audit-tree controls, source-only overlay gate, declaration audit/FP guards and progress/publication controls pass.
- Full `tools/test_cpp_*.py` discovery on the final implementation ran **194 tests**, with **14 failing subchecks, one error and five skips**. Every failure/error belongs to the pre-existing `test_cpp_20261031_21_source_matched_callers.py` suite. Running that suite independently on untouched remote-base commit `910d6acfea11d8103061ff3453216e2319177828` reproduces exactly the same 14 failures and one error. Seven callers have unresolved pointer-versus-int calls to `FUN_0001f4f0`; the old provenance fixture for `0x00315c8f` is stale. These are not new regressions, but **the overall test suite is not green**. No expected failures or hashes were weakened to conceal them.

Publication remains blocked by existing read-only GitHub access; no push was attempted. Remote main remains at `910d6acfea11d8103061ff3453216e2319177828`. README and published progress stay bound to their existing real CI result, not this cloud-local audit.
