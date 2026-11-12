# Declarations, bounded index and packed four-term checkpoint

Three reviewed source commits preserve original identities and body-hash labels:

- `c4afe45b`: 0x00235c00 and 0x00243e90 add exact existing allocator/helper declarations only. No caller expressions or signatures change. These are source/interface admissions, not recovered caller behavior. See [declaration evidence](../audits/2026-11-05-next-allocator-source-declarations-cpp17.md).
- `79d23820`: 0x0034e2e0 separates an integer counter from a pointer while retaining the pointer memory loop. The native contract requires a same-array guard prefix and bounds the count to avoid signed overflow. See [index evidence](0034e2e0-bounded-native-integer-index.md).
- `8f3c82df11084af978c4a32c21d0384a423912a9`: 0x003759c0 preserves four ordered packed products and three additions, including the unstored fourth lane's exception effects, operand NaN priority and input-before-output ordering. See [four-term evidence](003759c0_four_term_operation.md).

The exact-tree full strict C++17 audit at `8f3c82df11084af978c4a32c21d0384a423912a9` checks all 13,694 canonical sources: 4,033 pass (29.4509%), 9,661 fail, zero provenance errors and zero check errors. Exactly these four entries improve relative to 4,029; no regressions or original-body hash-label changes occur. Report SHA-256: `17fbf1bcc05fb6c44c37de5e43cc8a2bf8344814ef1bd38e4d0738d9643ccf56`.

All integrated focused gates pass. Declaration validation includes eight syntax/object builds, seven declaration-removal failures, 206 metadata and 215 instruction-window corruptions, and 98 private evidence negatives. Independent review decodes seven complete bodies (270 instructions), checks exact source reversal and adds seven drift/routing negatives. Unresolved-register canonical callers never execute.

Index validation passes Clang O0/O2 and GCC14 ASan+UBSan: 111,008 native cases, 444,008 DWORD-memory models and 2,196 boundary identities per build, plus 815 evidence corruptions. Independent review adds 4,095 exact-size guarded-array sanitizer cases. Arbitrary unprefixed arrays and actual game caller allocations are not established.

Four-term validation passes Clang O0/O2 and GCC14 ASan+UBSan: 13,678,592 integer-model, 1,832,960 native alias/state and 412,672 independent rational-model comparisons per build, plus 481 negatives. Independent review checks additional optimization/compiler builds and native callee-saved registers. The bounded native contract requires aligned rows/output, initialized spans, masked MXCSR and nonaliasing compiler scalar spills. The output guard includes a four-byte sentinel, not an exact twelve-byte page boundary. Guest faults, original CPU behavior and stack aliasing remain unresolved.

Repository safety checks found zero high-confidence alerts across 15,094 tracked paths before this documentation checkpoint; the C++17-only policy passes. No original executable streams or uploaded scripts execute. Whole-XBE reauthentication, guest ABI/address wrapping, full-game linkage and byte-identical rebuilding remain unverified. Syntax coverage is not a 1:1 behavior percentage or a game build.

Broad unittest discovery ran 354 tests, with exactly the same 14 baseline failing subchecks and one baseline provenance error as the preceding checkpoint, plus 17 optional skips. The full suite is not green. LeakSanitizer and Clang sanitizers are not claimed.
