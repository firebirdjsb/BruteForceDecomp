# BruteForceDecomp — exact-tree C++17 audit and retail-XBE fidelity escalation

**Audit date:** 2026-11-09. **Source of machine results:** GitHub Actions run
[`42480073591`](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/42480073591),
audited commit `bd5aa502f599baf6598b469e08bc01eb609baaa4`,
with publication in `76f3ad09b74d9d1490e9c8c6eda7c560dcca5373`.
The exact per-function results are the archived GitHub Actions artifact
`cpp-compatibility-bd5aa502f599baf6598b469e08bc01eb609baaa4`.
These figures are not projections and must not be silently transferred to later tree revisions.

## Measured result

| Gate | Result |
|---|---:|
| Canonical original-address C++ drafts | 13,694 / 13,694 |
| Strict isolated Clang++17 syntax passing | 4,138 (30.22%) |
| Strict isolated Clang++17 syntax failing | 9,556 (69.78%) |
| Original-body digest **label** mismatches | 0 |
| Source structural problems | 0 |
| High-confidence tracked-tree safety alerts (historical local scan) | 0 |
| Native game linkage, game execution and whole-function original ABI | **NOT VERIFIED** |

All 13,694 source files are structurally present; this does **not** independently compare each source body with the original Ghidra export and is **not** a 13,694-function byte-parity claim. The body-hash identity check compares embedded labels with the inventory; it is distinct from independently reading game code bytes from the XBE.

### First reported compiler-failure categories

| Category | Functions |
|---|---:|
| Missing declaration or type | 5,638 |
| Call signature | 1,608 |
| Pointer/storage type | 1,324 |
| Guest/host pointer width | 743 |
| Other C++ diagnostic | 241 |
| Member/object layout | 2 |
| **Total failing** | **9,556** |

Compiler triage uses each failing function's **first recorded error**; these categories do not estimate all independent repairs necessary. The unresolved first-error symbols include `thunk_FUN_00237ec0` in 277 drafts and `FUN_002ea01d` in 223 drafts. Do not paper over them with unsupported C++ prototypes. The tool's declaration-edge triage reviewed 4,426 candidates: 3,127 arity-match candidates still require type/XBE review; 1,176 disagree on arity; 82 have unparseable callee drafts; 37 callee and four caller provenance mismatches need review. No native call edge is promoted to a recovered ABI by this screening.

### Source fidelity and linkage

The structural pass raised **538 review flags covering 537 functions**: 533 canonical-symbol name/reconstruction reviews and **five high-priority empty/return-only implementations**. Five are not necessarily five independent compiler failures—they can compile while still omitting original effects. The number of Xbox-verified 1:1 functions and the number of independently verified native interfaces are **not established**. Platform linkage is **not buildable/playable** as of the audited tree.

## High-priority original retail-XBE evidence

Original game image SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The independently verified metadata lives at `metadata/20261109_five_return_stub_gaps.json`, with read-only private-XBE checker `scripts/verify_20261109_five_return_stub_gaps_xbe.py`. The checker requires the user-owned XBE and never packages game executable bytes.

| Entry | Ghidra-selected authentic bytes | Source gap / original evidence |
|---|---:|---|
| `0x002ECC14` | 89 | Flag-dependent x87 conversions, FPU loads/stores and stack operations; empty draft does not model them |
| `0x002EF9EA` (`__rt_probe_read4@4`) | 41, split | `PUSH` SEH setup, direct calls, pointer read, branch and `RET 4`; the original executable contains an additional **25-byte excluded exception-handler region** |
| `0x002F04D0` | 5 | `FXCH ST(1)`, `FSTP ST(0)`, `RET` changes x87 stack |
| `0x002F060D` | 23 | Guest stack read/write and `FLDCW` change x87 control state |
| `0x002F0696` | 13 | Conditional `FLDCW`, followed by `POP EDX` and `RET` |

**Discontiguous recovery:** `0x002EF9EA` records Ghidra-selected ranges `[0x002EF9EA,0x002EFA07)` (29 bytes) and `[0x002EFA20,0x002EFA2C)` (12 bytes). Concatenating exactly those ranges reproduces the archived body SHA-256. The intervening `[0x002EFA07,0x002EFA20)` 25-byte executable range contains exception-handler instructions but is **not included** in Ghidra's 41-byte body digest. This is a range-provenance finding, not an assertion that the excluded instructions are always reachable during normal execution.

The read-only checker passed five original digests, 171 Ghidra-selected bytes, 23 selected original opcode windows, and 171 single-byte mutation negatives. No gameplay functions were executed, no x87/SEH native ABI was recovered, and **none of the five no-op drafts was silently marked 1:1**. These five need a guest x87/SEH and stack/register model before safe source replacement.

## Ranked next work

1. **Preserve correctness gates:** require exact original-XBE ranges and fail on drift; retain historical byte and source fixtures; never conflate syntax with runtime verification.
2. **Address the five high-priority return-only stubs:** reconstruct their x87 register stack, control word and SEH behavior with original-ABI evidence, not a host `return;`.
3. **Batch 5–10 source repairs with proven local semantics:** favor independently authenticated guest32 memory and arithmetic functions with C++17 failures, compile each at O0/O2, run memory-order and corruption oracles, and require a GitHub exact-tree full audit.
4. **Recover high-frequency cross-function contracts:** disambiguate `thunk_FUN_00237ec0`, `FUN_002ea01d`, return register effects and guest stack cleanup at their actual x86 call sites before introducing declarations; 1,176 arity mismatches are a separate, substantial risk queue.
5. **Native linkage:** retain explicit NOT_NATIVE_LINKED for every isolated guest32 model until mapped memory and register/stack call interfaces exist and are exercised together. Do not assign a completion percentage to behavioral fidelity or native linkage until a defensible inventory is available.

This audit **did not repair** the five return-only source implementations. Treating original x87/SEH instructions as portable C++ no-ops would create a false appearance of 1:1 progress.
