"""Self-authored tests; none execute uploaded code or original instructions."""
from fractions import Fraction as Q
import unittest

from rational_model import (Interval, ROUNDING_MODES, I32_MIN, I32_MAX,
    positive_binary32_components, positive_binary32_value, ln_reduced_interval,
    ideal_scaled_log2, uniform_scaled_width_bound, round_rational,
    interval_to_int32, assume_additive_error, compare_ideal_to_rational,
    certified_ideal_int32, decode_binary80, fistp32_from_binary80)


def power_bits(e):
    return 1 << (e + 149) if e < -126 else (e + 127) << 23


def lcg_bits(count, seed=0x003174C5):
    state = seed
    for _ in range(count):
        state = (1664525 * state + 1013904223) & 0xFFFFFFFF
        yield 1 + state % 0x7F7FFFFF


def exact_dyadic_binary80(value):
    """Test helper, with separate literal byte anchors checking its convention."""
    value = Q(value)
    if value == 0:
        return bytes(10)
    sign = int(value < 0)
    value = abs(value)
    if value.denominator & (value.denominator - 1):
        raise ValueError("Only dyadics")
    e = value.numerator.bit_length() - value.denominator.bit_length()
    shift = 63 - e
    sig = value * ((1 << shift) if shift >= 0 else Q(1, 1 << -shift))
    if sig.denominator != 1 or not (1 << 63) <= sig < (1 << 64):
        raise ValueError("Not representable by helper")
    exponent = e + 16383
    if not 1 <= exponent <= 0x7FFE:
        raise ValueError("Helper only emits normal values")
    return int(sig).to_bytes(8, "little") + (exponent | (sign << 15)).to_bytes(2, "little")


def alternate_ln1p(u, terms=192):
    """Independent test witness via ordinary Taylor log(1+u), not atanh.

    Positive u: alternating-series error no larger than first omitted term.
    Negative u: all negative, bounded by geometric absolute remainder.
    """
    u = Q(u)
    if not -1 < u < 1:
        raise ValueError("Convergent open domain required")
    partial = Q(0)
    power = u
    for k in range(1, terms + 1):
        partial += power / k if k & 1 else -power / k
        power *= u
    if u >= 0:
        omitted = power / (terms + 1) if (terms + 1) & 1 else -power / (terms + 1)
        return Interval(min(partial, partial + omitted), max(partial, partial + omitted))
    bound = abs(power) / ((terms + 1) * (1 - abs(u)))
    return Interval(partial - bound, partial)


def alternate_scaled_log2(bits, terms=192):
    m, e = positive_binary32_components(bits)
    if m == 1:
        return Interval(4096 * e, 4096 * e)
    # ln(m) = ln(3/2) + ln(2*m/3), with the latter argument in [2/3,4/3).
    a = alternate_ln1p(Q(1, 2), terms)
    b = alternate_ln1p(2 * m / 3 - 1, terms)
    numerator = a.plus(b)
    # (3/2)**2 / (9/8) = 2.
    c = alternate_ln1p(Q(1, 8), terms)
    denominator = Interval(2 * a.lo - c.hi, 2 * a.hi - c.lo)
    assert numerator.lo >= 0 and denominator.lo > 0
    return Interval(4096 * (e + numerator.lo / denominator.hi),
                    4096 * (e + numerator.hi / denominator.lo))


class LogarithmTests(unittest.TestCase):
    def test_literal_power_anchors(self):
        literals = [(0x00000001, -610304), (0x00400000, -520192),
                    (0x00800000, -516096), (0x3F000000, -4096),
                    (0x3F800000, 0), (0x40000000, 4096),
                    (0x45800000, 49152), (0x7F000000, 520192)]
        for bits, expected in literals:
            self.assertEqual(ideal_scaled_log2(bits), Interval(expected, expected))
        for e in range(-149, 128):
            bits = power_bits(e)
            self.assertEqual(ideal_scaled_log2(bits), Interval(4096 * e, 4096 * e))
            for rc in ROUNDING_MODES:
                self.assertEqual(certified_ideal_int32(bits, rc)[0], 4096 * e)

    def test_exact_input_decode(self):
        self.assertEqual(positive_binary32_value(1), Q(1, 1 << 149))
        self.assertEqual(positive_binary32_value(0x007FFFFF), Q((1 << 23) - 1, 1 << 149))
        self.assertEqual(positive_binary32_value(0x00800000), Q(1, 1 << 126))
        self.assertEqual(positive_binary32_value(0x7F7FFFFF), ((1 << 24) - 1) << 104)
        for bits in [0, -1, 0x7F800000, 0x7FC00000, 0x80000001, 1 << 32]:
            with self.assertRaises(ValueError):
                ideal_scaled_log2(bits)
        for value in [True, "1", 1.0]:
            with self.assertRaises(TypeError):
                ideal_scaled_log2(value)

    def test_remainder_and_nesting(self):
        for bits in [1, 0x007FFFFF, 0x00800001, 0x3F7FFFFF,
                     0x3F800001, 0x3FC00000, 0x7F7FFFFF, *lcg_bits(64)]:
            for terms in [1, 2, 4, 8, 16, 32]:
                a, b = ideal_scaled_log2(bits, terms), ideal_scaled_log2(bits, terms * 2)
                self.assertLessEqual(a.lo, b.lo)
                self.assertLessEqual(b.hi, a.hi)
                self.assertLessEqual(a.width, uniform_scaled_width_bound(terms))
                self.assertGreaterEqual(a.lo, -610304)
                self.assertLessEqual(a.hi, 524288 + uniform_scaled_width_bound(terms))
        for terms in [1, 3, 8]:
            self.assertEqual(ln_reduced_interval(1, terms), Interval(0, 0))
        self.assertLess(uniform_scaled_width_bound(32), Q(1, 1 << 94))

    def test_independent_taylor_witness(self):
        for bits in [0x007FFFFF, 0x00800001, 0x3F7FFFFF, 0x3F800001,
                     0x3FA00000, 0x3FC00000, 0x3FE00000, 0x7F7FFFFF,
                     *lcg_bits(24)]:
            main = ideal_scaled_log2(bits, 32)
            witness = alternate_scaled_log2(bits)
            self.assertLessEqual(main.lo, witness.lo)
            self.assertLessEqual(witness.hi, main.hi)

    def test_edge_ideal_rounding(self):
        expected = {
            0x3F7FFFFF: (0, -1, 0, 0),
            0x3F800000: (0, 0, 0, 0),
            0x3F800001: (0, 0, 1, 0),
            0x7F7FFFFF: (524288, 524287, 524288, 524287),
        }
        for bits, values in expected.items():
            for rc, result in zip(ROUNDING_MODES, values):
                self.assertEqual(certified_ideal_int32(bits, rc)[0], result)

    def test_error_is_explicit_and_in_output_units(self):
        ideal = ideal_scaled_log2(0x3F800000)
        assumed = assume_additive_error(ideal, Interval(Q(-1, 2), Q(1, 2)))
        self.assertEqual(assumed, Interval(Q(-1, 2), Q(1, 2)))
        self.assertEqual(interval_to_int32(assumed, "nearest_even").valid_lo, 0)
        self.assertEqual(interval_to_int32(assumed, "down").valid_lo, -1)
        self.assertEqual(interval_to_int32(assumed, "up").valid_hi, 1)
        with self.assertRaises(TypeError):
            assume_additive_error(ideal, 0)
        with self.assertRaises(TypeError):
            Interval(0.0, 1)

    def test_comparison_budget_and_rational_threshold(self):
        self.assertEqual(compare_ideal_to_rational(0x3F800000, 0), 0)
        self.assertEqual(compare_ideal_to_rational(0x3FC00000, 2000), 1)
        self.assertEqual(compare_ideal_to_rational(0x3FC00000, 3000), -1)
        wide = ideal_scaled_log2(0x3FC00000, 1)
        with self.assertRaises(ArithmeticError):
            compare_ideal_to_rational(0x3FC00000, (wide.lo + wide.hi) / 2, 1, 1)


class ConversionTests(unittest.TestCase):
    def test_literal_binary80_anchors(self):
        anchors = [
            ("00000000000000000000", Q(0)),
            ("00000000000000000080", Q(0)),
            ("0000000000000080ff3f", Q(1)),
            ("0000000000000080febf", Q(-1, 2)),
            ("00000000000000c0ff3f", Q(3, 2)),
            ("00000000000000a00040", Q(5, 2)),
            ("00000000000000e00040", Q(7, 2)),
            ("00000000feffffff1d40", Q(I32_MAX)),
            ("00000000ffffffff1d40", Q(I32_MAX) + Q(1, 2)),
            ("00000000000000801ec0", Q(I32_MIN)),
            ("00000080000000801ec0", Q(I32_MIN) - Q(1, 2)),
        ]
        for raw_hex, expected in anchors:
            raw = bytes.fromhex(raw_hex)
            self.assertEqual(decode_binary80(raw).value, expected)
            if expected:
                self.assertEqual(exact_dyadic_binary80(expected), raw)
        tiny = decode_binary80(bytes.fromhex("01000000000000000000"))
        self.assertEqual(tiny.kind, "subnormal")
        self.assertEqual(tiny.value, Q(1, 1 << 16445))
        pseudo = decode_binary80(bytes.fromhex("00000000000000800000"))
        normal = decode_binary80(bytes.fromhex("00000000000000800100"))
        self.assertEqual(pseudo.kind, "pseudo_denormal")
        self.assertEqual(pseudo.value, normal.value)

    def test_rounding_against_enumeration(self):
        for numerator in range(-39, 40):
            for denominator in range(1, 9):
                value = Q(numerator, denominator)
                candidates = list(range(-40, 41))
                expected = {
                    "nearest_even": min(candidates, key=lambda n: (abs(n - value), n % 2)),
                    "down": max(n for n in candidates if n <= value),
                    "up": min(n for n in candidates if n >= value),
                    "toward_zero": (max(n for n in candidates if n <= value) if value >= 0
                                    else min(n for n in candidates if n >= value)),
                }
                for rc, result in expected.items():
                    self.assertEqual(round_rational(value, rc), result)

    def test_closed_interval_exact_image(self):
        endpoints = [Q(n, 4) for n in range(-12, 13)]
        for i, lo in enumerate(endpoints):
            for hi in endpoints[i:]:
                # A 1/8 grid hits every integer and half-integer transition
                # plus both neighboring cells for these quarter endpoints.
                samples = [Q(n, 8) for n in range(int(lo * 8), int(hi * 8) + 1)]
                for rc in ROUNDING_MODES:
                    expected = {round_rational(x, rc) for x in samples}
                    result = interval_to_int32(Interval(lo, hi), rc)
                    self.assertFalse(result.invalid_possible)
                    self.assertEqual(expected, set(range(result.valid_lo, result.valid_hi + 1)))

    def test_exact_signed_boundaries(self):
        # Endpoint inclusion below is independent literal specification data.
        valid_domains = {
            "nearest_even": (Q(I32_MIN) - Q(1, 2), True, Q(I32_MAX) + Q(1, 2), False),
            "down": (Q(I32_MIN), True, Q(I32_MAX + 1), False),
            "up": (Q(I32_MIN - 1), False, Q(I32_MAX), True),
            "toward_zero": (Q(I32_MIN - 1), False, Q(I32_MAX + 1), False),
        }
        epsilon = Q(1, 1 << 32)
        for rc, (lo, lo_in, hi, hi_in) in valid_domains.items():
            for value, valid in [(lo - epsilon, False), (lo, lo_in), (lo + epsilon, True),
                                 (hi - epsilon, True), (hi, hi_in), (hi + epsilon, False)]:
                result = fistp32_from_binary80(exact_dyadic_binary80(value), rc)
                self.assertEqual(not result.invalid, valid, (rc, value))
                allowed = interval_to_int32(Interval(value, value), rc)
                self.assertEqual(allowed.invalid_possible, not valid)
                if valid:
                    self.assertEqual(result.conversion_inexact, value != result.rounded_integer)
                    self.assertTrue(allowed.contains_valid(result.rounded_integer))
                else:
                    self.assertEqual(result.stored_bits_if_exceptions_masked, 0x80000000)
                    self.assertIsNone(result.conversion_inexact)

    def test_inexact_and_indefinite_are_distinct(self):
        values = [Q(-7, 2), Q(-5, 2), Q(-3, 2), Q(-1, 2), Q(0),
                  Q(1, 2), Q(3, 2), Q(5, 2), Q(7, 2), Q(I32_MIN), Q(I32_MAX)]
        for value in values:
            for rc in ROUNDING_MODES:
                result = fistp32_from_binary80(exact_dyadic_binary80(value), rc)
                self.assertFalse(result.invalid)
                self.assertEqual(result.conversion_inexact, value.denominator != 1)
        valid = fistp32_from_binary80(exact_dyadic_binary80(I32_MIN), "nearest_even")
        invalid = fistp32_from_binary80(exact_dyadic_binary80(1 << 31), "nearest_even")
        self.assertEqual(valid.stored_bits_if_exceptions_masked, invalid.stored_bits_if_exceptions_masked)
        self.assertFalse(valid.invalid)
        self.assertTrue(invalid.invalid)
        self.assertFalse(valid.conversion_inexact)

    def test_special_and_unsupported_encodings(self):
        cases = [("0000000000000080ff7f", "infinity"),
                 ("0000000000000080ffff", "infinity"),
                 ("00000000000000c0ff7f", "quiet_nan"),
                 ("0100000000000080ff7f", "signaling_nan"),
                 ("0000000000000040ff3f", "unsupported"),
                 ("0000000000000000ff7f", "unsupported"),
                 ("0100000000000000ff7f", "unsupported")]
        for raw_hex, kind in cases:
            for rc in ROUNDING_MODES:
                result = fistp32_from_binary80(bytes.fromhex(raw_hex), rc)
                self.assertEqual(result.classification, kind)
                self.assertTrue(result.invalid)
                self.assertEqual(result.stored_bits_if_exceptions_masked, 0x80000000)
        for raw in [bytes(9), bytes(11), "00000000000000000000"]:
            with self.assertRaises(ValueError):
                decode_binary80(raw)


if __name__ == "__main__":
    unittest.main(verbosity=2)
