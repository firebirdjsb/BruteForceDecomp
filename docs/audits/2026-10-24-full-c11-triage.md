# Full C11 audit triage — 2026-10-24

**Source:** completed GitHub Actions [run 40116210284](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40116210284), artifact `full-c11-inventory` (ID `12568975136`), audited commit `ea4afccc1a335bc406cf070bb285b12ff5ba0a54`. The audit checks *isolated host Clang C11 syntax*, not Xbox calling conventions or runtime equivalence.

## Complete results

- 13,694 function drafts; **13,195 pass**, **499 fail**, 0 other (96.36% syntax coverage).
- 0 missing and 0 mismatched original x86 body-hash provenance labels. These hashes establish source inventory identity, **not** verified function behavior.
- Current native PC build: **not yet buildable or playable**.

## Failure classes (499 distinct functions, classified by first compiler error)

| Category | Functions |
| --- | ---: |
| Unresolved guest stack references | 235 |
| Invalid member/partial-field accesses | 87 |
| Invalid float/pointer conversions | 73 |
| Other unresolved symbols | 32 |
| Other first-error classes | 23 |
| Unresolved labels | 19 |
| Invalid array assignments | 16 |
| Unresolved memory references | 6 |
| Invalid type usage | 4 |
| Unresolved functions | 4 |
| **Total** | **499** |

The counts classify the **first error only**. Fixing that error may expose additional errors; do not interpret these numbers as total independent defects.

## Priority and correctness gates

1. **Guest stack (235):** group by exact x86 prologue, stack offset and call-site use. Distinguish guest 32-bit stack storage, host local variables, SEH chain, and variadic argument layouts. Never replace an unresolved `stack0x...` with an arbitrary `&param_n` or guessed host pointer.
2. **Invalid member access (87):** reconstruct original byte/word loads and stores from x86 instruction widths. Avoid masking native 64-bit pointers to simulate guest register subfields.
3. **Float/pointer conversions (73):** identify whether a value is an IEEE-754 bit pattern, a real floating-point value, or an address. Use `memcpy` for verified representation copies, not numerical casts or invented pointers.
4. **Array assignments (16):** check original 16-byte SIMD load/store and alignment semantics before substituting `memcpy`. In particular, entry `0x00027540` contains an `rsqrtss` reconstruction and several SSE lane expressions; a syntax-only array-copy replacement would not prove scalar-lane semantics.
5. **After each evidence-backed change:** run focused original-XBE instruction assertions, isolated Clang C11 syntax, then full repository audit; update README counts only from a completed full run.

## Scope and outstanding work

The full CI sweep confirms *syntax inventory integrity*, not 1:1 reconstruction. Cross-function linkage, Xbox API replacements, x86 ABI, SEH, floating-point precision and native PC runtime are not comprehensively verified. Continue from the artifact's `failure_triage.csv` and `c11_sweep_report.json`; preserve the single `main` branch and original source-body provenance.
