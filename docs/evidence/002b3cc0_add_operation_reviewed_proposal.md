# 0x002b3cc0 bounded packed-add proposal

Unintegrated outside-tree proposal. This is a native host memory operation and
compiled-wrapper test, not original Xbox execution, recovered guest ABI,
whole-game equivalence, original-CPU conformance, or a byte-identical rebuild.

## Original evidence

The private immutable Ghidra program-memory record covers all 52 bytes and 15
instructions at 0x002b3cc0. SHA-256 is
A8EC695777DE4EF1C9E6389D84A07A1AF70D214CF5A961E877EEB5DFA8A3374F.
Independent Capstone 5.0.7 x86-32 decoding agrees with every byte, address and
instruction length; there are no listing overrides, uncovered bytes, branches,
calls, global data dependencies or missing continuation. The private record
must not be committed. Stored original FileBytes are absent, so this does not
reauthenticate the complete original XBE. No original machine code, uploaded
script or user computer was used or executed.

At original entry, stack words ESP+4 and ESP+8 are destination and source.
PUSH ECX creates scratch, but a later MOV overwrites that scratch with the
destination pointer. The original memory sequence is:

1. MOVSS-memory loads destination[0] into XMM1 and clears bits127:32.
2. MOVHPS loads destination[1..2] into high64: XMM1=[d0,+0,d1,d2].
3. MOVSS-memory and MOVHPS similarly form XMM2=[s0,+0,s1,s2].
4. ADDPS XMM1,XMM2 computes all four lanes, in that operand order.
5. MOVSS then MOVHPS store result lanes0,2,3 to the 12-byte destination.

All four reads precede both stores. The unused zero lane remains a real ADDPS
lane; +0 plus +0 remains +0 in every rounding mode and adds no exception flags.
There is no binary64/x87 intermediate or extra narrowing. No incoming XMM lane
or x87 value is consumed. Source/destination NaN ordering must not be commuted.
No original instruction affects integer EFLAGS. Original final EAX and ECX both
contain destination, EDX contains source, XMM1 holds four result lanes and XMM2
holds the loaded source; RET 8 consumes both argument words. In particular,
ECX is NOT restored to its incoming value. Those guest outputs/stack cleanup
are not implemented or claimed by the unchanged void native C++ interface.

## Bounded host contract

GNU/Clang x86-64 Linux SysV, IEEE binary32 float, native SSE. Both pointers cover
three live float objects aligned to alignof(float). All whole-float overlaps,
including exact alias and both directions, are allowed between these native
objects. Compiler-generated private scratch does not overlap those objects.
This does not cover guest pointers aliasing original argument/scratch/return
stack slots, original 32-bit wrapping, arbitrary unaligned addresses, invalid
memory, faults, MMIO or concurrent access. Original stack aliasing could change
values or the saved destination pointer, and is not equivalent to this helper.

All MXCSR exceptions must be masked. Existing RC, DAZ and FTZ govern the native
ADDPS and sticky exception flags accumulate. Tests require native support for
all 16 RC/DAZ/FTZ combinations and fail explicitly if unavailable. No x87
instruction appears and no x87 stack capacity is needed, even with all eight
entries occupied. Tests compare FCW, FSW, FTW, FOP and occupied 80-bit payloads;
FIP/FDP, empty payloads, reserved/padding fields and SIMD register transport are
excluded. Guest EFLAGS, guest registers, guest stack and full CPU-state parity
are excluded. Unsupported platform/type and fast-math are compile-time errors.

## Tests and independence

- generate_model.py uses Python integers only. It decodes finite binary32
  values as signed integer multiples of 2^-149, adds exactly, then independently
  rounds/encodes under each RC mode. It handles signed zero, overflow saturation,
  NaN quieting/payload ordering, invalid flags, DE/DAZ and FTZ effects explicitly.
  No host FP arithmetic, x87, SSE, math library or floating oracle is used.
- 84,032 model cases combine 34x34 cross-product special/boundary pairs and 4,096
  seeded random six-word inputs over all 16 control modes. The compiled native
  wrapper passes each with all 64 incoming sticky seeds: 5,378,048 comparisons.
  Destination/source sentinels and the unchanged source buffer are checked.
- native_test.cpp has an independently decomposed intrinsic-load/store oracle
  with explicitly ordered native ADDPS. Its 638,976 comparisons cover all
  16 control modes, 64 sticky seeds, 22 raw edge words, pointer differences
  -3 through +3 floats, all four modulo-16 alignments, exact alias, disjoint
  spans, all eight x87 TOPs, all 256 tag patterns and seeded condition/sticky
  state. All incoming XMM lanes are poisoned with signaling NaNs before calls.
- Its authored assembly bridge calls the full canonical compiled wrapper,
  immediately saves the resulting environment, and restores its caller's FP
  environment, RBX and stack alignment. It does not run original machine bytes.
- Separate three-page mappings place each exact 12-byte object span at both
  sides of an accessible page, with inaccessible neighbors. The source page is
  read-only; destination sentinels cover every other byte on its page. Placement
  new constructs two aggregates containing complete float[3] arrays before
  raw bit copies.
- The gate checks exact source reversal, source/body/opcode/artifact hashes,
  optional private full-body validation and Clang O0/O2 codegen. The only SIMD
  instructions in the compiled wrapper are the seven ordered original memory
  and ADDPS operations; there are no x87 operations, calls, helper duplication,
  hidden scalar arithmetic, source/destination commutation or wider accesses.
  Exactly one normal native RET with no immediate cleanup is required; missing
  returns and RET 8 mutations are rejected.
- Behavior/codegen negatives remove ADDPS, reverse NaN operand order, retain a
  poisoned incoming lane, interleave scalar reads/stores, widen the input span,
  and lose capture-state restoration. Source and opcode corruption and platform
  or fast-math misuse are separately rejected.

Native NaN payload behavior and DAZ/FTZ results are tested on this host, not
asserted for every CPU model or original Pentium-III hardware. Sanitizers cover
compiler-visible accesses; inline-assembly spans require the additional guards.
LeakSanitizer is disabled and untested. Native compiler success does not prove
guest cross-function integration or original gameplay semantics.

## Run

Use Python3 to run gate.py with --root pointing at the repository and
--program-record pointing at the private program_record.json when available.
PATH must provide Clang. Model fixtures and executables are generated locally;
only authored sources, small metadata/windows and preimage belong in a review
or eventual repository change, not the private body or fixture binary.
