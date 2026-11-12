# 0x003759c0 bounded four-term packed operation

This is an initialized native host memory operation and compiled-wrapper test,
not original Xbox execution, a recovered guest ABI, original-CPU conformance,
whole-game equivalence or a byte-identical rebuild. The historical four-argument
void signature, original address and original function-body digest are unchanged.
The source path is resolved by `tools/source_layout.py`; its graphics directory
does not establish gameplay meaning, a class, or a matrix convention.

## Complete original evidence

The private Ghidra program-memory record covers all 87 bytes and 22 instructions
from 0x003759c0 through 0x00375a16 inclusive. Body SHA-256:
8D9A9D11F07D18B9B216AB210508D8F0E36AF65D001346642B3F9B5FF5D914FA.
The canonical inventory hash matches. Validation reports no uncovered bytes,
flow/length overrides, branches, calls, globals or missing continuation.
Independent x86-32 objdump decoding agrees on every address, boundary and
operand. The gate freezes the complete private-record digest but publicly
retains only narrow opcode windows, hashes and authored code. The full body
and record are private, not commit artifacts. Stored original FileBytes are
absent: this does not reauthenticate the full hash-pinned original XBE
B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
No original machine code or uploaded script was executed; no user computer
was used.

With S denoting entry ESP, the original reads destination from S+4, vector
from S+8, scalar binary32 bits from S+12, and rows from S+16. There is no local
stack allocation. RET16 consumes four argument words. The numeric sequence is:

1. Memory MOVSS vector[0], then SHUFPS 0 broadcasts the initialized value to
   XMM2. MULPS XMM2,[rows+0] computes four independently rounded products.
2. Memory MOVSS vector[1] then SHUFPS 0 forms XMM1. MULPS XMM1,[rows+16],
   then ADDPS XMM2,XMM1 adds the second rounded product to the accumulator.
3. Memory MOVSS vector[2] then SHUFPS 0 forms XMM1. MULPS XMM1,[rows+32],
   then ADDPS XMM2,XMM1 adds the third rounded product.
4. Memory MOVSS the explicit scalar argument then SHUFPS 0 forms XMM1.
   MULPS XMM1,[rows+48], then ADDPS XMM2,XMM1 adds the fourth rounded product.
5. MOVLPS stores accumulator lanes 0 and 1, exactly eight bytes. SHUFPS 2
   produces [lane2,lane0,lane0,lane0]; MOVSS stores its low lane at output+8.

Every source read precedes both stores. All sixteen row floats are loaded;
none is padding for this instruction sequence. The coefficient is the SSE
MULPS destination and rows the source, which matters for NaN payload priority.
ADDPS keeps the cumulative sum as its destination. The seven arithmetic
instructions must not be fused, widened, commuted or reassociated. Lane3 is
not stored but all its arithmetic contributes observable MXCSR sticky flags.
Memory MOVSS clears the upper lanes before broadcast, so incoming SIMD state
is not an input. Packed-memory MULPS requires 16-byte row alignment in the
bounded native implementation.

Original final EAX is destination, ECX is rows, XMM1 holds the fourth products,
and XMM2 contains [result2,result0,result0,result0]. Other guest register
transport, ESP/RET16, guest EFLAGS and guest return-stack aliasing are outside
this native interface. These original instructions do not modify integer
arithmetic flags. No hidden numeric input or new host argument is invented.

## Bounded host contract

GNU/Clang x86-64 Linux SysV, native SSE, and IEEE binary32 float are required.
Destination covers at least twelve writable initialized bytes and is aligned
to eight bytes, reflecting the preserved `undefined8*` signature. The helper
uses that pointer only as a raw assembly memory address, not a C++ uint64 lvalue.
Vector covers three live float objects aligned to alignof(float); rows covers
sixteen live float objects aligned to sixteen bytes. Scalar is an initialized
by-value binary32 argument. All whole-float overlaps among these spans that
meet their alignment requirements are permitted, including output overlapping
rows or vector and the inputs overlapping each other. The scalar's private
compiler spill cannot alias caller-provided storage.

All MXCSR exceptions must be masked. RC, DAZ and FTZ remain live; status bits
accumulate without clearing. There is no C++ floating arithmetic or x87
operation, and no free x87 stack slot is needed. FIP/FDP, empty x87 payloads,
reserved/padding bytes and SIMD output-register transport are not claimed.
Guest32 address wrapping/mapping, original argument/return-stack overlap,
arbitrary unaligned pointers, invalid memory, faults, MMIO, concurrency,
unmasked traps and original-CPU equivalence remain excluded. Unsupported
platform/types and fast math fail compilation.

The native SysV wrapper receives scalar in XMM0 and the three pointers in
RDI, RSI and RDX. O0 copies initialized scalar bits through private float stack
slots; O2 spills them once. MOVSS copies do not quiet SNaNs or round them. The
codegen gate symbolically tracks every integer/scalar copy, byte-level spill
overlap and stack base before requiring exactly eighteen candidate-specific
operations and one ordinary native RET. It rejects calls, x87, extra floating
arithmetic, changed pointer provenance, uninitialized scalar storage, writes
outside private native stack storage and changes to callee-saved registers.

## Independent model and anchors

The unchanged hash-pinned integer binary32 add/multiply primitives from
`tests/generate_002b3e60_multiply_add_integer_model.py` are reused as a method,
not as original evidence for this function. The new candidate-specific
composition follows the freshly decoded four products and three left-associated
adds. Integer multiplication uses exact units of 2^-298 and addition units of
2^-149; rounding, NaN selection and exception flags are explicit. It uses no
host floating arithmetic, SSE/x87 or native result lookup. Each operation on
all four lanes contributes flags, although only lanes 0,1,2 are expected stores.

The integer corpus contains 213,728 records over all sixteen RC/DAZ/FTZ combinations:
all 34x34 edge pairs placed in each product stage, edge pairs placed in each
of the three sum stages, fourteen named anchors and 4,096 deterministic random
20-word inputs. Each runs all sixty-four sticky seeds, totaling 13,678,592
comparisons per build. Full output bits, full MXCSR, all input bytes and adjacent
sentinels are checked. This is finite-corpus validation, not exhaustive proof.

Nearest-mode, DAZ/FTZ-off anchors include:

- Hidden invalid: coefficients [1,1,1,+0], first three rows all 1, fourth row
  [1,1,1,+Inf]. Visible results are [3,3,3], and IE comes only from lane3's
  +0*Inf. Dropping the fourth lane changes status even with correct stores.
- Hidden overflow: the fourth coefficient is max finite, fourth row
  [0,0,0,2]; visible results stay [3,3,3], but lane3 sets OE|PE.
- Hidden add invalid: the first two rows have lane3 +Inf and -Inf and zero
  visible lanes. Only the hidden ADDPS sets IE.
- Fourth row hidden SNaN and denormal cases: lane3 alone contains 7f800123 or
  00000001; both remain status-relevant despite never being stored.
- Nonfusion: first term -1, second term
  3f800001 * 3f7ffffe = (1+2^-23)*(1-2^-23). MULPS rounds to +1 with PE,
  then adding to -1 yields +0. FMA yields a8800000 (-2^-46).
- Association: ((2^24+1)-2^24)+1 yields 1 with PE, not 2.
- Multiplication and fourth-scalar qNaN anchors separately require the
  coefficient's NaN payload rather than the row's. The addition anchor
  requires the accumulator's payload rather than the later product's.
- Signed zeros and two tininess boundaries distinguish precision rounding,
  FTZ and DAZ. Native SSE conventions in the shared integer primitives are
  validated here, not asserted for every CPU or the original Xbox processor.

A separately authored reviewer oracle uses Python Fraction rational arithmetic
and its own encode/rounding path with no import from the integer model. Its
6,448 records cover nineteen distinct anchors and 384 seeded random edge/raw
inputs across the sixteen control modes. The accompanying independent native
harness performs 412,672 sticky-seeded comparisons and sets sentinels in all
six native callee-saved registers (RBX, RBP, R12-R15) before calling the canonical
wrapper. Each must survive. This pair is also hash-pinned and run by the gate.

## Native aliases, floating state and guards

An independently structured scalar-lane SSE reference snapshots sources,
computes all four lanes with MULSS/ADDSS and stores only three results. The
same numerical operation is deliberately not implemented with the helper's
packed instruction block. Since exceptions are masked, per-lane evaluation
has the same accumulated sticky flags; native instruction timing is not claimed.
The corpus contains 1,832,960 comparisons, including all control combinations,
all sticky seeds, twenty-two edge bit patterns, output starts across and around
the whole row span, both output alignments modulo16, all vector alignments,
input/output aliasing, disjoint storage, every x87 TOP/tag pair and poisoned
incoming XMM lanes. FCW, FSW, FTW, FOP and occupied binary80 payloads are compared.
The authored capture bridge calls the complete compiled canonical wrapper,
snapshots immediately and restores caller floating state, RBX and native
stack alignment. No original executable bytes are used.

Three independent guarded mappings put vector12 and rows64 at both exact page
boundaries. Vector and rows pages become read-only before the call. Destination
is eight-byte aligned; its upper-edge test reserves sixteen bytes and requires
the final four-byte sentinel to remain unchanged. Thus the upper destination
boundary is a twelve-byte store check plus four-byte sentinel, not a claim of
an exactly twelve-byte upper guard. Both destination starts and all other page
bytes are checked. Placement new establishes live float-array objects.
Sanitizers cannot instrument inline assembly; guards, sentinels and exact
instruction checking additionally constrain its memory accesses.

The public gate checks artifact hashes, historical source preimage and exact
reversal, narrow windows, old float-CONCAT rejection, unsupported-platform and
fast-math failures, O0/O2 codegen, all three complete corpora, named anchors and
behavior/codegen mutations. Mutations alter each product, remove an add, change
pointers/broadcast/output lane, reverse NaN priority, suppress the hidden lane,
widen reads/stores, write before final reads, fuse operations, or skip caller
state restoration. Separate source, byte, CFG, scalar-spill and return/stack
mutations must also fail. Optional private validation checks every original
byte and frozen instruction/CFG record. GCC14 O2 ASan+UBSan runs all three corpora
with detect_leaks=0; LeakSanitizer remains untested.

Integration requires a fresh exact-tree inventory audit and independent review.
A green bounded operation gate never establishes guest ABI, full-game linkage,
byte-identical compilation or original-runtime fidelity.
