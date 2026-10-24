# Clang C11 audit triage — 2026-10-24

**Source of counts:** completed GitHub Actions run
[40076383666](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40076383666),
artifact `full-c11-inventory` (artifact ID `12552953142`).
The audit ran on commit `d8c9dff627e580944fe747337b9636eb3caa961f`,
**not** on the newer main-tree fixes.

| Metric | Exact audited value |
| --- | ---: |
| Individual source drafts checked | 13,694 |
| Host Clang C11 syntax passing | 13,119 |
| Host Clang C11 syntax failing | 575 |
| Syntax coverage | 95.80% |
| Original x86 body-digest mismatches | 0 |
| Missing original x86 body-digest labels | 0 |
| C-source hash drift versus historical inventory | 1,363 |

The `failure_triage.json` artifact categorizes the **first recorded**
Clang error per failing source, not necessarily its root cause:

| First-error category | Functions |
| --- | ---: |
| Unresolved synthetic stack | 270 |
| Invalid member access | 115 |
| Invalid float/pointer casts | 77 |
| Other unresolved symbols | 41 |
| Other first errors | 23 |
| Unresolved labels | 19 |
| Invalid array assignment | 16 |
| Unresolved RAM | 6 |
| Invalid type usage | 4 |
| Unresolved function | 4 |
| **Total** | **575** |

Two original audit failures, `0x0001c630` and `0x0001c980`,
were subsequently edited to remove invalid synthetic C addresses.
These edits are **not counted as passes** until a newer complete
successful audit publishes exact results. They are not verified native
ABI or behavioral matches.

Next original-XBE instruction target:
[`0x00058740` vector output](0x00058740-guest-stack.md).
The original x86 establishes a three-DWORD output through a guest stack
pointer, but its draft still contains an unresolved synthetic stack
reference. Do not replace it with a guessed host pointer.

**Interpretation:** A green GitHub Actions inventory job means the
inventory completed and integrity checks passed, **not** that all
functions compile or that the native PC game is buildable. Do not
update the README percentages using predictions from local fixes.
