# 0x00155840 concrete constructor-backed virtual chain and vector update

Date: 2026-10-29. Original Xbox XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

**Status:** partial original-instruction contract confirmed. Not a verified full function,
universal vtable mapping, native link, or complete Xbox x87 emulation.

## Verified concrete construction chain

Three original original-image constructors or reinitializers assign
`0x0039ADEC` to `[ESI+0x48]`:

- `0x0022D3A3`, in original constructor `0x0022D330`.
- `0x0014A02C`.
- `0x00162ED4`.

The mapped XBE table slot `[0x0039ADEC+0x14]` contains **0x00059A50**.
The instructions at **0x00059A50** are `MOV EAX,[ECX]` then
`JMP DWORD PTR [EAX+4]`, i.e. a second virtual dispatch.
`[0x0039ADEC+4]` contains **0x0010F890**; instructions at **0x0010F890**
are `LEA EAX,[ECX-0x48]` then `RET`.

Thus one *concrete, guarded* call from `0x00155840` (using
`ECX=[EBP+8]+0x48`) returns EAX = `[EBP+8]` as a guest32 value,
provided the object's actual table is `0x0039ADEC` and its secondary
table slot still resolves to `0x0010F890`. This is a verified
address-return contract, **not** proof that the returned bytes form a
valid 12-float transform for every object or state.

The original image contains nineteen stored occurrences of the function
address `0x00155840` in multiple distinct vtable layouts. Construction,
assignment and dynamic object identity for the other layouts remain open.
No universal virtual target may be inferred from one constructor.

## Executable scoped C11 bridge

`include/bf_00155840_concrete_virtual.h` implements the identified
`0x00059A50 -> 0x0010F890` thunk chain through the existing
`bf_00155840_guest_virtual` interface. It validates the target and
both guest-memory vtable words, then returns the verified 32-bit address.
It explicitly refuses unknown tables/targets instead of guessing.

The caller's x87 frame sequence at `0x00155BF8..0x00155C19`
independently uses three repeated ordered instructions:

1. `FLD DWORD [EBP-0x2c+4*i]`.
2. `FMUL DWORD [EBP-4]`.
3. `FADD DWORD [EBP-0x68+4*i]`.
4. `FSTP DWORD [EBP-0x68+4*i]`, for i=0,1,2.

`include/bf_00155840_frame_x87_increment.h` replays these ordered
reads/writes through explicit guest-memory callbacks and the existing
x87 backend interface. It does not use ordinary host float formulas or
invent x87 exception handling.

`tests/test_00155840_concrete_frame.c` has synthetic memory fixtures
for the known table, unknown-table refusal, the exact register handoff,
all three vector updates, operand read order, final storage and injected
write faults. Clang C11 tests passed at `-O0` and `-O2` locally
(145 assertions per build). GitHub focused workflow executes the same
tests; historical whole-tree syntax reports should be read separately.

## Private-XBE verification

`python3 tools/verify_00155840_concrete_virtual.py /path/to/default.xbe`
checks section-aware VA mapping, 17 original instruction windows,
the two actual table data words, and counts function-pointer appearances.
It passed against the user's pinned original image without committing
copyrighted binary bytes.

## Not yet proven

- Whether any of the other vtables can reach the same caller, and their
  independently validated `[table+0x14]` targets and output objects.
- The path-sensitive original x87 and SSE writes at `0x00155C1C..0x00155D33`,
  including x87 stack lifetimes, scalar RSQRTSS, precision and rounding.
- Xbox exception/SEH behavior and the control/status word, including
  nonfinite/denormal/NaN cases.
- The final safe replacement of the disconnected
  `FUN_000621c0()` invocation inside original `FUN_00155840`.

No whole-function source C11 syntax failure is marked repaired by this
partial bridge. The original caller source remains intentionally unchanged.
