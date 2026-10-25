# Dispatch byte cluster 2

Image source: original `default.xbe`, SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The listed body ranges and digests were checked against that image with the
local export verifier before editing. These remain C drafts; no runtime or ABI
equivalence is claimed.

| Entry | Original body range (inclusive) | Body length | SHA-256 |
|---|---|---:|---|
| `0x00200080` | `0x00200080–0x00200180` | 257 | `9A08227013EE4D66230C3265C2243F909B93CC285F9EA8216FFDE459EC639F2A` |
| `0x00201e80` | `0x00201e80–0x00201fa9` | 298 | `F99A52250CEC93EC0721DACDA5E652C5B8C472880E389F5918BACE01C7213ABD` |
| `0x00208a70` | `0x00208a70–0x00208ba0` | 305 | `A49D505E5385826BE2D57BC06859D9FB01C3F0A14C367CFA9440D22528725647` |

## Observed byte-lane behavior

All three entries save the third incoming argument in a full 32-bit register
before later writing a byte into its original stack slot. The C drafts retain
the full pointer parameter and use `bf_x86_word_store_byte` on its object
representation for observed stack-slot writes; they do not replace that word
with a one-byte local. Output-buffer accesses continue through the separately
saved pointer (`puVar3` / `puVar4`). In `0x00208a70`, post-helper `mov al,1`
changes the return register without writing the incoming slot; the draft keeps
that state separately after loading the slot value observed at `0x00208b44`.

In `0x00200080`, `mov byte [esp+0x1c], al` at `0x0020009c` stores the helper's
result into byte zero of the incoming third argument slot. The later `mov`
instructions at `0x002000be`, `0x002000e1`, `0x00200104`, `0x0020012a`, and
`0x0020014b` store the observed 0/1 result values into that same byte lane.
The function returns the low byte. In `0x00201e80`, the corresponding initial
write is at `0x00201e9c`; result writes occur at `0x00201ec2`, `0x00201eea`,
`0x00201f0e`, `0x00201f32`, and `0x00201f54`. Its final call also receives the
address of the full stack slot. In `0x00208a70`, the initial write is at
`0x00208a8c`; later stack-slot writes are at `0x00208ab2`, `0x00208ad6`,
`0x00208afa`, and `0x00208b1c`. The instruction at `0x00208b44` loads the
slot's low byte into AL. Subsequent `mov al,1` instructions set the result
register without writing the incoming stack slot. Tests at `0x00208b4b` and
`0x00208b6f` read AL; the final branch returns 1 directly or returns the
result byte.

## Unresolved

The source-level function prototypes still do not prove the original ECX/EAX
contracts, helper prototypes, or exact identity between the C parameter object
and its x86 incoming stack slot. Those require caller/callee ABI review. The
current code records only the observed low-byte writes and reads while
preserving the complete parameter word in the C draft.

## Checks

All three files passed C11 syntax checks with Clang targeting i686 and x86_64
Windows and the repository sweep diagnostic flags. This does not establish
runtime behavior or byte-identical reconstruction.

The implicit ESI address passed to 0x000EE560 is still absent from the
draft helper interface. These byte views do not resolve that pre-existing gap.
