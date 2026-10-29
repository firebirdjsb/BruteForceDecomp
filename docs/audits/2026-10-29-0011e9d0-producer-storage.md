# 0x0011e9d0 producer/storage repair and exact-tree audit

Reviewed source/test/evidence commit:
`6729f0cb512346ffdffb4131e6d70293505d4a45`, on main.

Starting main tip `8e92a020` matched the implementation of the completed
[Linux audit 40871278988](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40871278988)
at `d8b7886d`: 13,631 passes / 63 failures. Fetch found no new implementation.
Its complete artifact was validated against canonical source bytes/inventory.

The changed caller previously had 38 focused compiler diagnostics with the
error limit disabled. Its twelve-byte cache/getter outputs and 36-byte matrix
outputs now connect to the original observed producers. Two matrix aliases
were corrected against original stack addresses, raw F32 field accesses retain
bits, and scalar SSE operations retain their instruction forms.

Changed files are the caller source, two modular memory-operation headers,
one inventory row, the producer-storage verifier, the full-audit workflow and
[the evidence note](../evidence/0011e9d0-connected-vector-producers.md).
This audit note adds no implementation. The original entry/signature/body
digest and inventory origin/ABI/behavior flags remain intact. No shared type
header, external prototype or unrelated function was changed.

## Exact committed-source result

Windows Clang 22.1.8 audited canonical Git bytes from `6729f0cb` using the
unchanged sweep flags in 170.4 seconds.

| Result | Count |
| --- | ---: |
| Source functions checked | 13,694 |
| Windows host syntax passes | 13,631 |
| Windows host syntax failures | 63 |
| Other results | 0 |
| New passes | 1: 0x0011e9d0 |
| Regressions | 0 |
| Source fingerprint drift | 0 |
| Missing/mismatched/unindexed original body labels | 0 |

Compared with the Windows baseline at `7785812a` (13,630 passes / 64 failures),
only this caller's fingerprint and status changed. Report, triage, grouped
stack offsets and per-function records passed consistency checks against the
exact source commit. Thirty first-error guest-stack references remain. Linux
totals are reported separately after remote CI; Windows preserves the existing
0x002F01A2 assertion rejecting default eight-byte long double.

Focused i686/x86_64 syntax checks passed. Original XBE, five complete bodies
and instruction windows were authenticated. O0/O2 fixtures passed 82 matrix
alias/unaligned cases, 36 raw cache alias cases, raw F32 stores/readbacks,
twelve finite SQRTSS/spill-expression cases, ten getter bindings, four
conditional refresh paths and four matrix call sites. Two incorrect bindings
were rejected. Source layout, full-audit path coverage, existing published
progress agreement, whitespace and repository safety checks passed.
Independent review approved the bounded source/header/fixture changes after
SQRTSS spill windows and raw readback coverage were made explicit.

## Limits and rollback

Fixtures exercise actual caller excerpts and memory operations, not the whole
caller or original Xbox execution. Cache refresh uses a clearly marked fixture
substitute. The separate 0x00232290 draft remains incomplete; other helper
semantics, guest register/stack ABI, pointer translation, x87 precision/status,
exceptional values, linked behavior and byte matching remain unverified.

No game process, installation, assets, saves, deployment or production data was
touched. Private binary/disassembly evidence stays untracked. Revert `6729f0cb`
to roll back this repair and rerun its checks. This audit note is separate from
the exact source commit and changes no implementation.
