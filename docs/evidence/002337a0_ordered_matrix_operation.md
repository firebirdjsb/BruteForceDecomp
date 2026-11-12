# 0x002337a0: bounded ordered matrix memory operation

This package replaces one unsupported draft body with a tested native operation,
not a recovered guest ABI or byte-identical game implementation. Original source
signature, address label and body SHA-256 remain unchanged. The complete prior
source is retained in `tests/fixtures/002337a0_before.cpp.txt`, and the gate proves
byte-for-byte reversal. Historical inventory remains untouched.

## Provenance and boundaries

- Original entry `0x002337a0`; inclusive end `0x002338bd`.
- Complete contiguous body: 286 bytes, 76 instructions.
- Body SHA-256 `9845F4400F31673C8FFC0EC92B60D421983004F32EEE8BC70A60F9061E3EB58B`.
- Original XBE identity remains `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- The indexed immutable all-v1 record, its full program-memory body, every listed
  instruction byte/length/address/flow field and boundaries are hash-pinned by
  the private-record gate. Full original-byte exports are not committed. Public
  metadata contains only narrow necessary opcode windows and semantic events.
- Stored OriginalFileBytes are absent. Program-memory agreement and historical
  hashes are not independent authentication of a complete original XBE, proof
  of original runtime execution, or equivalence to the original Pentium III.
- All original bytes were inspected as data only. No original machine code or
  uploaded program/script is executed by this package.

At entry S=ESP, the original loads left from `[S+8]`, output from `[S+4]`,
and right from `[S+12]`. There are no globals, calls, branches, hidden incoming
XMM lanes or additional pointer dependencies. At exit it reloads output from
`[S+4]` and executes plain RET. The unchanged native C++ signature returns
`param_1` directly; it does not implement guest stack transport or the exit load.

## Admitted native contract

GNU/Clang x86-64 Linux SysV, native SSE and IEEE binary32 are required. Fast math
is rejected, and every arithmetic step is a separate native instruction. Both
inputs cover sixteen initialized live float objects, aligned to alignof(float).
Output covers 64 initialized writable bytes and satisfies the unchanged output
pointer type's 8-byte alignment. The helper takes void* and never dereferences
that integer pointer type in C++. Whole-float pair/triple overlap is admitted
only when these alignment and object-lifetime requirements hold. Tests allocate
live float arrays and use memcpy solely to initialize/inspect representations.

All six MXCSR exception masks must be set, and requested RC/DAZ/FTZ bits must be
supported by the host capability mask. The operation does not save, clear or
restore MXCSR: incoming controls and sticky status stay live; newly raised flags
accumulate. All four lanes execute, including those producing exceptional flags.
Native x87 and callee-saved GPR state are preserved. Native XMM registers are
scratch according to SysV, with no claim to guest XMM preservation.

Excluded: guest32 pointer mapping, wraparound, original stack/argument-slot
aliasing, guest ABI cleanup/register/EFLAGS state, aliasing compiler-private
storage, invalid memory/fault ordering, unmasked exceptions or pending traps,
MMIO, concurrency and original-CPU equivalence. In particular output overlapping
an original guest argument slot could change the final output-pointer reload;
that case is not represented by this native pointer operation.

## Ordered dataflow and overlap

The helper contains one volatile asm block with exactly 71 SSE operations and a
memory clobber: 16 MOVSS scalar loads, 4 MOVUPS row loads, 16 SHUFPS broadcasts,
16 MULPS, 12 ADDPS, 3 MOVLPS stores, 3 MOVHPS stores, and one MOVUPS store.
MOVSS initializes lane zero and clears upper lanes; SHUFPS broadcasts lane zero.
All right rows are captured before stores. Each MULPS has its left coefficient
as destination and right row as source; swapping them can change NaN payloads.
For disjoint inputs each output row is (((L0*R0)+(L1*R1))+(L2*R2))+(L3*R3).
This formula alone does not describe overlapping memory.

The exact preserved memory order is:

1. Capture L0..L5 and every right row before output row0's two stores.
2. Capture L6, L9, L7 and L8 before output row1's two stores.
3. Capture L10, L11 and L13 before output row2's low store.
4. Store O8..O9, then load L12, then store O10..O11.
5. Load L14 and L15 before output row3's single 16-byte store.

In particular O=L+4 overwrites L12/L13 in row2's low store; L13 survives because
it was captured earlier, whereas L12 observes the new word. O=L+2 distinguishes
loading L12 after the high store or replacing split stores with one MOVUPS.
The production helper retains all arithmetic interleaving as well as memory order.

## Independent oracles and verification

The integer model simulates all 71 ordered instruction events over eight packed
registers and one mutable 96-word allocation. It explicitly reuses the reviewed
integer binary32 add/multiply from 002b3e60. These primitives are not newly
independent arithmetic implementations.

A separate author derived the Fraction graph directly from the full original
listing, with a separately written row-based mutable-memory schedule. It reuses
only the independent Fraction `binary` primitive from the reviewed 003759c0
model, importing no production helper or integer event graph. Under the admitted
masked/no-observer contract, regrouping arithmetic between rows preserves values
and OR-only sticky effects; memory capture/store boundaries remain exact.

An authored native scalar-lane reference independently follows those capture
boundaries, performs each lane with MULSS/ADDSS, and compares full memory and FP
state. It is not the sole oracle. Common FXSAVE comparison/seed utilities are
explicitly adapted from 002b7360. New assembly capture seeds and checks all six
SysV callee-saved GPRs, records the exact returned native pointer, captures FP
state immediately after the wrapper, and restores the harness's prior FP state.

The gate exercises:

- 191,200 integer records and 46,064 Fraction records, with all four RC modes,
  DAZ on/off, FTZ on/off and all 64 preexisting sticky combinations.
- Full 96-word memory comparison, all 16 output words, exact pointer return,
  guards and all unchanged words outside actual stores.
- NaN signs/payload/SNaN priority, signed zero, finite rounding/cancellation,
  overflow, underflow, subnormal boundaries, raw-bit random inputs.
- Every signed whole-float pair overlap and output modulo16 alignment, complete
  output-overlapping triple offsets, input/input overlap and disjoint placements.
- 65,568 native comparisons, every x87 TOP and abridged tag pattern with seeded
  live binary80 payloads, four x87 rounding-control variants, poisoned incoming
  XMM registers and all native callee-saved GPRs.
- Exact 64/64/64-byte live-array spans at both sides of protected pages, all eight
  edge combinations, read-only disjoint input pages and unchanged page sentinels.
- Clang O0/O2 complete wrapper transport plus exactly 71 ordered SSE operations;
  GCC O2 codegen and GCC ASan+UBSan native and both corpus tests. Sanitizers alone
  do not instrument inline-asm accesses, hence the guarded-span checks.
- Compiled semantic mutants for NaN operand order, broadcast/row selection,
  addition association, early/late L12, delayed L13, merged row2 stores, whole-left
  snapshot, right-row reload, packed-lane omission, wide reads/writes, MXCSR reset,
  GPR/x87 corruption, incorrect return and broken harness FP restoration.
- Source/preimage reversal and negative provenance/body/flow/boundary tests.

Run from a checkout with Clang and GCC available:

```
python3 tools/test_cpp_002337a0_ordered_matrix_operation.py --sanitizers
```

Optionally supply `--program-record` with the private indexed JSON record and
`--capstone` for independent full 32-bit decoding. A persistent `--corpus-dir`
may cache generated cases; pinned size and digest are verified before reuse.

This test suite establishes only the stated bounded native operation. It does
not turn historical syntax/inventory classifications into runtime evidence or
claim a complete build of the Xbox game.
