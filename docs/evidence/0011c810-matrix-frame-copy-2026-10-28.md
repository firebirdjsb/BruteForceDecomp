# 0x0011C810: preserve the produced 36-byte matrix across the original guest frame

Status: scoped *memory transfer* projection, not a complete caller repair.
The original `src/main_unclassified/band_0011/0x0011c810.c` remains
byte-for-byte unchanged and still has invalid float/pointer casts. No
function is promoted to reviewed, fully ABI-linked or 1:1 runtime verified.

## Provenance and observed producer/consumer contract

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Prior original instruction evidence and deferred source analysis:
[`0011c810-deferred-register-output.md`](0011c810-deferred-register-output.md).

| Entry | Original bytes | Original body SHA-256 |
| --- | ---: | --- |
| `0x0011C810` | 647 | `A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255` |
| `0x0001D0C0` | 594 | `799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4` |
| `0x0012B2A0` | 93 | `C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E` |

Let **S** be original guest ESP after the caller's `SUB ESP,0x88` and
`PUSH ESI`, **not** a host C stack pointer. On the original path:

- Virtual method `+0x30` at `0x11c82a` passes the address `S+0x28`; the
  returned EAX is the input to `0x0001D0C0`. The virtual target and return
  calling convention are not resolved.
- The `0x0001D0C0` helper writes **nine guest DWORDs (36 bytes)** via ECX
  to `S+0x68..S+0x8B`. The present no-argument C call does not carry the
  original EAX/ECX input/output contract.
- Original instructions at `0x11c857..0x11c88f` copy 36 bytes from the
  produced region into `S+0x38..S+0x5B` using two 16-byte `MOVUPS` blocks
  and one 4-byte `MOVSS` block. These regions are separate; the twelve
  bytes at `S+0x5C..S+0x67` are not part of the destination copy.
- At `0x11c906..0x11c912`, `0x0012B2A0` receives ECX=`S+0x28` (12-byte
  vector), EDX=`S+0x38` (the 36-byte matrix), and EAX=`S+0x0C` (three-word
  result). Its x87 calculations write three floats in original order
  `[EAX+8]`, `[EAX]`, `[EAX+4]`. These results overwrite earlier stack
  lifetimes and must not be inferred from disconnected C pointer locals.

## Bounded C11 work

`include/bf_x86_0011c810_matrix_frame.h` exposes only these four guest
32-bit address spans and a callback-driven copy of 16+16+4 bytes. It never
casts a guest DWORD into a host pointer, converts binary32 bit patterns
numerically or supplies fabricated zero values. A real producer must fill
`S+0x68` before this model's copy is invoked. Existing game-function C
sources and metadata remain unchanged.

The copy is an **observed success-state memory transfer**, not an original
instruction-by-instruction x86 emulator. Callback errors are reported with
a guest start address; their ordering does not establish the original
faulting CPU EIP, guest page protection, partial SIMD writes, exception
handler delivery or MXCSR/x87 side effects.

`python3 scripts/verify_0011c810_matrix_frame.py --root .` performs strict
Windows x86/x64 Clang C11 syntax checks of the interface plus portable
`-O0` and `-O2` executable tests: **4,102 scenarios** per build (**16,407
assertions**), including 4,096 deterministic varied binary patterns,
complete 36-byte equality, untouched following 12 bytes, and every callback
failure point in the six-transfer sequence.

Pass `--xbe /path/to/private/default.xbe` to authenticate the original XBE
and the three source/callee body digests before running the tests. The XBE
is not available to public CI. Recorded original bytes are not freshly
reauthenticated in the CI run, and no whole-function behavioral equivalence
or byte-identical recompilation is claimed.

## Deferred integration gate

Resolve the first virtual `+0x30` return into original EAX, bind it to
`0x0001D0C0`'s real register inputs and 36-byte output; confirm the later
virtual `+0x30` result/lifetime; bind `0x0012B2A0`'s EAX/ECX/EDX and x87
semantics; then replace the C draft's mixed pointer/float lifetimes using
observed local storage and run isolated and whole-tree syntax audits. Do
**not** cast pointer slots numerically to make `0x0011C810` parse. This
module alone cannot decrease the remaining syntax error count.
