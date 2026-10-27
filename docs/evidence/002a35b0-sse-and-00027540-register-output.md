# 0x002a35b0 SSE storage repair and 0x00027540 deferral

Status: original operands observed; one source passes focused C11 syntax
checks. Complete ABI, Xbox behavior, x87 equivalence and byte-identical
rebuilding remain unverified.

## Original evidence

The original XBE was authenticated before inspection against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Ordered body bytes were read from the original XBE sections and independently
hashed against the function export:

| Entry | Bytes | Original body SHA-256 |
| --- | ---: | --- |
| `0x002a35b0` | 1568 | `9E114C355A1E33862895BD9F01A8CBCCE151DF05057E1DE2A8F57E8950960A81` |
| `0x00027540` (deferred) | 1153 | `438F31BB01F3C29793524A5B2CE9A3771FB6FB699AB5A7CFD44E874D902830EB` |
| `0x00027490` (output dependency, unchanged) | 176 | `046191D73265E5050B743C7B2303C56EDD1B8F986D3E61C2226484C79AA78F75` |

Source paths were resolved with `tools/source_layout.py`.

## 0x002a35b0

- `0x2a35cf MOVSS` loads the third stack argument and clears the upper
  96 bits. `0x2a35d5 SHUFPS 0` broadcasts that scalar. `0x2a35dd MOVSS`
  reads parameter two +`0x18` into lane 0 with cleared upper lanes;
  `0x2a35e1 MOVHPS` reads the raw eight bytes at +`0x1c` into lanes 2/3.
  Lane 1 remains zero. `0x2a35e5 MULPS XMM0,XMM1` retains the observed
  operand order and executes the fourth, unstored lane operation too.
- `0x2a35ec MOVSS` and `0x2a35f0 MOVHPS` write exactly twelve bytes at
  original `ESP+0x38/+0x3c/+0x40`. A three-float array represents this
  real SSE scratch store. Qwords are transferred as raw float bits,
  replacing the draft's numerical integer-to-float conversions.
- `0x2a35f4..0x2a3626` adds scratch components to parameter two
  +`0xc/+0x10/+0x14`, storing in that order through x87. The C draft
  retains the arithmetic/store order; exact x87 precision, NaN and
  exception effects are unverified.
- `0x2a36da..0x2a36fe` calculates `(z*z+x*x)+y*y` through x87 and spills
  one binary32 word. `0x2a3702 RSQRTSS` replaces only the low XMM0 lane;
  the source retains the preceding packed product in the upper lanes.
  `0x2a3708` stores only the low result.
- `0x2a3af4..0x2a3afe` spills one binary32 input, executes `SQRTSS`,
  then stores only its low lane. The source uses that SSE scalar result.
  There are no later explicit SSE reads in this body. Upper register
  state across subsequent external calls and return is not a verified ABI.

Existing call signatures, implicit register contracts, separate draft locals
that originally shared contiguous stack storage, and unrelated scalar/bit
casts remain `ABI_UNVERIFIED`. This change does not claim to repair them.

## Why 0x00027540 is deferred

`0x275f4 RSQRTSS XMM0,[ESP+0x14]` inherits unknown upper lanes; only the
low lane is stored at `0x275fa`. A later memory `MOVSS` at `0x2764b`
clears all upper lanes before the packed operation at `0x27661`.
However, the intervening call at `0x27632` remains an ABI boundary:
unknown incoming upper lanes must not be described as zero, or declared
dead through an unverified transitive callee contract.

More directly, the packed input at `0x27655..0x2765d` comes from a real
twelve-byte output region at original `ESP+0x58`, produced by that call:

- `0x27604 LEA ECX,[EBX+0x44c]`, `0x2760e LEA EAX,[ESP+0x34]`, and
  `0x27612 LEA ESI,[ESP+0x58]` set its observed register inputs.
- `0x27632 CALL 0x27490` passes those register values. The original
  callee reads input words from EAX +`0/+4/+8` and ECX +`0/+4/+8`.
- `0x27534/0x27536/0x27539` in that callee stores raw dwords at ESI
  +`0/+4/+8`. The caller then loads this exact output region into XMM1.
- The current C draft calls `FUN_00027490()` with no arguments; its
  callee draft has unresolved `in_EAX`, `in_ECX`, and `unaff_ESI` locals.

A new local array merely substituted for `fStack_164/uStack_160` would
never be passed to the producer. A normal C argument list would invent a
new cross-function calling convention. That reconstruction requires a
separately scoped and independently reviewed register-contract repair;
the source is therefore unchanged and remains a syntax failure.

## Validation and scope

Before editing, both entries failed both i686 and x86_64 Windows syntax
checks. After editing, `0x002a35b0` passes both with no diagnostics using
the unchanged `tools/sweep_c11.py` flags. The deferred source still fails
with its original invalid decompiler array operations. `git diff --check`
passes. No runtime or Xbox-vs-host comparison was performed. SSE behavior
uses the host processor/MXCSR; x87 control word and extended intermediates
are not emulated.

Scope is one C source and this evidence document. No shared header,
verifier, metadata, Git state, original game data or deployment target
was modified by this repair owner. No production process was touched.

Coordinator integration: independent review accepted the changed lane and
storage facts. Integration refreshes only affected source fingerprints/syntax
labels and original-byte evidence. Deferred sources remain unchanged; complete
ABI and behavior are not promoted by these source repairs.
