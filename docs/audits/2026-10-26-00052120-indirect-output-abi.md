# 0x00052120 indirect-output ABI audit (2026-10-26)

**Evidence:** authenticated original Xbox XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`;
original function-body SHA-256
`A9BB04FF684DF913B8D6F81E92E4D06B88773586B58567CF41746BE7570BEA45`,
**157 bytes** beginning at guest VA `0x00052120`. Guest VA to raw image
offset for this section: `VA - 0x10000`. The original image is not committed.

## Instruction-derived call contracts

Let `S` be guest ESP immediately after `SUB ESP,0x28` at `0x52120`.
The original first call (`0x52123..0x52134`) executes:

- `MOV EAX,[ESI]`; `LEA ECX,[S+0x10]`; `PUSH ECX`.
- `LEA EDX,[ESP+4]` **after that push**, yielding `S+0`; `PUSH EDX`.
- `PUSH EBX`; `MOV ECX,ESI`; `CALL DWORD PTR [EAX+0x20]`.

At callee entry, `ECX=ESI`; stack arguments in order are
`EBX`, `S+0`, `S+0x10` (plus return address).

The second call (`0x52135..0x52146`) reloads the vtable and repeats
the same `ECX=ESI` call with stack arguments
`EDI`, `S+4`, `S+0x1c`. The original caller does **not**
adjust ESP after either indirect call. Subsequent `FLD` instructions
use offsets relative to `S`; the required contract is therefore
callee cleanup of **12 stack argument bytes** for each call.
This is an inference from the caller's stack usage, not an inspection
of the unresolved indirect callee's own `RET 0x0c` instruction.

The C11 draft now uses an explicit i386 `thiscall`-annotated function
pointer and **one 0x28-byte guest frame**, preserving the intentional
overlap of the two A output buffers.

| Output pointer | Caller-supplied offset | First proven consumed float |
| --- | ---: | ---: |
| First A | `S+0x00` | `S+0x00` |
| First B | `S+0x10` | `S+0x14` |
| Second A | `S+0x04` | `S+0x04` |
| Second B | `S+0x1c` | `S+0x20` |

The independent caller at `0x52816..0x52825` uses the **same**
`[ESI vtable +0x20]` method, passing a B-output pointer at
`[ESP+0x40]`. Its instructions `0x52860`, `0x52867`, and
`0x5286e` load floats from that pointer at offsets `+8`, `+4`,
and `+0`. Thus a **minimum 12 readable bytes** of B output
are independently established. Modeling both low/B outputs as
12-byte XYZ arrays fits all four pointer placements within the
0x28-byte frame; the model is not proof of every callee write.

## Regression and remaining uncertainty

`scripts/verify_00052120_guest_float_slots.py` verifies **37**
original opcode windows (including independent caller), full XBE and
function-body hashes when `--xbe` is supplied, the explicit C call
arguments, a 12-byte-output alias fixture, focused Clang C11 syntax,
and an i386 Clang IR check for `x86_thiscallcc`.
GitHub CI runs source/layout/Clang checks without storing the game XBE.

**Still unverified:** provenance and liveness of the incoming guest
EBX/EDI/ESI registers; the concrete vtable target(s) and complete
output write extents; possible alignment requirements; exact x87
rounding and exception flags; guest-memory translation and non-i386
native call implementation. The C draft's pseudo-register locals
are not executable host register recovery. This is **not** whole-function
1:1 equivalence or a playable native PC build.

## Repository-wide metric (do not inflate)

Latest *completed* full Clang C11 audit at the time of this pass:
run **40318906475**, audited commit
`77f8ef206b05cdff0739bd43a53b6e8314861d62`:
**13,436 passing / 258 failing / 13,694 total = 98.12%**.
The new ABI edits postdate that audited commit. They must receive
a completed full sweep before a new count can be credited.
