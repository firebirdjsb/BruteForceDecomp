# 0x00226CC0: float3 spans, packed scaling and raw receiver words

Status: scoped C11/instruction repair. Original entry and body digest are
unchanged. This does not establish the complete function's ABI, helper outputs,
guest memory, runtime behavior or machine-code equivalence.

The original XBE was freshly authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The ordered body consists of 1,881 bytes at `0x00226CC0` followed by 826 bytes
at `0x00227420`: **2,707 bytes**, digest
`552308F98DDC42D71A6B93FA3896C4B348C07F3622D40449BD472EC87F52BAA8`.
The verifier checks those exact ranges and 29 instruction/data windows.

## Established facts

S is ESP after alignment, SUB ESP,0xbc and saved EBX/ESI/EDI. Original stores
and address arguments establish separate 12-byte regions: direction at S+0x2c,
target at S+0x38, forward at S+0x48, scaled at S+0x5c, and temporary target
delta at S+0x1c. Real float[3] arrays replace isolated scalars/qwords in those
regions. No entire guest frame or native structure layout is inferred.

- `0x00226E33..0x00226E89` retains input X in x87, forms `(X*X+Y*Y)+Z*Z`,
  spills m32fp, and uses SQRTSS. The original stored length is distinct from
  later normalized components. `0x00226EB0..0x00226ED1` uses RCPSS on that
  length, broadcasts the result, loads `{X,+0,Y,Z}` with MOVSS/MOVHPS, applies
  MULPS with vector as destination and stores exactly twelve bytes.
- `0x00226F2C..0x00226F86` spills Z/Y/X differences, then compares the
  extended `(X*X+Z*Z)+Y*Y` with one. Less, equal and unordered select the
  fallback. The other branch spills before RSQRTSS and packed XYZ scaling.
- `0x00227003..0x0022702E` evaluates `(X*negative-X+Z*negative-Z)+Y*negative-Y`.
  The negative X value remains extended, while negative Y/Z have m32 spills.
  Ordered values below 0.5 select the fallback; unordered does not.
- `0x00227045..0x0022706E` broadcasts binary32 200, loads `{X,+0,Y,Z}`,
  multiplies with the scalar broadcast as destination, and stores twelve
  bytes at S+0x5c. Subsequent raw copies establish the S+0x48 contents on
  this fallback path. On other paths, unbound helper-produced words remain
  unresolved; arrays are not zero-filled to manufacture a producer result.
- `0x0022710D..0x00227157` reads Z/Y/X DWORDs before copying raw X/Y/Z words
  to receiver+0x1f0/+0x1f4/+0x1f8 and the target span. Float-to-integer numeric
  conversion is not the observed operation.
- `0x0022717E..0x00227219` spills Z/Y deltas, stores X without popping it,
  and compares `(Z*Z+Y*Y)+unspilled-X*unspilled-X` with binary32 2^-46.
  Only the accepted path spills the norm, runs RSQRTSS, and uses packed
  scaling on the already stored components. The existing explicit
  `0x002266D0` call receives this same three-word direction base.
- Original FLD/FSTP operands establish four-byte float views for receiver
  +0x1d4/+0x1d8, +0x214/+0x218 and +0x230. The corrected C uses bit copies
  and final binary32 spills instead of numeric integer conversions. The
  optional argument word at +0x208 is likewise transferred as raw bits;
  the original native argument ABI is not established by the C call.

The implementation retains standard FENV_ACCESS ON for optimization-sensitive
extended intermediates. All lanes of each observed packed MULPS are executed,
including the unstored lane initialized by memory MOVSS. This does not declare
inherited guest upper XMM state known across entry, calls or return.

## Focused evidence

The full C source passes i686/x86_64 Clang C11 syntax with existing sweep
flags; additional pedantic checks preserve the shared unknown-prototype policy.
The actual-source fixture extracts initial normalization, target normalization,
final normalization, scale/copy, dot comparison and receiver-word arithmetic.
No original virtual or helper implementation is substituted into production C.

At both `-O0` and `-O2`, **36,636 vector-path cases** and **12,212 combined
scale/dot/raw-copy/field cases** compare with separately transcribed host
instruction references. Four DAZ/FTZ settings cover signed zeros, subnormals,
threshold boundaries, extreme finite values, infinities, quiet NaNs and 3,000
deterministic random input tuples. Finite values and signed zeros compare by
bits; NaNs compare by class. Record canaries and untouched object bytes are
checked. Host x87 control and MXCSR are restored after each fixture run.

A targeted final-X case uses `2^-23 - (-2^-50)`: its square exceeds 2^-46,
while its stored binary32 copy rounds to 2^-23. The test rejects losing that
extended X. Three additional controls reject exact division replacing RCPSS,
accepting equality in the target branch, and numerically converting a raw
receiver word. Test coverage counts are asserted.

Numeric fixtures explicitly request extended host storage and masked x87
exceptions with 64-bit precision and nearest rounding. A default Windows
`float10` remains a host proxy. These tests do not cover FP status/traps,
NaN payloads, arbitrary aliases or original Xbox hardware accuracy.
The entry ECX binding, `0x0001FDD0`/iterator register-only outputs, other loop
reductions and remaining aggregate lifetimes stay ABI_UNVERIFIED. In particular,
the forward span's non-fallback producer binding is not claimed complete.
No game, assets, saves, installation, deployment or production data is touched.
