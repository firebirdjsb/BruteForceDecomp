# 0x002ccc10 bounded packed difference/products

This is an initialized native host operation and compiled-wrapper test, not
original Xbox execution, recovered guest ABI, whole-game equivalence,
original-CPU conformance or a byte-identical rebuild. The canonical four-pointer
void signature and original body digest are unchanged. No gameplay meaning is
assigned to the pointers.

## Complete original evidence

The private indexed Ghidra program-memory record covers all 95 bytes and 27
instructions, from 0x002ccc10 through 0x002ccc6e inclusive. Body SHA-256:
75A9A41869FF7B7C222C6F80344F3B6D42D3271ECBF3C1924643EBC9EBF61C05.
Its canonical inventory hash matches. Validation records no uncovered bytes,
instruction or flow overrides, branches, calls, globals or missing continuation.
Independent x86-32 objdump decoding agrees on every address, length and operand.
The public gate retains narrow opcode windows, hashes and authored code only.
The private full body and record must never be committed. Original FileBytes
are absent, so this does not reauthenticate the full hash-pinned XBE. No original
machine code or uploaded script is executed, and no user computer is used.

With S denoting entry ESP, inputs are destination at S+4, base at S+8, third
at S+12 and fourth at S+16. PUSH ECX allocates a word which is immediately
overwritten with destination. It does NOT preserve the original ECX value.
MOVSS-memory clears the upper 96 bits; MOVHPS then replaces lanes 2 and 3.
Each three-component input is packed as [x,+0,y,z]. No incoming XMM lane is read.

The eighteen-operation floating/memory subsequence is exact:

1. Load base[0] and base[1..2] into XMM3.
2. Load fourth[0] and fourth[1..2] into XMM1.
3. Load third[0] into XMM2.
4. SUBPS XMM1,XMM3 forms U=fourth-base, with binary32 rounding.
5. Load third[1..2] into XMM2; SUBPS XMM2,XMM3 forms V=third-base.
6. Copy U to XMM0, then SHUFPS 0x32 forms [u1,u0,u2,u0].
7. SHUFPS 0x83 of V forms [v2,v0,v0,v1]. MULPS produces
   L=[u1*v2,u0*v0,u2*v0,u0*v1], rounding every product.
8. SHUFPS 0x83 of U forms [u2,u0,u0,u1]. A second SHUFPS 0x83 of
   the already shuffled V forms [v1,v2,v2,v0]. MULPS produces
   R=[u2*v1,u0*v2,u0*v2,u1*v0], rounding every product.
9. SUBPS XMM0,XMM1 produces L-R in that destination/source order.
10. MOVSS then MOVHPS store lanes 0,2,3 to exactly twelve destination bytes.

Here u0,u1,u2 and v0,v1,v2 denote x,y,z components AFTER rounded subtraction,
not the four physical lane indices. All four lanes participate in each SUBPS
and MULPS. The unstored final lane is u0*v0-u0*v2, not a zero padding operation.
It independently contributes invalid, overflow, underflow and precision status.
Initial padding subtraction is +0-(+0), negative zero only under RC-down; those
padding results are discarded by the later shuffles. NaN classification occurs
before source sign inversion: SUBPS preserves the selected NaN's original sign
and payload, quiets it and raises invalid for either SNaN. NaNs take priority
over denormal-operand reporting. Destination NaN wins when both inputs are NaN.
No packed arithmetic may be scalarized, commuted, widened, fused or reordered.

All input reads occur before both stores. All three pointers can overlap each
other and the destination at whole-float boundaries. The original final EAX
and ECX are destination, EDX is fourth, XMM0 is L-R, XMM1 is R, XMM2 is the
second shuffled V and XMM3 is base. EBX/ESI/EDI/EBP, x87 and integer EFLAGS
are unchanged by the original body. POP ECX consumes scratch; RET 16 removes
four argument words. These original register outputs, EFLAGS, guest32 stack,
argument/scratch/return-slot aliasing and return transport are not implemented
or claimed by the native interface.

## Bounded host contract

GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 float are required.
Each pointer covers three live float objects aligned to alignof(float).
Every whole-float overlap is permitted, including all four equal, independent
partial overlap in either direction, source/source aliasing and disjoint spans.
Guest32 mapping/address wrapping, arbitrary byte-misaligned objects, invalid
memory, faults, MMIO and concurrent observation are excluded.

All MXCSR exceptions must be masked. All sixteen combinations of RC, DAZ and
FTZ are tested; all sixty-four incoming sticky masks must accumulate without
clearing or changing controls. Neither helper nor wrapper uses x87. Tests check
FCW, FSW, FTW, FOP and occupied binary80 payloads for every TOP/tag combination.
FIP/FDP, empty register payloads, reserved/padding bytes and SIMD register
transport are excluded. No free x87 stack slot is required. Unsupported
platform/types and fast math fail compilation.

## Independent integer composition and exact anchors

The existing reviewed integer-only add/multiply generator is reused unchanged
and hash-pinned as an arithmetic dependency, not as a native result oracle.
A new subtraction primitive handles NaNs before applying finite source sign
inversion. A new candidate-specific composition models both initial packed
subtractions, the two separately rounded packed products and the final packed
subtraction. It accumulates flags from all twenty arithmetic lane operations.
It uses no host floating arithmetic, SSE/x87 or math-library calls. The finite
corpus does not constitute exhaustive binary32 proof or original-CPU evidence.

The corpus contains 731,552 records: 34^3 correlated edge triples, two edge-pair
families, ten named anchors and 4,096 deterministic random nine-word inputs,
each in all sixteen control modes. Every record runs all sticky masks for
46,819,328 comparisons. Output bits, complete MXCSR, every source and neighboring
sentinel words are checked. Fixed gate anchors independently specify:

- Hidden first multiply invalid: base=(0,0,0), third=(0,1,1), fourth=(+Inf,0,0).
  Nearest mode stores (+0,-Inf,+Inf). Only hidden +Inf*0 raises IE.
- Hidden final subtract invalid: base=(0,0,0), third=(1,1,1), fourth=(+Inf,1,1).
  Nearest mode stores (+0,-Inf,+Inf). Only hidden +Inf-(+Inf) raises IE.
- Hidden overflow: base=(0,0,0), third=fourth=(max-finite,0,0).
  Nearest mode stores all +0, while hidden max-finite squared raises OE|PE.
- Nonfused cancellation: base=(0,0,0), third=(3f800000,3f7ffffe,00000000),
  fourth=(3f800001,3f800000,00000000), words in hexadecimal. The first z
  product is exactly 1-2^-46 and rounds to 1 with PE before subtracting 1.
  The stored z is +0; fused evaluation would yield a8800000 (-2^-46).

Rounding/underflow conventions match the reused native-validated SSE primitives:
products are rounded at binary32 precision; tiny detection uses precision
rounding with an unbounded exponent before minimum-subnormal quantum rounding.
FTZ flushes tiny nonzero results, including exact subnormals, with UE|PE. These
are bounded native SSE conventions, not universal CPU or Xbox guarantees.

## Native overlap, state and guards

A separately structured intrinsic/native reference executes the same arithmetic
sequence with explicit operand order. The 581,248 comparisons cover all 343
relative offset combinations (-3 through +3 floats for each input against the
destination), four alignments modulo sixteen, twenty-two edge patterns and all
sixteen control modes. Separate disjoint tests exercise all sticky masks and
four alignments. Additional cases cover every x87 TOP and tag byte with four
seeded condition/sticky patterns. Incoming XMM registers contain SNaNs.

The authored SysV capture bridge calls the complete compiled four-pointer
canonical wrapper, snapshots immediately, and restores caller x87/MXCSR, RBX
and native stack alignment. It supplies initialized native pointers after
restoring the seed. The entire live array is compared to detect extra writes
and read-after-write mistakes, not just the three result floats.

Four independent three-page mappings guard each exact twelve-byte span at
both page boundaries, in all sixteen placement combinations. Input pages are
read-only, placement new creates live float[3] arrays, and all other page bytes
are sentinels. Inline assembly is not sanitizer-instrumented, so memory bounds
also depend on these guards, sentinels and exact instruction checks.

## Public gate and remaining limits

The public gate verifies artifact hashes, historical source preimage and exact
reversal, canonical address routing without duplicate aliases, narrow opcode
windows, platform/fast-math rejection and Clang C++17 O0/O2 codegen. The optional
private gate verifies every byte, instruction span and CFG field against the
frozen complete-record digest. It rejects every single-byte or metadata change.
The historical float-CONCAT draft must still fail at both optimization levels.

Codegen must contain exactly the eighteen ordered operations and one native
RET, with no extra arithmetic, calls or guest RET16. Byte-level symbolic stack
tracking proves all four operand pointers originate at their respective native
argument registers, rejects uninitialized or overlapping overwritten spills,
and rejects callee-saved writes and nonprivate stack writes. Mutation controls
exercise missing/reversed arithmetic, shuffles, input/store pointer corruption,
uninitialized lanes, excessive read spans, interleaved scalar stores, fused
evaluation at the fixed nonfused anchor, hidden-only arithmetic suppression,
caller-state restoration, altered cleanup and source/provenance corruption.
GCC O2 ASan+UBSan runs both full corpora with LeakSanitizer disabled and untested.

Full-game linkage, guest32 ABI/memory/stack aliasing, unmasked exceptions,
original CPU conformance and Xbox runtime equivalence remain unverified.
Exact-tree syntax coverage is a separate integration audit.
