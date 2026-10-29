# 0x001F8DB0 repair and exact-tree audit — 2026-10-29

Source/evidence/test commit: `98e9ef252628e77f44155fd2fc71fdf1e1bbb87a`
on `main`. This pass fetched and fast-forwarded `9c4dd258` to `757ef49f`,
including the upstream x87 artifact cleanup and partial high-byte edit.
The latest completed [full audit 40796819904](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40796819904)
at `892e2f21` reported **13,626 passes / 68 failures / 13,694**, complete
matching original body labels and zero source fingerprint drift. Its downloaded
artifact passed consistency verification against the pulled source and inventory
before choosing this repair. The prior direction repair's full CI also passed.

The repair decodes the first incoming F32 word separately from its later
pointer lifetime, uses four-byte float views for two node fields, retains an
extended sum after storing its rounded copy, and preserves upper bits on the
low-byte SETE replacement. See the [instruction evidence and limits](../evidence/001f8db0-f32-and-byte-lifetimes.md).
The original entry/body digest, function signature, external prototypes and
ABI/behavior verification fields remain unchanged.

The six changed files are `src/main_unclassified/band_001f/0x001f8db0.c`,
one inventory row, `scripts/verify_001f8db0_float_fields.py`,
`tests/x86_001f8db0_reference.S`, the linked evidence note and the full-audit
workflow. No shared header or unrelated reconstruction source changed.

## Exact committed-source result

Windows Clang 22.1.8 checked canonical Git bytes from `98e9ef25` with
unchanged sweep flags. Duration: **174.5 seconds**.

| Result | Count |
| --- | ---: |
| Functions audited | 13,694 |
| Windows host C11 syntax passes | 13,626 |
| Windows host C11 syntax failures | 68 |
| Other/nonterminal results | 0 |
| Missing, mismatched or unindexed original body labels | 0 |
| C source fingerprint drift | 0 |

Only `0x001F8DB0` changed source fingerprint. It changed from fail to pass.
The sole other status difference from the pulled Linux report is the preserved
Windows `0x002F01A2` assertion rejecting default eight-byte long double. That
file is unchanged and passes on Linux. No other status changed. Equal totals
across these two platform reports must not obscure those two opposite changes;
new published Linux totals require the new completed remote audit.

The full report, triage, guest-stack groups, section/group counts, inventory
and source hashes passed artifact consistency verification against the exact
source commit. Thirty-three first-error guest-stack references remain in this
Windows report; diagnostic categories are not verified root causes or ABI facts.

Focused checks passed for full-source i686/x86_64 C11 plus pedantic syntax
(existing unrelated pointer-sign warnings excluded), authenticated XBE and
ordered 1,705-byte body with ten instruction/data windows, 26,980 numeric and
predicate cases and 131,072 byte-preservation cases at each of `-O0`/`-O2`,
two rejected negative controls, source layout, audit trigger coverage, published
progress, whitespace and staged-file safety with zero alerts. Independent
read-only review approved the bounded source and fixtures. This note receives
its own safety scan before publication.

## Limits and rollback

This is isolated host syntax and instruction-derived excerpt evidence, not a
linked game, whole guest ABI proof, Xbox execution or byte-identical rebuild.
The pointer-typed parameter remains a host proxy for an incoming guest DWORD;
its low bits are decoded without dereference, but a host caller adapter has
not been established. Entry EAX, full list layouts, helper outputs, original
argument-address uses, event dispatch, other aggregates, guest addressing,
FP status/traps, NaN payloads and Xbox hardware behavior remain unverified.
Numeric fixtures explicitly use extended host storage; default Windows
float10 remains a precision proxy.

No game process, installation, assets, saves, deployment or production data
was touched. Private binaries and disassembly remain untracked. Revert
`98e9ef25` to roll back the source/test repair and rerun its checks; this
separate audit note changes no implementation.
