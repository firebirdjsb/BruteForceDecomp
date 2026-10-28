# Latest-main audit and 0x002237C0 repair — 2026-10-28

## Synchronization and baseline

`git fetch origin` and `git pull --ff-only origin main` confirmed that the
initial clean `main` at `e37eb57a` was already current. No merge, reset,
branch replacement or unrelated source edit was needed.

The latest completed full-tree CI run was
[40765414698](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40765414698),
auditing `c1dad674fed19546cc3c50985d7a9983a1614e8e`. Its
[complete artifact](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40765414698/artifacts/12850192708)
reported 13,617 passes and 77 failures on Linux. The initial main's source,
headers and inventory were unchanged from that audited commit. The artifact's
per-function source/body hashes and tables passed the consistency verifier
against a canonical Git-byte snapshot.

A fresh local baseline with Windows Clang 22.1.8 and the unchanged
`tools/sweep_c11.py` flags reported **13,616 passes / 78 failures / 13,694**.
The one additional Windows failure was `0x002F01A2`: its deliberate static
assertions reject this target's eight-byte `long double` and 53-bit mantissa
where x87 extended storage is required. That guard was preserved.

The Windows checkout uses CRLF for most source files. The final audit therefore
used canonical committed bytes, without changing repository line-ending policy.
All 13,693 unchanged baseline functions were also checked against their original
local fingerprints and canonical source text after line-ending normalization.

## Reviewed repair

Source/test/evidence commit:
`d0d639578c1615ba596f1838f4c80b9904ee1f92` on `main`.

The repair recovers the two adjacent raw DWORDs at S+0x14/S+0x18 in
`0x002237C0`, retains earlier m32fp values by bit copy, corrects the table's
four-byte indexing, and traverses/unlinks raw DWORD pointers. It preserves
unsigned multiply/add wrap and explicit copy arguments. See
[the authenticated instruction and limitation record](../evidence/002237c0-dword-link-record.md).

Files changed by the repair:

- `src/main_unclassified/band_0022/0x002237c0.c` — scoped storage correction.
- `metadata/bulk_13694_inventory.csv` — only this function's source fingerprint,
  syntax result and issue annotations; original body hash, ABI and behavior
  verification fields remain unchanged.
- `scripts/verify_002237c0_link_words.py` and
  `tests/test_002237c0_link_words.c` — actual-source block fixture, original
  instruction checks and three negative controls.
- `.github/workflows/full-c11-inventory.yml` — run the fixture and trigger the
  audit when either fixture input changes.
- `docs/evidence/002237c0-dword-link-record.md` — durable scoped evidence.

Independent read-only review approved both the limited source correction and
the fixture. The review's coverage-count suggestion was incorporated and tested.

## Exact committed-tree result

The final sweep audited canonical bytes from
`d0d639578c1615ba596f1838f4c80b9904ee1f92`, using the same local compiler and
sweep flags as the baseline. It completed in **208.1 seconds**:

| Check | Result |
| --- | ---: |
| C functions audited | 13,694 |
| Host C11 syntax passes | 13,617 |
| Host C11 syntax failures | 77 |
| Other/nonterminal results | 0 |
| New passes | 1: `0x002237C0` |
| Regressions from the local baseline | 0 |
| Missing, mismatched or unindexed original body-hash labels | 0 |
| C source fingerprint drift | 0 |

The complete report, failure triage, grouped stack CSV, section/group table,
exact commit and canonical source fingerprints passed
`tools/verify_audit_artifact_consistency.py`. Remaining first errors comprise
34 unresolved stack references, 21 float/pointer errors, 11 member-access errors,
four array assignments, three RAM symbols, three other unresolved symbols and
the Windows x87-storage assertion. First-error categories do not establish root
causes, ABI facts or complete semantic coverage.

Additional completed checks:

- Full repaired-function i686 and x86_64 C11 syntax, with existing unresolved
  prototype policy retained.
- Fresh pinned-XBE SHA-256, complete 1,286-byte original function-body digest
  and 17 instruction windows.
- 108 actual-source block cases at each of `-O0` and `-O2`; all three deliberate
  corruption controls rejected.
- All 13,694 source locations/body labels; source-layout, body-label, source
  hygiene, audit-artifact, triage, stack-grouping and safety-checker regressions.
- Full-audit trigger coverage, published-progress consistency and whitespace.
- 14,472 tracked paths scanned with zero high-confidence safety alerts before
  the audit note was added; the staged note was included in the final rescan.

## Limits and handoff

These are local syntax, instruction-provenance and host fixture results.
They do not establish a linked PC build, full original helper/register ABI,
guest-memory translation, Xbox runtime behavior or a byte-identical rebuild.
In particular, the repaired temporary record still needs an actual guest-stack
binding before its address can be published as a 32-bit guest pointer.

The source and audit commits remain local. No push or remote CI run was
performed for this repair. Published progress files retain the last completed
CI result and were not relabeled using local or projected Linux counts.
Future repairs should use this fresh queue and retain the documented producer,
stack-probe and x87 deferrals rather than suppressing their diagnostics.

No game process, installation, assets, saves, production data or deployment was
touched. No original binary or private disassembly was committed. To roll back
the source/test change, revert `d0d63957` and repeat the relevant audit; the
separate audit note does not modify reconstruction sources.
