# October 22, 2026 — C11 repair and Xbox ABI evidence

This is evidence **for triage**, not a claim of a completed C11 reimplementation.

## Source and binary identity

- Original `default.xbe` SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- **13,694/13,694** Ghidra-discovered function body hashes independently match the original XBE bytes under the file-to-VA mapping.
- The local C11 repair package `BruteForce_C11_13694_Repair_Audit_v2.zip` contains all 13,694 **unverified** function drafts, provenance inventory, review reports, and guarded source-sync scripts. **The full source tree is not currently pushed into GitHub.**

## Confirmed incremental fixes

- Ghidra `NAN(x)` (unordered NaN predicate) converted to ISO C `isnan(x)`: **172 uses across 73 files**. All 73 previously had syntax failures; after isolated host Clang tests, **59 newly pass**, **14 still fail** for unrelated issues.
- Lenient host Clang syntax status: **11,762 pass / 1,932 fail**. This combines the prior baseline with independent recompilation of the affected 73 files; it is **not** a fresh global recompilation, a strict ISO C11 conformance claim, or a buildable Xbox game.
- Corrected `src/0x00012000.c` directly in GitHub from original Xbox x86 disassembly: the 32-byte outgoing stack buffer includes the incoming **ECX** and **EDX** values at offsets 0 and 4, previously incorrectly left uninitialized. The callee at `0x000E4190` finishes in `ret 8` (verified); full ABI remains unverified.

## Whole-export structural evidence, **not** semantic verification

- **26,856** unique caller/direct-target references extracted from Ghidra pseudocode; all targets exist in the discovered function inventory. This does not independently validate calls or signatures.
- **2,867** functions with recognizable indirect-call patterns, **8,139** indirect-site occurrences by heuristic.
- Single-body trailing opcode candidates: **4,948** `ret imm16`, **5,906** `ret`, **2,837** unclassified, three far-return candidates. **937** `ret imm16` candidates disagree with naive explicit-Ghidra-parameter counts. Do not rewrite signatures automatically.
- **25,107** local base-plus-offset access observations; **9,809** named-data-symbol occurrences per function. **No cross-function struct identity, layout, field type or width has been verified.**
- Risks in currently generated C source: **9,539** files make at least one direct call without a declared C prototype; **8,323** have incoming-register pseudo-locals; **4,012** refer to unresolved named data; **272** contain SIMD/x87 pseudocode. These categories overlap.
- The XBE contains **147** Xbox kernel import ordinal entries and seven Xbox SDK build-5233 library records. Ordinal-to-prototype and linked-library API contracts remain unresolved.

## Next verification gates

1. Correct the **1,932** remaining syntax failures based on supported original instructions, not invented variables, data symbols or function prototypes.
2. Reconstruct x86 stack/register contracts and call-site evidence for functions individually. `ret imm16` constrains stack cleanup, not the full ABI.
3. Confirm data accesses against actual memory-section and call-path evidence before assigning struct names, field widths or pointer types.
4. Resolve indirect call destinations, Xbox kernel imports and XDK signatures against trustworthy binary/symbol evidence.
5. Run strict `-std=c11` checks, a suitable x86 32-bit build, and relevant behavioral tests. **0 functions are currently claimed behavior-verified.**

The reports and all draft source files remain in the local repair ZIP pending the guarded operator-initiated private repository upload; no recurring GitHub push job is running on the assistant's behalf.
