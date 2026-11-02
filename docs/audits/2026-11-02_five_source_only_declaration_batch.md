# 2026-11-02: five source-only C++17 declaration repairs

**Starting exact-tree HEAD:** `c6e895d5bd11a14a13b1e4997329cee6093449be` (progress-only child of audited `6213b7ef5555696537c610889edd6b1093445aa1`).

**Scope:** 40 previously triaged two-declaration caller drafts rechecked against the latest main source and nine distinct callee drafts. Five caller files passed strict isolated host Clang++17 `-O0` and `-O2` after inserting **only** their existing callee draft signatures. The other 35 remain quarantined for argument count, pointer/storage type, void-return, float/raw-word, guest32 or other source-contract mismatches. No attempt was made to invent a signature to reach a quota.

| Caller | Source-matched callee declarations | Original caller Git blob (preimage) |
| --- | --- | --- |
| `0x000E4570` | `FUN_00056AA0`, `FUN_002EA01D` | `702e05e40e01fa6f79ced5d772e908e4b93f3c10` |
| `0x0012BF40` | `FUN_0012EAB0`, `FUN_0012BFA0` | `7cf8ab89b10c5c28f55240ec3826ecf90d3e3e28` |
| `0x0013EB70` | `FUN_0012EAB0`, `FUN_0013EC30` | `7970f826e4875903bb1b902f76535f0bc100b981` |
| `0x0013F240` | `FUN_0013E410`, `FUN_0010E470` | `2ececb9a131ce1964e9d503ebf2e04235f65aea7` |
| `0x00174320` | `FUN_00174AA0`, `FUN_0012ABA0` | `c49079eaad209bd1fefd85e81fd4ffc10dafde9b` |

The preimage blobs and all five original-body SHA-256 labels are pinned in `scripts/verify_cpp_20261102_five_source_only.py`. The nine callee source blobs and exact draft signatures are pinned separately. The verifier reconstructs each original caller by removing only its inserted declaration block and checks that the Git blob hash is unchanged. It also rejects a missing declaration with a Clang diagnostic. The script is part of the existing strict C++17 audit workflow.

## Verification levels

- **Source provenance:** five original caller blobs matched their Git preimages before staging; all function bodies, entry addresses, call expressions and original-body digest comments were preserved.
- **Draft signatures:** nine distinct callee source signatures and Git blob hashes were checked on main; they are **drafts**, not Xbox-verified ABI contracts.
- **Host C++17:** five source files passed isolated `clang++ -std=c++17 -fsyntax-only -O0/-O2` with the exact current `include/bf_ghidra_types.h` blob `dd77bc872c0f6240d6035f775b1d64df7cc33094`. Ten declaration-removal negative controls failed as intended.
- **Remaining risks:** existing guest-address-to-host-pointer casts, uninitialized register proxies, potential x87 comparisons and unresolved cross-function linkage were **not** modified or certified. The original retail XBE bytes were unavailable, so no new machine-code CALL, register producer, stack cleanup, return/output, vtable, SEH or 1:1 behavior evidence is claimed.
- **Progress publication:** leave README and progress files unchanged until the exact-tree full 13,694-draft CI sweep completes for the pushed SHA. Syntax passes are not native PC linkage or behavioral equivalence.
- **Content boundary:** no retail XBE, demo-only content, assets, decompiler dump, or copyrighted data are committed.

## Evidence-needed queue

The 35 deferred caller drafts remain in the earlier 40-candidate source-only review queue. Examples: `0x000E2600` (float/raw DWORD), `0x000EC230` and `0x0015A1D0` (callee arity), `0x00145290` (void return consumed), `0x0014D760` (incompatible pointer types), and `0x00126C10` (unresolved code/data label contract). Do not substitute casts, arguments or new class layouts for missing original-XBE evidence.

Next high-impact instruction-level work remains `thunk_FUN_00237EC0`, guest32 allocation/translation at `0x002E9E80`, then verified vtable/indirect dispatch and native linkage.
