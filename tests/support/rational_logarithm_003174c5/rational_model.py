"""Independent exact-rational validation aid. NOT an FYL2X emulator.

No floating-point operations, native transcendental functions, original bytes,
CPU instructions, or external packages are used. Intervals are closed.
"""
from dataclasses import dataclass
from fractions import Fraction
from functools import lru_cache
from typing import Optional

I32_MIN = -(1 << 31)
I32_MAX = (1 << 31) - 1
INTEGER_INDEFINITE_BITS = 0x80000000
ROUNDING_MODES = ("nearest_even", "down", "up", "toward_zero")


def _require_int(value, name):
    if type(value) is not int:
        raise TypeError(f"{name} must be an int, not float/bool")


def _rational(value):
    if type(value) is int or type(value) is Fraction:
        return Fraction(value)
    raise TypeError("Only int and Fraction are accepted, never native floats")


@dataclass(frozen=True)
class Interval:
    lo: Fraction
    hi: Fraction

    def __post_init__(self):
        object.__setattr__(self, "lo", _rational(self.lo))
        object.__setattr__(self, "hi", _rational(self.hi))
        if self.lo > self.hi:
            raise ValueError("Reversed interval")

    @property
    def width(self):
        return self.hi - self.lo

    def plus(self, other):
        if not isinstance(other, Interval):
            raise TypeError("An explicit Interval is required")
        return Interval(self.lo + other.lo, self.hi + other.hi)


def positive_binary32_components(bits):
    """Return (m, e) with the exact value m*2**e and 1 <= m < 2."""
    _require_int(bits, "bits")
    if not 0 < bits <= 0x7F7FFFFF:
        raise ValueError("Only positive finite nonzero binary32 encodings")
    exponent = (bits >> 23) & 0xFF
    fraction = bits & 0x7FFFFF
    if exponent:
        return Fraction((1 << 23) | fraction, 1 << 23), exponent - 127
    highest = fraction.bit_length() - 1
    return Fraction(fraction, 1 << highest), highest - 149


def positive_binary32_value(bits):
    m, e = positive_binary32_components(bits)
    return m * (Fraction(1 << e) if e >= 0 else Fraction(1, 1 << -e))


def ln_reduced_interval(m, terms):
    """Exact enclosure of ln(m), for rational 1 <= m <= 2.

    t=(m-1)/(m+1); ln(m)=2*sum(t**(2*k+1)/(2*k+1), k>=0).
    The omitted positive tail is <= 2*t**(2*N+1)/((2*N+1)*(1-t*t)).
    """
    m = _rational(m)
    _require_int(terms, "terms")
    if not 1 <= m <= 2 or terms < 1:
        raise ValueError("Require 1 <= m <= 2 and terms >= 1")
    t = (m - 1) / (m + 1)
    t2 = t * t
    power = t
    partial = Fraction(0)
    for k in range(terms):
        partial += 2 * power / (2 * k + 1)
        power *= t2
    remainder = 2 * power / ((2 * terms + 1) * (1 - t2))
    return Interval(partial, partial + remainder)


@lru_cache(maxsize=32)
def ln2_interval(terms):
    return ln_reduced_interval(2, terms)


def uniform_scaled_width_bound(terms):
    _require_int(terms, "terms")
    if terms < 1:
        raise ValueError("terms >= 1 required")
    return Fraction(9216, (2 * terms + 1) * 3 ** (2 * terms))


def ideal_scaled_log2(bits, terms=32):
    """Enclose IDEAL 4096*log2(x). Does NOT bound actual FYL2X error."""
    _require_int(terms, "terms")
    if terms < 1:
        raise ValueError("terms >= 1 required")
    m, e = positive_binary32_components(bits)
    if m == 1:
        return Interval(4096 * e, 4096 * e)
    numerator = ln_reduced_interval(m, terms)
    denominator = ln2_interval(terms)
    return Interval(4096 * (e + numerator.lo / denominator.hi),
                    4096 * (e + numerator.hi / denominator.lo))


def assume_additive_error(ideal_interval, caller_error_interval):
    """Conditional sum; the CALLER must justify this absolute output-error bound.

    Units are those of 4096*log2(x), not log2(x) and not ulps. This function
    supplies no vendor, RC, PC, exception, domain, or hardware-accuracy claim.
    """
    if not isinstance(ideal_interval, Interval):
        raise TypeError("An explicit ideal Interval is required")
    return ideal_interval.plus(caller_error_interval)


def round_rational(value, rc):
    value = _rational(value)
    if rc not in ROUNDING_MODES:
        raise ValueError("Unsupported rounding mode")
    lower = value.numerator // value.denominator
    remainder = value.numerator - lower * value.denominator
    if rc == "down":
        return lower
    if rc == "up":
        return lower + (remainder != 0)
    if rc == "toward_zero":
        return lower + (value < 0 and remainder != 0)
    twice = 2 * remainder
    if twice < value.denominator:
        return lower
    if twice > value.denominator:
        return lower + 1
    return lower if lower % 2 == 0 else lower + 1


@dataclass(frozen=True)
class Int32Allowed:
    # Every integer from valid_lo through valid_hi is attainable by rounding
    # SOME real in the supplied CLOSED interval. No hardware attainability claim.
    valid_lo: Optional[int]
    valid_hi: Optional[int]
    invalid_possible: bool
    invalid_indefinite_bits: int = INTEGER_INDEFINITE_BITS

    @property
    def unique_valid(self):
        return (not self.invalid_possible and self.valid_lo is not None
                and self.valid_lo == self.valid_hi)

    def contains_valid(self, value):
        _require_int(value, "value")
        return (self.valid_lo is not None and self.valid_lo <= value <= self.valid_hi)


def interval_to_int32(interval, rc):
    """Exact rounding image of a CLOSED rational interval, with invalid tagged."""
    if not isinstance(interval, Interval):
        raise TypeError("An Interval is required")
    first = round_rational(interval.lo, rc)
    last = round_rational(interval.hi, rc)
    lo, hi = max(first, I32_MIN), min(last, I32_MAX)
    return Int32Allowed(lo if lo <= hi else None, hi if lo <= hi else None,
                        first < I32_MIN or last > I32_MAX)


def compare_ideal_to_rational(bits, target, initial_terms=8, max_terms=512):
    """Certified comparison; explicit budget failure, never guessed rounding."""
    target = _rational(target)
    _require_int(initial_terms, "initial_terms")
    _require_int(max_terms, "max_terms")
    if not 1 <= initial_terms <= max_terms:
        raise ValueError("Require 1 <= initial_terms <= max_terms")
    terms = initial_terms
    while True:
        enclosure = ideal_scaled_log2(bits, terms)
        if enclosure.hi < target:
            return -1
        if enclosure.lo > target:
            return 1
        if enclosure.lo == enclosure.hi == target:
            return 0
        if terms == max_terms:
            raise ArithmeticError("Comparison enclosure is unresolved at budget")
        terms = min(terms * 2, max_terms)


def certified_ideal_int32(bits, rc, initial_terms=8, max_terms=512):
    """Return (single ideal integer, terms, interval), or fail at explicit budget."""
    _require_int(initial_terms, "initial_terms")
    _require_int(max_terms, "max_terms")
    if not 1 <= initial_terms <= max_terms:
        raise ValueError("Require 1 <= initial_terms <= max_terms")
    terms = initial_terms
    while True:
        enclosure = ideal_scaled_log2(bits, terms)
        allowed = interval_to_int32(enclosure, rc)
        if allowed.unique_valid:
            return allowed.valid_lo, terms, enclosure
        if terms == max_terms:
            raise ArithmeticError("Rounding enclosure is unresolved at budget")
        terms = min(terms * 2, max_terms)


@dataclass(frozen=True)
class Extended80:
    kind: str
    sign: int
    value: Optional[Fraction]


def decode_binary80(raw):
    """Decode a 10-byte little-endian x87 extended storage encoding.

    Normal, subnormal, zero and pseudo-denormal inputs are exact rationals.
    Unsupported unnormal/pseudo-special encodings are distinctly classified.
    No loads or arithmetic are executed on the bit pattern.
    """
    if type(raw) is not bytes or len(raw) != 10:
        raise ValueError("Expected exactly ten bytes, little-endian")
    significand = int.from_bytes(raw[:8], "little")
    sign_exponent = int.from_bytes(raw[8:], "little")
    sign = sign_exponent >> 15
    exponent = sign_exponent & 0x7FFF
    integer_bit = significand >> 63
    fraction = significand & ((1 << 63) - 1)
    if exponent == 0x7FFF:
        if not integer_bit:
            return Extended80("unsupported", sign, None)
        if not fraction:
            return Extended80("infinity", sign, None)
        return Extended80("quiet_nan" if fraction & (1 << 62) else "signaling_nan", sign, None)
    if exponent != 0 and not integer_bit:
        return Extended80("unsupported", sign, None)
    if exponent == 0:
        kind = "pseudo_denormal" if integer_bit else ("subnormal" if significand else "zero")
        power = 1 - 16383 - 63
    else:
        kind = "normal"
        power = exponent - 16383 - 63
    value = (Fraction(significand << power) if power >= 0
             else Fraction(significand, 1 << -power))
    return Extended80(kind, sign, -value if sign else value)


@dataclass(frozen=True)
class FistpDecision:
    # A value-level conditional conversion model, NOT full x87 status simulation.
    classification: str
    invalid: bool
    rounded_integer: Optional[int]
    stored_bits_if_exceptions_masked: int
    conversion_inexact: Optional[bool]


def fistp32_from_binary80(raw, rc):
    """Conditional FISTP32 decision on captured bits, independent of FYL2X.

    With invalid masked, invalid inputs/results store 0x80000000. A valid
    rounded -2**31 has the same bits but invalid=False. conversion_inexact
    is defined for successful finite conversion; None on invalid means this
    module makes NO precision-event/exception-priority claim for invalid cases.
    It does not model previous sticky flags, FYL2X PE, DE, traps, or stack state.
    """
    if rc not in ROUNDING_MODES:
        raise ValueError("Unsupported rounding mode")
    decoded = decode_binary80(raw)
    if decoded.value is None:
        return FistpDecision(decoded.kind, True, None, INTEGER_INDEFINITE_BITS, None)
    rounded = round_rational(decoded.value, rc)
    if not I32_MIN <= rounded <= I32_MAX:
        return FistpDecision(decoded.kind, True, rounded, INTEGER_INDEFINITE_BITS, None)
    return FistpDecision(decoded.kind, False, rounded, rounded & 0xFFFFFFFF,
                         decoded.value != rounded)
