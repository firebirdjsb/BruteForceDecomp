# Declaration-queue argument counting hardening — 2026-11-04

Base commit: `910d6acfea11d8103061ff3453216e2319177828`.

## Scope and reproduced defects

The read-only declaration queue counted a quoted-only argument as zero because
opening a quote did not mark an argument token. Comment punctuation could close
a call or add argument separators, and commas inside array subscripts or braced
expressions were treated as top-level separators. Empty argument slots and
mismatched delimiters could produce a candidate arity instead of being deferred.

`tools/triage_cpp_declaration_edges.py` now counts quoted arguments, skips ordinary
comments, balances parentheses/brackets/braces, and rejects empty argument slots,
unclosed quotes/comments and mismatched delimiters. Raw strings and continued
line comments are conservatively deferred. This remains a bounded C-style lexical
heuristic, not a complete C++ parser; templates and preprocessing still require
manual review. No inferred arity establishes a guest call contract.

Regression tests cover literal-only arguments, escaped quotes and backslashes,
adjacent literals, comment punctuation, nested delimiters, malformed slots,
unsupported raw strings and invalid starting offsets. End-to-end synthetic audit
controls exercise match, mismatch and unparseable queue classifications while
preserving the existing source-hash and provenance gates.

## Validation and boundaries

Passed:

- Five declaration-triage unit tests, including the new regression controls.
- Two undeclared-call triage tests and three compiler-diagnostic classification tests.
- Deterministic declaration-priority controls.
- Source layout, body-label provenance, and source checks for all 13,694 entries.
- Repository safety scan, progress-renderer controls, C++17-only policy check,
  Python byte compilation and whitespace validation.
- Independent review of the bounded parser and focused edge probes.

The full strict C++17 audit was attempted but could not start because `clang++`
is unavailable in the cloud executor. No replacement compiler was used to claim
an audit pass. No game function, original entry identity, original body digest,
source prototype or published progress percentage changed. Original retail XBE
verification, Xbox ABI, cross-function linkage and runtime behavior remain
unverified by this tooling-only change.
