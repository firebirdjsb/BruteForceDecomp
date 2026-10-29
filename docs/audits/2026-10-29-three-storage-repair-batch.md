# Three-function storage batch and exact-tree audit — 2026-10-29

Source/evidence/test commit: `ff479871673cffec11e3ccdc3bbc05c44e63a655`
on `main`. The user requested multiple syntax repairs in one pass. All three
reviewed source changes were therefore collected before one full committed-tree
Windows sweep. No per-function full inventory sweeps were run for this batch.

The starting main tip was `79d7b897`, with the same implementation as the
completed [remote audit 40859003071](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40859003071)
at `b6e0c88b`: **13,627 passes / 67 failures / 13,694** on Linux. Fetch found
no new remote implementation. The complete artifact was rechecked against
canonical source bytes and inventory before committing this batch.

| Entry | Bounded correction |
| --- | --- |
| `0x00340983` | Fixed 500-DWORD scratch and shared base/current/end storage |
| `0x00342562` | Coherent 13-DWORD record arena, previous/current cursors and existing record-base call arguments |
| `0x0035B680` | Single coefficient/sample region preserving the original 26-float offset and overlap |

The [instruction evidence and residuals](../evidence/20261029-fixed-storage-batch.md)
identify exact original bodies, pointer arithmetic, sizes and verification
boundaries. Original entries/body digests, origin and ABI/behavior flags are
unchanged. No shared header, external prototype or unrelated source changed.

Changed files are the three C sources above; three inventory rows;
`scripts/verify_20261029_storage_batch.py`;
`tests/test_20261029_storage_batch.c`; the evidence note; and the full-audit
workflow. This separate audit note adds no implementation.

## Exact committed-source result

Windows Clang 22.1.8 checked canonical Git bytes from `ff479871` with the
unchanged sweep flags. Duration: **175.2 seconds**. The prior comparable
Windows report at `98e9ef25` had **13,626 passes / 68 failures**; its source
tree differs from the starting main implementation only in documentation.

| Result | Count |
| --- | ---: |
| Audited functions | 13,694 |
| Windows host C11 syntax passes | 13,629 |
| Windows host C11 syntax failures | 65 |
| Other/nonterminal results | 0 |
| New passes | 3: the entries above |
| Regressions | 0 |
| Missing, mismatched or unindexed original body hashes | 0 |
| C source fingerprint drift | 0 |

Only those three function fingerprints and compiler statuses changed. The
report, triage, stack-offset groups, group counts, inventory and all source
hashes passed consistency verification against the exact 40-character source
commit. First-error guest-stack references decreased from 33 to 30.

The preserved Windows `0x002F01A2` assertion rejects default eight-byte long
double, whereas Linux passes it. Platform totals are kept separate. New
published Linux totals require the new completed remote run; they are not
inferred from this Windows result.

Focused checks passed for all three full sources on i686/x86_64; authenticated
XBE and four complete bodies including the read-only attribute writer; storage
fixtures at `-O0` and `-O2`; four rejected negative controls; source layout;
full-audit path coverage; published progress; whitespace; and staged-file safety
with zero alerts. Independent read-only review approved the limited source
and fixture changes. The audit note receives its own safety scan before push.

## Limits and rollback

These are host storage projections and syntax results, not full guest-frame,
probe/page-fault, call ABI, parser or Bink behavior proof. Fixtures execute
actual-source storage excerpts with controlled inputs. They do not execute
the complete functions or original external helpers. Original argument bounds,
guest pointer translation, implicit register outputs and runtime behavior
remain unresolved. The pre-existing 128-byte clear through `local_f0[4]` in
`0x00340983` remains a separate C object-boundary issue and is not exercised
or claimed fixed. Dynamic allocation and missing-producer candidates were
left unchanged rather than replaced by guessed buffers or outputs.

No game process, installation, binary, assets, saves, deployment or production
data was touched. Private binaries and full disassembly remain untracked.
Revert `ff479871` to roll back the three source/test repairs and rerun their
checks. This note changes no source and is separate from the audited commit.
