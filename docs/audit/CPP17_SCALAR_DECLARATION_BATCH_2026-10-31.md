# C++17 source-only scalar declaration batch — 2026-10-31

## Exact-tree starting point

- Starting main HEAD at triage: `74d0ffe77ec6fbb2bba2bdd675c290d65e05c9da` (progress publication only).
- Latest completed exact-tree C++17 audit: `8422e84b14975117905659060bbd1c163a361e3c`, workflow run `41208393922`, 3,533 / 13,694 passing, 10,161 failing (25.80%), zero body-provenance mismatches.
- Audit artifact: `cpp_compat_report.json`; both selected callers have exactly one recorded diagnostic: undeclared `FUN_...` identifier. Their original source SHA-256 and original-body digest labels are pinned in `tools/test_cpp_scalar_edges_20261031.py`.

## Source-preserving repairs

| Caller | Callee draft | Source-only declaration | Verification level |
| --- | --- | --- | --- |
| `0x0024BBB0` | `0x00248340`: `int FUN_00248340(int)` | `extern int FUN_00248340(int);` | `CPP_SYNTAX_ONLY`, `ABI_UNVERIFIED` |
| `0x002E9C60` | `0x002E7B70`: `int FUN_002e7b70(int,int,uint,uint)` | `extern int FUN_002e7b70(int,int,uint,uint);` | `CPP_SYNTAX_ONLY`, `ABI_UNVERIFIED` |

Both call expressions already existed in the original draft; no arguments, casts, register pseudo-inputs, storage, original statements or original-body SHA-256 comments were changed. The declarations match *current Ghidra callee draft spellings*, not authenticated Xbox ABI contracts. No guest32 address is converted to a native host pointer by this change.

## Focused checks and negative controls

`python3 tools/test_cpp_scalar_edges_20261031.py`

This test requires the actual canonical caller/callee files and repository headers. It checks source preimage/result SHA-256, unchanged original-body labels, the original call expression, exact callee draft source SHA-256 and signature, Clang++17 `-O0`/`-O2`, and two negative controls (removed declaration and incorrect arity). The local equivalent-guest-scalar-header preflight passed for both callers at both optimization levels, including negative controls; full-header and exact-tree CI are separate gates.

## Quarantine / linkage boundary

- `0x00248340` still has unresolved allocator, SEH and `0x00249940` dependencies; the new caller declaration does not establish its Xbox entry register inputs or linked execution.
- `0x002e7b70` uses an implicit `in_ECX` and indirect calls. Its draft parameter list is not proof of the original register/stack calling convention or indirect dispatch.
- Other examined first-error pairs showed arity mismatches, pointer-vs-scalar storage, x87 returns, guest pointer-width questions or indirect-call contracts. Those remain evidence-needed rather than patched with invented prototypes or casts.
- **The original retail XBE was unavailable in this run.** SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` was not authenticated here. No new original CALL/RET/register or behavior evidence is claimed.
- **Linkage and 1:1 behavior are unverified.** The two callers parse in isolation; their callee drafts are not established as independently syntax-passing or linked. A synthetic stub or host-only link would not prove Xbox fidelity.

README and progress percentages must remain unchanged until a completed strict C++17 exact-tree audit at the pushed commit proves a net delta. Continue with single-definition source-matched declarations first; re-examine complex thunk, guest32, x87/SSE, SEH and virtual dispatch cases only with original machine-code evidence.
