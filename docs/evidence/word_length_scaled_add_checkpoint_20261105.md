# Bounded word length and packed scaled-add checkpoint

Two separate reviewed commits retain original entry addresses, signatures and body hashes:

- `1f2c24b13b7013f6c2170a81ecda73a0abf58048`: 0x002eaa70 uses same-array element subtraction, with the signed SAR-derived length bound and two's-complement short representation stated explicitly. No null guard is invented. See [word-length evidence](002eaa70-bounded-native-word-length.md).
- `21c2cc1895ee130919cf2e53a6dc05a1caa4b0cf`: 0x002b3e60 preserves packed multiplication followed by separately rounded packed addition, including the unstored lane's exception effects and exact input-read/store ordering. See [scaled-add evidence](002b3e60_multiply_add_operation.md).

The SHA-bound full strict C++17 audit at `21c2cc1895ee130919cf2e53a6dc05a1caa4b0cf` checks all 13,694 canonical sources: 4,024 pass (29.3851%), 9,670 fail, zero provenance errors and zero check errors. Exactly the two entries above improve relative to the 4,022 checkpoint; there are no regressions or changed original-body hashes. Report SHA-256: `93b1f2b2f992be753ea705a0fc10105af87ffa3c98bd35f90c55f1477585e8de`.

Both canonical-path focused gates pass after integration. The word-length gate tests 2,113,265 initialized native and 100,030 arithmetic cases per configuration, eleven executable mutants, and 254 public/private provenance corruptions. Independent review adds 403,455 native and 300,036 arithmetic cases. The scaled-add gate tests 46,815,232 integer-model and 4,423,680 native overlap/state comparisons per build, plus 153 private-inclusive negatives; independent review adds 2,387,088 comparisons and twelve explicit boundary checks. Clang O0/O2 and GCC14 ASan+UBSan pass. LeakSanitizer is disabled and not claimed. No Clang sanitizer success is claimed.

The scaled-add gate checks initialized scalar and pointer provenance through native compiler output, rejects stack-slot/stack-base corruption and callee-saved register clobbers, and preserves native normal return. The bounded operation does not claim original guest stack/register transport. Separate underflow cases that round to minimum normal retain their distinct UE/DE/PE outcomes, and multiply/add fusion is rejected.

Repository safety checks found zero high-confidence alerts across 15,049 tracked paths. The C++17-only policy passes. No private project, complete export or original executable is included.

These are bounded host-object/native-operation results, not original Xbox execution. Guest mapping/wrap, register/stack ABI, faults, original-CPU behavior, whole-game integration and byte-identical rebuilding remain unverified. The original XBE has not been reauthenticated. Syntax coverage is not a 1:1 behavior percentage or a game build.

Broad unittest discovery ran 348 tests with the same 14 baseline failing subchecks and one baseline provenance error in the historical 21-caller gate, plus 17 optional skips. Failure identities exactly match the preceding checkpoint. The complete suite is not green; these baseline issues remain explicit.
