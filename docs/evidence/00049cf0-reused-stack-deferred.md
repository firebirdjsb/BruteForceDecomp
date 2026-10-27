# 0x00049CF0: reused stack storage and unresolved output contracts

Status: **deferred; source unchanged**, 2026-10-27. This is an instruction
evidence handoff, not a syntax repair, ABI-complete reconstruction, behavior
test, or byte match. No source, headers, inventory, or verification tooling
were changed by this investigation.

## Authenticated inputs and baseline

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry: `0x00049CF0`; ordered original body SHA-256:
  `81FB1F78BFF6708827BEA2B939F2DF843754780FA49493248C438E2237789BFE`.
- The 1,406 body bytes comprise `0x00049CF0..0x00049DD0` (225 bytes),
  `0x00049DD4..0x00049F43` (368), `0x00049F47..0x0004A269` (803),
  and `0x0004A26D..0x0004A276` (10), inclusive. The holes are not included
  in the body digest. Whole-XBE and ordered-body hashes were checked again.
- Source routed through `tools/source_layout.py`:
  `src/main_unclassified/band_0004/0x00049cf0.c`.
- Unchanged source SHA-256:
  `533dd177172bd6c0ca5080864ec8ee959d2157fc0e1724f3ccc5f1ea756510f3`.
- Focused Clang checks using the unchanged `tools/sweep_c11.py::FLAGS` and
  `include/` fail on both `i686-pc-windows-msvc` and
  `x86_64-pc-windows-msvc`. The first errors are invalid Ghidra pseudo-fields
  `local_2c._0_4_` / `local_2c._4_4_`; the capped diagnostics are not a
  complete list of this function's defects. No compiler flags were relaxed.

## Stack lifetime observations

Offsets below use the steady ESP after `sub esp,0x48` and all four saved
register pushes; it equals entry ESP minus `0x58`. Call pushes temporarily
change ESP, so the table does not describe arbitrary instruction locations.
Every listed storage word is four bytes. Draft names are location references,
not verified structure fields or pointer types.

| Steady offset | Draft identity | Observed lifetimes |
| --- | --- | --- |
| `+0x1C` | `local_3c` | Integer iteration count at `0x49DEA..0x49EEF`; m32fp delta stored by `FSTP` at `0x4A145`. |
| `+0x20` | `local_38` | Saved loop pointer at `0x49DF5`; address arithmetic at `0x49FA9`; raw float word at `0x4A077`; converted count stored by `FSTP` at `0x4A0E1`; later delta word and final raw copy. |
| `+0x24` | `local_34` | Integer count at `0x49D89` / `0x49F8A`; raw float word at `0x4A069`; signed integer conversion input at `0x4A0CD`; address at `0x4A0E5`; float comparison threshold at `0x4A110`. |
| `+0x28` | `local_30` | Address supplied to an opaque helper at `0x49F06`; later first float sum lane, explicitly zeroed at `0x4A030`. |
| `+0x2C`, `+0x30` | two halves of `local_2c` | Zeroed words for opaque helper output at `0x49F0A..0x49F12`; later second/third float sums, explicitly reset at `0x4A020..0x4A028`. |
| `+0x34` | `uStack_24` | Third zeroed word in the `+0x28` helper area; not a fourth sum lane. |
| `+0x3C`, `+0x40`, `+0x44` | `local_1c`, `local_18`, `local_14` | Zeroed words in the `+0x38` helper area; `+0x3C` is later loaded into EAX and pushed to `0x2EA018`; `+0x3C` / `+0x40` later hold raw float copies. |
| `+0x4C`, `+0x50`, `+0x54` | `local_c`, `local_8`, `local_4` | Zeroed at `0x49D3D..0x49D45`; later read as guest words after calls supplied with the `+0x48` address. |

In particular, neither pointer-to-float numeric casts nor globally assigning
one C type to each draft temporary faithfully describes these lifetimes.
The two `local_2c` words participate in both an opaque helper area and a later
three-lane sum at `+0x28/+0x2C/+0x30`; a mechanical pseudo-member rewrite
does not recover either call linkage or those distinct lifetimes.

## Output paths missing from the draft

These are observed caller register values, not inferred C prototypes:

| Call site -> target | Proven immediate setup |
| --- | --- |
| `0x49DA3 -> 0x1611D0` | EDX = steady ESP + `0x14`; EAX = steady ESP + `0x38`; words at `+0x3C/+0x40/+0x44` were zeroed. |
| `0x49DB1 -> 0x4ADE0` | EDX = 4; ECX = steady ESP + `0x48`. |
| `0x49DBE -> 0x4AEF0` | ECX = steady ESP + `0x38`; EAX = steady ESP + `0x48`. |
| `0x49F16 -> 0x1611D0` | EDX = steady ESP + `0x14`; EAX = steady ESP + `0x28`; words at `+0x2C/+0x30/+0x34` were zeroed. |
| `0x49F24 -> 0x4ADE0` | EDX = 4; ECX = steady ESP + `0x48`. |
| `0x49F31 -> 0x4AEF0` | ECX = steady ESP + `0x28`; EAX = steady ESP + `0x48`. |

The draft calls all three helpers with empty argument lists. Its local
variables do not express these addresses reaching the callees. Consequently,
zero-initialized `local_c` / `local_8` appear never to receive helper results,
and the opaque-area cleanup tests appear to test unchanged zero values.
Allocating a new zeroed host buffer without binding the real output
contracts would preserve that error. Adding guessed C arguments or
prototypes would conceal the unresolved register ABI.

Other implicit interfaces also remain unresolved: `0x49F57 -> 0x1C5D0`
receives EDX = steady ESP + `0x18`, while the draft cannot express that
iterator update; `0x4A258 -> 0x4F7F0` occurs inside the loop advancing ESI
by 16 bytes. No conventional prototype is established by these facts.

## Bounded arithmetic facts for a later repair

- `0x49FA4` sets EBP to integer 1; `0x49FE7` copies EBP into EDI;
  `0x49FF0` increments EBP. The draft's floating `1.4013e-45` induction
  value is not the original integer loop behavior.
- `0x4A0D1` performs signed `FILD m32int`. The negative path adds the
  float value at `0x003A4F80` before `FSTP m32fp` at `0x4A0E1`; any future
  replacement must authenticate that data word and retain the conversion
  and rounding boundary rather than numerically converting a pointer.
- `0x4A0E9..0x4A10A` load the converted count with `MOVSS`, execute
  `RCPSS XMM1,XMM1`, broadcast lane zero with `SHUFPS`, load sum lane zero
  with `MOVSS` and the other two lanes with `MOVHPS`, then use `MULPS`
  and store with `MOVSS` / `MOVHPS`. Exact division is not an equivalent
  replacement for the approximate reciprocal instruction.
- `0x4A110` writes threshold bits `0x56B5E61F`; `0x4A184` compares
  the x87 value against that m32fp word. `FNSTSW AX; TEST AH,5; JP`
  controls whether the candidate is accepted. Pointer numeric conversion
  cannot preserve the threshold, and unordered behavior requires review.
- `0x4A221..0x4A247` copy the three sum words to object offsets
  `+0x444/+0x448/+0x44C` with integer MOV instructions. These are bit
  copies, not float-to-pointer numeric conversions.

## Repair boundary and next step

No repair candidate was installed, so no after-change syntax pass is claimed.
This investigation stopped at the ABI boundary before attempting a compile
shortcut. Recover the callee reads/writes and required caller state for
`0x1611D0`, `0x4ADE0`, `0x4AEF0`, and the iterator/cleanup calls first.
Then bind the actual guest storage without host-width layout changes and
review the x87/SSE and unsigned branch semantics independently. Existing
float-word helpers may support proven bit copies, but cannot supply missing
callee outputs or emulate the entire x87 contract.

Production/game state was not touched. There is no deployment or runtime
rollback; removing this note would revert the sole repository change.
