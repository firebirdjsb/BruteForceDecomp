# Integer model scope and subtraction classification

This model is an authored bounded native operation oracle, not original code
execution or independent proof of the original CPU. Integer-unit add/multiply
and EDGES are reused unchanged from reviewed 002b73d0. New subtraction, packed
composition, corpus and finite checks are distinguished in source comments.
The separately reviewed Fraction oracle does not import this model.

For SUBPS(destination a, source b), classify both original bit patterns first.
If either is NaN, return the original destination NaN if present, else source,
with quiet bit set. Preserve selected sign/payload. Invalid is set if either
operand is signaling. No denormal-operand flag is introduced in this path.
Only after ruling out NaNs may b's sign be inverted and the exact integer add
primitive applied. That algebra covers infinities, signed zeros, DAZ, FTZ,
rounding and flags without changing the NaN selection operation.

The packed difference is calculated for all four lanes, including +0 minus +0.
Differences 0, 2, 3 are broadcast. Each term's gap lane starts +0 and contributes
its own arithmetic flags even though only lanes 0, 2, 3 are stored. All exceptions
are masked and statuses accumulate. This is a modern native SSE contract.

Fixture format is little-endian 23 uint32 words: initial MXCSR, terms[15],
vector[3], expected output[3], expected full MXCSR. The reviewer corpus instead
stores vector before terms; its separately authored harness owns that format.
Model corpus: 11,656 cases per control mode, 186,496 records. There are 52 named
anchors, each tested with all 64 sticky seeds on disjoint output. Nine output
layouts cover exact/partial term, translation and vector overlaps. Every case
also has a second seeded disjoint run. Expected comparisons: 1,916,544.

Source NaN sign retention, destination priority, both signaling positions,
NaN-versus-denormal suppression, same/opposite infinities, overflow, exact tiny
results, signed cancellation and subtraction rounding have explicit anchors.
All34x34 selected subtraction operands are exercised independently for each
axis. Fraction finite checks use neighboring-encoding binary search and do
not claim independent flags. The broader reviewer oracle covers flags.
