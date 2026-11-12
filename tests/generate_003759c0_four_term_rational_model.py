#!/usr/bin/env python3
"""Independent Fraction-based reviewer oracle for 003759c0, no host FP oracle.
Original instruction graph is independently decoded. No production-model import.
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
    # All inputs are dyadic; derive the exact exponent and precision independently.
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

def binary(a,b,csr,mul):
    ca,cb=cls(a),cls(b)
    if ca=='nan' or cb=='nan':
        return (a if ca=='nan' else b)|QUIET,int((ca=='nan' and not a&QUIET) or (cb=='nan' and not b&QUIET))
    flags=2 if (ca=='sub' or cb=='sub') and not csr&64 else 0
    if csr&64:
        if ca=='sub':a&=SIGN;ca='zero'
        if cb=='sub':b&=SIGN;cb='zero'
    if ca=='inf' or cb=='inf':
        invalid=((ca=='zero' or cb=='zero') if mul else (ca==cb=='inf' and bool((a^b)&SIGN)))
        if invalid:return 0xffc00000,1
        return (((a^b)&SIGN)|INF if mul else (a if ca=='inf' else b)),flags
    value=rational(a)*rational(b) if mul else rational(a)+rational(b)
    if not value:
        if mul:sign=(a^b)&SIGN
        elif ca==cb=='zero' and not (a^b)&SIGN:sign=a&SIGN
        else:sign=SIGN if ((csr>>13)&3)==1 else 0
        return sign,flags
    result,new=encode(value,csr)
    return result,flags|new

def operation(vector,scalar,rows,csr):
    cs=[*vector,scalar];total_flags=0;acc=[]
    for r,c in enumerate(cs):
        product=[]
        for j in range(4):
            v,f=binary(c,rows[r*4+j],csr,True);product.append(v);total_flags|=f
        if r==0:acc=product
        else:
            for j in range(4):acc[j],f=binary(acc[j],product[j],csr,False);total_flags|=f
    return acc[:3],csr|total_flags

A={}
def anchor(name,vector,scalar,rows):A[name]=(vector,scalar,rows)
O=0x3f800000; T=0x40000000; N=0xbf800000; Z=0
anchor('row_layout',[O,T,0x40400000],0x40800000,[O,T,0x40400000,0x40800000,0x40a00000,0x40c00000,0x40e00000,0x41000000,0x41100000,0x41200000,0x41300000,0x41400000,0x41500000,0x41600000,0x41700000,0x41800000])
anchor('ordered_additions',[0x4b800000,O,0xcb800000],O,[O]*16)
anchor('nonfused',[0x3f800001,N,Z],Z,[0x3f7ffffe]*4+[O]*4+[Z]*8)
for r in range(4):
    cs=[O]*4;cs[r]=0x7fc11111+r
    rows=[O]*16
    rows[r*4:(r+1)*4]=[0xffc22222+r]*4
    anchor('coefficient_nan_row'+str(r),cs[:3],cs[3],rows)
anchor('sum_nan_priority',[0x7fc11111,0xffc22222,0x7fc33333],0xffc44444,[O]*16)
anchor('hidden_product_overflow',[T,Z,Z],Z,[Z,Z,Z,0x7f7fffff]+[Z]*12)
anchor('hidden_add_invalid',[O,O,Z],Z,[Z,Z,Z,INF]+[Z,Z,Z,INF|SIGN]+[Z]*8)
anchor('hidden_mul_invalid',[Z,O,O],O,[Z,Z,Z,INF]+[Z]*12)
anchor('hidden_denormal_row3',[O,O,O],O,[Z]*15+[1])
anchor('hidden_snan_row3',[O,O,O],O,[Z]*15+[0x7f812345])
anchor('hidden_qnan_suppresses_denormal',[O,O,O],1,[Z]*12+[0x7fc22222]*4)
anchor('exact_tiny_product',[0x00800000,Z,Z],Z,[0x3f000000]*4+[Z]*12)
anchor('inexact_tiny_product',[0x00800000,Z,Z],Z,[0x3f7fffff]*4+[Z]*12)
anchor('tiny_rounds_normal',[0x007fffff,Z,Z],Z,[0x3f800001]*4+[Z]*12)
anchor('signed_zero',[SIGN,SIGN,SIGN],SIGN,[O]*16)
anchor('precision_cancellation',[0x3f800001,0x33800000,N],Z,[O]*16)

EDGE=[0,SIGN,1,SIGN|1,0x007fffff,0x807fffff,0x00800000,0x80800000,0x00800001,0x80800001,0x3f000000,0xbf000000,O,N,0x3f800001,0xbf800001,0x3f7fffff,0xbf7fffff,0x33800000,0xb3800000,0x4b800000,0xcb800000,0x7f7fffff,0xff7fffff,INF,INF|SIGN,0x7fc12345,0xffc54321,0x7f800001,0xff812345]
def records():
    corpus=list(A.values());rng=random.Random(0xa9c03759)
    for _ in range(192):
        c=[rng.choice(EDGE) for _ in range(20)];corpus.append((c[:3],c[3],c[4:]))
    for _ in range(192):
        c=[rng.getrandbits(32) for _ in range(20)];corpus.append((c[:3],c[3],c[4:]))
    for rc in range(4):
      for daz in range(2):
       for ftz in range(2):
        csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
        for v,s,r in corpus:
            out,status=operation(v,s,r,csr)
            yield [csr,*v,s,*r,*out,status]
if __name__=='__main__':
    p=pathlib.Path(sys.argv[1]);n=0
    with p.open('wb') as f:
        for rec in records():f.write(struct.pack('<25I',*rec));n+=1
    print(n,'independent rational records,',n*64,'sticky-seeded comparisons')
