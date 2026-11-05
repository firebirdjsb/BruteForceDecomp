#!/usr/bin/env python3
"""Integer-only binary32 addition fixture generator; no host FP operations.
All finite magnitudes are integers in units of 2**-149. Outputs encode the
exact integer sum using the selected IEEE rounding direction. NaN propagation
is an explicit native-x86 test expectation, not a universal NaN convention.
"""
import pathlib,random,struct,sys
SIGN=0x80000000; INF=0x7f800000; FRAC=0x7fffff; QUIET=0x400000

def add(a,b,csr):
    rc=(csr>>13)&3;daz=bool(csr&64);ftz=bool(csr&0x8000)
    def nan(x): return x&INF==INF and bool(x&FRAC)
    def snan(x): return nan(x) and not x&QUIET
    # NaNs take priority over denormal operand reporting.
    if nan(a) or nan(b):
        return ((a if nan(a) else b)|QUIET), int(snan(a) or snan(b))
    flags=0
    for x in (a,b):
        if x&INF==0 and x&FRAC and not daz:flags|=2
    if daz:
        if a&INF==0:a &= SIGN
        if b&INF==0:b &= SIGN
    if a&~SIGN==INF or b&~SIGN==INF:
        if a&~SIGN==b&~SIGN==INF and (a^b)&SIGN:return 0xffc00000,1
        return (a if a&~SIGN==INF else b),flags
    def integer(x):
        e=(x>>23)&255;v=(x&FRAC)|(0x800000 if e else 0)
        v <<= max(e-1,0)
        return -v if x&SIGN else v
    n=integer(a)+integer(b)
    if not n:
        # Equal-sign zeros retain sign; cancellation has RC-down negative zero.
        same_zero=(a&~SIGN)==0 and (b&~SIGN)==0 and (a^b)&SIGN==0
        return (a&SIGN if same_zero else (SIGN if rc==1 else 0)),flags
    sign=SIGN if n<0 else 0;n=abs(n)
    if n < 0x800000:
        if ftz:return sign,flags|0x30
        return sign|n,flags
    shift=max(n.bit_length()-24,0);q,r=divmod(n,1<<shift)
    if r:
        flags|=0x20
        up=(rc==0 and (r>(1<<(shift-1)) or (r==(1<<(shift-1)) and q&1))) or (rc==1 and sign) or (rc==2 and not sign)
        q+=bool(up)
    if q==1<<24:q>>=1;shift+=1
    exp=shift+1
    if exp>=255:
        flags|=0x28
        inf=rc==0 or (rc==1 and sign) or (rc==2 and not sign)
        return sign|(INF if inf else 0x7f7fffff),flags
    return sign|(exp<<23)|(q&FRAC),flags

EDGES=[0,0x80000000,1,0x80000001,0x3fffff,0x803fffff,0x7fffff,0x807fffff,
0x800000,0x80800000,0x800001,0x80800001,0x3f800000,0xbf800000,0x3f800001,0xbf800001,
0x33800000,0xb3800000,0x33000000,0xb3000000,0x4b800000,0xcb800000,
0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc00001,0xffc12345,
0x7fc54321,0xffc6789a,0x7f800001,0xff812345,0x7fa54321,0xffa6789a]
def generate(path):
    cases=[]
    for a in EDGES:
        for b in EDGES:
            cases.append([a,b,EDGES[(EDGES.index(a)+7)%len(EDGES)],b,a,EDGES[(EDGES.index(b)+13)%len(EDGES)]])
    rng=random.Random(0x2b3cc0)
    for _ in range(4096):cases.append([rng.getrandbits(32) for _ in range(6)])
    with path.open('wb') as f:
        count=0
        for rc in range(4):
            for daz in range(2):
                for ftz in range(2):
                    csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
                    for v in cases:
                        sums=[add(v[i],v[i+3],csr) for i in range(3)]
                        flags=sums[0][1]|sums[1][1]|sums[2][1]
                        f.write(struct.pack('<11I',csr,*v,*[s[0] for s in sums],csr|flags));count+=1
    print('Generated',count,'independent integer model cases')
if __name__=='__main__':generate(pathlib.Path(sys.argv[1]))
