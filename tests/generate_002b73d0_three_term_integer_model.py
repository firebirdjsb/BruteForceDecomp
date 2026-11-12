#!/usr/bin/env python3
"""0x002b73d0 proposed native operation fixture, not original-machine evidence.
Scalar add/multiply and EDGES are reused verbatim from the canonical
002b3e60 generator. New: three-term packed composition, corpus, Fraction
finite anchors, and on-disk format. The reused integer scalar model is not
an independently authored scalar implementation; Fraction anchors provide
an independently derived finite output cross-check (not an exception oracle).
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

from fractions import Fraction

def operation(m,v,csr):
    a=[m[0],0,m[1],m[2]];b=[m[4],0,m[5],m[6]];c=[m[8],0,m[9],m[10]]
    ax=[multiply(t,v[0],csr) for t in a]
    by=[multiply(t,v[1],csr) for t in b]
    ab=[add(x[0],y[0],csr) for x,y in zip(ax,by)]
    cz=[multiply(t,v[2],csr) for t in c]
    abc=[add(x[0],y[0],csr) for x,y in zip(ab,cz)]
    flags=0
    for _,f in ax+by+ab+cz+abc:flags|=f
    return [abc[i][0] for i in (0,2,3)],csr|flags

def rational(bits):
    """Finite binary32 decoded directly into a signed rational real number."""
    e=(bits>>23)&255
    assert e!=255
    mant=(bits&FRAC)+(0x800000 if e else 0)
    power=(e-127-23) if e else -149
    q=Fraction(mant)*(Fraction(2)**power)
    return -q if bits&SIGN else q

def fraction_round(value,csr,zero_sign=0):
    """Independent neighboring-encoding binary search, for finite anchors only.
    Anchors avoid overflow and the subnormal-to-normal rounding boundary.
    This deliberately checks values, not the integer model's flag derivation.
    """
    if not value:return zero_sign
    neg=value<0;value=abs(value);rc=(csr>>13)&3
    assert value<=rational(0x7f7fffff)
    lo,hi=0,0x7f7fffff
    while lo<hi:
        mid=(lo+hi+1)//2
        if rational(mid)<=value:lo=mid
        else:hi=mid-1
    lower=rational(lo)
    if lower==value:chosen=lo
    elif rc==3 or (rc==1 and not neg) or (rc==2 and neg):chosen=lo
    elif rc in (1,2):chosen=lo+1
    else:
        upper=rational(lo+1)
        dl,du=value-lower,upper-value
        chosen=lo if dl<du or (dl==du and lo%2==0) else lo+1
    if csr&0x8000 and value<rational(0x800000):
        assert chosen<0x800000, 'anchor must avoid tiny rounding to normal boundary'
        chosen=0
    return chosen|(SIGN if neg else 0)

def fraction_instruction(a,b,csr,mul):
    if csr&64:
        a=a if a&INF else a&SIGN
        b=b if b&INF else b&SIGN
    av,bv=rational(a),rational(b)
    value=av*bv if mul else av+bv
    if mul:zs=(a^b)&SIGN
    elif not av and not bv and (a^b)&SIGN==0:zs=a&SIGN
    else:zs=SIGN if (csr>>13)&3==1 else 0
    return fraction_round(value,csr,zs)

def fraction_operation(m,v,csr):
    out=[]
    for i in (0,1,2):
        a=fraction_instruction(m[i],v[0],csr,True)
        b=fraction_instruction(m[4+i],v[1],csr,True)
        ab=fraction_instruction(a,b,csr,False)
        c=fraction_instruction(m[8+i],v[2],csr,True)
        out.append(fraction_instruction(ab,c,csr,False))
    return out

def matrix(a,b,c):return list(a)+[0x7f800001]+list(b)+[0xff800001]+list(c)
FINITE_ANCHORS={
 'exact_three_terms':(matrix([0x3f800000]*3,[0x40000000]*3,[0x40400000]*3),[0x3f800000]*3),
 'separate_multiply_rounding':(matrix([0x3f800001]*3,[0xbf800000]*3,[0]*3),[0x3f7ffffe,0x3f800000,0]),
 'separate_add_rounding':(matrix([0x3f800000]*3,[0x33800000]*3,[0xbf800000]*3),[0x3f800000]*3),
 'subnormal_and_signed_zero':(matrix([1,0x80000001,0x00800000],[0,0x80000000,2],[0,0,0]),[0x3f000000,0x3f800000,0]),
 'negative_cancellation':(matrix([0x3f800000,0xbf800000,0x80000000],[0xbf800000,0x3f800000,0x80000000],[0,0,0x80000000]),[0x3f800000]*3),
 'inexact_three_terms':(matrix([0x3f800001,0xbf800001,0x3eaaaaab],[0x33800000,0xb3800000,0xbeaaaaab],[0x33000000,0xb3000000,0x33800000]),[0x3f800001,0x3f7fffff,0x3f800001]),
}
SPECIAL_ANCHORS={
 'hidden_invalid_x':(matrix([0x3f800000]*3,[0]*3,[0]*3),[INF,0,0]),
 'hidden_invalid_y':(matrix([0]*3,[0x3f800000]*3,[0]*3),[0,INF,0]),
 'hidden_invalid_z':(matrix([0]*3,[0]*3,[0x3f800000]*3),[0,0,INF]),
 'nan_order':(matrix([0x7fc00001,0x7f800001,0xffc12345],[0xffc54321]*3,[0x7fc6789a]*3),[0xffc44444,0x7f800001,0xff800001]),
 'overflow_cancellation':(matrix([0x7f7fffff]*3,[0xff7fffff]*3,[0x3f800000]*3),[0x40000000,0x40000000,0x3f800000]),
 'tiny_boundary':(matrix([0x007fffff,0x00800000,0x00800001],[0]*3,[0]*3),[0x3f800001,0,0]),
}

def cases():
    yield from FINITE_ANCHORS.values();yield from SPECIAL_ANCHORS.values()
    for i,a in enumerate(EDGES):
        for j,b in enumerate(EDGES):
            c=EDGES[(i+j)%len(EDGES)]
            yield matrix([a,b,c],[b,c,a],[c,a,b]),[b,a,c]
            yield matrix([a,b,c],[b,a,c],[c,b,a]),[0x3f800000]*3
    selected=[0,SIGN,1,0x80000001,0x00800000,0x3f800000,0xbf800000,0x7f7fffff,INF,0xff800000,0x7fc00001,0x7f800001]
    for a in selected:
        for b in selected:
            for c in selected:yield matrix([a,b,c],[b,c,a],[c,a,b]),[a,b,c]
    rng=random.Random(0x2b73d0)
    for _ in range(4096):yield [rng.getrandbits(32) for _ in range(11)],[rng.getrandbits(32) for _ in range(3)]

def generate(path):
    corpus=list(cases());count=0;anchors=0
    with path.open('wb') as f:
        for rc in range(4):
            for daz in range(2):
                for ftz in range(2):
                    csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
                    for name,(m,v) in FINITE_ANCHORS.items():
                        expected=fraction_operation(m,v,csr)
                        assert operation(m,v,csr)[0]==expected,(name,hex(csr),expected)
                        anchors+=1
                    for m,v in corpus:
                        out,status=operation(m,v,csr)
                        f.write(struct.pack('<19I',csr,*m,*v,*out,status));count+=1
    print(f'Generated {count} cases, {count*76} bytes; {anchors} independent Fraction finite anchors')
if __name__=='__main__':generate(pathlib.Path(sys.argv[1]))
