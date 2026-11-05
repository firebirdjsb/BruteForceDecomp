# Independent rational scalar-conversion oracle

## Scope and independence

`rational_oracle.py` models the scalar numerical result and MXCSR status of legacy
32-bit `CVTTSS2SI` and `CVTSI2SS`, with every SIMD exception masked. Inputs and
outputs are unsigned integers representing exact DWORD bit patterns. No Python
`float`, `struct` float conversion, host floating-point environment, native
instruction, external model, game code, or uploaded binary is used. The only
repository file read during authoring was the canonical `AGENTS.md`; that
repository was not edited or committed. This is a standalone numerical reference,
not a reconstruction of any game function.

## Primary sources inspected

Retrieved through the web search/read tool on 2026-11-05:

1. [Intel SDM, Volume 1, 253665-087US, March 2025](https://cdrdv2-public.intel.com/851056/253665-087-sdm-vol-1.pdf).
   Sections 4.8.4 and 4.8.4.2, Table 4-9; sections 10.2.3.1 through 10.2.3.4;
   sections 11.5.2.2 and 11.5.2.6; Appendix D, Table D-13.
2. [Intel SDM, Volume 2A, 253666-089US, October 2025](https://cdrdv2-public.intel.com/868140/253666-089-sdm-vol-2a.pdf).
   CVTSI2SS entry, PDF pages 356-357; CVTTSS2SI entry, PDF pages 373-374.
   PDF page numbers are one-based. The contents and printed page numbers in this
   edition differ, so instruction names and PDF pages are the useful locators.
3. [AMD APM, Volume 4, publication 26568](https://www.amd.com/content/dam/amd/en/documents/processor-tech-docs/programmer-references/26568.pdf).
   The search index supplied the CVTTSS2SI description from Rev. 3.25, November
   2021, printed page 120, corroborating truncation and invalid-result handling.
   Direct retrieval returned HTTP 404. No additional AMD text is claimed read;
   the successfully read Intel documents are the operative evidence.

The source-derived rules used here are compact: MXCSR status bits are sticky,
and its RC field selects nearest-even, down, up, or zero. DAZ replaces subnormal
inputs with signed zero before computation. Neither conversion signals a
denormal-operand exception. CVTTSS2SI truncates, returns integer indefinite for
invalid conversions, and can signal invalid or precision. NaNs and infinities
are invalid. CVTSI2SS uses MXCSR rounding and can signal precision. FTZ concerns
floating-point underflow results. DAZ availability is processor-dependent.

## Exact mathematics and implementation

The reasoning below is the oracle author's derivation from those rules, not a
transcription of either vendor's pseudocode.

### Decode binary32 without host floating point

Split DWORD `u` into sign `s`, exponent field `e`, and 23-bit fraction `f`.
For finite values the exact rational is:

- `e = 0`: `(-1)^s * f / 2^149`.
- `1 <= e <= 254`: `(-1)^s * (2^23 + f) * 2^(e - 150)`.
- `e = 255`: classify as infinity or NaN, without constructing a Fraction.

Zero signs need not survive rational decoding: either signed zero produces
integer zero, and an integer source has only one zero encoding.

### CVTTSS2SI

After DAZ preprocessing, let the exact finite value be `x`. Compute
`t = sign(x) * floor(abs(x))`. This implements truncation without accidentally
flooring negative values. If `t` lies outside `[-2^31, 2^31-1]`, return
`0x80000000` with IE. All non-finite inputs return that same pair. Otherwise
encode `t mod 2^32` and set PE exactly when `Fraction(t) != x`.

The invalid case is not treated as an ordinary rounding result. In this
binary32-to-int32 domain, any finite value large enough to overflow int32 is
already an integer: binary32 spacing at those magnitudes is at least 128.
Thus invalid finite values cannot independently carry a discarded fractional
part. NaNs and infinities are classified before arithmetic. This independently
rules out an IE-plus-PE result for this scalar operation.

Every nonzero binary32 subnormal has magnitude below one, so without DAZ it
truncates to zero and is inexact. With DAZ it becomes exact zero first.
DE is never newly raised in either case. Normal tiny values still raise PE,
even with DAZ. RC is irrelevant because truncation is fixed. FTZ is irrelevant
because the destination is integer, not a tiny floating-point result.

The valid input `0xCF000000` (-2^31) and invalid positive `0x4F000000` (+2^31)
both produce result DWORD `0x80000000`; flags distinguish them.

### CVTSI2SS

Interpret the input as two's-complement signed integer `n`. For nonzero `n`,
let `a = abs(n)` and `k = floor(log2(a))`, obtained exactly from integer bit
length. Define the rational spacing `u = 2^(k-23)` and scaled magnitude `q=a/u`.
Then `2^23 <= q < 2^24`. Let `l=floor(q)` and `r=q-l`.

If `r=0`, keep `l`. Otherwise choose the magnitude significand as follows:

- RC=0: choose `l+1` if `2r>1`, or if `2r=1` and `l` is odd; else choose `l`.
- RC=1: choose `l+1` for negative `n`, else `l`.
- RC=2: choose `l+1` for positive `n`, else `l`.
- RC=3: choose `l`.

The adjacent magnitudes `l*u` and `(l+1)*u` bracket `a`; their signs establish
the directional choices. Parity of `l` selects the even significand at a tie.
If rounding gives `2^24`, divide that significand by two and increment `k`.
This carry is exact and preserves the selected value. Pack the sign, biased
exponent `k+127`, and significand minus the hidden `2^23` bit.

PE is determined by exact comparison of the selected rational magnitude with
`a`, before the value-preserving carry. Zero becomes positive zero. Since every
nonzero int32 has magnitude at least one and at most `2^31`, every nonzero
rounded output is normal, finite, and at most `2^31`. There is no overflow,
underflow, denormal input, or invalid conversion. Thus DAZ and FTZ do not affect
the result, and PE is the only possible new exception.

### Sticky-state contract

`cvttss2si` and `cvtsi2ss` return `(result_bits, raised)`.
`evaluate(op, bits, mxcsr)` returns `(result_bits, raised, mxcsr | raised)`.
`raised` describes this operation's exception condition, not just zero-to-one
transitions. For example, a PE-producing operation returns `raised=32` even
when the input MXCSR already has PE set. All six preseeded sticky bits and all
control bits are preserved in `after`. Unmasked states, reserved high MXCSR
bits, nonintegers (including booleans), and non-DWORD operands are rejected.

All 4 RC choices, 2 DAZ settings, 2 FTZ settings, and 64 initial sticky masks
are accepted: 1,024 masked MXCSR states per input DWORD. DAZ support is an
explicit model assumption; setting DAZ on a processor that lacks it is outside
this mathematical domain.

## CLI

Run `python3 -B rational_oracle.py`, supply one JSON object per nonblank line,
and read one JSON object per accepted input. Input fields are preserved, with
`result`, `raised`, and `after` added or replaced. Required fields:

```json
{"op":"tt","bits":1069547520,"mxcsr":8064}
{"op":"si","bits":16777217,"mxcsr":8064}
```

Expected outputs:

```json
{"op":"tt","bits":1069547520,"mxcsr":8064,"result":1,"raised":32,"after":8096}
{"op":"si","bits":16777217,"mxcsr":8064,"result":1266679808,"raised":32,"after":8096}
```

Malformed input reports its line number to stderr and exits with status 2;
previous successful lines may already have produced output. No corpus is
embedded and no generated files are needed.

## Reproducible validation

The companion rational_selftest.py retains 41 manual edge vectors across all
1,024 masked MXCSR states, 40,000 randomized rounding-property checks, and
API/CLI negative tests: 82,000 checks. The integer decoder reused for these
properties makes them useful invariants, not a third independent model.
The repository runner also compares this oracle to the separate C++ model and
freshly authored native wrappers. See the companion evidence summary.

## Proof boundaries

The arguments cover exact arithmetic and the architectural rules listed above.
They are not a machine-checked proof that this Python program implements the
arguments. Targeted assertions and comparisons can catch coding errors but do
not prove equivalence over all DWORDs. This file makes no claim of exhaustive
hardware testing, historical Xbox processor support, game behavior, ABI,
calling convention, instruction encoding, memory faults, traps, or whole-XMM
write behavior. Only the scalar result and masked MXCSR status are modeled.
The two files were authored independently without reading sibling models.
