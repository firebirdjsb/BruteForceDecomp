#!/usr/bin/env python3
"""Reviewer Fraction oracle for 002b7360; no production model or host FP.
Scalar rational encode/rounding derives from the independently reviewed 002b73d0
Fraction model. SUB, exact decoded graph, anchors and fixtures are new here.
"""
from fractions import Fraction as F
import pathlib,random,struct,sys
SIGN=0x80000000; INF=0x7f800000; QUIET=0x400000

def cls(w):
    e=(w>>23)&255; m=w&0x7fffff
    return 'nan' if e==255 and m else 'inf' if e==255 else 'sub' if e==0 and m else 'zero' if e==0 else 'normal'

def rational(w):
    e=(w>>23)&255;m=(w&0x7fffff)|(0x800000 if e else 0)
    p=e-150 if e else -149
    return F(-m if w&SIGN else m)*(F(2)**p)

def rounded_integer(x,rc,negative):
    q,r=divmod(x.numerator,x.denominator)
    if (rc==0 and (2*r>x.denominator or (2*r==x.denominator and q&1))) or (r and ((rc==1 and negative) or (rc==2 and not negative))):q+=1
    return q,bool(r)

def encode(value,csr):
    sign=SIGN if value<0 else 0;x=abs(value);rc=(csr>>13)&3
    exponent=x.numerator.bit_length()-x.denominator.bit_length()
    assert F(2)**exponent<=x<F(2)**(exponent+1)
    p=exponent-23
    tq,_=rounded_integer(x/(F(2)**p),rc,bool(sign))
    tiny=F(tq)*(F(2)**p)<F(2)**-126
    p=max(p,-149)
    q,inexact=rounded_integer(x/(F(2)**p),rc,bool(sign));flags=32 if inexact else 0
    if tiny:
        if csr&0x8000:return sign,flags|48
        if inexact:flags|=16
    y=F(q)*(F(2)**p)
    if y>=F(2)**128:
        to_inf=rc==0 or (rc==1 and bool(sign)) or (rc==2 and not sign)
        return sign|(INF if to_inf else 0x7f7fffff),flags|40
    if y<F(2)**-126:return sign|int(y/(F(2)**-149)),flags
    exponent=y.numerator.bit_length()-y.denominator.bit_length()
    mantissa=int(y/(F(2)**(exponent-23)))
    return sign|((exponent+127)<<23)|(mantissa&0x7fffff),flags

def binary(a,b,csr,op):
    ca,cb=cls(a),cls(b)
    # SUBPS has the same ordered NaN propagation as ADDPS. Its source NaN
    # sign is NOT inverted: resolve both operands before finite sign change.
    if ca=='nan' or cb=='nan':
        return (a if ca=='nan' else b)|QUIET,int((ca=='nan' and not a&QUIET) or (cb=='nan' and not b&QUIET))
    if op=='sub':b^=SIGN
    flags=2 if (ca=='sub' or cb=='sub') and not csr&64 else 0
    if csr&64:
        if ca=='sub':a&=SIGN;ca='zero'
        if cb=='sub':b&=SIGN;cb='zero'
    if ca=='inf' or cb=='inf':
        invalid=((ca=='zero' or cb=='zero') if op=='mul' else (ca==cb=='inf' and bool((a^b)&SIGN)))
        if invalid:return 0xffc00000,1
        return (((a^b)&SIGN)|INF if op=='mul' else (a if ca=='inf' else b)),flags
    value=rational(a)*rational(b) if op=='mul' else rational(a)+rational(b)
    if not value:
        if op=='mul':sign=(a^b)&SIGN
        elif ca==cb=='zero' and not (a^b)&SIGN:sign=a&SIGN
        else:sign=SIGN if ((csr>>13)&3)==1 else 0
        return sign,flags
    result,new=encode(value,csr)
    return result,flags|new

def operation(vector,rows,csr):
    # MOVSS memory clears upper96, then MOVHPS fills high64. Lane1 is live.
    v=[vector[0],0,vector[1],vector[2]]
    translation=[rows[12],0,rows[13],rows[14]]
    flags=0; delta=[]
    for a,b in zip(v,translation):
        word,status=binary(a,b,csr,'sub');delta.append(word);flags|=status
    x,y,z=delta[0],delta[2],delta[3]
    def product(start,coefficient):
        nonlocal flags
        result=[]
        for a in [rows[start],0,rows[start+1],rows[start+2]]:
            word,status=binary(a,coefficient,csr,'mul');result.append(word);flags|=status
        return result
    def add(a,b):
        nonlocal flags
        result=[]
        for aa,bb in zip(a,b):
            word,status=binary(aa,bb,csr,'add');result.append(word);flags|=status
        return result
    a=product(0,x);b=product(4,y)
    a=add(a,b);c=product(8,z);a=add(a,c)
    return [a[0],a[2],a[3]],csr|flags

A={}; O=0x3f800000; T=0x40000000; N=0xbf800000; Z=0

def anchor(name,vector,rows):
    assert len(vector)==3 and len(rows)==15 and name not in A
    A[name]=(vector,rows)

def terms(a=None,b=None,c=None,t=None):
    return (a or [O]*3)+[0x7f800123]+(b or [O]*3)+[0xff800321]+(c or [O]*3)+[INF]+(t or [0]*3)

anchor('layout',[0x40800000,0x40a00000,0x40c00000],terms([O,T,0x40400000],[0x40800000,0x40a00000,0x40c00000],[0x40e00000,0x41000000,0x41100000],[O,T,0x40400000]))
anchor('ordered_additions',[0x4b800000,O,0xcb800000],terms())
anchor('nonfusion',[N,0x3f800001,Z],terms([O]*3,[0x3f7ffffe]*3,[Z]*3))
for stage in range(3):
    for a,b,label in [(O,0x7fc12345,'source_positive_qnan'),(O,0xffc12345,'source_negative_qnan'),(O,0x7f812345,'source_positive_snan'),(O,0xff812345,'source_negative_snan'),(0xffc22222,0x7fc11111,'destination_qnan'),(0x7fc22222,0xff811111,'destination_qnan_source_snan'),(0xff822222,0x7fc11111,'destination_snan_source_qnan'),(INF,INF,'same_positive_infinity'),(INF|SIGN,INF|SIGN,'same_negative_infinity'),(INF,INF|SIGN,'opposite_infinities'),(0x7f7fffff,0xff7fffff,'subtract_overflow'),(0x00800000,0x007fffff,'subtract_subnormal'),(O,0x33800000,'subtract_tie'),(O,0x33000000,'subtract_quarter_ulp')]:
        v=[O]*3;v[stage]=a;r=terms();r[12+stage]=b
        anchor(label+'_'+str(stage),v,r)
    v=[O]*3;v[stage]=0x7fc11111+stage;r=terms();r[stage*4:stage*4+3]=[0xffc22222+stage]*3
    anchor('row_nan_priority_'+str(stage),v,r)
    v=[O]*3;v[stage]=INF;anchor('hidden_invalid_'+str(stage),v,terms())
    v=[O]*3;v[stage]=1;anchor('hidden_denormal_'+str(stage),v,terms([0x7fc33333]*3,[0x7fc33333]*3,[0x7fc33333]*3))
    r=terms();r[stage*4:stage*4+3]=[0x7f812345]*3;anchor('row_snan_'+str(stage),[O]*3,r)
anchor('sum_nan_priority',[O,O,O],terms([0x7fc11111]*3,[0xffc22222]*3,[0x7fc33333]*3))
anchor('unused_gap_snan',[O,O,O],terms())
anchor('signed_zero',[SIGN,SIGN,SIGN],terms(t=[SIGN,SIGN,SIGN]))
anchor('exact_tiny',[0x00800000,Z,Z],terms([0x3f000000]*3,[Z]*3,[Z]*3))
anchor('inexact_tiny',[0x00800000,Z,Z],terms([0x3f7fffff]*3,[Z]*3,[Z]*3))
anchor('tiny_rounds_normal',[0x007fffff,Z,Z],terms([0x3f800001]*3,[Z]*3,[Z]*3))
anchor('overflow',[0x7f7fffff,O,O],terms([T]*3,[T]*3,[T]*3))
anchor('cancellation',[0x3f800001,0x33800000,N],terms())
EDGE=[0,SIGN,1,SIGN|1,0x007fffff,0x807fffff,0x00800000,0x80800000,0x00800001,0x80800001,0x3f000000,0xbf000000,O,N,0x3f800001,0xbf800001,0x3f7fffff,0xbf7fffff,0x33800000,0xb3800000,0x4b800000,0xcb800000,0x7f7fffff,0xff7fffff,INF,INF|SIGN,0x7fc12345,0xffc54321,0x7f800001,0xff812345]

def self_check():
    # Hand-derived scalar SUB anchors do not consult the model composition.
    for csr in [0x1f80|(rc<<13)|(daz<<6)|(ftz<<15) for rc in range(4) for daz in range(2) for ftz in range(2)]:
        for a,b,w,s in [(O,0x7fc12345,0x7fc12345,0),(O,0xffc12345,0xffc12345,0),(O,0x7f812345,0x7fc12345,1),(O,0xff812345,0xffc12345,1),(0xffc22222,0x7f811111,0xffc22222,1),(INF,INF,0xffc00000,1),(INF|SIGN,INF|SIGN,0xffc00000,1),(INF,INF|SIGN,INF,0),(0,SIGN,0,0),(SIGN,0,SIGN,0)]:
            assert binary(a,b,csr,'sub')==(w,s),(hex(csr),hex(a),hex(b))
        assert binary(O,O,csr,'sub')==(SIGN if (csr>>13)&3==1 else 0,0)
        assert binary(0,0,csr,'sub')==(SIGN if (csr>>13)&3==1 else 0,0)
    assert operation(*A['layout'],0x1f80)==([0x42100000,0x42340000,0x42580000],0x1f80)

def records():
    corpus=list(A.values());rng=random.Random(0x7360f00d)
    # Every special pair is exercised as SUB destination/source in each axis.
    for stage in range(3):
      for a in EDGE:
       for b in EDGE:
        v=[O]*3;v[stage]=a;r=terms();r[12+stage]=b;corpus.append((v,r))
    for _ in range(256):
        words=[rng.choice(EDGE) for _ in range(18)];corpus.append((words[:3],words[3:]))
    for _ in range(256):
        words=[rng.getrandbits(32) for _ in range(18)];corpus.append((words[:3],words[3:]))
    for rc in range(4):
      for daz in range(2):
       for ftz in range(2):
        csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
        for v,r in corpus:
            out,status=operation(v,r,csr)
            yield [csr,*v,*r,*out,status]
if __name__=='__main__':
    self_check();p=pathlib.Path(sys.argv[1]);n=0
    with p.open('wb') as f:
        for rec in records():f.write(struct.pack('<23I',*rec));n+=1
    print(n,'independent rational records,',n*64,'sticky-seeded comparisons; anchors',len(A))
