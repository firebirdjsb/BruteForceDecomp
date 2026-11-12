# Independent exact-rational foundation for entry 003174c5

## Scope and graph boundary

This is an isolated Python validation aid, not canonical game-core reconstruction,
not a replacement C++ function, and not an FYL2X emulator. Its arithmetic uses
arbitrary-precision integers and `fractions.Fraction`. It neither executes original
instructions nor evaluates a native logarithm. The canonical checkout was read
only. No other author's logarithm model was read.

The assigned instruction graph is FLD32 exact 4096; FLD32 binary32 argument;
FYL2X; FISTP32, without intervening multiply, narrowing, or control-word change.
Writing the ideal real expression `4096 * log2(x)` below is mathematical notation
for the single FYL2X result, **not** a proposed additional hardware multiplication.
The assigned original-body identity is
06E8630DF9ABD22BE0A0CF9161D826F46288A075FBBA5B77B8A367EA5313FAF1.
This work did not independently decode or execute that body.

There are three deliberately separate claims:

1. A proved rational enclosure of the ideal real expression, for every positive
   finite nonzero binary32 encoding.
2. An optional conditional enclosure obtained by adding an **explicitly supplied**
   caller error interval, in absolute units of the scaled result. The caller must
   prove the chosen interval applies to the particular instruction, processor,
   rounding mode, argument and state. This module supplies no such guarantee.
3. An exact value-level signed32 conversion model for an independently captured
   10-byte binary80 encoding. This is conditional on those bits, not proof that
   FYL2X produced the mathematically correct logarithm.

## Exact binary32 normalization

For a positive normal binary32, let E be its stored exponent (1 through 254) and
F its fraction (0 through 2^23-1). Then

    x = (2^23 + F) * 2^(E-150) = m * 2^e,
    m = (2^23 + F)/2^23, e = E-127.

For a positive subnormal, F is nonzero and x = F * 2^-149. Let
h = floor(log2(F)), computed solely as integer bit_length(F)-1. Then

    m = F/2^h, e = h-149.

In both cases 1 <= m < 2 and -149 <= e <= 127. A significand m=1 gives the exact
identity 4096*log2(x)=4096*e. There are 277 representable power-of-two inputs,
one at each exponent -149 through 127. All are tested, including subnormals.

The ideal expression has the exact range

    -610304 <= 4096*log2(x) < 524288.

This is a mathematical range statement, not a hardware-error bound. Every
mathematically rounded signed32 result under the four modes is within range.

## Positive-series enclosure, with explicit remainder proof

For any rational m in [1,2], put t=(m-1)/(m+1). Then 0 <= t <= 1/3 and
m=(1+t)/(1-t). Integrating the geometric series for 2/(1-t^2) on [0,t] gives

    ln(m) = 2 * sum(k=0..infinity, t^(2k+1)/(2k+1)).

The geometric series converges uniformly on [0,1/3], so termwise integration is
valid there. For any integer N >= 1, define

    S_N(t) = 2 * sum(k=0..N-1, t^(2k+1)/(2k+1)),
    R_N(t) = 2*t^(2N+1) / ((2N+1)*(1-t^2)).

Every omitted term is nonnegative. Replacing each denominator 2k+1 in the
omitted tail by the smaller denominator 2N+1 and summing the resulting geometric
series proves

    S_N(t) <= ln(m) <= S_N(t)+R_N(t).

These endpoints are rational and computed exactly. At t=0, both endpoints are
zero. For t>0, the lower bound is strict; the implementation intentionally returns
closed conservative intervals. Applying the same construction at m=2 encloses
ln(2), whose lower bound is at least the first positive term 2/3.

Write [A,B] for the enclosure of ln(m) and [C,D] for that of ln(2). All four
endpoints are nonnegative, and C>0. Therefore

    4096 * (e + A/D) <= 4096*log2(x) <= 4096 * (e + B/C).

Addition of a negative integer exponent does not reverse the inequalities.
This establishes the construction for the entire positive finite binary32
encoding domain, not merely the test sample.

## Uniform finite-N error bound

With N shared by numerator and denominator, let R=R_N(1/3), C=S_N(1/3).
Monotonicity of the positive series gives A<=C and numerator remainder<=R.
Consequently the unscaled ratio-interval width is

    (A+r)/C - A/(C+R)
      = r/C + A*R/(C*(C+R))
      <= R/C + R/(C+R)
      <= 3*R,

using C>=2/3. Multiplying by 4096 and simplifying R yields

    scaled interval width <= 9216 / ((2N+1)*3^(2N)).

In particular N=32 has width < 2^-94 for **every** supported input. This is the
width of a proved mathematical enclosure, not an error estimate for FYL2X.
N=32 alone is not claimed to resolve every possible integer-rounding threshold.
The interval always remains valid if it crosses a threshold.

The finite-N enclosures are nested as N increases: the partial sum increases,
and replacing the tail's constant denominator by progressively larger exact
odd denominators decreases its upper bound. Tests check nesting, but the proof
does not depend on the tests.

## Rational thresholds and refinement

A dyadic rational x can have rational log2(x) only when x is an integer power of
two. To see this, assume log2(x)=a/b in lowest terms with b>0. Express
x=p*2^q with odd positive integer p. From x^b=2^a, unique factorization forces
p=1 and b*q=a; hence the exponent is an integer.

Thus a non-power-of-two binary32 input cannot have its ideal scaled logarithm
exactly equal to a rational rounding boundary. The uniform enclosure width
tends to zero, so adaptive refinement eventually resolves any comparison to a
rational target. Exact powers of two are handled directly, including equality.
The implementation accepts an explicit finite work budget; if that budget is
exhausted it raises ArithmeticError, **never** guesses. It does not claim the
chosen default maximum is a proven universal termination bound.

`generate_vectors.py` finds adjacent binary32 inputs straddling 26 exact rational
thresholds by certified binary search over monotonically ordered positive bit
patterns. These include integer boundaries, half-integer boundaries, and exact
powers-of-two results. Each comparison is certified by a rational interval.

## Closed interval to allowed signed32 decisions

For rational v, let q=floor(v), r=v-q, 0<=r<1. The exact real-to-integer modes are:

- down: q;
- up: q if r=0, otherwise q+1;
- toward_zero: down for nonnegative v, up for negative v;
- nearest_even: q if r<1/2, q+1 if r>1/2, and the even integer on a tie.

Each map is monotone. On a closed real interval [L,U], its image is every integer
from round(L) through round(U), inclusive: each intervening integer has a
nonempty rounding cell, and an interval spanning the endpoint cells intersects
all intermediate cells. Intersect this integer range with [-2^31,2^31-1].
If either endpoint-rounding result lies outside that range, an invalid conversion
is possible. An empty intersection means all conversions are invalid.

This is the exact image of the **supplied closed real interval**. It is a safe
allowed-result set for an enclosed actual value, not a claim that every integer
in that set can occur on a particular CPU or on binary80-representable values.
Closed bounds can deliberately retain boundary results that a strict vendor
error bound would exclude. Hardware uncertainty must not be discarded merely
because an ideal anchor is exact.

The precise valid real domains, before conversion to signed32, are:

    nearest_even: [-2147483648.5, 2147483647.5)
    down:         [-2147483648,   2147483648)
    up:           (-2147483649,   2147483647]
    toward_zero:  (-2147483649,   2147483648)

The asymmetry of nearest_even follows because -2^31 is even, while 2^31-1 is odd.
Merely testing whether the unrounded real lies within the integer range would
be incorrect. Tests hit every endpoint and its exact +/-2^-32 neighbors.

## Captured binary80 conversion

The decoder consumes exactly ten little-endian bytes. The low 64 bits are the
explicit significand S, including integer bit J at bit 63; the upper 16 bits
hold sign s and 15-bit biased exponent E. For finite encodings:

    value = (-1)^s * S * 2^(effective_E - 16383 - 63),
    effective_E = E for E>0, otherwise 1.

E=0,J=0 encodes zero/subnormal. E=0,J=1 is the pseudo-denormal encoding with the
same mathematical value as E=1,J=1. E=1..32766,J=1 is normal. E>0,J=0 is
unsupported, including pseudo-infinity/pseudo-NaN. E=32767,J=1 gives infinity
when its fraction is zero, otherwise quiet/signaling NaN distinguished by
fraction bit 62. Both signs, all magnitudes, and all valid finite encodings are
handled with exact integers/rationals; nothing is loaded into a native FPU.

For a finite value, the exact rounding rule is applied first; a resulting integer
outside signed32 is invalid. Infinity, NaN and unsupported encodings take the
invalid path. With invalid exceptions masked, the result is integer-indefinite,
bit pattern 0x80000000. A successful conversion of exactly -2^31 has the same
stored bits, so the `invalid` tag MUST be retained.

For a successful finite conversion, `conversion_inexact` is exactly
`value != rounded_integer`. It denotes the conversion's precision-loss event,
not an already-set sticky PE status bit. On invalid conversion it is **None**:
this module deliberately does not infer a precision exception or its absence
from integer-indefinite output. No C1 prediction is supplied. The special and
unsupported encoding classifications are outside the ideal positive-binary32
logarithm-domain claim and are tested only as value-level conversion cases.

No exception-mask transitions, traps, pending exceptions, DE, original sticky
flags, C0/C1/C2/C3, stack tags/TOP, guest ABI, or memory side effects are modeled.
Unmasked-exception behavior is not inferred from `stored_bits_if_exceptions_masked`.
FYL2X PE is explicitly not modeled, including at ideal power-of-two anchors.

## Independent mathematical cross-check

Tests include a second derivation using the ordinary Taylor series

    ln(1+u) = sum(k=1..infinity, (-1)^(k+1)*u^k/k).

For nonnegative u<1 its alternating-series error is bounded by the first omitted
term, with the corresponding sign. For -1<u<0 every term is negative and the
remaining magnitude is bounded by
|u|^(N+1)/((N+1)*(1-|u|)). Reduction uses

    ln(m)=ln(3/2)+ln(2*m/3),
    ln(2)=2*ln(3/2)-ln(9/8).

All resulting |u| are <=1/2. At 192 terms this independently constructed rational
witness is tighter than the main 32-term enclosure in the tested cases. The tests
require witness containment, not agreement with native `log` output. This
witness was written by the same author from a different series; it is not a
claim of independent-human review.
