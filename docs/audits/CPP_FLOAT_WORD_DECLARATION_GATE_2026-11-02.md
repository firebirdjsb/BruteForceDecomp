# C++17 source-declaration float/guest-word gate — 2026-11-02

## Exact-tree baseline and scope

- Last completed strict C++17 audit: `5d56196e83abaf573888b6c4c1adcc5eb68422bd` (13,694 drafts; 3,919 syntax passes; 9,775 failures).
- Main source review began at `fa73666fc7a7cefbd6647cebf1f7febe4b5bb6fe` (progress-only descendant of that audited tree).
- The audit artifact's read-only declaration dry-run screened 400 source-matched edges and labeled 2 as `SOURCE_ONLY_CPP17_READY_FOR_MANUAL_REVIEW`. These labels mean only that ordinary Clang++17 syntax accepted a temporary declaration; they do not establish correct original Xbox calling conventions.
- Source edits attempted/validated: **0**. No original-address function bodies or SHA-256 provenance labels were modified.

## Two unsafe source-only positives

1. Caller `0x00057A30` invokes `FUN_000577c0(iVar3,param_2,iVar8)`, where `param_2` is `float`. Its existing callee draft declares `void FUN_000577c0(undefined4,undefined4,uint32_t)`. Ordinary C++17 accepts an implicit float-to-unsigned-integer **numeric conversion**, which is not proof that the original CALL converted floating-point value instead of passing the 32-bit float bit pattern.
2. Caller `0x00148100` invokes `FUN_000de330(*(undefined4 *)(...))`. Its existing callee draft declares `uint FUN_000de330(float)`. Ordinary C++17 accepts an implicit unsigned-integer-to-float **numeric conversion**, which can lose precision and does not prove the original guest-word interpretation. This caller also has indirect dispatch requiring separate evidence.

The new dry-run preflight uses `-Werror=float-conversion` and `-Werror=implicit-int-float-conversion` at `-O0` and `-O2` to quarantine such implicit conversions. This conservative filter may also quarantine preexisting conversions elsewhere in a draft; a warning is a review trigger, **not** original-XBE evidence or an automatic source repair.

## Evidence and controls

- Retail XBE SHA-256 required for original-instruction verification: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Retail XBE bytes **not available in this execution**; no new CALL/producer/RET/guest-stack contract or 1:1 behavior is certified.
- Synthetic Clang++17 O0/O2 positive control: a matching guest-word argument remains accepted.
- Synthetic negative controls: float-to-guest-word and guest-word-to-float numeric conversions are rejected by the stricter triage flags. The test runs in the strict audit workflow before the full inventory.
- The canonical strict C++17 sweep is unchanged; this additional read-only gate must not be conflated with the syntax metric.
- No demo-only content was introduced. BruteForceDecomp preserves retail original functions; Reloaded's eventual packaging boundary excludes independently verified demo-only code/assets.

## Next evidence-needed queue

Verify the two float/guest-word call sites against the authenticated original retail XBE, including actual register producers, pushed stack words, callee reads, return cleanup and negative controls. Separately investigate `thunk_FUN_00237EC0`, guest32 translation at `0x002E9E80`, virtual dispatch, SEH/x87/SSE and native cross-function linkage. No Xbox ABI is inferred from draft signatures alone.
