# 0x0011C810: original tail and remaining canonical-caller gate

**Status:** original instruction facts recovered; canonical source unchanged.
This note does not establish complete interfaces, runtime equivalence, an Xbox
build, or a completed syntax repair.

## Authentication and frame identity

The private original XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
On 2026-10-28, the section-mapped original bytes were independently checked
against the original export's ordered body ranges and full-body digests:

| Entry | Bytes | Original body SHA-256 |
| --- | ---: | --- |
| `0x0011C810` | 647 | `A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255` |
| `0x00117310` | 289 | `1418AF0500BB361E1729FFC8E552631838AC81E6D1B09E5AF92104C69AFA4D78` |

Let `S` denote original guest ESP after `SUB ESP,0x88; PUSH ESI`.
Saved ESI is at `S+0`, the return address at `S+0x8C`, and the sole
original stack argument at `S+0x90`. The caller reloads that argument at
`0x0011C893`, `0x0011C8AE`, `0x0011C966`, `0x0011C977`, and
`0x0011C986`; `0x0011C8AE` establishes ESI for the tail's calls.
Define `A=F32[S+0x0C]` and `C=F32[S+0x14]` **after** `0x0012B2A0`.
They are its first and third output lanes, not a matrix pointer or the
earlier object-component scratch values.

Mapped original constants are `0x003A4F74=0.5f`,
`0x003A4F78=1.0f`, `0x003A4F7C=-0.5f`, `0x003A4F88=0.0f`,
and `0x003A51B0=8.0f`.

## Tail facts for reuse

The following decision table describes **finite ordered comparisons**.
NaN/invalid exceptions, x87 precision/rounding/status, and division by zero
must be preserved separately before a complete caller translation.

| Original edge | Finite condition | Action |
| --- | --- | --- |
| `0x0011C917..0x0011C99A` | `fabs(8*A) < fabs(C)` | Store `{1,0,0}` to object `+0x7B0/+0x7B4/+0x7B8`; restore frame; `RET 4` |
| `0x0011C99D..0x0011C9B6` | `A >= 0` | Take `0x0011CA30` (mode 1); otherwise mode 2 |
| `0x0011C9B8..0x0011C9C5` | mode 2, `A == C` | Call `0x00117310(object,2,0.5f)` |
| `0x0011C9D4..0x0011C9F8` | mode 2, unequal, `A > C` | Call with scalar `(A/C)*0.5` |
| `0x0011CA07..0x0011CA21` | remaining mode 2 | Call with scalar `1-(C/A)*0.5` |
| `0x0011CA30..0x0011CA3D` | mode 1, `A == C` | Call `0x00117310(object,1,0.5f)` |
| `0x0011CA4C..0x0011CA6C` | mode 1, unequal, `-C > A` | Call with scalar `(A/C)*-0.5` |
| `0x0011CA6E..0x0011CA88` | remaining mode 1 | Call with scalar `(C/A)*0.5+1` |

Important status lifetime: `0x0011C9AB FNSTSW AX` captures the comparison
of A with zero; the following FCOMP compares A with C. `TEST AH,5` uses
the **earlier** snapshot; `0x0011C9B4 FNSTSW AX` captures the second
comparison without changing the integer parity flags used by the next JP.
Equality uses `TEST AH,0x44; JP`; ordered equality takes the fallthrough
constant-0.5 call. The later ordering predicates use `TEST AH,0x41; JNE`.

For arithmetic calls, `PUSH ECX` reserves a four-byte scalar slot and shifts
subsequent stack-relative operands by four bytes. The original sequence
performs x87 arithmetic, `FSTP DWORD[ESP]`, `PUSH mode`, `PUSH ESI`, then
CALL. Constant-0.5 cases use `PUSH 0x3F000000` instead. The callee's entry
stack arguments are therefore object, mode, and a binary32 scalar.
`0x00117310` authenticates these at entry-relative `+4/+8/+12` and exits
with `RET 12`. Its MAXSS/MINSS and subsequent stores are not replaced here.
Every caller exit restores ESI and its `0x88`-byte allocation, then `RET 4`.

## Missing connection and next repair boundary

The unchanged canonical `FUN_0011c810(int param_1)` has no implementation
providing original guest ESP/frame storage or executing the two indirect
calls with original ECX=`argument+0x1B4`, pushed guest outputs `S+0x28`
and `S+0x1C`, EAX return, and stack cleanup. The authenticated concrete
`0x0010FBF0` target proves one particular virtual contract; its scalar body
and all reachable alternative targets still require a faithful execution
connection. Existing bounded host projections do not supply that entry path.
Replacing the frame with arbitrary host pointers, seeding an abstract S, or
adding new arguments to the original entry would manufacture this connection.

A separately provable narrow correction would replace the draft's
uninitialized `unaff_retaddr`/`iStack_4` object paths and `iVar4` forwarding
with the original `param_1`. This change was **not made**: it would leave
the unresolved producer/frame/scalar dataflow and would not complete the
requested syntax repair. Do not count it as a completed function.

The unchanged draft fails the unchanged `tools/sweep_c11.py` flags on
Windows i686 and x64: the first three errors are pointer-to-float casts at
source lines 69, 75, and 76. No new syntax pass, behavior result, deployment,
or progress-total change is claimed. The next owner should first establish
the actual original-entry guest-frame/virtual execution connection, then
use the authenticated table above rather than repeat tail discovery.
