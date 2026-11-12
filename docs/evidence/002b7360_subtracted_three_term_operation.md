# 0x002b7360 bounded subtracted three-term SSE operation

Outside-tree proposal. No original machine code is executed. This does not claim
Xbox ABI recovery, original-CPU equivalence, game linkage or a byte-identical
rebuild. The unchanged void(float*,float*,float*) source interface delegates to
a new address-specific native operation. Existing helpers remain unchanged.

## Identity and evidence

Base main: a8672a38c4079209c46d7d39c15d95031c800231.
Original body SHA-256:
8951BF145B71ABAD31FE514396FBA371A104DDBC96CD73C9B6406736AF29284B.
Complete original body: 112 bytes, 31 instructions, 0x002b7360..0x002b73cf.
Independent SHA-256 and Capstone 5.0.7 decoding matched the private program-memory
export: no uncovered bytes, branches, calls, globals, flow/length overrides or
missing continuations. Private stored FileBytes are unavailable; this is not
full-XBE reauthentication. Private records must not be committed or sent to CI.
The frozen current source/preimage matches the failure queue's source digest;
a fresh strict C++17 compile reproduces its invalid floating CONCAT44.

At entry, ESP+4 is terms, ESP+8 vector, ESP+12 output. PUSH ECX allocates scratch,
then terms overwrites that scratch. Final POP ECX therefore returns terms,
not incoming ECX. Final EAX=output, EDX=vector, RET12. Integer flags are unchanged
by the original instructions. These guest registers, flags, stack aliases and
cleanup are not claimed by this void native operation.

## Exact operation

Memory-form MOVSS clears upper 96 and MOVHPS fills high 64: each loaded triplet
is [first,+0,second,third]. No incoming XMM value is consumed. Preserve precisely:

1. Load translation at terms+48/+52; vector at +0/+4; first term at +0/+4.
2. SUBPS vector,translation, preserving vector as destination and NaN priority.
3. Copy/broadcast difference lane 0; load second term at terms+16/+20; MULPS A,X.
4. Copy/broadcast difference lane 2; MULPS B,Y; only now load third term +32/+36.
5. Broadcast difference lane 3; ADDPS A,B; MULPS C,Z; ADDPS A,C.
6. MOVSS then MOVHPS store lanes 0, 2, 3 into exactly 12 output bytes.

This is exactly 23 SSE instructions. All loads precede stores. Subtraction,
three products and two sums round separately under live MXCSR. Never commute
NaN operands, reassociate, fuse, or numerically convert transported float bits.
The unused difference lane is +0 minus +0 (negative zero under round-down).
It is not one of the broadcast lanes. The unused product/sum lane still performs
zero times each visible difference and contributes exceptions, such as invalid
for infinity, even though it is not stored. Gaps at float indices 3, 7, 11 are unread.

## Bounded initialized-native-memory contract

GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32; no fast-math. Terms
covers fifteen live alignof(float)-aligned floats, vector/output three each.
Read dword/qword offsets: terms 0/4, 16/20, 32/36, 48/52; vector 0/4.
Write dword/qword offsets: output 0/4. All whole-float native overlaps are allowed;
all input reads finish before writes. Pointers need not fit 32 bits. Callers own
object lifetime, initialization and extent. No guest address mapping is implied.

All MXCSR exceptions must be masked. All16 RC/DAZ/FTZ modes and accumulated
sticky flags remain live. No x87 operations or spare stack capacity are needed.
Tests preserve FCW/FSW/FTW/FOP and occupied 80-bit values, including a full stack.
Exclude FIP/FDP, inactive/reserved bytes, caller-saved SIMD transport, native
EFLAGS, original guest stack/argument/scratch aliases, guest wrap, invalid or
unaligned objects, faults, MMIO, concurrent observers and unmasked exceptions.
Modern host NaN/DAZ/FTZ agreement is not original Pentium-III equivalence.

## Tests and independence

Native capture and gate architecture are adapted from reviewed 002b73d0 tests.
The exact operation graph and new subtraction/memory cases are authored here.
The native oracle uses compiler loads/shuffles and separate ordered arithmetic
instructions, not original bytes. It performs 539,008 comparisons across all 16
modes, all 64 sticky seeds, all 19x19 source/output overlap offsets, all float
alignments modulo16, complete x87 tags/TOP, poisoned incoming XMM registers,
read-only inputs, poisoned unread gaps and guarded exact 60/12/12-byte spans.

The integer oracle explicitly reuses the reviewed integer-unit add/multiply
primitives unchanged. Its subtraction classifies original operands before
non-NaN source sign inversion. NaNs retain their original sign/payload, prioritize
destination, quiet signaling values and suppress denormal reporting; either
signaling operand sets invalid. New graph/corpus covers 186,496 records and
1,916,544 comparisons across 9 output layouts. All34x34 selected subtraction
operand pairings are covered per axis. All64 sticky seeds cover 52 named anchors;
112 supplemental finite Fraction checks are not independent exception proof.

A separate reviewer supplied the rational oracle and callee-saved harness.
Its scalar Fraction encoding follows independently reviewed 002b73d0 primitives;
new subtraction, graph and fixtures are independently authored without production
imports. Its 52,432 records give 3,355,648 comparisons per build across all 16 modes,
all 64 sticky seeds, 65 named anchors, 30x30 subtraction pairs per axis and 512 seeded
random cases. It checks all six SysV callee-saved GPRs and exact sentinel/input
bytes. Provenance is disclosed rather than claiming all reused code is new.

Gate checks pin source/preimage/body/record/artifact hashes and exact reversal.
Both Clang O0/O2 builds must pass exact 23-operation codegen and every allowed
native argument/stack transport, native/integer/rational suites and the unstored
lane invalid anchor. Mutations cover source/body/flow metadata, NaN operand
swaps, incorrect subtraction and NaN sign inversion, shuffled lanes, premature
stores, widened spans, incoming lane dependence, hidden lane removal, scalar,
FMA, reassociated alternatives and broken capture restoration. A codegen-only
mutation verifies third-term load placement without falsely claiming that load
movement must change behavior inside the bounded contract.

A fourth, reviewer-only isolated scalar SUBSS suite tests 79,936 records and
5,115,904 all-sticky comparisons per build. It validates the independent Fraction
subtraction results/status directly before later packed arithmetic can mask
flags. ADD-for-SUB and source-sign-flip-before-ADD negative controls separately
fail this harness. It is not another canonical-wrapper test and executes no
original bytes.

Optional GCC 14 ASan+UBSan runs all four suites, with leak detection disabled.
Inline assembly memory accesses are not fully sanitizer-instrumented; guards,
sentinels and exact codegen enforce spans separately. No Clang sanitizer or
LeakSanitizer claim is made.

## Reproduce and integrate

With clang++ on PATH, run tools/check_package.py --repo PATH_TO_REPO.
Add --program-record PRIVATE_SINGLE_RECORD_JSON for read-only private evidence
checks; never upload that file. Add --sanitizers for GCC 14 ASan+UBSan.
--corpus, --rational-corpus and --scalar-corpus reuse generated data only after
hash verification.
Generated binaries/corpora are not package or Git artifacts.

Independent review must approve the frozen hashes before integration. The
coordinator alone installs mapped files, updates only this inventory row and
runs exact-tree full C++17 audit, safety/provenance checks and additive CI.
See SUGGESTED_CI.md. This package does not edit canonical main or claim its
syntax count advanced.
