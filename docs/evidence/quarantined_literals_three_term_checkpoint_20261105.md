# Quarantined literal operands and bounded three-term operation checkpoint

Two separately reviewed source commits retain original identities and body-hash labels:

- `50649a6c`: 0x00023a80 replaces two host-symbol-address RHS operands with the original guest DWORD literals. The historical instruction-risk quarantine is retained unchanged. Hidden EAX/EDX remain unresolved, and the draft integer copy does not reproduce original FLD/FSTP behavior for all inputs. This is operand-only admission, not clearing the function's x87 risk. See [literal evidence](cpp-20261105-00023a80-literal-pair.md).
- `679bed432acf202ea85facd60c7f324a631b5013`: 0x002b73d0 preserves the explicit-argument, ordered packed three-product/two-addition operation, including row NaN priority, hidden-lane exceptions and all-inputs-before-output ordering. See [bounded native operation evidence](002b73d0_three_term_operation.md).

The exact-tree full strict C++17 audit at `679bed432acf202ea85facd60c7f324a631b5013` checks all 13,694 entries: 4,038 pass (29.4874%), 9,656 fail, no provenance or checker errors. Exactly those two entries improve from 4,036; there are no regressions or changed original-body hash labels. Report SHA-256: `10bc1d739e0ce34c5d359d32190333cffb3ffccc797cd94ad59234c0fe88c559`.

The integrated literal gate passes eight tests: exact reversal, four O0/O2 syntax/object passes, four exact two-error original-source failures, 56 manifest and 13 store-byte negatives, 617 private body/flow and 13 private index controls. Complete private evidence covers 147 bytes and 46 boundaries. Isolated initialized DWORD fixtures pass two positive and 24 negative runs. Independent review confirms the unchanged quarantine and additive CI. No unresolved caller executes.

The integrated three-term gate passes Clang O0/O2 and GCC14 ASan+UBSan: 347,520 native overlap/state, 1,054,848 integer-model and 547,840 independent Fraction comparisons per build, plus 362 negatives. Exact 44/12/12-byte span boundaries and native callee-saved registers pass. Independent review adds 14 executable mutants, 96 codegen negatives, 102,528 scalar and 16,752 composition comparisons. Review found and closed full-record pinning and third-product NaN-anchor gaps before the package was frozen. No shared arithmetic helper was weakened. LeakSanitizer and Clang sanitizers are not claimed.

Broad unittest discovery runs 376 tests with the same 14 baseline failing subchecks and one provenance error, plus 21 skips. Failure identities exactly match the preceding checkpoint; the full suite is not green. Repository safety reports zero high-confidence alerts over 15,120 tracked paths before this document; the C++17-only policy passes.

Original machine-code streams and uploaded scripts were not executed. Whole-XBE authentication, guest ABI/address mapping, original-CPU equivalence, whole-game linkage and byte-identical rebuilding remain unverified. Syntax coverage is not a 1:1 game-behavior percentage.
