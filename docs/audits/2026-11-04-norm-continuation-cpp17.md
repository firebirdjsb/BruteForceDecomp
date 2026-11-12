# Native norm and bounded continuation checkpoint

The exact-tree audit at `0c60a8f7141e792eafb1ddc1e549a3c51a84c195` checks 13,694 canonical sources: **4,002 pass (29.2245%)**, 9,692 fail, zero provenance errors and zero check errors. Exactly 002e9c30 and 00314c76 improve relative to the 4,000 checkpoint; no source regresses and all original body hashes remain unchanged. This is +57 over the initial 3,945 baseline.

Report SHA-256: `d3f6a44a606dfd5f6c086805f546141f63b592629d60ea2881847def5b0b5244`.

## Reviewed changes

- 00314c76 follows the original x87 norm arithmetic order, stack cleanup and binary80 return within its documented native-host contract. The integrated O0/O2 tests each pass 31,850,496 comparisons and the private gate passes 71 negative controls. Independent GCC and sanitizer checks also pass. A concrete finite rounding example distinguishes the original ordering from the previous draft. Guest ABI and original Xbox execution remain unverified.
- 002e9c30 restores the original load-before-table-store order and four post-call zero stores, not just the missing declaration. Six operation tests, including private body/context replay, and seven admission tests pass. The official 18-byte body and separately hashed 82-byte context remain distinct. The canonical unresolved-ECX function is never executed; only initialized bounded projections are tested. Guest registers, return value, flags, stack and heap runtime adapter remain unresolved.
- The older five-source declaration gate now verifies exact historical and evolved shared-header endpoints, and reverses only the reviewed CONCAT14 line. This fixes a CI regression introduced by that earlier header addition. Original caller/callee checks and the historical header pin remain intact. Six new mutation regressions pass, including every single-byte header corruption and rollback/movement/duplication cases. No game header or source is changed by this gate repair.

All three changes received independent review. The complete 209-case historical gate now reports 19 effective syntax completions, 190 partial repairs and 469 DWORD values. The 250-case gate remains 46/204/483. Historical manifests are unchanged; the bounded continuation uses a separate pinned admission channel with exact reversal and original diagnostic negatives.

## Validation and boundaries

Broad tools test discovery ran 342 tests with the same fourteen failing subchecks and one error previously reproduced on the untouched baseline, plus fifteen optional skips. This broader command includes non-C++ tool tests; its count is not directly comparable with earlier narrower discovery runs. New focused gates, private replays, both complete historical gates, all 22 lane invariants, source provenance, C++-only policy and repository safety checks pass. An outside clone of the exact audited commit passes all 117 downstream pre-inventory workflow commands after the repaired five-source gate.

The first published main checkpoint's CI stopped at the stale header pin before its full sweep. That failure is not represented as a passing CI run; the new publication requires its own exact-commit Actions result.

Syntax compatibility and bounded host operation tests do not prove whole-game 1:1 equivalence, a byte-identical rebuild, guest address mapping, ABI or linkage. The complete original XBE remains unauthenticated. Original game machine code and uploaded scripts were not executed. All work used cloud resources, not the user's computer.
