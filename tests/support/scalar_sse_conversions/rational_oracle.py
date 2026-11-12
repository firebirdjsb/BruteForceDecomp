#!/usr/bin/env python3
"""Independent exact-rational oracle for two masked, 32-bit SSE conversions.

Only Python integer and fractions.Fraction arithmetic is used.  No binary
floating-point conversion, native instruction execution, or other model imports
are involved.  See RATIONAL_DERIVATION.md for sources and scope.

The ``raised`` value describes exceptions caused by this operation, even when
the corresponding sticky bit was already set.  It is not ``after ^ before``.
"""

from fractions import Fraction
import json
import sys


UINT32_MAX = (1 << 32) - 1
INT32_MIN = -(1 << 31)
INT32_MAX = (1 << 31) - 1
INTEGER_INDEFINITE = 1 << 31
IE = 1 << 0
PE = 1 << 5
DAZ = 1 << 6
ALL_EXCEPTION_MASKS = 0x1F80
STATUS_MASK = 0x3F


def _check_inputs(bits: int, mxcsr: int) -> None:
    if type(bits) is not int or not 0 <= bits <= UINT32_MAX:
        raise ValueError("bits must be an unsigned 32-bit integer")
    if type(mxcsr) is not int or not 0 <= mxcsr <= 0xFFFF:
        raise ValueError("mxcsr must be an integer with reserved bits 31:16 zero")
    if mxcsr & ALL_EXCEPTION_MASKS != ALL_EXCEPTION_MASKS:
        raise ValueError("all six MXCSR exception masks must be set")


def _power_of_two(exponent: int) -> Fraction:
    if exponent >= 0:
        return Fraction(1 << exponent, 1)
    return Fraction(1, 1 << -exponent)


def _finite_binary32(bits: int) -> Fraction:
    """Decode a finite raw binary32 value, exactly (zero sign is unnecessary)."""
    sign = -1 if bits & (1 << 31) else 1
    exponent = (bits >> 23) & 0xFF
    fraction = bits & 0x7FFFFF
    if exponent == 0xFF:
        raise ValueError("non-finite value has no Fraction representation")
    if exponent == 0:
        return sign * Fraction(fraction, 1 << 149)
    return sign * Fraction((1 << 23) + fraction) * _power_of_two(exponent - 150)


def cvttss2si(bits: int, mxcsr: int) -> tuple[int, int]:
    """Return (raw signed32 result, per-operation exception flags)."""
    _check_inputs(bits, mxcsr)
    exponent = (bits >> 23) & 0xFF
    if exponent == 0xFF:
        # Both infinities and every signaling/quiet NaN are invalid.
        return INTEGER_INDEFINITE, IE
    if exponent == 0 and mxcsr & DAZ:
        # A subnormal is replaced by signed zero before conversion.
        return 0, 0

    exact = _finite_binary32(bits)
    magnitude = abs(exact)
    whole = magnitude.numerator // magnitude.denominator
    truncated = -whole if exact < 0 else whole
    if not INT32_MIN <= truncated <= INT32_MAX:
        return INTEGER_INDEFINITE, IE
    raised = PE if Fraction(truncated) != exact else 0
    return truncated & UINT32_MAX, raised


def _round_nonnegative(value: Fraction, rc: int, negative: bool) -> int:
    """Choose the magnitude significand under the requested signed rounding."""
    lower = value.numerator // value.denominator
    residue = value - lower
    if residue == 0:
        return lower
    if rc == 0:  # nearest, ties to even
        twice = residue * 2
        return lower + int(twice > 1 or (twice == 1 and lower % 2 == 1))
    if rc == 1:  # toward negative infinity
        return lower + int(negative)
    if rc == 2:  # toward positive infinity
        return lower + int(not negative)
    return lower  # toward zero


def cvtsi2ss(bits: int, mxcsr: int) -> tuple[int, int]:
    """Return (raw binary32 result, per-operation exception flags)."""
    _check_inputs(bits, mxcsr)
    integer = bits if bits < (1 << 31) else bits - (1 << 32)
    if integer == 0:
        return 0, 0

    negative = integer < 0
    exact = Fraction(abs(integer))
    exponent = exact.numerator.bit_length() - 1
    # The normalized value has 24 significant binary digits.  Its rational
    # significand lies in [2**23, 2**24), before rounding.
    unit = _power_of_two(exponent - 23)
    scaled = exact / unit
    significand = _round_nonnegative(scaled, (mxcsr >> 13) & 3, negative)
    rounded_magnitude = Fraction(significand) * unit
    raised = PE if rounded_magnitude != exact else 0

    if significand == (1 << 24):
        # Renormalization changes the representation, not its exact value.
        significand //= 2
        exponent += 1
    result = ((int(negative) << 31) | ((exponent + 127) << 23)
              | (significand - (1 << 23)))
    return result, raised


def evaluate(op: str, bits: int, mxcsr: int) -> tuple[int, int, int]:
    """Return (result_bits, operation_raised_flags, full_mxcsr_after).

    ``op='tt'`` selects CVTTSS2SI r32,xmm/m32.
    ``op='si'`` selects CVTSI2SS xmm,r/m32.
    DAZ support is assumed.  RC, DAZ, FTZ and all 64 sticky-state seeds are
    supported; unmasked exceptions and reserved MXCSR bits are rejected.
    """
    if op == "tt":
        result, raised = cvttss2si(bits, mxcsr)
    elif op == "si":
        result, raised = cvtsi2ss(bits, mxcsr)
    else:
        raise ValueError("op must be 'tt' or 'si'")
    return result, raised, mxcsr | raised


def _json_lines() -> int:
    for number, line in enumerate(sys.stdin, 1):
        if not line.strip():
            continue
        try:
            request = json.loads(line)
            if not isinstance(request, dict):
                raise ValueError("each line must contain a JSON object")
            result, raised, after = evaluate(
                request["op"], request["bits"], request["mxcsr"])
            response = dict(request)
            response.update(result=result, raised=raised, after=after)
        except (ValueError, TypeError, KeyError) as error:
            print(f"line {number}: {error}", file=sys.stderr)
            return 2
        print(json.dumps(response, separators=(",", ":")), flush=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(_json_lines())
