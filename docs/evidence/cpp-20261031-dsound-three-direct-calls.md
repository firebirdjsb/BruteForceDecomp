# Three DSound C++17 declaration repairs — 2026-10-31

**Base:** `96fad885b90a31751cef9b464cbddf589bd70d99` on `main`. **Scope:** only source-matched forward declarations in three canonical original-address `.cpp` drafts and their source-fingerprint inventory entries. No original function statement, call expression, cast, output, register input, or original-body SHA-256 label changed. `ABI_UNVERIFIED` remains in every caller.

## Original-XBE evidence

Private retail XBE SHA-256 authenticated as `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Contiguous original machine-code body SHA-256 values matched all seven unique caller/callee bodies: callers `0x00316350` (27 bytes), `0x00316BD8` (26), `0x00317439` (27); callees `0x003161EC` (188), `0x00314937` (52), `0x00316300` (68), `0x00317146` (93). Each caller ends with original `RET 4` (`C2 04 00`).

| Original caller | E8 instruction | Original destination | Instruction bytes |
| --- | --- | --- | --- |
| `0x00316350` | `0x00316353` | `0x003161EC` | `E8 94 FE FF FF` |
| `0x00316350` | `0x00316360` | `0x00314937` | `E8 D2 E5 FF FF` |
| `0x00316BD8` | `0x00316BEA` | `0x00316300` | `E8 11 F7 FF FF` |
| `0x00317439` | `0x0031743C` | `0x00317146` | `E8 05 FD FF FF` |
| `0x00317439` | `0x00317449` | `0x00314937` | `E8 E9 D4 FF FF` |

Every E8 destination was independently recalculated from the signed displacement; flipping a displacement byte was rejected by each negative control. The original caller's `ECX` register flow was observed but **not reconstructed as a verified C++ ABI**. In particular, `0x00316350` and `0x00317439` save incoming `ECX` in `ESI`; source pseudocode still models it as `in_ECX` without a recovered native interface.

## Source and syntax gates

| Caller | Original Git blob (before declaration only) | Source-matched callee signatures |
| --- | --- | --- |
| `0x00316350` | `85b344d1b29a878bc7d69222bd82ebba063c9771` | `void FUN_003161ec(void)`, `void FUN_00314937(int)` |
| `0x00316BD8` | `0e1f1e12b496419d5e05fcafe09b3fa870816505` | `void FUN_00316300(int)` |
| `0x00317439` | `09f6115bdc95ad71d2606a8efbb39c958647c84c` | `void FUN_00317146(void)`, `void FUN_00314937(int)` |

Removing only the inserted declaration blocks reproduced the exact original Git blob SHA-1 for each caller. Local focused Clang++17 `-fsyntax-only -O0` and `-O2` checks passed all three translation units with equivalent guest scalar aliases; all three declaration-removal negative controls failed on the original undeclared identifiers. The full repository-header strict exact-tree audit remains the authoritative syntax measurement; local focused checks do **not** certify Xbox ABI or behavior.

## Evidence-needed queue

Quarantined without speculative repairs: `0x00316300` (source scalar/pointer mismatch at `FUN_003118c0`), `0x003158D8` (third callee parameter is a pointer in the draft), `0x003159C9`/`0x00315A72` (guest32 pointer-to-host-int truncation), and `0x0034768E` (original `E9` tail jump, not an E8 call). SEH, x87/SSE, indirect calls, virtual dispatch, object layouts and native PC linkage remain outside this syntax-only batch.

No README percentage or overall-progress metric was changed. A new percentage requires a complete exact-tree Clang++17 audit at its audited SHA. No copyrighted executable or complete disassembly is committed.
