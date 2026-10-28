# 0x002d3ea0 guest words and packed additions

Status: scoped guest-word transfers, pointer-field loads and SSE operations
are supported by original instructions. Focused C11 syntax checks pass.
Complete interfaces, scalar/x87 behavior, runtime and byte matching remain
unverified.

## Original evidence

The XBE was authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Ordered function-body bytes read from its sections independently match
the export digest:

| Entry | Bytes | Body SHA-256 |
| --- | ---: | --- |
| `0x002d3ea0` | 1614 | `0009DD5B3714EB37B42E34E24F727AD60DA8313DBB1BB2238937AC53BB22BC20` |

`tools/source_layout.py` resolved the source path. No other game's code,
addresses or inferred object meanings were used. The entry signature and
body hash are retained.

## Raw four-byte words

The retained `float *param_1` describes mixed draft storage rather than a
verified all-float record. Local `memcpy` helpers now preserve four-byte
words where the original uses integer `MOV`, rather than numerically
converting the float value or storing a native-width host pointer.

- `0x2d3efa/0x2d3f0a` read the words at record `+0xec/+0xf0` and
  `0x2d3f04/0x2d3f14` copy them to the two four-byte output slots.
- `0x2d3f1b/0x2d3f21` follows the first raw pointer's `+0xc` word,
  then increments its `+0x54` dword. The raw guest address is also used
  for the later `+0x6c` increment at `0x2d4389/0x2d438c`.
- `0x2d3f2b..0x2d3f4a` reloads those words, adds `0xfc` with 32-bit
  wrapping and writes the resulting words into record `+0x1c/+0x20`.
- `0x2d4090` loads the record `+0x10c` output pointer as a dword.
- The six record `+0x108` loads at `0x2d40c1/0x2d40fa/0x2d4168/`
  `0x2d4202/0x2d424e/0x2d42b9` likewise load raw pointer words. Loads
  remain after the existing opaque calls rather than being hoisted over them.
- `0x2d4337/0x2d4352` forwards the raw node words as existing call
  arguments. `0x2d4371/0x2d4377/0x2d4393/0x2d443d` reloads them
  for the final node accesses. Final `0x2d4437/0x2d44e1` output stores
  write exactly four bytes each, preserving pointer bits.

Guest addresses are held as `uint32_t` and cast through `uintptr_t` only
at existing memory accesses. This does not implement a guest memory mapper
or establish a runnable host-pointer contract.

## Eight packed additions

The local helper represents the observed `MOVSS/MOVHPS` loads, `ADDPS`,
`MOVSS/MOVHPS` stores. Memory `MOVSS` clears the upper lanes, `MOVHPS`
places the next eight bytes in lanes 2/3, and all four lanes participate
in the addition. Only four plus eight bytes are written. Source operand
order and in-place read-before-write behavior are retained:

| Original instruction region | Left triple | Right triple | Output |
| --- | --- | --- | --- |
| `0x2d3f72..0x2d3f91` | first node `+0x9c` | first node `+0x7c` | record `+0x24` |
| `0x2d3fbd..0x2d3fdc` | first node `+0xac` | first node `+0x8c` | record `+0x44` |
| `0x2d4005..0x2d4024` | second node `+0x9c` | second node `+0x7c` | record `+0x34` |
| `0x2d4050..0x2d406f` | second node `+0xac` | second node `+0x8c` | record `+0x54` |
| `0x2d43c4..0x2d43e3` | first node `+0x8c` | first node `+0xac` | first node `+0x8c` |
| `0x2d4400..0x2d441f` | first node `+0x7c` | first node `+0x9c` | first node `+0x7c` |
| `0x2d446e..0x2d448d` | second node `+0x8c` | second node `+0xac` | second node `+0x8c` |
| `0x2d44aa..0x2d44c9` | second node `+0x7c` | second node `+0x9c` | second node `+0x7c` |

The addresses come directly from the record's observed pointer words and
original `LEA`/`ADD` operands. No replacement vector data or callee-produced
output array was introduced.

## Directly produced stack input

The negated input to the existing call at `0x2d4124` is now one four-float
region. Its first three words correspond to original `ESP+0x24/+0x28/+0x2c`
before the call's argument pushes. The caller itself negates the three
values from the raw record `+0x108` pointer, then stores them at
`0x2d4115/0x2d411c/0x2d4120`. Its fourth word is explicitly zeroed
at `0x2d40f6`. `0x2d410e` computes this region's actual address, which
is pushed at `0x2d4114`. The C call receives this array directly rather
than the address of a disconnected scalar local.

## Checks, boundaries and residual risk

An independent reviewer reauthenticated the body and checked the raw-word
transfers, all eight additions and the connected input array, repeating both
architecture checks. Approval is limited to these changed facts and syntax.

Before editing, this source failed both i686 and x86_64 Windows C11 syntax
checks at float-to-pointer conversions. Both now pass without diagnostics
using unchanged `FLAGS` from `tools/sweep_c11.py`. Entry/body-hash retention
and whitespace on changed lines were checked separately.

No new register parameter or external prototype was invented. The original
ESI input to `0x002d4b60` and EAX input to `0x002d44f0`, other implicit
callee contracts, scalar global types, x87 intermediates/comparison orders,
the two scalar `SQRT` drafts, and signed integer shift/overflow behavior
remain `ABI_UNVERIFIED`. Existing scalar expressions were not promoted to
reviewed semantics. The helper's SSE uses host MXCSR; exception state,
NaNs/subnormals and Xbox-vs-host results have not been compared. No runtime,
game, link or byte-match validation was performed.

The fallback candidate `0x000dd380` was authenticated and baselined but
remains byte-for-byte unchanged; its interface reconstruction is outside
this repair. Scope is this source and note only. Shared headers, metadata,
verifiers and Git state are coordinator-owned and were not changed by this
owner. No production process, original game data, assets or deployment was
touched. Rollback is the scoped source/note revert after integration.
