# Four constant-offset copy checkpoint

The complete exact-tree audit at `a5067623b96cc1b653e9dd8af35ae721395c3302` checks 13,694 canonical sources: **4,015 pass (29.3194%)**, 9,679 fail, zero provenance errors and zero check errors. Exactly 001cfbd0, 001d6ab0, 001d7730 and 001dcf70 improve relative to the 4,011 checkpoint. No source regresses and every original body hash remains unchanged. This is +70 over the initial 3,945 baseline.

Report SHA-256: `43e66dd30be5b5a5cfc964d48c081f83e2b92808a2694a9bdc5abcf7bcad286b`.

Each repair changes one byte assignment at offset 13 or 29, preserving all other source bytes and the original transfer schedule. Complete original bodies total 302 bytes and 112 instructions, with no calls or missing continuations. The null guard, 24/36-byte strides, fixed versus advancing source behavior and untouched padding are retained. The four source preimages and all eleven package artifacts were checked before integration; original scoped manifests do not overlap.

The integrated private gate passes strict original-negative/repaired-positive O0/O2 checks, 122,750 initialized cases per Clang O0/O2 and GCC ASan+UBSan build, 22 behavioral mutants and 116 private-record corruption controls. Independent review reruns those gates and rejects five additional source-caching mutants, including fixed-source overlap across iterations. The existing two-loop and five-copy gates also pass on the integrated tree. C++-only policy, repository safety and all 22 lane invariants pass.

The preceding 4,011 checkpoint's broad tools discovery ran 348 tests with fourteen baseline failing subchecks, one baseline error and seventeen optional skips. This four-statement batch runs focused and neighboring gates, sanitizers/private replay and a new full source audit; the prior broad discovery is not presented as rerun. The latest publication requires its own exact-SHA remote CI result.

These are bounded native-object spelling repairs. Canonical unresolved-register functions and original machine code are never executed. Guest32 wrapping/mapping, register and stack ABI, RET 4 cleanup, linking, runtime behavior and whole-game 1:1 equivalence remain unverified. Whole-XBE authentication is not claimed. The halfword candidate 001dcf30 remains held for separate object/aliasing justification.
