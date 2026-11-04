# Two pointer-comparison C++17 repairs — 2026-11-04

## Exact full-inventory result

- Baseline commit: `14987c75109dc6c299d7880a7a15c0108170f4f1`.
- Audited source commit: `6487b5b71c451d345f54f7abda1d8245dbf16591`.
- Compiler: official Debian Clang **19.1.7 (3+b1)**, x86_64 Linux host.
- Before: **3,945 / 13,694** passing, **9,749** failing, **28.808237%**.
- After: **3,947 / 13,694** passing, **9,747** failing, **28.822842%**.
- Net gain: **two** complete isolated C++17 syntax passes; no regressions.
- Both complete sweeps reported **zero provenance errors and zero check errors**.
- The exact-tree verifier passed both reports against their respective source trees.

Only `0x0030df50` and `0x0037fc3c` changed status, both from fail to pass.
All other 13,692 canonical source files retain their exact baseline hashes.
All 13,694 original body-digest labels are unchanged.

This is a **cloud-local exact-tree audit**, not a published GitHub Actions run.
The README and published progress JSON remain tied to their existing real CI run;
no run ID or remote publication is invented here.

Full-report SHA-256 digests:

- Baseline: `122f39176315f186c6839f139b44615b30da41d8cffbe8b45b6e186ecd3ca922`.
- After: `7164aef96bf2d0465ff78a8613a1e1a630ef770cd19bf3d2f815477e4d14f69b`.

## Bounded source changes

| Entry | Change | Preservation boundary |
| --- | --- | --- |
| `0x0037fc3c` | `*ppuVar1 != (char *)0x0` becomes `*ppuVar1 != nullptr` | Same null predicate; no pointer value, dereference, call, layout or register contract changes |
| `0x0030df50` | Compare `piVar3` and `puVar5 + -3` after converting each object pointer to `const void*` | Same address-comparison intent; existing pointer arithmetic occurs before conversion, without narrowing or additional memory access |

The first removes an incompatible typed-null operand. The second gives C++ a
common object-pointer type without changing the operands' addresses. Neither
fix manufactures a function signature, guessed register argument, missing return
value, data layout or guest-address translation.

Exact before/after source hashes and original body hashes are pinned in
`tools/test_cpp_pointer_comparison_syntax.py`. Reversing the single expression
replacement restores each entire original source file byte for byte. Existing
`ABI_UNVERIFIED` status and other warnings remain intact.

## Tests

- Both complete corrected source files pass strict C++17 syntax at `-O0` and `-O2`.
- All four original-source negative controls fail on the expected distinct-pointer
  comparison diagnostic.
- Native predicate fixtures cover null/non-null and equal/different addresses at
  both optimization levels. They do not execute either complete game function.
- Header-free i386 predicate fixtures pass at both optimization levels with
  32-bit pointer and DWORD assertions. Full-function i386 compilation is not
  claimed: this cloud executor lacks 32-bit libc development headers.
- Focused independent review found no blockers.
- Full source layout/body-label checks, repository safety, C++17-only policy,
  compiler audit controls, declaration-triage controls, exact-tree verifier
  controls, progress/publication controls and whitespace checks pass.
- The new regression test is wired into the existing C++17 audit workflow.

The previously unavailable compiler was obtained from official Debian packages
in temporary cloud storage. No user's computer was used or modified. The earlier
compiler-dependent declaration and float-conversion tests now pass as well.

## Evidence limits

Preserving these source predicates is not proof that their surrounding drafts
are faithful to the original game. Unresolved implicit registers, global storage
identities, table adjacency, pointer validity, guest-width assumptions and other
existing uncertainties are not resolved by these changes. No original retail
XBE was reauthenticated in this work. No Xbox ABI, full-function runtime, original
instruction-byte equivalence, cross-function linkage or playable build is claimed.

Candidates involving invented prototypes, hidden register inputs and unresolved
pointer-return storage were held rather than used to inflate the syntax count.
