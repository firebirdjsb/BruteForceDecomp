#!/usr/bin/env python3
"""Independent Fraction model of 002b6640's ten-instruction x87 scalar.

Foundation only: masked exceptions, no pending trap, two free stack entries.
Not an emulator of original guest context, nor a Pentium III equivalence claim.
Only Python exact integers/Fraction are used; no float, decimal, ctypes, or
other numerical oracle. Equal-significand/opposite-sign NaN results are marked
undefined; nominal alternatives are diagnostics, not architectural constraints.
"""

from dataclasses import dataclass, replace
from fractions import Fraction
import json
import sys

IE, DE, ZE, OE, UE, PE = 1, 2, 4, 8, 16, 32
RN, RD, RU, RZ = 0, 1, 2, 3
JBIT, QBIT = 1 << 63, 1 << 62


def pow2(exponent):
    return Fraction(1 << exponent) if exponent >= 0 else Fraction(1, 1 << -exponent)


def floor_log2(x):
    """Return e with 2**e <= positive Fraction x < 2**(e+1)."""
    if x <= 0:
        raise ValueError("floor_log2 requires a positive value")
    e = x.numerator.bit_length() - x.denominator.bit_length()
    if x < pow2(e):
        e -= 1
    assert pow2(e) <= x < pow2(e + 1)
    return e


def grid_round(magnitude, quantum, sign, rc):
    """Round nonnegative Fraction directly to an integer quantum grid.

    The returned third field records magnitude increment, not signed-number
    increase: x87's round-up C1 concerns the significand.
    """
    if magnitude < 0 or quantum <= 0 or sign not in (0, 1) or rc not in range(4):
        raise ValueError("invalid rounding arguments")
    scaled = magnitude / quantum
    below = scaled.numerator // scaled.denominator
    tail = scaled - below
    inc = False
    if tail:
        if rc == RN:
            inc = tail > Fraction(1, 2) or (tail == Fraction(1, 2) and bool(below & 1))
        elif rc == RD:
            inc = sign == 1
        elif rc == RU:
            inc = sign == 0
    return (below + int(inc)) * quantum, bool(tail), int(inc)


def precision_round(magnitude, sign, precision, rc):
    if not magnitude:
        return Fraction(), False, 0
    return grid_round(magnitude, pow2(floor_log2(magnitude) - precision + 1), sign, rc)


@dataclass(frozen=True)
class Number:
    # Finite magnitude and sign are separate to preserve signed zero.
    kind: str
    sign: int
    magnitude: Fraction = Fraction()
    significand: int = 0
    undefined_nan_result: bool = False

    def ext80(self):
        """Return [explicit significand u64, sign/exponent u16]."""
        if self.kind in ("snan", "qnan", "inf"):
            sig = JBIT if self.kind == "inf" else self.significand
            return [sig, (self.sign << 15) | 0x7fff]
        if self.magnitude == 0:
            return [0, self.sign << 15]
        e = floor_log2(self.magnitude)
        if not -16382 <= e <= 16383:
            raise AssertionError("finite scalar intermediate escaped normal ext80")
        sig = self.magnitude / pow2(e - 63)
        if sig.denominator != 1:
            raise AssertionError("intermediate has more than 64 bits")
        return [sig.numerator, (self.sign << 15) | (e + 16383)]


def decode32(bits):
    if type(bits) is not int or not 0 <= bits < (1 << 32):
        raise ValueError("binary32 word must be an unsigned 32-bit integer")
    sign, exponent, fraction = bits >> 31, (bits >> 23) & 255, bits & 0x7fffff
    if exponent == 255:
        if not fraction:
            return Number("inf", sign), False
        kind = "qnan" if fraction & 0x400000 else "snan"
        return Number(kind, sign, significand=JBIT | (fraction << 40)), False
    if not exponent:
        return Number("finite", sign, fraction * pow2(-149)), bool(fraction)
    return Number("finite", sign, ((1 << 23) + fraction) * pow2(exponent - 150)), False


def quiet(x):
    if x.kind not in ("snan", "qnan"):
        raise ValueError("quiet requires a NaN")
    return replace(x, kind="qnan", significand=x.significand | QBIT)


def fld32(bits):
    x, denormal = decode32(bits)
    if x.kind == "snan":
        return {quiet(x)}, IE, 0
    return {x}, DE if denormal else 0, 0


def nan_selection(a, b):
    """Intel Table 4-7, retaining unresolved sign ties as a set.

    Returns None if neither argument is NaN. The set never merges unequal
    payloads. Register NaNs in this graph have already been quieted by FLD or
    a prior arithmetic instruction, but the table is implemented in full.
    """
    nans = [x for x in (a, b) if x.kind in ("snan", "qnan")]
    if not nans:
        return None
    flags = IE if any(x.kind == "snan" for x in nans) else 0
    quiet_inputs = [x for x in nans if x.kind == "qnan"]
    pool = quiet_inputs or nans
    maximum = max(x.significand for x in pool)
    chosen = {quiet(x) for x in pool if x.significand == maximum}
    # AMD Table 6-7 note 4 says the NaN RESULT is undefined, not merely its
    # sign. Keep nominal alternatives for diagnostics while conservatively
    # tainting payload/sign of this and every dependent result. A later
    # nominally larger NaN cannot erase taint: the unknown payload might win.
    tainted = any(x.undefined_nan_result for x in nans) or len(chosen) > 1
    return {replace(x, undefined_nan_result=tainted) for x in chosen}, flags, 0


def rounded_finite(magnitude, sign, pc, rc):
    rounded, inexact, c1 = precision_round(magnitude, sign, pc, rc)
    answer = Number("finite", sign, rounded)
    answer.ext80()  # Enforce reachability/exact representation invariant.
    return {answer}, PE if inexact else 0, c1


def multiply_memory(register, bits, pc, rc):
    memory, denormal = decode32(bits)
    special = nan_selection(register, memory)
    if special is not None:
        return special  # NaN precedence suppresses memory DE.
    sign = register.sign ^ memory.sign
    if register.kind == "inf" or memory.kind == "inf":
        other = memory if register.kind == "inf" else register
        if other.kind == "finite" and not other.magnitude:
            return {Number("qnan", 1, significand=JBIT | QBIT)}, IE, 0
        return {Number("inf", sign)}, DE if denormal else 0, 0
    values, flags, c1 = rounded_finite(register.magnitude * memory.magnitude, sign, pc, rc)
    return values, flags | (DE if denormal else 0), c1


def add_registers(older, newer, pc, rc):
    special = nan_selection(older, newer)
    if special is not None:
        return special
    if older.kind == "inf" and newer.kind == "inf" and older.sign != newer.sign:
        return {Number("qnan", 1, significand=JBIT | QBIT)}, IE, 0
    if older.kind == "inf":
        return {older}, 0, 0
    if newer.kind == "inf":
        return {newer}, 0, 0
    exact = (-older.magnitude if older.sign else older.magnitude)
    exact += (-newer.magnitude if newer.sign else newer.magnitude)
    if exact:
        return rounded_finite(abs(exact), int(exact < 0), pc, rc)
    # Same-sign zero addition preserves its sign; cancellation otherwise
    # produces -0 only in round-down mode (including opposite signed zeros).
    sign = older.sign if older.magnitude == newer.magnitude == 0 and older.sign == newer.sign else int(rc == RD)
    return {Number("finite", sign)}, 0, 0


def fstp32(x, rc):
    sign = x.sign << 31
    if x.kind in ("snan", "qnan"):
        q = quiet(x)
        return sign | 0x7f800000 | ((q.significand >> 40) & 0x7fffff), IE if x.kind == "snan" else 0, 0
    if x.kind == "inf":
        return sign | 0x7f800000, 0, 0
    if not x.magnitude:
        return sign, 0, 0

    # Threshold tests use p=24 unbounded-exponent rounding, independent of
    # CW.PC. The final subnormal value is rounded DIRECTLY from ST0, not from
    # this threshold-only intermediate, preventing an extra double rounding.
    unbounded, _, _ = precision_round(x.magnitude, x.sign, 24, rc)
    if unbounded >= pow2(128):
        infinity = rc == RN or (rc == RD and x.sign) or (rc == RU and not x.sign)
        return sign | (0x7f800000 if infinity else 0x7f7fffff), OE | PE, int(bool(infinity))

    exponent = max(floor_log2(x.magnitude) - 23, -149)
    rounded, inexact, c1 = grid_round(x.magnitude, pow2(exponent), x.sign, rc)
    flags = PE if inexact else 0
    if inexact and unbounded < pow2(-126):
        flags |= UE
    if rounded < pow2(-126):
        bits = int(rounded / pow2(-149))
    else:
        e = floor_log2(rounded)
        significand = rounded / pow2(e - 23)
        assert significand.denominator == 1
        bits = ((e + 127) << 23) | (significand.numerator - (1 << 23))
    return sign | bits, flags, c1


def scalar_x87(b, c, pc, rc):
    """Input x/y/z u32 words; output scratch/status and ten-stage trace.

    scratch_bits and scratch_bits_allowed are nominal numeric diagnostics.
    If value_defined is false, neither constrains the architectural payload
    or sign: scratch_constraint requires only a quiet binary32 NaN.
    raised_flags excludes initial sticky state. c1 is final instruction C1,
    not sticky. It is an observed target-profile prediction when c1_defined
    is false (exact final store or masked overflow substitution); the primary
    passages checked do not pin those cases. C0/C2/C3 are undefined/null.
    The trace's ext80 fields describe the instruction result, not old stack
    entries or TOP. Ambiguous ext80 fields likewise have an allowed list.
    """
    if len(b) != 3 or len(c) != 3 or pc not in (24, 53, 64) or rc not in range(4):
        raise ValueError("requires b/c xyz triples, PC 24/53/64, RC 0/1/2/3")
    for word in (*b, *c):
        decode32(word)
    trace = []
    accumulated = 0

    def record(stage, numbers, raised, c1):
        nonlocal accumulated
        accumulated |= raised
        encodings = sorted({tuple(x.ext80()) for x in numbers})
        trace.append({"stage": stage, "ext80": list(encodings[0]) if len(encodings) == 1 else None,
                      "ext80_allowed": [list(x) for x in encodings], "raised_flags": raised,
                      "cumulative_flags": accumulated, "c1": c1, "c1_defined": True,
                      "value_defined": not any(x.undefined_nan_result for x in numbers)})

    def lift_unary(inputs, operation):
        values, flags, c1s = set(), 0, set()
        for x in inputs:
            result, raised, c1 = operation(x)
            values |= result
            flags |= raised
            c1s.add(c1)
        if len(c1s) != 1:
            raise AssertionError("NaN sign ambiguity unexpectedly changed C1")
        return values, flags, c1s.pop()

    def lift_add(left, right):
        values, flags, c1s = set(), 0, set()
        for a in left:
            for z in right:
                result, raised, c1 = add_registers(a, z, pc, rc)
                values |= result
                flags |= raised
                c1s.add(c1)
        if len(c1s) != 1:
            raise AssertionError("NaN sign ambiguity unexpectedly changed C1")
        return values, flags, c1s.pop()

    z, raised, c1 = fld32(b[2]); record("fld_bz", z, raised, c1)
    z, raised, c1 = lift_unary(z, lambda x: multiply_memory(x, c[2], pc, rc)); record("fmul_cz", z, raised, c1)
    y, raised, c1 = fld32(b[1]); record("fld_by", y, raised, c1)
    y, raised, c1 = lift_unary(y, lambda x: multiply_memory(x, c[1], pc, rc)); record("fmul_cy", y, raised, c1)
    zy, raised, c1 = lift_add(z, y); record("faddp_zy", zy, raised, c1)
    x, raised, c1 = fld32(b[0]); record("fld_bx", x, raised, c1)
    x, raised, c1 = lift_unary(x, lambda a: multiply_memory(a, c[0], pc, rc)); record("fmul_cx", x, raised, c1)
    total, raised, c1 = lift_add(zy, x); record("faddp_zyx", total, raised, c1)
    negated = {replace(a, sign=1-a.sign) for a in total}; record("fchs", negated, 0, 0)
    stores = {fstp32(a, rc) for a in negated}
    flags = {a[1] for a in stores}; c1s = {a[2] for a in stores}
    assert len(flags) == len(c1s) == 1
    raised, c1 = flags.pop(), c1s.pop()
    accumulated |= raised
    words = sorted({a[0] for a in stores})
    word = words[0] if len(words) == 1 else None
    defined = not any(x.undefined_nan_result for x in negated)
    c1_defined = bool(raised & PE) and not bool(raised & OE)
    c1_reason = ("inexact-significand-rounding" if c1_defined else
                 "unresolved-overflow-substitution" if raised & OE else "unresolved-exact-store")
    trace.append({"stage": "fstp32", "scratch_bits": word, "scratch_bits_allowed": words,
                  "raised_flags": raised, "cumulative_flags": accumulated, "c1": c1,
                  "c1_defined": c1_defined, "value_defined": defined})
    return {"scratch_bits": word, "scratch_bits_allowed": words,
            "raised_flags": accumulated, "c1": c1,
            "c1_defined": c1_defined, "c1_reason": c1_reason,
            "value_defined": defined, "scratch_defined": defined,
            "scratch_constraint": "exact" if defined else "quiet_nan",
            "undefined_flags": ["C0", "C2", "C3"], "c0": None, "c2": None, "c3": None,
            "unresolved_flags": [] if c1_defined else ["C1"],
            "nan_tie_tainted": not defined, "trace": trace}


def main():
    for line in sys.stdin:
        if line.strip():
            item = json.loads(line)
            result = scalar_x87(item["b"], item["c"], item["pc"], item["rc"])
            if "id" in item:
                result["id"] = item["id"]
            print(json.dumps(result, separators=(",", ":")))


if __name__ == "__main__":
    main()
