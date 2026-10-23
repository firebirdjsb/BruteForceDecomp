# C11 compiler blockers — latest reviewed full inventory (2026-10-22)

## Audit anchor

Commit `05dded436e96ad149b103dab3096f93c44c9f78c` has a completed GitHub Actions full inventory: **13,694 source functions, 12,297 C11 syntax pass, 1,397 syntax fail**, zero original x86-body label mismatches and zero missing embedded hashes. This does **not** establish 1:1 x86 semantics, 32-bit ABI compatibility, shared linkage, or native-PC functionality.

The audit artifact `full-c11-inventory` contains `syntax_failures.csv` and `c11_sweep_report.json`. The observations below are exact counts of **first Clang errors** at that commit, not counts of all errors per file:

| First-error category | Files | REA-conscious next step |
|---|---:|---|
| Member access on unsigned 32-bit scalar | 49 | Recover precise storage class, source machine instructions and member offsets. Do not invent a struct. |
| Float cast to pointer | 48 | Resolve genuine x87/SSE bit transfer and original register classes; avoid numerical casts or host pointer assumptions. |
| `stack0x00000004` missing | 41 | Verify x86 ESP/EBP frame and caller-passed arguments. |
| 32-bit data pointer erroneously called as function | 29 | Verify original x86 indirect-call mechanism and mapping; no invented callable typedef. |
| Pointer cast to float | 23 | Recover bit-interpretation vs conversion, including x87 rounding behavior. |
| Assignment to 16-byte array | 22 | Recover actual SIMD/struct-copy semantics and layout. |
| `stack0xfffffff8` missing | 21 | Verify negative frame offsets, incoming registers, and stack ownership. |
| 16-byte array member access | 20 | Recover decompiler subfield notation against original instruction widths. |
| `stack0x00000000` missing | 20 | Inspect return address/caller input ABI at original XBE address. |
| 32-bit pointer member access | 19 | Do not guess target type or pointer arithmetic. |

## New per-function source-grounded fixes

- `cff1553f5acb0d56112fd92b6dba7dea5bb4dcb9` adds a declaration for `FUN_0029c4e0(int *)` to caller `0x0028AEB0`. Signature matches the recovered C definition in `src/0x0029c4e0.c`.
- `b29eae22d961a283115d2b9eb02398448a7d2c6b` adds a declaration for `FUN_003838c9(int)` to caller `0x0037F712`. Signature matches the recovered C definition in `src/0x003838c9.c`.

Both changes are additive C declarations only. Their callback register contracts, actual data-layout widths and Xbox runtime behavior remain **ABI_UNVERIFIED**. Their GitHub Actions whole-inventory syntax checks must finish before claiming a post-change pass count.

## Fail-closed exclusions

- The `XBE_CERTIFICATE_HEADER_00010180` group has multiple fields (`TitleID`, `SizeOfHeader`, `SecurityFlags`, `TimeDateStamp`, `AllowedMedia`); original header field offsets and access width require source binary evidence before declaring an invented host structure.
- CRT `FILE` member users require the actual Visual Studio 2003 Xbox CRT layout, not the host libc `FILE`.
- `unkbyte10`, `int5`, `register0x00000010` and `stack0x...` must not be silenced with arbitrary C types or locals.
- Bad Ghidra jump-table `LAB_` names require actual x86 control-flow target evidence.
- Each source file's original address and original-body hash are identity metadata; neither the presence of these labels nor C11 syntax success proves behavioral identity.

**Canonical branch:** `main`. Do not make a new repair branch or assert runtime verification for these drafts.
