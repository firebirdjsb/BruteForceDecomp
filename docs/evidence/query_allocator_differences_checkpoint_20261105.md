# Query, allocator declarations and packed difference-products checkpoint

Three separately reviewed commits retain original entry addresses, signatures and body-hash labels:

- `41b9447f`: 0x002ee365 changes only its bounded, null-destination query subtraction to a same-array pointer difference. The copy branch, including the post-store byte reread, is byte-identical. Native mixed-width overlap is not claimed. See [query evidence](002ee365-bounded-native-query.md).
- `392e1bc4`: 0x002d1560 and 0x002d1960 add only the existing allocator guest32 header and an exact existing helper declaration. These are source/interface admissions, not recovered caller behavior. Existing high-bit unsigned-to-signed conversion, integer/address casts, hidden registers and guest mapping remain unresolved. See [declaration evidence](../audits/2026-11-05-allocator-source-declarations-cpp17.md).
- `bb579d01f55c5088b1a8450687a76e383e893d2e`: 0x002ccc10 preserves the ordered SSE differences, products, shuffles and final subtraction, including the discarded lane's exception effects and selected NaN sign/payload. See [numeric evidence](002ccc10_difference_products_operation.md).

The SHA-bound full strict C++17 audit at `bb579d01f55c5088b1a8450687a76e383e893d2e` checks all 13,694 canonical sources: 4,029 pass (29.4216%), 9,665 fail, zero provenance errors and zero check errors. Exactly the four entries above improve relative to the 4,025 checkpoint; there are no regressions or changed original-body hashes. Report SHA-256: `2dbaa3ba9389d2f9e045e92a7d07b64f8630e102622f3be39ac16917c4b3f7ba`.

All integrated focused gates pass. Query validation includes 107 public and 329 private controls; Clang O0/O2 and GCC14 ASan+UBSan pass 202,441 initialized native, 90,553 abstract overlap-memory and 100,090 arithmetic cases per build. Independent native and abstract overlap models also pass. Abstract byte-memory overlap tests do not establish native mixed-width object aliasing.

Allocator validation passes six public tests, full-source O0/O2 syntax/object checks, original/per-declaration negatives, 185 metadata and 146 instruction-window corruptions. Private Capstone replay checks five complete bodies and rejects 70 record mutations. Only initialized scalar seams execute, never the unresolved-register canonical callers.

Numeric validation passes Clang O0/O2 and GCC14 ASan+UBSan, with 46,819,328 independent integer-model and 581,248 native memory/state comparisons per build and 562 negatives. Independent review matches every canonical integer fixture record and adds 273,270 comparisons across five compiler/sanitizer builds, plus 80 hidden-underflow checks. Exact spans, alias sequencing, MXCSR/x87 state and native callee-saved registers are checked. LeakSanitizer and Clang sanitizers are not claimed.

Repository safety found zero high-confidence alerts across 15,075 tracked paths; the C++17-only policy passes. No original executable bytes or uploaded scripts execute. Whole-XBE reauthentication, guest ABI/address wrapping, original-CPU equivalence, full-game linkage and byte-identical rebuilding remain unverified. Syntax coverage is not a 1:1 behavior percentage or a game build.

Broad unittest discovery ran 354 tests, including the six new allocator checks. It retains the same 14 baseline failing subchecks and one baseline provenance error in the historical 21-caller gate, plus 17 optional skips. Failure identities exactly match the preceding checkpoint. The full suite is not green; these baseline issues remain explicit.
