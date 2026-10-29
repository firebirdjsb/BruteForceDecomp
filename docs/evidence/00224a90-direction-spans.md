# 0x00224A90: direction spans and normalization

Status: scoped C11/instruction repair. Entry and original body identity are
unchanged. Complete interfaces, helper behavior, original Xbox execution and
machine-code equivalence remain unverified.

The private original XBE was authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The ordered body is 153 bytes at `0x00224A90` followed by 1,220 bytes at
`0x00224B30`: **1,373 bytes**, digest
`8013F12F3527F514E2303C79BAAEF2AA8E16A23BA1AF53DA0B733A4C10CC7318`.
The focused verifier checks those ranges and fourteen instruction/data windows.

## Established facts

S is ESP after SUB ESP,0x21c and saved EBX/EBP/ESI/EDI. Argument pushes
shift subsequent ESP-relative operands. Two independent twelve-byte spans
are established: direction at S+0x14/+0x18/+0x1c and scaled direction at
S+0xa0/+0xa4/+0xa8. C float[3] arrays replace the scalar/qword pseudo-layout
and disconnected scaled locals. No entire frame or native object layout is
inferred. The existing explicit calls now receive those same span bases.

- `0x00224AFA..0x00224B0C` initializes direction to `{0,1,0}`. The separate
  fallback at `0x00224F70..0x00224FA7` writes the same three float words.
- `0x00224BB4..0x00224C15` subtracts and spills Z/Y to binary32, while X
  remains extended after its FST. The norm is `(Z*Z + X*X) + Y*Y`, using
  the retained X. It then spills to m32fp before SQRTSS. A separate float
  norm word replaces the erroneous float-to-pointer cast.
- `0x00224C23..0x00224C4C` compares the stored length with zero and uses
  TEST AH,0x41 / JP. Positive **and unordered** values select normalization.
  Other values replace only Y with one and the carried length with zero.
  X/Z remain the already stored words on the fallback path.
- `0x00224C4E..0x00224C7F` uses RCPSS, broadcasts its result, loads
  `{X,+0,Y,Z}` with MOVSS/MOVHPS, executes MULPS with the vector as its
  destination, and stores exactly twelve bytes. The unused lane's multiply
  is executed; inherited upper SIMD state outside this block is unresolved.
- `0x00224F40..0x00224F60` multiplies the three stored direction words by
  a shared extended scalar and spills each result as binary32 into the
  separate scaled span. This corrects raw float-component access that the
  qword pseudo-variable had represented as numeric integer conversions.

FENV_ACCESS ON preserves the explicit extended-intermediate/spill boundaries
under the tested compiler. Default Windows float10 remains a host proxy.

## Focused checks and limits

The complete source passes i686/x86_64 Clang C11 syntax with existing sweep
flags and additional pedantic checks. Actual-source excerpts of normalization
and scaled stores compare with independently transcribed host instructions.
At each of `-O0` and `-O2`, **16,056 direction cases and 16,056 independent
scale cases** cover zero, signed zero, subnormals, finite extremes, infinities,
NaNs and 4,000 deterministic random tuples under four DAZ/FTZ settings.
Finite results and signed zeros compare by bits; NaNs compare by class.
Output canaries and coverage counts are checked. Host CW/MXCSR are restored.
Two controls reject exact division replacing RCPSS and fallback on unordered
length. Numeric fixtures require extended host long double and masked x87
exceptions with 64-bit precision and nearest rounding.

The scale fixture supplies promoted binary32 scalars solely as test inputs;
it does not bind the original scalar producer. The surrounding scalar chain,
including the current `_DAT_003bc6f0` view, the `0x00225060` return convention,
entry registers, iterator outputs, other local aggregate spans, unknown helper
prototypes and all original guest interfaces remain ABI_UNVERIFIED. FP status,
traps, NaN payloads, arbitrary aliases and Xbox hardware behavior are not
tested. Passing syntax or these excerpts is not whole-function equivalence.

## Deferred candidate from the same queue

`0x00142DF0` was inspected and left unchanged. Its original
`0x00143020..0x00143024` reads S+0x1c and pushes a fourth word before
three effective arguments to `0x001449C0`; that callee reads only the first
three. No producer for the first read was established. A later raw copy into
S+0x1c is evidenced, but does not initialize the earlier lifetime. Independent
review rejected casting an indeterminate C local as a repair; no zero-fill,
guessed pointer binding or removal of the guest write was committed.

No game process, installation, binary, assets, saves, deployment or production
data was changed. Private disassembly and the XBE remain outside Git.
