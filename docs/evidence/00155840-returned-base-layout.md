# 0x00155840 returned-base layout correction

Status: corrected guarded dispatch and its misleading concrete test fixture.
The original caller remains unchanged. No matrix initialization, universal
object schema, source-coverage improvement or complete caller behavior is claimed.

## Exact original observations

All evidence uses original XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
`scripts/verify_00155840_matrix_layout.py` authenticates that image, the existing
caller/tail/getter spans, all 102 bytes of `0x000621c0` with SHA-256
`C45FC4B215F579D4BA970255FF50CD9C6C1E44AD505F8A07FF0540FBA626C757`,
and twenty explicit dispatch/constructor/partial-write windows.

The original caller reads `[object+0x48]`, calls its table slot `+0x14` with
ECX=`object+0x48`, and passes returned EAX unchanged as ECX to `0x000621c0`.
For table `0x0039adec`, that slot is `0x00059a50`. The latter loads the same
table from `[ECX]` and jumps through slot `+4`, whose pinned value is
`0x0010f890`. Its complete four-byte body is LEA EAX,[ECX-0x48]; RET.
There is no evidenced adjustment to a separate matrix member.

`0x000621c0` then reads twelve raw DWORDs relative to that returned base:

| Sum | Original coefficient read order | Translation word |
| --- | --- | --- |
| First | +08, +04, +00 | +24 |
| Second | +14, +0C, +10 | +28 |
| Third | +20, +18, +1C | +2C |

These are instruction operands, not established semantic matrix fields.
The corresponding vector reads and x87 operation/store order remain unchanged.

## Why the previous concrete fixture was incorrect

The constructor/destructor paths explicitly write both a primary table word
at the returned base and table `0x0039adec` at base+0x48:

| Original writes | Primary word at base+00 |
| --- | --- |
| 0x0022d39d / 0x0022d3a3 | 0x00394340 |
| 0x00149f50 / 0x00149f56 | 0x0039b508 |
| 0x0014a026 / 0x0014a02c | 0x0039b508 |
| 0x00162ece / 0x00162ed4 | 0x0039a8e0 |

The previous test placed float `1.0` at base+00 while describing a concrete
constructor-backed object. That replaced the original primary-table word.
The corrected test preserves the raw primary word and explicitly labels all
other seeded coefficients as synthetic runtime inputs. Its first arithmetic
result becomes 2.0 rather than the invented fixture's 7.0.

`bf_00155840_known_matrix_virtual` retains its existing API name but now guards
these three supported primary words as well as the original subobject table,
dispatch target and implementation target. This additional compatibility guard
fails closed on unsupported layouts; it is stricter than original dispatch.
It does not certify the other eleven words or assert any field semantics.

The common constructor chain reaches `0x00155340`. Its visible instructions
include an unknown helper return stored at +04; zero words at +08/+0C/+10/+14/
+1C; raw `FFFFFFFF` at +18; an unknown 16-bit helper result at +22; a partial
16-bit `FFFF` write at +20; a partial zero word at +24; and byte `20` at +26.
The adjacent byte at +27 is masked without initializing all its bits. These
stores do not establish twelve initialized floating coefficients. In particular,
the relevant inspected stores do not supply verified values for +28 or +2C.
No missing bytes have been filled or relocated to make this resemble a matrix.

## Focused checks and remaining gate

Strict Clang C11 O0/O2 each pass:

- 70,662 assertions over 1,536 adapted original-byte `0x000621c0` executions,
  three preserved primary words, four x87 rounding modes, retained preexisting
  x87 stack state and bounded raw partial/NaN word cases. All three output
  DWORDs match the actual host execution of the authenticated instruction body.
- 154 assertions for guarded concrete dispatch and the existing frame increment.
- Three negative controls: shifting the first or final coefficient read fails
  an arithmetic comparison; removing the primary-layout guard fails the explicit
  rejection of the old invented float-1.0 first word.

The native oracle uses low-address fixture allocations, a Windows x64 register
binding wrapper and RSP-width scratch allocation. It preserves the original
x87 arithmetic bytes. It is an adapted host instruction test, not proof of
Xbox-specific NaN, trap, floating-environment or runtime object behavior.
Both helpers also pass standalone strict C11 syntax for i686 and x86-64.

The remaining integration gate is concrete runtime provenance and complete
original writers for the returned raw coefficient words on each supported path.
The nineteen stored occurrences of the caller do not establish nineteen object
layouts. No universal layout or initialized matrix can be inferred from them.
The caller, inventory, progress, existing unrelated edits, game process, saves
and production state were untouched. No deployment occurred. Rollback consists
of reverting the scoped helper/test changes and removing the new verifier,
matrix test and this evidence document.
