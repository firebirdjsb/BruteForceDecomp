# Native round operation and five byte-copy spellings

The complete exact-tree audit at `1552948476414d5ca4d1078956ef662ff37383c4` checks 13,694 canonical sources: **4,011 pass (29.2902%)**, 9,683 fail, zero provenance errors and zero check errors. Exactly 002eca8b and the five reviewed byte-copy functions improve from the 4,005 checkpoint. There are no regressions or original-body-hash changes. This is +66 over the initial 3,945 baseline.

Report SHA-256: `1000588b27698cac0fb473a59f0cbf40ac4dd2177e090fcb285c86b375c7481a`.

## Original FRNDINT operation

002eca8b retains FLD binary64, FRNDINT, FSTP binary64 scratch and FLD scratch, with the original source signature and native binary80 result. An observed O0 duplicate push would violate the original one-empty-slot bound; the force-inlined helper and actual-wrapper codegen gate prevent that. The binary64 scratch narrowing/reload is not removed or replaced by a library rounding call.

The integrated private gate passes 120,324,096 hardware-oracle comparisons and 4,276,224 independent integer-model cases at each O0/O2, plus 59 negative controls. The frozen hardware test and independent model also pass GCC ASan+UBSan checks. Coverage includes all permitted sparse-stack patterns, seven live prior entries, signed zero, NaN quieting/payloads, valid PC/RC modes, sticky status, active binary80 values, tags, CW and MXCSR. Caller FP-state restoration and early one-slot regression anchors are required.

This native-host contract requires masked exceptions and valid PC encodings; reserved PC01 is excluded. Guest ECX high-word/stack transport, FIP/FDP/FOP, faults and original Xbox execution remain unverified. No original machine-code stream is executed.

## Five fixed byte-copy spellings

001dce30, 001dd130, 001dcde0, 001d05d0 and 001e07e0 replace only fixed-offset pointer-to-int intermediates in byte-copy assignments. Original widths, null guards, sequential source reads, fixed or advancing source behavior, destination strides and untouched padding remain unchanged.

Integrated strict original-negative/replacement-positive checks pass at O0/O2. Initialized valid-object fixtures pass 101,683 cases per Clang O0/O2 and GCC ASan+UBSan build, including overlap and sentinels, and reject 24 behavioral mutants. Independent review also passes 380,165 cases per build, rejects private-record corruptions, and checks all 24 mutants under sanitizers. Complete private recorded bodies and exact source reversal are verified. There are no historical scoped manifest overlaps.

Canonical unresolved-register functions are never executed. Native object spelling does not establish guest32 wrapping/mapping, register ABI, RET-4 cleanup, linking or runtime equivalence. The separate halfword candidate 001dcf30 remains held.

## Validation

Both packages received independent review before integration. Broad tools discovery runs 348 tests, with the same fourteen failing subchecks and one error previously reproduced on the untouched baseline, plus seventeen optional skips. Focused/private gates, C++-only policy, all 22 lane invariants and repository safety checks pass. Original evidence manifests and original body labels remain unchanged.

The earlier published 4,004 checkpoint's exact-SHA Actions run succeeded. This new checkpoint requires its own remote CI result; local checks are not presented as remote CI success. Whole-XBE authentication and whole-game 1:1 equivalence remain unverified. All work uses cloud resources, not the user's computer.
