# Seven queued source declarations checkpoint

Source commit `a0d30ba20b5b7a4f222af2d42e0607388202ee1d` adds exact existing scalar declarations to seven callers: 0x001dcb90, 0x001dcbb0, 0x001dcbd0, 0x0020d550, 0x0020d590, 0x0024ba90 and 0x0024bae0. Only declaration/comment blocks are inserted. Existing caller bodies/signatures, callees, headers and the historical inventory are byte-identical. See [source-admission evidence and limitations](../CPP_20261105_SEVEN_SOURCE_DECLARATIONS.md).

The exact-tree full strict C++17 audit checks all 13,694 canonical entries: 4,049 pass (29.5677%), 9,645 fail, no provenance or checker errors. Exactly those seven callers improve from 4,042; no regressions or changed original-body hash labels occur. Report SHA-256: `e88ddaa05ef4e3c3346cd704aaba0d61a78b9ce8ffe48504a59e93b21bc121ee`.

The integrated private gate passes eight tests with 84 O0/O2 syntax/object checks and 56 rejected compile controls. Exact raw-byte reversals and historical-row/dependency pins pass. Public tests reject 933 metadata and 387 instruction-window-byte mutations. Private checks cover 14 complete bodies, 590 bytes and 251 instructions, with 3,774 record-leaf, 1,180 byte, 182 index-leaf and 3,690 independent structural/byte/flow controls. Body-specific callee flow differences are preserved rather than assuming uniform offsets.

Independent review verifies the complete frozen scope and original instructions, adds 84 pedantic syntax/object builds, rejects 70 compile controls, 80 newline mutations and seven canonical-path mutations. Preceding two-source, body-hash provenance, layout and C++17-only policy tests pass. No callers are linked or executed.

Broad unittest discovery runs 404 tests with the same 14 baseline failing subchecks and one provenance error, plus 26 skips. Failure identities exactly match the preceding checkpoint; the full suite is not green. Repository safety reports zero high-confidence alerts over 15,135 tracked paths before this document.

These additions establish source compatibility only. Hidden EAX input, the extra forwarded saved-ECX stack word and lost caller EAX return remain unresolved. No game ABI, linkage, runtime behavior or byte-identical rebuild is established. Original machine-code streams and uploaded scripts were not executed; the complete XBE was not reauthenticated. Syntax coverage is not a 1:1 game-behavior percentage.
