#!/usr/bin/env python3
"""Integer-only binary32 MULPS then ADDPS fixture generator; no host FP oracle.
Addition uses integer units of 2**-149; multiplication uses units of 2**-298.
SSE destination-NaN preference, masking, DAZ/FTZ and rounding are explicit.
The hidden packed lane computes +0 * scalar then +0 + product and contributes
exception flags despite not being stored. Multiplication is rounded before add.
Adapted from the reviewed 002b3cc0 integer addition model; multiplication and
operation composition are independent integer derivations, native validated.
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

def multiply(a,b,csr):
    rc=(csr>>13)&3;daz=bool(csr&64);ftz=bool(csr&0x8000)
    def nan(x):return x&INF==INF and bool(x&FRAC)
    if nan(a) or nan(b):
        invalid=any(nan(x) and not x&QUIET for x in (a,b))
        return (a if nan(a) else b)|QUIET,int(invalid)
    flags=0
    for x in (a,b):
        if x&INF==0 and x&FRAC and not daz:flags|=2
    if daz:
        if a&INF==0:a&=SIGN
        if b&INF==0:b&=SIGN
    sign=(a^b)&SIGN
    aa=a&~SIGN;bb=b&~SIGN
    if aa==INF or bb==INF:
        if aa==0 or bb==0:return 0xffc00000,1
        return sign|INF,flags
    def integer(x):
        e=(x>>23)&255
        return ((x&FRAC)|(0x800000 if e else 0))<<max(e-1,0)
    n=integer(a)*integer(b) # exact magnitude, units of 2**-298
    if not n:return sign,flags
    # Round once at binary32's precision or minimum subnormal quantum.
    shift=max(n.bit_length()-24,149)
    q,r=divmod(n,1<<shift)
    if r:
        flags|=0x20
        up=(rc==0 and (r>(1<<(shift-1)) or (r==(1<<(shift-1)) and q&1))) or (rc==1 and sign) or (rc==2 and not sign)
        q+=bool(up)
    if q==1<<24:q>>=1;shift+=1
    # SSE detects tininess after precision rounding with an unbounded exponent,
    # before rounding again to the minimum-subnormal quantum.
    ts=max(n.bit_length()-24,0);tq,tr=divmod(n,1<<ts)
    if tr:
        tup=(rc==0 and (tr>(1<<(ts-1)) or (tr==(1<<(ts-1)) and tq&1))) or (rc==1 and sign) or (rc==2 and not sign)
        tq+=bool(tup)
    tiny=(tq<<ts)<(1<<172)
    if tiny:
        if ftz:return sign,flags|0x30
        if r:flags|=0x10
    if q<0x800000:return sign|q,flags
    exp=shift-148
    if exp>=255:
        flags|=0x28
        inf=rc==0 or (rc==1 and sign) or (rc==2 and not sign)
        return sign|(INF if inf else 0x7f7fffff),flags
    return sign|(exp<<23)|(q&FRAC),flags

def operation(base,vector,scalar,csr):
    products=[multiply(v,scalar,csr) for v in [vector[0],0,vector[1],vector[2]]]
    sums=[add(b,p[0],csr) for b,p in zip([base[0],0,base[1],base[2]],products)]
    flags=0
    for _,f in products+sums:flags|=f
    return [sums[i][0] for i in (0,2,3)],csr|flags

# Named exact anchors, also emitted verbatim in the binary corpus.
NAMED_ANCHORS={
 'nonfused_cancellation':([0xbf800000]*3,[0x3f800001]*3,0x3f7ffffe),
 'tiny_boundary':([0]*3,[0x00800000,0x00800001,0x007fffff],0x3f7fffff),
 'subnormal_half':([0]*3,[0x00800000,1,0x7f7fffff],0x3f000000),
 'hidden_lane_inf':([0x3f800000]*3,[0x3f800000]*3,INF),
 'qnan_multiply_destination':([0]*3,[0x7fc00001,0xffc12345,0x7fc54321],0xffc6789a),
 'tiny_rounds_normal_without_underflow':([0]*3,[0x007fffff]*3,0x3f800001),
}

def cases():
    result=[]
    for i,a in enumerate(EDGES):
        for j,b in enumerate(EDGES):
            # Every edge pair in multiplication and separately in final addition.
            result.append(([EDGES[(i+j)%len(EDGES)],a,b],[a,b,EDGES[(i+7)%len(EDGES)]],b))
            result.append(([a,b,a],[b,a,b],0x3f800000))
    # Exhaustive triples for scalar NaNs, zeros, infinities, denormals and finite values.
    for a in EDGES:
        for b in EDGES:
            for c in EDGES:result.append(([a,b,c],[b,c,a],c))
    result+=list(NAMED_ANCHORS.values())
    rng=random.Random(0x2b3e60)
    for _ in range(4096):result.append(([rng.getrandbits(32) for _ in range(3)],[rng.getrandbits(32) for _ in range(3)],rng.getrandbits(32)))
    return result

def generate(path):
    count=0;corpus=cases()
    with path.open('wb') as f:
        for rc in range(4):
            for daz in range(2):
                for ftz in range(2):
                    csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
                    for base,vector,scalar in corpus:
                        result,status=operation(base,vector,scalar,csr)
                        f.write(struct.pack('<12I',csr,*base,*vector,scalar,*result,status));count+=1
    print('Generated',count,'integer-only MULPS/ADDPS cases')
if __name__=='__main__':generate(pathlib.Path(sys.argv[1]))
