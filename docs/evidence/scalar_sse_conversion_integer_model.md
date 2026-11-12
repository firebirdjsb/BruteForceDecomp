# Integer-only conversion model

The C++17 implementation was derived before reading the separate Fraction
implementation. Both use architectural conversion rules, but one operates on
fixed-width significands and remainders while the other constructs exact
rational values and compares represented results. Neither uses a host floating
cast or the other's implementation.

## Architectural basis

The primary sources were inspected through the approved web read/search tools
on 2026-11-05. This is a concise paraphrase, not a copied instruction listing.

- [Intel SDM Volume 1, 253665-083US, March 2024](https://cdrdv2-public.intel.com/819711/253665-sdm-vol-1.pdf),
  sections 10.2.3.1–4, 11.5.2.2, Table 11-1, and Appendix D Table D-8:
  status is sticky; DAZ substitutes signed zero for subnormal inputs; these
  integer conversions do not signal denormal-operand exceptions; nonfinite or
  out-of-range integer conversions have an invalid-operation masked response.
  DAZ is not supported by every SSE processor and must be checked through
  MXCSR_MASK. FTZ concerns floating-point underflow results.
- [Intel SDM Volume 2A, 253666-083US, March 2024](https://cdrdv2-public.intel.com/819712/253666-sdm-vol-2a.pdf),
  printed pages 3-298–299 and 3-315–316: legacy CVTSI2SS takes signed32 without
  REX.W, uses MXCSR rounding, affects only destination low32, and may raise
  precision. CVTTSS2SI without REX.W returns signed32 with truncation, may raise
  invalid or precision, and returns 0x80000000 for masked invalid.
- [AMD APM Volume 4, publication 26568 revision 3.22, May 2018, mirrored AMD-authored PDF](https://kib.kiev.ua/x86docs/AMD/AMD64/26568_APM_v4-r3.22.pdf),
  printed pages 104–106 and 120–122: independently corroborates signed32
  operand forms, RC-based integer-to-float conversion, truncating float-to-int,
  upper-lane preservation for legacy CVTSI2SS, precision-only versus
  invalid/precision exception classes, and masked integer indefinite for NaN,
  infinity, or out-of-range input. The official AMD direct PDF and docs API
  links returned HTTP 404. The mirror was read as AMD's document, not as an
  unofficial instruction-summary author.

## Own mathematical derivation

Let `s = bits>>31`, `e = (bits>>23)&255`, and `f = bits&0x7fffff`.
The following is our arithmetic reasoning, not vendor pseudocode.

### Binary32 to signed32

For a normal finite input, magnitude is `(2^23+f)*2^(e-150)`.
For `e=0`, magnitude is `f*2^-149`. A nonzero subnormal is smaller than one;
it therefore gives integer zero and PE, except DAZ makes it exactly zero first.
Both signed zeros return integer zero without a new flag. No DE is added.

For normal `e<127`, magnitude is strictly between zero and one, so result zero
is inexact. Otherwise let `k=e-127`. When `0<=k<23`, right-shift the 24-bit
significand by `23-k`; its discarded bits are nonzero exactly when PE is needed.
When `23<=k<=30`, left-shift by `k-23`; no bits are discarded and the magnitude
fits below 2^31. Apply the sign by unsigned subtraction from zero.

At `k=31`, only sign=1 and f=0 is valid: exactly -2^31. All other inputs there,
and all higher finite exponents, produce IE and integer indefinite. Exponent255
is classified first and gives the same pair, for both infinities and every NaN
payload/sign/quietness. Positive +2^31 is invalid, while negative -2^31 is valid
even though both result DWORDs equal 0x80000000.

There is no finite binary32 just below -2^31 with a discarded fractional part:
spacing around this boundary is at least 128. Invalid finite conversions are
already mathematical integers. NaN/Inf never enter rounding arithmetic. Thus
the only new-flag sets here are empty, IE, or PE; IE|PE is not a separate valid
scalar result. A preexisting PE remains sticky when IE is raised, of course.
RC cannot affect a truncating instruction. FTZ cannot flush an integer result.

### Signed32 to binary32

Obtain sign from bit31 and magnitude by unsigned `0-bits` when negative. This
avoids signed overflow for INT32_MIN. Zero maps to +0. For nonzero magnitude
`a`, count its highest set bit `k=floor(log2(a))` by integer shifts.

If `k<=23`, shift left into a 24-bit significand; representation is exact.
Otherwise set `d=k-23`, `q=a>>d`, `r=a&(2^d-1)`, and `u=2^d`. Adjacent possible
magnitudes are `q*u` and `(q+1)*u`. A nonzero `r` requires PE. Choose the upper
magnitude for nearest-even when `2r>u`, or `2r=u` and `q` odd; for round-down
when negative; and for round-up when positive. Round-to-zero never increments.
When incrementing overflows the 24-bit significand, shift it right and increment
the exponent before encoding. This handles rounding INT32_MAX to +2^31.

All possible nonzero results are normal, finite, and have magnitude between
one and 2^31. DAZ and FTZ have no applicable operand/result. Invalid, denormal,
zero-divide, overflow, and underflow cannot newly arise. Only PE can.

### C++ safety bounds

All arithmetic operands are uint32_t. TT right shifts are 1–23 and left shifts
0–7. SI left shifts are 0–23, discarded widths 1–8, and the largest intermediate
significand is 2^24. Exponents fit in uint32_t. There are no signed overflows,
negative shifts, shifts by the type width, pointer type-punning, floating casts,
or host-endian dependency in the models. The native bit transport is separately
restricted to x86-64. `after=csr|raised` preserves every supplied control and
sticky bit. `raised` describes the operation, not only newly changed bits.

## Domain and proof limits

The C++ APIs require all six exception masks set, a DWORD input, and MXCSR bits
31:16 clear. They do not enforce the MXCSR precondition at runtime. The Python
API does. Every RC/DAZ/FTZ combination and all 64 sticky seeds are covered by
the mathematical contract; DAZ availability is assumed by that contract.

These arguments justify the algorithms but are not a machine-checked proof of
the implementation. Test coverage is recorded in the companion evidence summary; it is
not exhaustive over both 2^32 input domains times 1,024 MXCSR states. The native
reference is a modern AMD cloud processor, not original Xbox/Pentium III proof.
