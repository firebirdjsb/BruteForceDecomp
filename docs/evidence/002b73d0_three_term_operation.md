# 0x002b73d0 bounded three-term SSE operation proposal

Outside-tree proposal. Nothing here executes original machine code or asserts
Xbox ABI recovery, original-CPU equivalence, game linkage or byte-identical
rebuilding. The unchanged void(float*,float*,float*) source interface calls a
new address-specific native operation rather than invalid numeric casts of
packed bits and CONCAT44 on floating expressions. No existing helper changes.

## Identity and complete original evidence

Base main: 5223db822367d158ad98199f50541cd3a7bbb2fd.
Original body SHA-256:
D040EB9CFF629D1CE789332F83C6CC75F57B8E0DC023661597F400B4BE619636.
Complete original body is 100 bytes / 28 instructions, 0x002b73d0..0x002b7433.
Independent SHA-256 and Capstone 5.0.7 byte/boundary decoding matched the private
program-memory export, which has no uncovered bytes, flow/length overrides,
branches, calls, global dependencies or missing continuations. Original stored
FileBytes are unavailable: this is not complete-XBE reauthentication. The
private export must not be committed or supplied to CI.

At entry ESP+4 supplies terms, ESP+8 supplies vector, ESP+12 supplies output.
All are already pointer arguments in the current native draft. PUSH ECX makes
scratch that is overwritten with the terms pointer; final POP ECX therefore
returns that pointer, not incoming ECX. Final EAX=output, EDX=vector, RET12.
The original SSE operation does not modify integer flags. Guest registers,
flags, original stack aliases and cleanup are explicitly outside this native
operation, rather than silently claimed through its void return.

## Exact operation and lanes

Memory-form MOVSS clears upper96 before MOVHPS fills high64, yielding each triplet
as [first,+0,second,third]. Vector is [x,+0,y,z]. SHUFPS00, AA and FF broadcast
x, y and z respectively; no incoming XMM value is consumed. The original order:

1. Load vector with MOVSS/MOVHPS; load terms[0..2] as A likewise.
2. MOVAPS/SHUFPS00 vector into X; load terms[4..6] as B.
3. MULPS A,X, preserving A as destination for NaN priority.
4. MOVAPS/SHUFPSAA vector into Y; load terms[8..10] as C.
5. MULPS B,Y; SHUFPSFF vector in place into Z.
6. ADDPS A,B; MULPS C,Z; ADDPS A,C.
7. MOVSS then MOVHPS A lanes0,2,3 into exactly 12 output bytes.

The helper contains exactly these 20 SSE instructions. All reads precede both
stores. Each of three products and two sums rounds separately under MXCSR.
Do not commute NaN operands, reassociate, fuse operations, use C++ arithmetic
or replace floating bit-pattern transport with numeric integer conversion.

Lane 1 performs +0*x, +0*y, their sum, +0*z, final sum. Its result is not stored,
but it still contributes exception flags (including invalid from +0*Inf) and
must not be removed. Loads neither consume terms[3]/terms[7] nor read beyond
terms[10]. No x87 arithmetic, hidden floating-register input, guest-address
integer conversion or global memory mapping is introduced.

## Bounded initialized-native-memory contract

GNU/Clang x86-64 Linux SysV with native SSE and IEEE binary32 objects, no
fast-math. Terms points to at least 11 initialized live alignof(float)-aligned
float objects, vector and output to 3 each. Read offsets are 0/4, 16/20, 32/36 from
terms with dword/qword widths, and 0/4 from vector. Write offsets are 0/4 with
dword/qword widths. Every whole-float native overlap is supported since loads
finish before stores. Pointers need not fit 32 bits; no guest identity-mapping
contract is required. Caller owns object lifetime, initialization and extent.

All MXCSR exceptions must be masked. RC/DAZ/FTZ controls remain live and sticky
flags accumulate over all packed lanes. Native support for all 16 combinations
is checked. No spare x87 capacity is needed; tests retain FCW/FSW/FTW/FOP and
occupied 80-bit values even with a full stack. FIP/FDP, inactive/reserved bytes,
caller-saved SIMD transport and native EFLAGS are excluded. Also excluded are
original guest stack/argument/scratch aliases, 32-bit wrap, unaligned/invalid
objects, faults, MMIO, concurrent observers and unmasked exceptions. Modern
host NaN/DAZ/FTZ tests do not prove original Pentium-III behavior.

## Authored tests and source provenance

The helper and operation composition are new. Architecture, native state
capture and exact-transport gate machinery follow accepted 002b3e60 tests.
The production integer model explicitly reuses accepted scalar add/multiply
primitives verbatim; its packed composition, fixture set and harness are new.
It emits 130,368 records with 1,054,848 comparisons across 7 output layouts and
all 64 prior sticky flags on named anchors. Independently derived Fraction
finite-value checks supply 96 supplemental anchors, not independent flag proof.

The independent review worker supplied a separate Fraction model and native
callee-saved harness. It imports no production model. Its scalar Fraction
primitives follow the separately reviewed four-term model, with independently
decoded composition. It emits 8,560 records, 547,840 comparisons across all 16
modes/all 64 sticky flags, 23 named anchors and 512 reproducible random fixtures.
It also checks RBX/RBP/R12..R15 and exact input/output/sentinel bytes.

The newly authored native oracle uses compiler intrinsics for loads/shuffles
and separate native arithmetic instructions to preserve operand order. 347,520
comparisons cover all 16 modes, all 64 sticky seeds, complete 15x15 source/output
overlap-offset matrix, all alignments modulo16, full x87 tags/TOP and poisoned
incoming XMM lanes. Guard pages cover exact 44/12/12-byte live spans, read-only
inputs, poisoned unused terms slots and unchanged surrounding bytes.

The gate verifies frozen source/preimage/body/artifact digests, exact source
reversal, exact 20-op codegen and every allowed native pointer/stack-transport
instruction at Clang O0/O2. Native/integer/Fraction tests run at both levels.
Negative controls cover altered source, private body/metadata, inserted/omitted
operations, guest RET12, stack corruption, NaN operand swaps, all wrong shuffle
indices, premature stores, widened reads/stores, hidden-lane removal, unknown
incoming lanes, scalar/FMA/reassociated alternatives and broken capture restore.
Optional GCC ASan+UBSan covers all three suites, with leak detection disabled.
Inline-assembly memory accesses are not fully sanitizer-instrumented; explicit
page/sentinel and exact-codegen checks enforce those spans separately.

## Reproduction and integration boundary

Outside the tree, run tools/check_package.py --repo PATH_TO_CANONICAL_REPO
with clang++ on PATH. Once installed, tools/test_cpp_002b73d0_three_term_operation.py
--repo . resolves and tests the canonical source through source_layout.
Optional --program-record accepts a private single-function JSON for read-only
body validation. Never upload that record. Optional --sanitizers runs GCC.
Optional --corpus/--rational-corpus reuse generated binaries only after fixed
SHA-256 verification. Generated binaries are not package or Git artifacts.

Independent review must approve the final frozen hashes before integration.
The coordinator then installs reviewed artifacts using the manifest path map,
updates only this source inventory row, and runs the final
exact-tree full C++17 audit plus repository safety/provenance checks. This
package itself does not change canonical main or claim the audit advanced.
