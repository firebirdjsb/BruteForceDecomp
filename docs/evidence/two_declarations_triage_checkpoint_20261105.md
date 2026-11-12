# Two source declarations and evidence-tool hardening checkpoint

Three independently reviewed commits make distinct changes:

- `c0058e0c`: declaration triage accepts only the bounded optional Clang `; did you mean 'FUN_........'?` suffix, capturing the original missing symbol rather than the suggestion. Malformed and trailing text remain rejected. This changes prioritization, not source or proof status.
- `171a9a2c`: the prior literal/declaration verifier now hashes raw source bytes before UTF-8 decoding, preventing CRLF normalization from hiding source drift. Header checks already hashed raw bytes. No game source, manifest or historical inventory changes in this hardening commit.
- `9018740307c65fbe9efc13f63b73cfbd7091bcb9`: entries 0x001d1a80 and 0x001dc7e0 add exact existing scalar declarations only. Caller expressions, callee/header bytes and the historical inventory remain unchanged. See [source-admission evidence](../CPP_20261105_TWO_SOURCE_DECLARATIONS.md).

The exact-tree full strict C++17 audit at `9018740307c65fbe9efc13f63b73cfbd7091bcb9` checks all 13,694 canonical entries: 4,042 pass (29.5166%), 9,652 fail, no provenance or checker errors. Exactly those two callers improve from 4,040; no regressions or changed original-body hash labels occur. Report SHA-256: `840e53f79f115c351fc52811a6b2566332e9417d6eea31a37e57faf457fbf2cd`.

The integrated source gate passes eight tests: 24 O0/O2 syntax/object checks and 16 rejected compile controls, exact raw-byte reversal, historical-row pins, 224 public metadata and 86 instruction-byte mutations. Private checks cover four bodies, 148 bytes and 66 instructions, with 992 record-leaf, 296 byte, 52 index-leaf and 956 independent structural/byte/flow controls. Independent review adds 24 pedantic syntax/object builds and 20 type negatives. Callers are never linked or executed. Hidden EAX input, an extra forwarded stack word and the lost caller EAX return remain explicitly unresolved.

Parser regressions pass 64 unittest cases plus standalone and real-Clang controls; independent review rejects 1,059 malformed diagnostic variants. Comparing the earlier 4,040 report yields 4,439 queue rows instead of 2,958, preserving every old row. The 1,481 additions are candidates, not syntax or behavior gains. That comparison retains its earlier audited SHA and is not relabeled as a fresh audit.

The raw-byte hardening gate passes ten private tests; all eight CRLF/mixed-newline mutations reject, and independent review rejects 16 additional newline variants. The earlier full syntax audit already hashed raw source bytes, so its published coverage was not invalidated by the scoped verifier weakness. Review also prevented unnecessary historical inventory updates in the new declaration package before approval.

Broad unittest discovery runs 396 tests with the same 14 baseline failing subchecks and one provenance error, plus 24 skips. Failure identities exactly match the preceding checkpoint; the full suite is not green. Repository safety reports zero high-confidence alerts over 15,130 tracked paths before this document; the C++17-only policy passes.

Original machine-code streams and uploaded scripts were not executed. Whole-XBE authentication, guest ABI/mapping, original-CPU equivalence, game linkage and byte-identical rebuilding remain unverified. Syntax coverage is not a 1:1 game-behavior percentage.
