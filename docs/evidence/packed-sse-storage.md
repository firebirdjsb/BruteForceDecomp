# Packed SSE storage reconstruction

The hash-pinned original XBE is the source of the opcodes and body digests.
`scripts/verify_stack_storage_repairs.py` checks all three original bodies,
selected instructions and binary32 constants using section-mapped addresses.

0x000330b0 and 0x00033b00 contain the same normalization operation:
MOVSS/MOVHPS load three memory floats into XMM lanes 0, 2 and 3, packed
squaring and SHUFPS/ADDPS/ADDSS reduce (y squared + z squared) + x squared,
COMISS/JAE compares with the exact binary32 word 0x37a7c5ac, and
RSQRTSS/SHUFPS/MULPS scale before MOVSS/MOVHPS store those three lanes.
`include/bf_x86_normalize3.h` shares only this observed operation. It does
not replace either original function's entry contract.

The memory-source MOVSS instruction clears the upper 96 destination bits;
MOVHPS then fills lanes 2 and 3, leaving lane 1 zero. This differs from
register-source MOVSS. See Intel's
[instruction reference](https://cdrdv2-public.intel.com/835752/253667-sdm-vol-2b.pdf),
MOVSS section. The loaded forms were verified in this XBE, corroborated
against the installed Clang intrinsic definition, and exercised directly
with nonzero seeded destination lanes in the assembly reference test.
Inherited XMM1 lanes used by the shuffle are not invented; they do not feed
the selected scalar or stored results. Packed exception behavior remains open.

The final x87 products retain the observed z-then-x addition order (then y
in 0x000330b0). 0x00033b00's FCOMP/TEST AH,5/JP includes the unordered
case in its false-return branch. These changes do not prove extended x87
precision, NaN payload propagation, exception masks, or control-word effects.

0x000410a0 uses SQRTSS and RSQRTSS followed by a broadcast and packed scale.
Its thresholds are binary32 words 0x28800000 and 0x34000000. The projected
stack basis is [scaled z, positive zero, negative scaled x]. Four contiguous
float[3] endpoint buffers model live ESP offsets +0x38, +0x44, +0x2c and
+0x20. Direct CALLs pass the +0x38/+0x2c pair, then the +0x44/+0x20 pair.
The preceding 0x000394b0 CALL still needs an implicit EAX/ECX adapter.
The FCOM-before-FSTP guard and extended positive endpoint intermediates are
not emulated by the current C float arithmetic; full-function fidelity
remains explicitly unresolved.

`tools/test_x86_normalize3.c` compares the shared operation with
`tests/x86_normalize3_reference.S`, using the observed instruction sequence
with host pointer/return registers. Each debug and optimized run checks
11,567 finite, zero, subnormal, infinity, NaN, boundary and pseudorandom
inputs, output bits, branches and guard bytes. A deliberately changed MULPS
operation fails this test. The test sets/restores its own MXCSR control
state and does not compare exception status. This demonstrates the tested
operation on the current host CPU; it is not an Xbox-hardware RSQRTSS
accuracy comparison, integrated runtime QA, or whole-function Level D.

Independent review approves source syntax and the changed storage/operand
mapping (Level A and limited B). Complete register interfaces and original
floating-point behavior remain unverified. Original entry addresses and
function-body digests are unchanged.
