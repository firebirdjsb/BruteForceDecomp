#!/usr/bin/env python3
"""Cross-check the independently authored Fraction oracle, integer model, and hardware."""
import random

def csr(i,s=0): return 0x1f80 | ((i&3)<<13) | ((i&4)<<4) | ((i&8)<<12) | s

def corpus():
    tt=[0,0x80000000,1,0x80000001,0x007fffff,0x807fffff,0x00800000,0x80800000,
        0x3effffff,0x3f000000,0x3f000001,0x3f7fffff,0x3f800000,0x3f800001,
        0x3fc00000,0xbfc00000,0x40000000,0xc0000000,0x4b000001,0xcb000001,
        0x4effffff,0xceffffff,0x4f000000,0xcf000000,0x4f000001,0xcf000001,
        0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7f800001,0xff800001,
        0x7fbfffff,0x7fc00000,0x7fffffff,0xffc00000,0xffffffff]
    si=[0,1,0xffffffff,0x00ffffff,0xff000001,0x01000000,0xff000000,
        0x01000001,0xfeffffff,0x01000002,0xfefffffe,0x01000003,0xfefffffd,
        0x7fffff7f,0x7fffff80,0x7fffffbf,0x7fffffc0,0x7fffffc1,0x7fffffff,
        0x80000000,0x80000001,0x8000003f,0x80000040,0x80000041]
    for op,values in [('tt',tt),('si',si)]:
        for b in values:
            for i in range(16):
                for s in range(64): yield op,b,csr(i,s)
    # Every exponent, sign, strategically different mantissa residues, all modes.
    for exp in range(256):
        for frac in [0,1,2,3,0x3ffffe,0x3fffff,0x400000,0x400001,0x7ffffd,0x7ffffe,0x7fffff]:
            for sign in [0,0x80000000]:
                for i in range(16): yield 'tt',sign|(exp<<23)|frac,csr(i)
    # All discarded-remainder values and both retained-significand parities
    # in every int32 rounding binade, both signs and all modes.
    for exponent in range(24,31):
        unit=1<<(exponent-23)
        for retained in [(1<<23),(1<<23)+1,(1<<24)-2,(1<<24)-1]:
            for remainder in range(unit):
                mag=retained*unit+remainder
                if mag >= 1<<31: continue
                for sign in [1,-1]:
                    for i in range(16): yield 'si',(mag*sign)&0xffffffff,csr(i)
    rng=random.Random(20261105)
    for _ in range(10000):
        b=rng.getrandbits(32)
        for op in ['tt','si']:
            for i in range(16): yield op,b,csr(i,rng.randrange(64))
