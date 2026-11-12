# Packed add and bounded string length checkpoint

Two separately reviewed source changes retain their exact original entry addresses, signatures and original-body hash labels:

- 0x002b3cc0: preserve the seven-operation packed SSE memory sequence, with every operand lane defined by memory loads, all reads before writes, exact 12-byte spans and existing masked MXCSR controls/status. See [operation evidence](002b3cc0_add_operation.md).
- 0x00343343: replace truncating pointer intermediates with a bounded, same-array difference. The explicit length bound makes subtraction and int conversion defined. Null, scanning and first-zero termination remain unchanged. See [length evidence](00343343-bounded-native-length.md).

The SHA-bound full audit at `59c537ebc76cd7dc7ab329e19317e8ad9fb0ef8b` checks all 13,694 canonical sources: 4,022 pass (29.3705%), 9,672 fail, zero provenance errors and zero check errors. Exactly these two entries improve relative to the preceding 4,020-pass checkpoint. No passing source regresses and no original-body hash changes. Report SHA-256: `79d4a18d65fc2eaeb55f994f651053d68ddef7ab65cc3cdbe21ccae6b3071bde`.

The packed-add intermediate commit `1ef251ddd2c9162472f87f20c923d89b3ef94b0c` also passed its SHA-bound full audit at 4,021 passes; report SHA-256 `e826f134d7ab56ea7839dd1f5cf777ef93a32549f8b800ea572759d9dcdc1fc8`. An earlier diagnostic sweep without a supplied commit identity was rejected by the exact-tree gate and was not used for publication.

Both final canonical-path focused gates passed after integration. The packed-add gate runs 5,378,048 independent integer-model and 638,976 native/state/overlap comparisons at each Clang optimization, plus 97 private-inclusive negatives. The length gate runs 548,594 initialized native and 100,027 DWORD arithmetic cases per configuration, ten executable mutants and 256 private-inclusive provenance controls. Separate independent models, guard checks and GCC14 ASan/UBSan passed. LeakSanitizer and Clang sanitizers are not claimed. Repository safety and the C++17-only policy pass.

These are bounded native operation checks, not original Xbox execution. Guest addressing/wrap, integer and vector register/stack transport, RET cleanup, faults, original-CPU behavior and complete game integration remain unverified. The original XBE has not been reauthenticated. Syntax coverage is not a 1:1 behavior percentage or a game build.

Broad unittest discovery on the combined source checkpoint ran 348 tests, with the same 14 baseline failing subchecks and one baseline provenance error in the historical 21-caller gate, plus 17 optional skips. The failure identities exactly match the preceding 4,020 checkpoint. This is not a claim that the full suite is green.
