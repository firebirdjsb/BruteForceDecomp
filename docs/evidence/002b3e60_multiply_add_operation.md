# 0x002b3e60 bounded packed multiply/add operation

This is a native host memory operation and compiled-wrapper test, not original
Xbox execution, recovered guest ABI, whole-game equivalence, original-CPU
conformance or a byte-identical rebuild. The adjacent 0x002b8d10 is not changed.

## Original evidence and complete operation

The private immutable Ghidra program-memory record covers all 65 bytes and 18
instructions at 0x002b3e60, ending at 0x002b3ea0 inclusive. Body SHA-256:
0C046A8D9C3832CBC34F31651612C806541EAB290BA348CD2B3EE787BA9EFDAF.
The canonical hash matches, with no uncovered bytes, instruction/flow overrides,
branches, calls, global data dependencies or missing continuation. Independent
x86-32 decoding agrees on all instruction addresses, lengths and operations.
Only small opcode windows, hashes and authored code belong in Git. The private
body record must not be committed. Original FileBytes are absent, so the full
XBE has not been reauthenticated. No original machine code or uploaded script
was executed; no user computer or local resource was accessed.

At original entry ESP+4 is destination, +8 is base, +12 is vector and +16 is the
binary32 scalar. PUSH ECX allocates scratch, which is overwritten by destination.
The original operation is exactly:

1. MOVSS-memory scalar into XMM3, clearing its upper 96 bits.
2. MOVSS-memory vector[0] into XMM2, then MOVHPS vector[1..2] into its high 64
   bits. XMM2 is [v0,+0,v1,v2].
3. SHUFPS 0 broadcasts scalar to all four XMM3 lanes.
4. MOVSS-memory base[0] and MOVHPS base[1..2] form XMM1=[b0,+0,b1,b2].
5. MULPS XMM2,XMM3 rounds each product to binary32 under the current MXCSR.
6. ADDPS XMM1,XMM2 adds base to the rounded products, in that operand order.
7. MOVSS and MOVHPS store result lanes 0,2,3 to exactly 12 destination bytes.

All reads precede both stores. There is no FMA, binary64/x87 intermediate,
scalar arithmetic substitution, incoming XMM dependency or extra narrowing.
The unstored lane performs +0*scalar followed by +0+product. It must participate:
with scalar +Inf it raises invalid even if all three stored results are +Inf.
NaN operand order must not be commuted in either multiplication or addition.

Original EAX and final ECX both contain destination: POP ECX consumes the
_overwritten_ scratch slot, so it does not restore incoming ECX. Original XMM1
contains the result, XMM2 the products and XMM3 the broadcast scalar; RET 16
consumes all four argument words. These guest outputs and transport are not
implemented by the unchanged void native C++ interface. The original
instructions do not alter integer EFLAGS, but native EFLAGS are not promised.

## Bounded host contract

GNU/Clang x86-64 Linux SysV, IEEE binary32 float and native SSE are required.
Destination, base and vector each cover three live float objects aligned to
alignof(float). Scalar is an initialized by-value binary32 parameter. All
whole-float overlaps among the three buffers are permitted, including exact
alias and both directions. Compiler-private scalar/scratch storage must not
alias the buffers. Guest pointers aliasing original argument/scratch/return
stack slots, 32-bit address wrapping, arbitrary byte-unaligned objects, invalid
memory, faults, MMIO and concurrent observers are excluded.

All MXCSR exceptions must be masked. Existing RC, DAZ and FTZ govern both packed
operations, and exception flags accumulate. Tests require support for all 16
RC/DAZ/FTZ combinations. No x87 operation appears, so no free x87 stack slots
are required. Native tests compare FCW, FSW, FTW, FOP and occupied binary80
payloads; FIP/FDP, empty payloads, padding/reserved fields and SIMD-register
transport are excluded. Unsupported platforms/types and fast math are rejected.

The native ABI brings scalar in XMM0. At O0 the compiler copies it through
private binary32 stack slots; at O2 it spills it once. These MOVSS copies are
bitwise and do not quiet SNaNs or perform arithmetic. The gate traces all such
copies from initialized incoming XMM0 to the exact memory operand consumed by
the helper, tracking integer stack writes, byte overlap, stack bases and all
three pointer arguments. There can be no uninitialized spill, x87 transport, scalar floating
arithmetic or added helper call. Incoming XMM0 is deliberately not claimed as
preserved native state.

## Independent models and exact anchors

The integer model derives finite binary32 multiplication from integer magnitudes
in units of 2^-149, giving an exact product in units of 2^-298. It rounds that
product before independently adding base, using the reviewed integer-addition
method. The generator performs no host floating arithmetic, calls to SSE/x87,
math-library calls or native reference lookups. NaN priority, invalid, DE/DAZ,
FTZ and directed rounding are explicit host SSE conventions. All four lanes,
including the unstored lane, contribute flags.

Important nearest-rounding, DAZ/FTZ-off anchors use hexadecimal binary32 words:

- Nonfused: base bf800000, vector 3f800001, scalar 3f7ffffe. The product is
  exactly 1-2^-46, rounded to 1 with PE. Addition yields +0. A fused operation
  instead yields exactly a8800000 (-2^-46), without PE.
- Hidden invalid: base and vector all 3f800000, scalar 7f800000. Visible results
  are all +Inf; IE comes solely from the unstored +0*Inf lane.
- Multiplication NaNs: zero base, vector [7fc00001,ffc12345,7fc54321] and scalar
  ffc6789a retain the three vector NaN payloads, with no invalid flag.
- Tininess: 00800000*3f7fffff rounds to 00800000 but sets UE|PE (0x30).
  Conversely 007fffff*3f800001 rounds to 00800000 with DE|PE (0x22), not UE.
  To classify tiny, the model rounds precision to 24 significant bits with an
  unbounded exponent; actual output is rounded directly to binary32's quantum,
  never double-rounded. FTZ flushes a tiny nonzero product, including exact
  subnormals, to signed zero with UE|PE. Native probes and independent review
  exercise these boundary conventions; they are not universal CPU claims.

The 731,488 generated records include every 34^3 edge triple, two edge-pair
families, 4,096 deterministic random seven-word inputs and six named anchors,
across all 16 control modes. Each record runs all 64 incoming sticky masks,
for 46,815,232 comparisons of outputs and complete MXCSR. Source buffers and
adjacent sentinels must remain unchanged.

## Compiled wrapper, state, guards and mutation controls

The native reference independently builds operands with SSE intrinsics and
uses explicitly ordered MULPS and ADDPS. Its 4,423,680 comparisons cover all
16 control modes, 64 sticky seeds, 22 edge words, independent base/vector
relative offsets -3 through +3 floats, four alignments modulo 16, exact alias,
disjoint buffers, every x87 TOP/tag combination and seeded condition/sticky
state. Incoming XMM lanes are poisoned with SNaNs, except XMM0 is explicitly
loaded with the by-value scalar after installing the seed.

An authored SysV assembly bridge calls the full compiled canonical wrapper,
saves the result environment immediately, then restores its caller's floating
state, RBX and stack alignment. No original bytes are executed. Separate
three-page mappings guard each exact 12-byte span at both boundaries; base and
vector pages are read-only, destination and source sentinels cover all other
page bytes. Placement new establishes complete float[3] arrays before bit copies.

The public gate checks frozen artifact/source hashes, the historical preimage
and exact source reversal, narrow opcode windows, unsupported platform/fast
math negatives, and Clang C++17 O0/O2 codegen. It requires exactly the ten
ordered helper operations, initialized scalar transport and one native RET
without immediate cleanup. The original unresolved float-CONCAT failure must
still fail at O0/O2. Optional private full-body checking is not needed by CI.

Behavior and codegen mutations remove multiplication or addition, reverse each
operation's NaN order, break broadcast, retain poisoned upper lanes, widen a
read, interleave scalar reads/stores, replace nonfused arithmetic by FMA, zero only the unstored scalar lane, and
remove caller-state restoration. Fixed one-record anchors independently reject
the FMA and hidden-lane mutations. Missing returns, guest RET16, uninitialized
scalar copies, unexpected SIMD/x87/calls and source/opcode corruption are also
rejected. Optional --sanitizers runs GCC O2 with ASan+UBSan; LeakSanitizer is
disabled and untested. Sanitizers cover compiler-visible accesses; inline
assembly memory bounds additionally rely on guarded spans and sentinels.

This is finite corpus evidence, not exhaustive binary32 proof or original
Pentium-III conformance. Full-game linkage, guest memory mapping, caller ABI,
original runtime semantics and exact-tree syntax coverage remain separate.
