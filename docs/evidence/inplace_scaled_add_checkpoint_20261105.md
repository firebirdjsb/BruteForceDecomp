# In-place packed scaled-add checkpoint

Commit `cef2fcdc20c8bdd493595756e2e5ddbc93a8c760` preserves the original 0x002b8d10 entry, signature and body hash while replacing lossy float concatenation pseudocode with the instruction-evidenced bounded native operation. See [operation evidence](002b8d10_multiply_add_operation.md) for all preconditions and exclusions.

The SHA-bound full strict C++17 audit checks all 13,694 canonical sources: 4,025 pass (29.3924%), 9,669 fail, zero provenance errors and zero check errors. Only 0x002b8d10 changes from fail to pass relative to the 4,024 checkpoint. No passing source regresses and no original-body hash changes. Report SHA-256: `81af04950f5fd1ff9eedf362dfdd73391d2de8d60a70c1dd0821c8f83a9639a6`.

The integrated canonical gate passes Clang O0/O2 and GCC14 ASan+UBSan, each with 46,815,232 integer-model and 638,976 native overlap/state comparisons. Private validation includes 434 negative controls; public CI runs without private inputs. Independent review adds 2,881,536 comparisons, 42 explicit anchor calls, 18 codegen/routing negatives and six executable mutants. The normal native return and all six callee-saved registers are checked. The pinned integer generator is reused unchanged from the reviewed 0x002b3e60 operation. LeakSanitizer and Clang sanitizers are not claimed.

The original 77 bytes and 20 instructions are independently decoded, including the distinct SUB ESP,8 / ADD ESP,8 / RET12 sequence. Original guest EFLAGS, register and stack transport are explicitly excluded from the native wrapper's contract. Packed hidden-lane status, nonfused rounding, operand order and exact read-before-store spans are retained. No original game bytes or uploaded scripts execute.

Repository safety checks found zero high-confidence alerts across 15,057 tracked paths; the C++17-only policy passes. The original XBE is not reauthenticated. Guest mapping/wrap, faults, original-CPU equivalence, complete-game integration and byte-identical rebuilding remain unverified. Syntax coverage is not a 1:1 behavior percentage or a game build.

Broad unittest discovery ran 348 tests, retaining the same 14 baseline failing subchecks and one baseline provenance error in the historical 21-caller gate, plus 17 optional skips. All failure identities exactly match the preceding checkpoint. The full suite is not green; these baseline issues remain explicit.
