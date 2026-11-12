# Ideal-logarithm and conditional integer-conversion foundation

## Scope

This is a mathematical verification aid associated with entry 003174c5. It is
not game implementation, produces **no C++ syntax gain**, and does not change
any original-address draft or existing gate. The assigned numeric graph remains
FLD32 exact 4096; FLD32 binary32 input; FYL2X; FISTP32, with no separate hardware
multiply, narrowing, or control-word change. The ideal expression 4096*log2(x)
is mathematical notation for the single FYL2X result.

The original function-body SHA-256 label is
06E8630DF9ABD22BE0A0CF9161D826F46288A075FBBA5B77B8A367EA5313FAF1.
The unchanged canonical source bytes are pinned by the public manifest. This
package does not independently decode, run, or distribute original game bytes.

The four files under tests/support/rational_logarithm_003174c5 retain the exact
raw bytes and authorship of the separately derived mathematical foundation.
Their raw SHA-256 values are recorded in
metadata/rational_logarithm_003174c5.json. Its derivation uses an atanh-series
remainder proof and a separate ordinary-Taylor witness, not native float/log.
No sibling logarithm model was read during that derivation. The second series
was written by the same author; it is not independent-human review.

## Claims and limits

For every positive finite nonzero binary32 encoding, the exact-rational model
constructs a proved closed enclosure of the ideal real result. At 32 terms the
uniform width is below 2^-94. A finite test sample does not prove exhaustive
software correctness, nor that 32 terms resolves every rounding threshold.
Budgeted refinement fails explicitly rather than guessing.

A caller can explicitly add an absolute rational error interval in scaled-result
units. The caller must independently justify applicability. **No FYL2X hardware
error bound, AMD all-RC guarantee, FYL2X PE guarantee, or other vendor accuracy
claim is embedded or inferred.**

A separate operation decodes captured binary80 bytes and models signed32
conversion under nearest-even, down, up, and toward-zero rounding. The allowed
integer image of a supplied closed real interval is computed exactly. Invalid
integer-indefinite is tagged separately from a valid result of -2^31 despite
identical stored bits. Successful finite conversion inexactness is exact;
invalid-conversion precision generation and C1 remain unpinned. No sticky flags,
traps, stack state, guest ABI, original CPU equality, native hardware comparison,
C++ replacement, or game behavior is certified. No function status is promoted.

## Public reproduction

Run the gate from a normal Python 3.12+ environment, using the standard library:

    python3 -B tools/test_rational_logarithm_003174c5_gate.py
    python3 -B tools/verify_rational_logarithm_003174c5.py --root .

The verifier disables bytecode before any repository import. It verifies the
manifest and every pinned artifact before copying the frozen source snapshots
into external temporary storage. Isolated Python -I -B subprocesses import and
execute only the copied support modules. Do not invoke the frozen generator
directly from its support directory: its original default writes beside itself.
The public verifier redirects its output and preserves those authored bytes.

Optional --out must name a new, nonexistent directory outside the repository.
The default removes its external temporary results after reporting success.
Neither route writes generated vectors, test logs, or bytecode into source
paths. Optimized Python is rejected because the authored checks use assertions.
Imports alone perform no corpus generation or test execution.

The mandatory checks include 13 authored test methods, all 277 exact power-of-two
anchors, 29 named edges, 26 certified threshold pairs, and 2,048 seeded inputs
with 8,192 all-mode ideal integer decisions. The generator's full edge/random
outputs and summary must match exact SHA-256 pins. Full canonical random-row
contents reproduce digest
34853bc560b2af52a5f0c9a31888c918c150f1cb0edd9d507d51c7567e324924.
Source/manifest corruption controls are mandatory and reject changes before any
support import. Generated files are not committed; deterministic hashes suffice.

## Proposed separate CI step

After installed-layout review and separate authorization, add a dedicated step
without replacing, weakening, or combining existing syntax/provenance gates:

    name: Verify exact-rational logarithm foundation
    run: |
      python3 -B tools/test_rational_logarithm_003174c5_gate.py
      python3 -B tools/verify_rational_logarithm_003174c5.py --root .

Ensure pushes affecting these two tools, their support directory, this evidence
file, or the metadata manifest run that step. This document is a proposal only;
no workflow is modified here. A passing result is an ideal-math/conditional-
conversion foundation check, never an extra C++ syntax pass or game milestone.
