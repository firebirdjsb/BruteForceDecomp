"""Reproduce exact edge/threshold vectors and a deterministic random certificate."""
from fractions import Fraction as Q
from hashlib import sha256
import json
from pathlib import Path

from rational_model import (ROUNDING_MODES, ideal_scaled_log2,
    uniform_scaled_width_bound, interval_to_int32, compare_ideal_to_rational)
from test_rational_model import lcg_bits, alternate_scaled_log2

OUT = Path(__file__).parent / "results"


def rational(value):
    return f"{value.numerator}/{value.denominator}"


def row(bits):
    enclosure = ideal_scaled_log2(bits, 32)
    assert enclosure.width <= uniform_scaled_width_bound(32)
    results = {}
    for rc in ROUNDING_MODES:
        allowed = interval_to_int32(enclosure, rc)
        results[rc] = {"valid_lo": allowed.valid_lo, "valid_hi": allowed.valid_hi,
                       "invalid_possible": allowed.invalid_possible}
        assert allowed.unique_valid
    return {"binary32_hex": f"{bits:08x}", "terms": 32,
            "ideal_closed_interval": [rational(enclosure.lo), rational(enclosure.hi)],
            "ideal_rounding": results}


def lower_bound(target):
    """First positive-finite binary32 whose exact ideal result is >= target."""
    lo, hi = 1, 0x7F7FFFFF
    assert compare_ideal_to_rational(lo, target) < 0
    assert compare_ideal_to_rational(hi, target) >= 0
    while lo < hi:
        mid = (lo + hi) // 2
        if compare_ideal_to_rational(mid, target) < 0:
            lo = mid + 1
        else:
            hi = mid
    return lo


def canonical_json(data):
    return json.dumps(data, sort_keys=True, separators=(",", ":"))


def main():
    OUT.mkdir(exist_ok=True)
    edges = [1, 2, 3, 0x003FFFFF, 0x00400000, 0x00400001,
             0x007FFFFF, 0x00800000, 0x00800001,
             0x3EFFFFFF, 0x3F000000, 0x3F000001,
             0x3F7FFFFF, 0x3F800000, 0x3F800001,
             0x3FBFFFFF, 0x3FC00000, 0x3FC00001,
             0x3FFFFFFF, 0x40000000, 0x40000001,
             0x457FFFFF, 0x45800000, 0x45800001,
             0x7EFFFFFF, 0x7F000000, 0x7F000001, 0x7F7FFFFE, 0x7F7FFFFF]
    targets = [Q(-1220607, 2), Q(-1040383, 2), Q(-1032191, 2),
               Q(-8193, 2), Q(-4096), Q(-8191, 2), Q(-2049, 2), Q(-1000),
               Q(-3, 2), Q(-1), Q(-1, 2), Q(0), Q(1, 2), Q(1), Q(3, 2),
               Q(1000), Q(2049, 2), Q(8191, 2), Q(4096), Q(8193, 2),
               Q(98303, 2), Q(49152), Q(98305, 2), Q(1040383, 2),
               Q(524287), Q(1048575, 2)]
    threshold_rows = []
    for target in targets:
        upper_bits = lower_bound(target)
        below, above = upper_bits - 1, upper_bits
        below_relation = compare_ideal_to_rational(below, target)
        above_relation = compare_ideal_to_rational(above, target)
        assert below_relation == -1 and above_relation in (0, 1)
        threshold_rows.append({"target": rational(target), "below": row(below),
                               "at_or_above": row(above),
                               "at_or_above_relation": above_relation})
    (OUT / "edge-threshold-vectors.json").write_text(json.dumps({
        "scope": "Ideal mathematical result only; no FYL2X hardware guarantee",
        "edges": [row(bits) for bits in edges], "thresholds": threshold_rows,
    }, sort_keys=True, indent=2) + "\n")
    digest = sha256()
    random_summary = []
    count = 2048
    for index, bits in enumerate(lcg_bits(count)):
        vector = row(bits)
        encoded = (canonical_json(vector) + "\n").encode()
        digest.update(encoded)
        random_summary.append({"binary32_hex": vector["binary32_hex"],
                               "exact_row_sha256": sha256(encoded).hexdigest(),
                               "ideal_integer_by_rc": {
                                   rc: vector["ideal_rounding"][rc]["valid_lo"]
                                   for rc in ROUNDING_MODES}})
        main_interval = ideal_scaled_log2(bits, 32)
        tighter = ideal_scaled_log2(bits, 40)
        assert main_interval.lo <= tighter.lo <= tighter.hi <= main_interval.hi
        if index < 64:
            witness = alternate_scaled_log2(bits)
            assert main_interval.lo <= witness.lo <= witness.hi <= main_interval.hi
    certificate = {
        "scope": "Ideal math and exact integer-rounding decisions; not CPU results",
        "count": count, "lcg_seed_hex": "003174c5", "lcg_modulus": 1 << 32,
        "lcg_multiplier": 1664525, "lcg_increment": 1013904223,
        "mapping": "1 + state % 0x7f7fffff after updating state",
        "all_exact_rows_sha256": digest.hexdigest(),
        "exact_row_serialization": "sort_keys=True,separators=(',',':'),ASCII JSON, one LF",
        "terms": 32, "all_mode_unique_valid_cases": count,
        "nested_40_term_checks": count, "independent_192_term_taylor_checks": 64,
        "uniform_width_bound": rational(uniform_scaled_width_bound(32)),
        "all_mode_comparisons": count * len(ROUNDING_MODES), "vectors": random_summary,
    }
    (OUT / "random-certificate.json").write_text(json.dumps(certificate, sort_keys=True, indent=2) + "\n")
    summary = {"edge_cases": len(edges), "threshold_pairs": len(targets),
               "random_cases": count, "random_RC_decisions": count * len(ROUNDING_MODES),
               "random_exact_rows_sha256": digest.hexdigest(),
               "random_independent_taylor_witnesses": 64,
               "all_32_term_cases_unique_in_all_RCs": True}
    (OUT / "vector-summary.json").write_text(json.dumps(summary, sort_keys=True, indent=2) + "\n")
    print(json.dumps(summary, sort_keys=True, indent=2))


if __name__ == "__main__":
    main()
