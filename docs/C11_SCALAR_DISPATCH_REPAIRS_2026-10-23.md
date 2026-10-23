# Scalar SSE and dispatch repairs — 2026-10-23

Scope: four scalar reciprocal-square-root expressions and one five-entry
dispatch table. These remain C drafts with unverified ABI and runtime behavior.
The native PC port is still the goal; these changes do not supply platform
backends, a linked game, or a byte-identical rebuild.

## Original evidence

The original local XBE remains SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Each function's original entry and body digest are unchanged. Ghidra-exported
body ranges were mapped into the original XBE and checked before inspecting
x86 instructions with Capstone. The five bodies have contiguous ranges.

| Entry | Body bytes | Observed operation and bounded repair |
| --- | ---: | --- |
| `0x00027490` | 176 | `0x000274d9`: scalar `RSQRTSS`, followed by low-lane `MOVSS`. Sum `local_4` squared, then `local_c` squared. |
| `0x000339c0` | 191 | `0x00033a35`: scalar `RSQRTSS`. Sum `fStack_4` squared plus `fStack_8` squared, then `fStack_c` squared. |
| `0x002c3cf0` | 148 | `0x002c3d30`: scalar `RSQRTSS` on stored `fVar1`. Add squared DWORD float lanes at offsets `+0x38`, then `+0x3c`. |
| `0x002c68a0` | 347 | `0x002c68e6`: scalar `RSQRTSS` on stored `fVar1`. Add squared float lanes at `+0`, `+4`, then `+8`. |
| `0x000279d0` | 1,025 | `0x00027a13`: `jmp [eax*4+0x00027dd4]`, with unsigned index bounds at both entry paths. Replace pointer-valued switch cases with verified indices. |

All four scalar paths have an x87 store to a four-byte float before `RSQRTSS`.
Only the low 32-bit result is subsequently stored. Replace the invented Ghidra
array assignments and `._0_4_` accesses with the existing project pattern:
`_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(value)))`. This uses compiler-provided x86
SSE intrinsics in C11 source; it is not portable C arithmetic or exact `1/sqrt`.
The additions now follow the original x87 grouping rather than the reordered
Ghidra expression. Host floating-point intermediate precision remains unverified.

The jump table is outside the recorded function body and was read separately:

| Index | Original destination |
| ---: | --- |
| 0 | `0x00027bc4` |
| 1 | `0x00027a1a` |
| 2 | `0x00027cea` |
| 3 | `0x00027d49` |
| 4 | `0x00027d9f` |

The C switch uses those indices while preserving case bodies and the existing
re-entry path. No gameplay meaning is assigned to the indices or data offsets.

Reproduce binary evidence with
`python tools/verify_scalar_dispatch_repairs.py --xbe path/to/original/default.xbe`.
The tool checks the whole XBE hash, five original body hashes, 12 focused
instruction windows, and all five table destinations. It writes no game data.

## Focused validation and tracking

All five failures were reproduced before editing. All five repaired sources
pass Clang 22.1.8 syntax checks for both `x86_64-pc-windows-msvc` and
`i686-pc-windows-msvc`, using the inventory's existing allowances for unresolved
declarations and pointer conversions. Four generated 32-bit assembly files
each contain one `RSQRTSS` instruction at `-O0`; this does not validate the
surrounding function. No game was executed.

The binary evidence verifier passes; a changed-XBE negative check is rejected.
The original-body-label tests, all-source provenance/hygiene check, and source
layout check pass. An independent review traced the x87 stack operations and
dispatch mapping against the original instructions.

Only the five changed C-source digests and syntax states are updated in the
canonical inventory. ABI and behavior states remain `UNVERIFIED`. The function
classifier now recognizes `_mm_` intrinsic calls as requiring SIMD review,
retaining that flag for these repairs and restoring it for 21 existing sources.
No original hashes, inferred gameplay roles, source paths, or function counts
change in the group index.

## Limits and deployment

Unresolved issues include incoming-register contracts, indirect-call signatures,
32-bit address translation, stack-layout models, host x87 precision and exception
state, and original-versus-host `RSQRTSS` approximation behavior. A syntax pass
is not evidence of runtime equivalence. Nearby mixed packed-vector drafts
`0x00024080`, `0x00027540`, and `0x00056740` remain for separate investigation.
No function is newly marked 1:1 or behavior-verified.

Followed the same [REA evidence discipline](C11_REPAIR_PASS_2026-10-23.md#rea-workflow-boundary)
as the preceding batch. These are local XBE/Ghidra/Capstone observations, not
REA Evidence records from a configured native analysis engine.

Source and validation changes only. No installed game, save, production service,
or proprietary evidence was modified. Roll back with a normal Git revert of the
repair commit and rerun the source inventory; the five original syntax failures
will return.
