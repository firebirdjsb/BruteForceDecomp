#!/usr/bin/env python3
"""Independently scheduled mutable-memory Fraction oracle for 0x002337a0.

Declared reuse: only scalar binary32 ``binary`` from the separately authored
003759c0 Fraction model. No integer-model or production-helper imports. The
memory graph below was derived from 002337a0's ordered disassembly. Arithmetic
between rows is regrouped: masked sticky flags are OR-only and cannot affect
values; faults, traps and concurrent observers are outside this native scope.
Offsets are uint32-word indices in one 96-word allocation; O must be even.
"""
import functools
import pathlib
import random
import struct
import sys
from generate_003759c0_four_term_rational_model import binary

# Memoization changes neither operand order nor the explicitly reused scalar
# model. Keeping controls (not preexisting flags) in the key bounds cache size.
scalar = functools.lru_cache(maxsize=131072)(binary)
WORDS = 96
RECORD = struct.Struct('<197I')


def operation(memory, left, right, out, csr):
    assert len(memory) == WORDS
    assert all(0 <= p <= WORDS-16 for p in (left, right, out))
    assert out % 2 == 0
    assert all(0 <= w <= 0xffffffff for w in memory)
    m = list(memory)
    controls = csr & ~63
    flags = csr & 63
    # Every right lane is captured before any write, even with triple overlap.
    rows = [m[right+4*k:right+4*k+4] for k in range(4)]
    def row(coefficients):
        nonlocal flags
        accum = []
        for k, coefficient in enumerate(coefficients):
            product = []
            for source in rows[k]:
                value, raised = scalar(coefficient, source, controls, True)
                flags |= raised
                product.append(value)
            if k == 0:
                accum = product
            else:
                for j in range(4):
                    accum[j], raised = scalar(accum[j], product[j], controls, False)
                    flags |= raised
        return accum

    a0, a1, a2, a3, a4, a5 = m[left:left+6]
    first = row((a0, a1, a2, a3))
    m[out:out+2] = first[:2]
    m[out+2:out+4] = first[2:]
    a6 = m[left+6]
    a9 = m[left+9]
    a7 = m[left+7]
    a8 = m[left+8]
    second = row((a4, a5, a6, a7))
    m[out+4:out+6] = second[:2]
    m[out+6:out+8] = second[2:]
    a10 = m[left+10]
    a11 = m[left+11]
    a13 = m[left+13]  # Original 00233871: survives the following low store.
    third = row((a8, a9, a10, a11))
    m[out+8:out+10] = third[:2]
    a12 = m[left+12]  # Original 00233881: between the two row-two stores.
    m[out+10:out+12] = third[2:]
    a14 = m[left+14]
    a15 = m[left+15]
    m[out+12:out+16] = row((a12, a13, a14, a15))
    return m, controls | flags


NAMED_ANCHORS = {}
ONE = 0x3f800000
NEG = 0xbf800000
EDGE = [0, 0x80000000, 1, 0x80000001, 0x007fffff, 0x807fffff,
        0x00800000, 0x80800000, ONE, NEG, 0x3f800001, 0xbf800001,
        0x3f7fffff, 0x33800000, 0x4b800000, 0xcb800000, 0x7f7fffff,
        0xff7fffff, 0x7f800000, 0xff800000, 0x7fc12345, 0xffc54321,
        0x7f800001, 0xff812345]


def anchor(name, coefficients, rows):
    m = [0xdead0000+i for i in range(WORDS)]
    m[8:24] = list(coefficients) * 4 if len(coefficients) == 4 else coefficients
    m[40:56] = list(rows)
    NAMED_ANCHORS[name] = (m, 8, 40, 72)


anchor('finite_row_layout', [ONE, 0x40000000, 0x40400000, 0x40800000],
       [ONE+(i<<20) for i in range(16)])
anchor('ordered_additions', [0x4b800000, ONE, 0xcb800000, ONE], [ONE]*16)
anchor('nonfused_rounding', [0x3f800001, NEG, 0, 0], [0x3f7ffffe]*4+[ONE]*4+[0]*8)
anchor('signed_zero', [0x80000000]*4, [ONE]*16)
anchor('mixed_signed_zero', [0, 0x80000000, 0, 0x80000000], [ONE, NEG]*8)
anchor('exact_subnormal', [0x00800000, 0, 0, 0], [0x3f000000]*4+[0]*12)
anchor('inexact_subnormal', [0x00800000, 0, 0, 0], [0x3f7fffff]*4+[0]*12)
anchor('tiny_rounds_normal', [0x007fffff, 0, 0, 0], [0x3f800001]*4+[0]*12)
anchor('precision_cancellation', [0x3f800001, 0x33800000, NEG, 0], [ONE]*16)
anchor('overflow_all_lanes', [0x40000000, 0, 0, 0], [0x7f7fffff]*4+[0]*12)
anchor('sum_nan_priority', [0x7fc11111, 0xffc22222, 0x7fc33333, 0xffc44444], [ONE]*16)
for k in range(4):
    coefficients = [ONE]*4
    coefficients[k] = 0x7fc11111+k
    rows = [ONE]*16
    rows[4*k:4*k+4] = [0xffc22222+k]*4
    anchor('coefficient_nan_row'+str(k), coefficients, rows)
    for lane in range(4):
        for name, value in [('snan', 0x7f812345), ('denormal', 1)]:
            rows = [ONE]*16
            rows[4*k+lane] = value
            anchor(name+'_row'+str(k)+'_lane'+str(lane), [ONE]*4, rows)
anchor('nan_suppresses_denormal', [1]*4, [0x7fc22222]*16)
anchor('mul_invalid', [0]*4, [0x7f800000]*16)
anchor('add_invalid', [ONE]*4, [0x7f800000]*4+[0xff800000]*4+[0]*8)


def finite_memory():
    # Exact small signed integers and halves keep the overlap corpus efficient,
    # while producing distinguishable overwrites rather than identity matrices.
    values = [ONE, 0x40000000, 0x40400000, NEG, 0x3f000000, 0xc0000000]
    return [values[(i*i+3*i+i//3) % len(values)] for i in range(WORDS)]


NAMED_ANCHORS['split_row2_l12_after_low_l13_before'] = (finite_memory(), 28, 60, 32)
NAMED_ANCHORS['all_pointers_equal'] = (finite_memory(), 32, 32, 32)
NAMED_ANCHORS['triple_shifted_overlap'] = (finite_memory(), 28, 34, 32)


def overlap_layouts():
    layouts = set()
    for o in (32, 34):  # Every allowed output residue modulo sixteen bytes.
        for d in range(-15, 16):
            for alignment in range(4):
                layouts.add((o+d, 72+alignment, o))
                layouts.add((72+alignment, o+d, o))
        # Every pair of signed output-overlap offsets, including all equal.
        for dl in range(-15, 16):
            for dr in range(-15, 16):
                layouts.add((o+dl, o+dr, o))
    # Input/input overlaps with disjoint output, all four input alignments.
    for l in range(32, 36):
        for d in range(-15, 16):
            for o in (78, 80):
                layouts.add((l, l+d, o))
    for l in range(8, 12):
        for r in range(40, 44):
            for o in (72, 74):
                layouts.add((l, r, o))
    return sorted(layouts)


def record(memory, left, right, out, csr):
    final, status = operation(memory, left, right, out, csr)
    return RECORD.pack(csr, left, right, out, *memory, *final, status)


def records():
    corpus = list(NAMED_ANCHORS.values())
    corpus += [(finite_memory(), l, r, o) for l, r, o in overlap_layouts()]
    rng = random.Random(0x2337a0f)
    layouts = overlap_layouts()
    for raw in (False, True):
        for i in range(64):
            m = [rng.getrandbits(32) if raw else rng.choice(EDGE) for _ in range(WORDS)]
            l, r, o = layouts[rng.randrange(len(layouts))] if i % 2 else (8, 40, 72)
            corpus.append((m, l, r, o))
    for rc in range(4):
        for daz in range(2):
            for ftz in range(2):
                csr = 0x1f80 | rc << 13 | daz << 6 | ftz << 15
                for m, l, r, o in corpus:
                    final, status = operation(m, l, r, o, csr)
                    yield [csr, l, r, o, *m, *final, status]


def generate(path):
    count = 0
    with pathlib.Path(path).open('wb') as stream:
        for entry in records():
            stream.write(RECORD.pack(*entry))
            count += 1
    return count


if __name__ == '__main__':
    count = generate(sys.argv[1])
    print(count, 'Fraction mutable-memory records;', count*64, 'sticky-seeded gate comparisons')
