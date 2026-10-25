# BruteForceDecomp — full isolated C11 compiler audit (2026-10-25)

## Exact completed inventory

- **GitHub Actions:** [run 40237108955](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40237108955), artifact `full-c11-inventory` (ID `12614758641`).
- **Audited `main` commit:** `d84714943010a9cc7b065fb9bb175e2b6d7483b7`.
- **Original input:** Xbox XBE SHA-256 `b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`; binary is **private evidence only**, not in this repository.
- **Isolated host Clang C11 syntax:** **13,387 passing / 13,694 total (97.76%); 307 failing; 0 other**.
- **Provenance:** 0 missing and 0 mismatching *embedded original x86 function-body hash labels*.
- **Native Windows runtime:** **not buildable/playable**. Complete cross-function ABI, x86 register and stack input delivery, Xbox SEH, memory translation and platform API replacements remain unverified.

### Per-function first-error categories

| Category | Distinct failing functions |
| --- | ---: |
| Unresolved guest stack | 125 |
| Invalid float/pointer cast | 71 |
| Invalid member access / subpiece | 59 |
| Unresolved labels | 19 |
| Other unresolved symbols | 12 |
| Invalid array assignment | 9 |
| Other first errors | 8 |
| Unresolved memory references | 3 |
| Invalid type usage | 1 |
| **Total** | **307** |

The inventory records only the *first Clang failure in each function*. These counts are not the total number of compiler errors; fixing one may expose additional failures. The three largest categories account for **255/307 (83.1%)** of failing functions.

### Next milestone

To reach **fewer than 200 failures** from this exact snapshot requires **at least 108 net additional passing functions**. The desired target is **199 or fewer**, not arbitrary source rewrites solely to raise a number.

## Continued work after the audited snapshot

- `0x0029DF00`: reconstructed *three distinct x86 DWORD stack output slots* (`entry_ESP - 0x14`, `-0x10`, `-0x0c`) for virtual callbacks; source repair in `5d7137c`, exact callback argument count refinement in `be29b15`. Source and optional original XBE opcode checks: `scripts/verify_0029df00_three_guest_outwords.py`.
- `0x00126690`: recovered the contiguous pair comprising **saved guest EDI** and **next guest ESI DWORD**, passed by address to `FUN_00178E50`; evidence anchored to `PUSH EDI`, `MOV [ESP+8],ESI`, `LEA EAX,[ESP+4]`. Source and optional XBE checks: `scripts/verify_00126690_saved_register_pair.py`.
- Both source-only verifiers are now wired into the full `main` branch compiler audit. Running without the original XBE **does not** count as original instruction verification.

## Evidence and safety gates for the next passes

1. Prioritize short **guest stack alias** failures where original `PUSH` / `LEA` / `MOV` / `CALL` / `RET n` operands uniquely establish guest stack-word ownership and aliasing. Check before and after each `PUSH`, not merely the decompiler's `stack0x...` label.
2. For **float/pointer conversions**, verify whether the 32-bit value denotes an IEEE-754 bit pattern, 32-bit address, or actual floating-point arithmetic using x87/SSE operations. Do not turn guest addresses into host pointers or numerically cast bits to floats.
3. For **partial member accesses and SIMD lanes**, confirm instruction width and high/low register subpieces. Avoid masking host `uintptr_t` values as a substitute for x86 register semantics.
4. **Xbox SEH and copied ESP frames** require a separately modeled guest stack and FS-chain state; do not guess host-local addresses to silence diagnostics.
5. Keep `main` the sole release-target branch, preserve original x86 provenance, run focused source and instruction-level checks, then require a **complete repository-wide Clang sweep** before updating README metrics.

This audit is an inventory **only**. It does not credit whole-function behavioral equivalence or native-game milestones.
