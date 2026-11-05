# Counter widths, caller declarations and ordered matrix checkpoint

Three independently reviewed changes preserve distinct evidence boundaries:

- `3a17a944416e35fe8d8252c77b7ffe55b567521c`: seven counter extern declarations change from uint32_t to uint16_t across five sources, matching original WORD copy/INC/CMP/SUB operands. Separately, two exact existing-source declarations admit callers 0x0038620e and 0x0038624a. Hidden ECX/EDX inputs and downstream interfaces remain unresolved. See [counter evidence](cpp-20261105-counter-word-widths.md) and [source-declaration evidence](../CPP_20261105_WORD_SOURCE_DECLARATIONS.md).
- `ff72d390d4e5fc87a626225c87f066beb17c7d81`: 0x002337a0 retains its original signature and output-pointer return, replacing unsupported pseudocode with a bounded native operation preserving 71 ordered SSE events. The load of L12 between the two row2 stores is essential when buffers overlap. See [operation evidence](002337a0_ordered_matrix_operation.md).
- A test-only follow-up reconciles two historical callee source pins with the exact reviewed counter edits. Historical manifests stay immutable; only the complete approved postimages can reverse to their exact predecessor bytes. Raw-byte reads reject newline normalization. All four old/current callee combinations and 3,492 independent corruption probes pass.

## Exact source audit

At `ff72d390d4e5fc87a626225c87f066beb17c7d81`, all 13,694 canonical entries were checked with strict host Clang C++17: **4,055 pass (29.6115%), 9,639 fail**, with zero provenance or checker errors. Report SHA-256: `fa198ea9d2f84ea86b796af43cd9a81647e8b350313e6dc1fe83cff602f72405`. The later test-only follow-up leaves every audited source byte unchanged, verified by the exact-tree audit checker.

Only 0x002337a0, 0x0038620e and 0x0038624a improve from the previous 4,052 result. There are no syntax regressions or changed original-body hash labels. Counter width corrections deliberately add no syntax passes; their isolated full audit preserves the complete 4,052/9,642 vector. Historical inventory hashes remain unchanged. These counts measure source syntax, not game completion or proven 1:1 behavior.

## Independent and integrated validation

The matrix gate regenerates 191,200 integer-model and 46,064 independently authored Fraction-model records, each tested under all 64 sticky-status seeds at Clang O0/O2 and GCC14 ASan+UBSan. It passes 65,568 native mutable-memory comparisons per build, return-pointer/callee-saved/x87 checks, exact 64/64/64-byte page spans, and 1,381 negative controls. Independent review verifies all 286 original bytes/76 boundaries and actual emitted ELF instructions, and adds a Capstone-derived graph with 43,040 new cases and another 2,754,560 comparisons per build. Original game bytes are inspected only as data.

Counter replay verifies 737 original bytes/239 boundaries and 3,223 corruption controls. Its initialized-local model performs 2,359,296 checks per build with 42 rejected mutant runs; an independent model adds 4,145,728 cases per Clang O0/O2 and GCC sanitizer build. Three raw JMP exits retain their quarantined CALL_RETURN annotations. The global census has 849,614 Ghidra-listed instructions versus 849,646 Capstone instructions: the 32 additional instructions are WAIT splits in 20 already-quarantined functions, not new code or newly validated bodies. All 17 direct absolute overlapping counter/limit accesses are WORD, without proving computed aliases or object extents.

The two declarations pass 24 O0/O2 syntax/object checks and 16 rejected compile controls, with 274 original bytes/84 instructions replayed. Earlier WORD-limit evidence passes baseline, declarations-only, counters-only and combined exact projections. The preceding isolated width-audit option remains separate from this combined result.

Final broad unittest discovery runs 438 tests: the same 14 baseline failing subchecks and one provenance error, plus 33 skips. Failure identities exactly match the preceding checkpoint; the aggregate suite is not green. The newly found historical-callee gate incompatibility was corrected and independently reviewed before this final run. C++17-only policy passes; repository safety reports zero high-confidence alerts over 15,178 tracked paths before this checkpoint document.

## Remaining limits

The matrix operation admits initialized, correctly aligned native objects, documented overlaps and masked floating-point exceptions. It does not recover guest32 mapping, stack-slot aliases, original register/EFLAGS/cleanup state, fault ordering, MMIO, concurrency or original Pentium III equivalence. Width fixes do not establish global definitions, storage lifetime, aliases or native/guest ABI. LeakSanitizer and unavailable Clang sanitizers are not claimed. Full XBE authentication, whole-game linkage and byte-identical rebuilding remain unverified.
