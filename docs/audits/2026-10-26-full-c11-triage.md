# Full isolated Clang C11 audit and instruction-guided repair triage — 2026-10-26

**Confirmed audit:** [GitHub Actions run 40400858214](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40400858214), artifact `full-c11-inventory` (ID `12688926978`), at source commit `b4b7cb33db37b068e958569da76bbe1ff4c2cad0`. This is a completed sweep over the **entire 13,694-file source inventory**, not a native build. The archive includes `c11_sweep_report.json`, `failure_triage.csv`, `failure_triage.json` and `guest_stack_offsets.csv`.

## Current exact, reproducible results

| Audit property | Result |
| --- | ---: |
| Individually checked C source functions | 13,694 |
| Host Clang isolated C11 syntax PASS | 13,472 |
| Host Clang isolated C11 syntax FAIL | 222 |
| C11 syntax fraction | 98.38% |
| Missing embedded original function-body provenance labels | 0 |
| Mismatched original function-body provenance labels | 0 |
| Original Xbox ABI, cross-function linkage, native runtime equivalence | **Not verified** |

The syntax sweep deliberately disables selected Clang warnings on decompiler-generated casts and unknown function prototypes, and produces an inventory even when individual functions fail. A source-hash provenance label confirms origin identity **only**; it does **not** demonstrate reconstructed behavioral equivalence.

## Remaining functions by first compiler error

| Category | Functions |
| --- | ---: |
| Unresolved guest stack reference | 105 |
| Invalid float/pointer cast | 52 |
| Invalid member / partial-field access | 23 |
| Unresolved label | 19 |
| Other unresolved identifier | 10 |
| Invalid vector/array assignment | 8 |
| Unresolved RAM symbol | 2 |
| Other first compiler error | 3 |
| **Total first-error failed functions** | **222** |

First-error categories are not distinct root causes. A function may have multiple errors; clearing its first diagnostic can expose others. A single source edit should be credited only after an entire isolated Clang compile passes and the next **complete** repository sweep confirms it.

## Highest-frequency unresolved stack offsets

These are offsets in Ghidra's abstract **guest** frame, not directly valid C addresses. Identical textual offsets are **not** proof of identical x86 prologues or call-site arguments.

| First-error guest stack offset | Functions | Examples |
| --- | ---: | --- |
| `stack0xffffff88` (-120) | 6 | `0x001B5FD0`, `0x001B76B0`, `0x001C9110` |
| `stack0xffffff90` (-112) | 5 | `0x000D2A60`, `0x00218790`, `0x00233C20` |
| `stack0xfffffffc` (-4) | 4 | `0x000D61A0`, `0x0023DBD0` |
| `stack0x00000000` (+0) | 4 | `0x000D6B30`, `0x00127290` |
| `stack0xffffffe4` (-28) | 3 | `0x00257DA0`, `0x002E4C00` |
| `stack0xfffffff0` (-16) | 3 | `0x00175090`, `0x001E48E0` |
| `stack0x0000000c` (+12) | 3 | `0x001665C0`, `0x00232AD0` |

## Verified isolated repair families in this pass

Original game XBE SHA-256: `b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.

- `0x0005ACB0`: `FSTP DWORD` saves a float32 dot product, **not a float pointer**. Source now tracks `guest_dot_product`, and the outgoing field write is an F32 store. See `scripts/verify_20261026_x87_dot_and_xyz_scale.py`.
- `0x000C5330`: original x87 FSTP stack scalar and SIMD `MOVSS/MOVHPS/MULPS` process a float32 scale and three contiguous float32 XYZ lanes. The source separates the scale and lane buffer from Ghidra's falsely inferred pointer. The callback's full register ABI remains unverified.
- `0x0005CC20`: original x87 FSTP stores X/Z position deltas as float32. Original `MOV ECX,[ESP+0x28]; MOV [ESP+0x34],ECX` **copies raw Z bits**; this is not a pointer assignment. The source keeps an explicit saved-Z float and the distance-square expression. See `scripts/verify_0005cc20_guest_x87_deltas.py`.
- `0x0021C940`: the original vtable calls use separate primary and secondary 32-bit guest output slots, a guest F32 output, `FMUL`, `FSTP`, `MINSS`, and separate COM releases. The source now keeps those storage contracts distinct. See `scripts/verify_0021c940_guest_com_minss.py`.

The instruction signatures in these verifiers have been checked against the original supplied game XBE. GitHub CI runs their **source-only** checks because the copyrighted binary is not committed or uploaded to the repository. Neither source-only checks nor opcode samples establish full semantic parity.

## Safe next repair order

1. Group the 105 unresolved guest stack failures by actual x86 prologue, `ESP` adjustments, precise operand widths and callee reads/writes, **not solely the textual Ghidra offset**. Separate guest argument aliases, local buffers, exception-handling records, and guest virtual stack allocations. Original `stack0x... ` text must not be replaced with guessed host pointers.
2. Audit 52 float/pointer cases for `FSTP/MOVSS` F32 words erroneously propagated as host pointer types, carefully distinguishing real pointer-carrying 32-bit words and preserving x87 precision and SSE instruction semantics.
3. For 23 partial member failures, verify `MOVZX` / `MOVSX` / partial DWORD writes and replace Ghidra's pseudo-fields using validated byte/word operations.
4. Defer unresolved control-flow labels and large SSE lane operations until CFG and original instruction evidence is complete.
5. Run focused compiler tests and opcode assertions, followed by the complete GitHub Actions syntax audit. Update README and metric JSON only from the completed audited commit; keep a single `main` branch.

**Milestone:** 199 or fewer syntax failures requires **23 more** functions to pass after this audit. Zero syntax failures is still only the first part of the project. The final BruteForce: Reloaded native PC build additionally requires verified x86 register/stack call contracts, platform API translations, cross-function integration, original behavioral comparison and actual runtime tests.
