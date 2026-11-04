# 2026-10-31 — seven exact-single-diagnostic source-only C++17 declarations

## Audited baseline and scope

The latest completed full-inventory, exact-tree Clang++17 audit used for selection
is `48e9a2fa7465d131acf4653bf65a1e188e5d89f8`, run
[`41232980884`](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41232980884):
**3,552 passing / 13,694** (25.94%), **10,142 failing**, zero body-provenance
mismatches. That baseline predates this source-only batch and must not be
presented as its new measured coverage.

At least 70 caller/callee pairs from the one-diagnostic, draft-arity-matched
queue were screened across main, XOnline, XNet, DirectSound and CRT/Bink
sources. Most were **quarantined** because an apparent arity match concealed
an incompatible guest32 integer/pointer type, an invalid void-return use,
unresolved float/x87 meaning, or a missing register/stack contract. Seven
independent callers were accepted; the batch-size target is not a quota.

The original retail XBE was **not available for reauthentication** in this
pass. Its required SHA-256 remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
All seven declarations are source-draft matches only, **ABI_UNVERIFIED**.
No CALL/RET, register, stack, guest-memory, output or behavioral equivalence
has been established by these edits.

## Seven isolated single-error caller repairs

Each of these original-address files had exactly **one compiler error** in
the completed audit: the named undeclared callee. Its independent original-
address callee draft supplies the complete prototype; the existing caller
arguments and original function body are unchanged.

| Caller | Source-draft callee | Prior audit error |
| --- | --- | --- |
| `0x0033C53D` | `void FUN_0033BD35(void)` | undeclared identifier |
| `0x0033D3DF` | `undefined4 FUN_0033D057(int,undefined4)` | undeclared identifier |
| `0x0033E9F8` | `ushort* FUN_002F6E31(int,uint,uint)` | undeclared identifier |
| `0x0033EA0C` | `ushort* FUN_002F6E31(int,uint,uint)` | undeclared identifier |
| `0x002F77F9` | `ushort* FUN_002F6E31(int,uint,uint)` | undeclared identifier |
| `0x002F7816` | `undefined1 FUN_002F75E8(int,uint,int)` | undeclared identifier |
| `0x002F81E8` | `int FUN_002F7A1B(undefined4,int)` | undeclared identifier |

The exact source SHA-256 preimages, Git blob identities, original XBE-body
digest labels, callee Git blob identities and full parameter names are
pinned in `tools/test_cpp_20261031_seven_single_error_source_calls.py`.
The test reconstructs each exact pre-edit source by removing the one added
file-scope declaration, compares both SHA-256 and Git blob identities, and
runs strict original-file Clang++17 syntax at `-O0` and `-O2` with a
declaration-removal negative control.

Prior to staging, seven local source-body-shaped C++17 O0/O2 checks and
their missing-declaration negatives passed. Those reduced fixtures do
**not** replace the new full-source CI test or exact-tree inventory.
Only a completed full 13,694-entry audit at the pushed HEAD may establish
the net syntax gain or justify README progress updates.

## Quarantined interfaces and remaining milestones

Do not infer that host syntax or a C++ symbol name establishes the original
Xbox ABI. In particular, continue to quarantine pointer-to-32-bit integer
conversions, integer-to-host-pointer arguments, void-return assignments,
unverified x87/SSE, SEH and virtual dispatch. The callee's independently
exported Ghidra prototype may itself be wrong; original retail XBE CALL,
register-producer, stack-cleanup and RET evidence is required before
promoting any interface beyond `ABI_UNVERIFIED`.

No full host-link, guest-memory execution, differential behavior, original
class/vtable layout or native PC game build was demonstrated in this batch.
The eventual BruteForce: Reloaded native game remains unbuildable and
unplayable. XboxRecomp remains a method reference, not a source of Brute
Force semantics.
