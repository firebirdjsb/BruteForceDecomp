# Guest callback address representation: 0x00338406 and 0x003451B7

Status: **instruction-backed DWORD representation fixes; focused C11 syntax
passes; ABI_UNVERIFIED; no runtime/callback connection claim**.

The private original XBE was authenticated against full SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The complete ordered body ranges were read from that XBE and independently
hashed before repair. Original addresses and embedded body hashes are retained:

| Entry | Original body bytes | Original body SHA-256 |
| --- | ---: | --- |
| `0x00338406` | 255 | `19FA00C8727FF84DEE4D8369B3F57919A559EF7DB0E0EBD5C135C8FB3C992997` |
| `0x003451B7` | 518 | `43384CDA3AC53586B4D07A826470E46340B17F9EAA9E63E4627BC2C4CC10EB07` |

## 0x00338406

The full function was inspected, including both initializer calls, optional
input copies, final field assignments and the final direct call. It never
directly invokes the four label values below. ESI is constructed as EBX+0x128
at `0x00338410`; EAX is constructed as EBX+0xe8 at `0x0033842B`.

| Original instruction | Exact bytes | Source representation |
| --- | --- | --- |
| `00338431 MOV DWORD [ESI],0x3383fe` | `c706fe833300` | `*puVar1 = UINT32_C(0x003383fe)` |
| `00338440 MOV DWORD [EAX],0x33836d` | `c7006d833300` | DWORD store at guest base+0xe8 |
| `00338446 MOV DWORD [EAX+4],0x337d12` | `c74004127d3300` | DWORD store at guest base+0xec |
| `0033844D MOV DWORD [EAX+8],0x338399` | `c7400899833300` | DWORD store at guest base+0xf0 |

The former `&LAB_*` expressions implied undeclared host symbols. The latter
three also used host pointer-sized stores, which would occupy eight bytes on
x86_64 despite the original DWORD instructions and four-byte field spacing.
The replacement values are raw `UINT32_C` guest addresses; these stores use
`uint32_t` and unsigned 32-bit base addition. No target prototype, structure
field name or callable host function is inferred.

## 0x003451B7

The full initializer body was inspected, including allocation, zero fill,
five direct calls to `0x0001FE40`, status/error paths and cleanup. There are
**five** occurrences of the `0x0034516A` argument, not four:

| Instruction/window start | Exact bytes | Observed fact |
| --- | --- | --- |
| `00345209` | `686a513400` | first initializer argument pushes literal `0x34516a` |
| `00345224` | `c7836402000068743800e80daccdff` | DWORD store at EBX+0x264 receives `0x387468`; first initializer CALL at 0x34522e |
| `00345233` | `bf6a513400576a045e56568d83c808000050e8f6abcdff` | EDI receives `0x34516a`; PUSH EDI supplies second call at 0x345245 |
| `0034524A` | `5756568d83d808000050e8e7abcdff` | PUSH EDI supplies third call at 0x345254 |
| `00345259` | `5756568d83f008000050e8d8abcdff` | PUSH EDI supplies fourth call at 0x345263 |
| `00345268` | `5756568d830009000050e8c9abcdff` | PUSH EDI supplies fifth call at 0x345272 |

The source passes `UINT32_C(0x0034516a)` at all five sites. The separate
`&PTR_LAB_00387468` expression was also a literal guest address, proven by
the MOV immediate above. It is represented as `UINT32_C(0x00387468)` and
its synthetic host extern declaration is removed. These repairs do not
dereference or call the literal addresses or resolve their runtime behavior.

## Validation and remaining boundaries

All ten listed opcode windows matched the authenticated XBE byte-for-byte.
Each changed source passed focused Clang `-std=c11 -fsyntax-only` checks for
both `i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`, using the existing
`tools/sweep_c11.py` flags and repository include directory. The scoped
`git diff --check` passed. No tests invoked Xbox/network code or callbacks.

The changes address raw address representation only. Original implicit ECX
contracts, helper interfaces, guest-memory translation, remaining native
pointer-sized assignments (including 0x00338406's dynamic +0xfc field),
signed address arithmetic and the decompiled synchronization loop in XnInit
remain unverified. No unrelated source transformations, callable host label
declarations, shared headers, runtime hooks, game files, saves, deployment or production
changes are part of this repair. The coordinator updates affected source
fingerprints/syntax labels and records the original-byte verifier windows at
integration; ABI and behavior labels remain unverified.
Syntax success does not imply linked callbacks, instruction equivalence,
runtime behavior, a byte match or a runnable Xbox rebuild.
