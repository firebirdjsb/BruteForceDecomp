# 0x00155840 conditional vector-scale bridge (2026-10-29)

## Authenticated source of truth

Original original Xbox executable: SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

The original 27-byte span at `0x00155BDD..0x00155BF7` has SHA-256
`12C9FC155561AACC121377CE09EBBFCF0BFED632F2765FE498E8367E9D8CC434`.

Its nine instructions, in the original order, are:

| Address | Instruction |
| --- | --- |
| 0x00155BDD | FLD m32fp [EBP-0x0C] |
| 0x00155BE0 | FMUL m32fp [EBP-0x2C] |
| 0x00155BE3 | FSTP m32fp [EBP-0x2C] |
| 0x00155BE6 | FLD m32fp [EBP-0x0C] |
| 0x00155BE9 | FMUL m32fp [EBP-0x28] |
| 0x00155BEC | FSTP m32fp [EBP-0x28] |
| 0x00155BEF | FLD m32fp [EBP-0x0C] |
| 0x00155BF2 | FMUL m32fp [EBP-0x24] |
| 0x00155BF5 | FSTP m32fp [EBP-0x24] |

The next original instruction at 0x00155BF8 begins the vector-add
sequence already reconstructed in
`include/bf_00155840_frame_x87_increment.h`.

## Implemented boundary

`include/bf_00155840_frame_x87_scale.h` introduces
`bf_00155840_x87_scale_direction`, which replays the nine instructions
through explicit guest-memory access and the project's x87 callback
interface; and `bf_00155840_x87_scale_then_add`, which connects
the two adjacent, authenticated stages without host float expressions.
All guest addresses use 32-bit arithmetic; no Xbox guest pointer is
reinterpreted as a host pointer.

The helper is invoked **only after** the original caller's test and
`FUN_0006e7f0` success path; it does **not** decide whether that path
is taken. The x87 backend controls precision, FPU state, signed zero,
NaNs and exceptional behavior; guest fault returns are diagnostic,
not original restart/SEH behavior.

`tests/test_00155840_x87_scale.c` includes 1,024 finite/dyadic
synthetic vector cases, exact two-stage read/write ordering, zero x87
stack-depth drift, six injected write failures, rejected invalid
interfaces, unmapped guest reads and x87 backend failure.
Both Clang ISO C11 `-O0` and `-O2` passed in the dedicated focused
CI workflow. Tests are **not** a complete Xbox hardware oracle.

## Adjacent syntax-failure triage (no speculative source edit)

The original `FUN_002058C0` at 0x00205920 performs:
`MOV ESI,[ESP+0x10]` then `MOV EAX,[ESI+8]`. This is the
machine-code source of the draft's otherwise undeclared
`uRam00000008` in `switch(uRam00000008)`.
The same register-output helper `FUN_001FEB60` writes the match
pointer to `[EBX]` (its caller's `[ESP+0x10]`) and advances the
iterator through `[EAX]` (its caller's `[ESP+0x14]`).
The second failing draft `FUN_001FF0F0` has a matching unresolved
`uRam00000008` use. These are real caller-owned aliases, **not**
valid independent globals or a literal guest pointer 0x8.
A future source repair must bind both original register arguments and
preserve the guest-memory interface before changing either draft.
Neither has been marked syntax- or behavior-passing in this pass.

## Status

The original `FUN_00155840` source still has unresolved SSE lanes,
indirect virtual alternatives, original frame aliasing and whole-caller
control flow. The isolated gate, x87 sequence and tested helpers do
not by themselves remove its original isolated Clang syntax error.
Last complete, published whole-tree audit: 13,635 / 13,694, 59 remaining.
