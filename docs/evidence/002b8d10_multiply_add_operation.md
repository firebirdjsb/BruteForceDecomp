# 0x002b8d10 bounded in-place packed multiply/add

This is an initialized native host operation and compiled-wrapper test, not
original Xbox execution, recovered guest ABI, whole-game equivalence,
original-CPU conformance or a byte-identical rebuild. The canonical three-argument
void signature and original body digest are unchanged.

## Complete original evidence

The immutable private Ghidra program-memory record covers all 77 bytes and 20
instructions, from 0x002b8d10 through 0x002b8d5c inclusive. Body SHA-256:
51CED97F607CBAA8833A6E2C7597C524B12F22852A55832D95D6C575CA7AC49D.
The canonical inventory hash matches. There are no uncovered bytes, instruction
or flow overrides, branches, calls, globals or missing continuation. Independent
x86-32 objdump decoding agrees on every address, length and operand. The public
gate retains only narrow opcode windows, hashes and authored code. The private
full body and record are never committed. Original FileBytes are absent, so
this does not reauthenticate the full hash-pinned XBE. No original machine code
or uploaded script was executed, and no user computer was used.

With S denoting entry ESP, inputs are destination at S+4, vector at S+8 and
binary32 scalar at S+12. SUB ESP,8 creates scratch; the scalar word is copied
through EAX to S-4, and destination through ECX to S-8. SSE operations are:

1. MOVSS-memory scalar into XMM3, clearing the upper 96 bits.
2. MOVSS-memory vector[0] and MOVHPS vector[1..2] form XMM2=[v0,+0,v1,v2].
3. SHUFPS 0 broadcasts the scalar into all four XMM3 lanes.
4. MOVSS-memory destination[0] and MOVHPS destination[1..2] form
   XMM1=[d0,+0,d1,d2].
5. MULPS XMM2,XMM3 rounds each product to binary32 under live MXCSR.
6. ADDPS XMM1,XMM2 adds original destination to the rounded product, in that
   destination/source operand order.
7. EAX reloads saved destination. MOVSS and MOVHPS store result lanes 0,2,3 to
   exactly the twelve destination bytes. ADD ESP,8 removes scratch; RET 12
   consumes the three argument words.

All scalar, vector and destination reads precede both stores. Multiplication
and addition must not be fused, widened, commuted or replaced with scalar SSE.
The unstored lane performs +0*scalar followed by +0+product. For scalar +Inf it
raises invalid even when all three stored results are +Inf. Both operations'
NaN operand order and payload preference are observable.

Original final EAX and ECX contain destination, XMM1 the sums, XMM2 the rounded
products and XMM3 the broadcast scalar. Unlike the 0x002b3e60 PUSH/POP twin,
this function's SUB/ADD ESP change integer EFLAGS; final arithmetic flags are
from ADD ESP,8. None of these guest register, EFLAGS, stack or RET12 outputs is
implemented or claimed by this bounded native interface. Original inputs or
outputs aliasing its argument/scratch/return stack slots remain excluded.

## Bounded host contract

GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 float are required.
Destination and vector each cover three live float objects aligned to
alignof(float), with every whole-float overlap permitted: exact alias, both
partial directions and disjoint buffers. Scalar is an initialized by-value
binary32 argument. Compiler-private scalar/scratch storage cannot alias either
buffer. Guest32 address wrapping/mapping, arbitrary byte-unaligned objects,
invalid memory, faults, MMIO and concurrent observation are excluded.

All MXCSR exceptions must be masked. Existing RC, DAZ and FTZ control both
packed operations; sticky flags accumulate. Tests require all sixteen control
combinations. No x87 operation appears and no free x87 stack slot is required.
Tests check FCW, FSW, FTW, FOP and occupied binary80 payloads. FIP/FDP, empty
payloads, reserved/padding bytes and SIMD register transport are excluded.
Unsupported platform/types and fast math fail compilation.

The host ABI supplies scalar in XMM0. At O0 the compiler copies it through
private binary32 stack slots; at O2 it spills it once. The gate tracks every
copy from initialized incoming XMM0 to the scalar memory operand, including
byte overlap, all integer writes and symbolic stack bases. MOVSS copies neither
round nor quiet SNaNs. Both native pointers are traced to the original argument
registers, and destination reads and stores must use the same operand. Added
calls, uninitialized spills, floating arithmetic transport, x87, altered
returns and writes to callee-saved registers are rejected.

## Independent model and exact anchors

The unchanged, hash-pinned generator
`tests/generate_002b3e60_multiply_add_integer_model.py` is shared only because
complete original-byte review independently established the same packed
arithmetic. It implements multiplication in integer units of 2^-298 and
addition in units of 2^-149, rounding the product first. It uses no host floating
arithmetic, SSE/x87, math-library calls or native reference lookups. The new
candidate-specific harness initializes destination from each model's base
words, then calls the complete canonical three-argument wrapper. All four
packed lanes contribute expected flags. This tests the in-place operation,
not the separate four-argument function.

Nearest-mode, DAZ/FTZ-off anchors, expressed as binary32 hex words:

- Nonfused: d=bf800000, v=3f800001, scalar=3f7ffffe. The exact product is
  1-2^-46 and rounds to 1 with PE; the stored sum is +0. FMA would return
  a8800000 (-2^-46), without PE.
- Hidden invalid: all d/v words=3f800000, scalar=7f800000. All stored values
  are +Inf; IE comes solely from the unstored +0*Inf lane.
- Multiplication NaNs: zero d, v=[7fc00001,ffc12345,7fc54321], scalar=ffc6789a
  retain the vector NaN payloads without IE.
- Tininess: 00800000*3f7fffff rounds to 00800000 with UE|PE (0x30).
  007fffff*3f800001 rounds to 00800000 with DE|PE (0x22), without UE.
  The model classifies tininess using 24-bit precision rounding with an
  unbounded exponent, while computing output directly at binary32's quantum.
  There is no double rounding. FTZ flushes tiny nonzero products, including
  exact subnormals, to signed zero with UE|PE. These are native SSE conventions
  validated here, not universal CPU or original Xbox claims.

The 731,488 records cover all 34^3 edge triples, two edge-pair families, six
named anchors and 4,096 deterministic random seven-word inputs in every
control mode. Each runs every sticky mask, totaling 46,815,232 comparisons.
Outputs, full MXCSR, vector preservation and adjacent sentinels are checked.

## Native overlap, state and guards

An independently structured intrinsic/SSE native reference executes ordered
MULPS then ADDPS. The 638,976 comparisons cover sixteen control modes, sixty-four
sticky masks, twenty-two edge words, vector offsets -3 through +3 floats,
four alignments modulo sixteen, exact alias, partial overlap, disjoint buffers,
and every x87 TOP/tag combination with seeded condition/sticky state. Incoming
XMM lanes are poisoned with SNaNs; XMM0 receives the initialized scalar after
seed restore. The authored SysV bridge calls the full compiled wrapper,
snapshots its resulting environment immediately and restores caller state,
RBX and native stack alignment. No original executable bytes are used.

Two independent three-page mappings guard the exact twelve-byte destination
and vector spans at both boundaries. Vector pages are read-only. Placement
new creates live float[3] arrays; every other page byte is a sentinel. Together
with overlap cases, this checks read-before-write sequencing and absence of
extra reads or writes. Native sanitizers cannot instrument inline assembly,
so its memory bounds additionally rely on these guards and sentinels.

The public gate verifies immutable artifact hashes, historical source preimage,
exact reversal, narrow opcode windows, unsupported-platform/fast-math failure,
and Clang C++17 O0/O2 codegen. It permits exactly ten ordered helper operations
and an ordinary native RET. The historical float-CONCAT draft must still fail
at both optimization settings. The optional private check also verifies every
body byte, instruction span, CFG field and a frozen complete-record digest.

Negative controls remove either arithmetic operation, reverse either NaN
order, break broadcast, preserve poisoned incoming lanes, widen a read,
interleave scalar loads/stores, substitute FMA, suppress only the unstored
multiply lane or omit capture restoration. The exact nonfused and hidden-lane
anchors reject those specific mutations independently. Additional corruptions
exercise return cleanup, pointer transport, scalar initialization, stack writes,
source/windows and private bytes/CFG metadata. GCC O2 ASan+UBSan runs both full
corpora with LeakSanitizer disabled and untested.

Finite-corpus native results are not exhaustive binary32 proof. Full-game
linkage, original stack/register ABI, guest memory mapping, 32-bit wrapping,
unmasked exceptions, original CPU conformance and Xbox runtime equivalence
remain unverified. Exact-tree syntax coverage is a separate integration audit.
