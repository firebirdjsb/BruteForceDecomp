# Source-only declaration dry-run audit gate — 2026-11-04

Base commit: `4cda499da1bfb061958daa47f77f28ba9e3c6da4`.

## Problem and bounded change

The dry-run tool accepted non-commit strings as audited SHAs, accepted more than
13,694 input rows if duplicate identities collapsed to the expected dictionary
size, and trusted aggregate pass/fail counts without comparing them with the
individual compiler results. A candidate's copied source metadata was not bound
to its audit row before screening.

`scripts/triage_cpp_draft_call_type_risks.py` now validates complete syntax-only
audit metadata before reading candidate files or invoking Clang. It requires:

- A full 13,694-entry report, a 40-character commit SHA, and the syntax-only marker.
- Unique original-address identities, complete compiler/provenance statuses,
  source/body digest formats and structured diagnostic lists.
- Integer aggregate counts matching the individual results, with no audit-error
  categories hidden in the totals.
- Unique candidate pairs bound to the audited caller's path, digests and first
  undeclared-call diagnostic, with valid nonnegative eligible arities.
- An audited callee for eligible candidates. Upstream quarantined missing-callee
  records remain skippable; they are never screened as source-ready.

The existing selected caller/callee byte checks and provenance-label checks still
run after metadata validation. Report consistency does not authenticate the
original XBE or verify unchanged bytes for unselected functions. The complete
exact-tree audit verifier remains a separate gate.

## Validation

Twelve compiler-independent tests cover valid input, malformed headers, duplicate,
missing and extra rows, corrupt statuses/digests, contradictory counts, candidate
identity/source/error binding, and the preserved selected-source quarantine.
One orchestration test mocks Clang explicitly to exercise both optimization
invocations and source-drift rejection; it is **not** a C++ syntax result.
The suite is included in the existing strict C++ audit workflow. The existing
compiler integration fixture was updated to provide production-shaped metadata.

Also passed: five declaration-arity tests, declaration-priority controls, Python
byte compilation, source layout and body-label provenance for all 13,694 drafts,
repository safety, progress controls, C++17-only policy and whitespace checks.
An independent review checked compatibility with the producer report schemas.

Clang is unavailable in this cloud executor. The compiler integration fixture,
float-conversion compiler controls and full strict C++17 inventory are not claimed
to pass here. No original game function, body digest, return/argument contract or
published progress percentage changed. Xbox ABI, linkage and runtime behavior
remain outside this metadata-only change.
