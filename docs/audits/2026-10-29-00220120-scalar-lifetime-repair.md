# 0x00220120 scalar-lifetime repair and exact-tree audit

Reviewed source/test/evidence commit on main:
`7785812a3ab58db468b9e4671a82e3f6f6100a40`.

The starting tip was `a57b31bc`, whose implementation matched the completed
[Linux audit 40863270605](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40863270605)
at `a9d1c498`: 13,630 passes / 64 failures. Fetch found no new implementation.
The complete artifact was validated against canonical sources and inventory.

The repaired entry had 51 diagnostics with the focused compiler error limit
disabled. The original instructions preserve vector/output pointers before
reusing their argument homes as floats and a four-byte recursive code. The
repair connects those scalar lifetimes, actual recursive float3 spans, fallback
code reads and scalar SSE operands. It removes all focused syntax diagnostics.
[Evidence and limitations](../evidence/00220120-scalar-lifetimes-and-recursive-spans.md)
identify the pinned original body, stack locations and bounded test coverage.

Changed files: one C source, one inventory row, the scalar-lifetime verifier,
the evidence note and the full-audit workflow. This audit note changes no
implementation. No shared header or entry signature changed. Original body
hash, origin and unverified ABI/behavior flags remain intact. Other candidates
were inspected but left unchanged when their producer or interface evidence
was incomplete.

## Exact committed-source audit

Windows Clang 22.1.8 audited canonical Git bytes from `7785812a` with the
unchanged sweep flags, in 169.0 seconds.

| Result | Count |
| --- | ---: |
| Source functions audited | 13,694 |
| Host syntax passes | 13,630 |
| Host syntax failures | 64 |
| Other results | 0 |
| Changed statuses | One: 0x00220120, fail to pass |
| Regressions | 0 |
| Source digest drift | 0 |
| Missing/mismatched/unindexed original-body labels | 0 |

The comparable Windows baseline at `ff479871` had 13,629 passes / 65 failures.
Only the repaired entry's source fingerprint and status changed. Generated
report, triage, grouped stack offsets and per-function records passed artifact
consistency checks against the exact source commit. Thirty first-error guest
stack references remain. Windows retains the existing 0x002F01A2 assertion
rejecting its default eight-byte long double; Linux totals are reported
separately after the new remote audit completes.

Focused checks passed for the complete source on i686 and x86_64; original XBE,
3,239-byte original body and selected instruction windows; 84 complete-source
finite cases at each of O0/O2; two rejected scalar/recursive corruptions;
source layout; full-audit path coverage; existing published progress agreement;
whitespace and repository safety. Independent review approved the connected
scalar/recursive changes after the scratch norm snapshot was made the actual
SQRTSS operand. Source checks now enforce that store-before-use order.

## Limits and rollback

Tests execute the actual C with call-count/code observation, not original
machine code. Finite orthogonal inputs and translations do not establish
complete x87 precision, comparison/NaN flags, alias behavior, guest register or
stack ABI, Xbox execution, linking or byte-identical rebuilding. Those remain
unverified. No game process, installation, assets, saves, deployment or
production data was touched; private evidence is untracked. Revert `7785812a`
to roll back this source/test change, then rerun the documented checks.
