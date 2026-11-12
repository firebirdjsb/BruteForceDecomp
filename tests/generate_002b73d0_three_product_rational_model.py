#!/usr/bin/env python3
"""Independent Fraction-based reviewer oracle for 002b73d0, no host FP oracle.
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

def operation(vector,rows,csr):
    # Decode memory MOVSS + MOVHPS as [word0,+0,word1,word2].
    terms=[];flags=0
    for stage in range(3):
        lane_words=[rows[stage*4],0,rows[stage*4+1],rows[stage*4+2]]
        term=[]
        for row_word in lane_words:
            word,status=binary(row_word,vector[stage],csr,True)
            term.append(word);flags|=status
        terms.append(term)
    # Original arithmetic order P0, P1, ADD01, P2, ADD012. Under masked
    # exceptions the union is the same as computing products first.
    result=[]
    for lane in range(4):
        word,status=binary(terms[0][lane],terms[1][lane],csr,False);flags|=status
        word,status=binary(word,terms[2][lane],csr,False);flags|=status
        result.append(word)
    return [result[0],result[2],result[3]],csr|flags

A={}
def anchor(name,vector,rows):A[name]=(vector,rows)
O=0x3f800000; T=0x40000000; N=0xbf800000; Z=0
anchor('layout',[O,T,0x40400000],[O,T,0x40400000,0x7f800123,0x40800000,0x40a00000,0x40c00000,INF,0x40e00000,0x41000000,0x41100000])
anchor('ordered_additions',[0x4b800000,O,0xcb800000],[O]*11)
anchor('nonfusion',[N,0x3f800001,Z],[O]*4+[0x3f7ffffe]*4+[Z]*3)
for stage in range(3):
    vector=[O]*3;vector[stage]=0x7fc11111+stage
    rows=[O]*11;rows[stage*4:stage*4+3]=[0xffc22222+stage]*3
    anchor('row_nan_priority_'+str(stage),vector,rows)
    vector=[O]*3;vector[stage]=INF
    anchor('hidden_invalid_'+str(stage),vector,[O]*11)
    # qNaN row suppresses DE in every visible lane; zero hidden lane does not.
    vector=[O]*3;vector[stage]=1
    anchor('hidden_denormal_'+str(stage),vector,[0x7fc33333]*11)
    rows=[O]*11;rows[stage*4:stage*4+3]=[0x7f812345]*3
    anchor('snan_'+str(stage),[O]*3,rows)
anchor('sum_nan_priority',[O,O,O],[0x7fc11111]*4+[0xffc22222]*4+[0x7fc33333]*3)
anchor('unused_gap_snan',[O,O,O],[O,O,O,0x7f800001,O,O,O,0xff800001,O,O,O])
anchor('signed_zero',[SIGN,SIGN,SIGN],[O]*11)
anchor('exact_tiny',[0x00800000,Z,Z],[0x3f000000]*4+[Z]*7)
anchor('inexact_tiny',[0x00800000,Z,Z],[0x3f7fffff]*4+[Z]*7)
anchor('tiny_rounds_normal',[0x007fffff,Z,Z],[0x3f800001]*4+[Z]*7)
anchor('overflow',[0x7f7fffff,O,O],[T]*11)
anchor('cancellation',[0x3f800001,0x33800000,N],[O]*11)
EDGE=[0,SIGN,1,SIGN|1,0x007fffff,0x807fffff,0x00800000,0x80800000,0x00800001,0x80800001,0x3f000000,0xbf000000,O,N,0x3f800001,0xbf800001,0x3f7fffff,0xbf7fffff,0x33800000,0xb3800000,0x4b800000,0xcb800000,0x7f7fffff,0xff7fffff,INF,INF|SIGN,0x7fc12345,0xffc54321,0x7f800001,0xff812345]
def records():
    corpus=list(A.values());rng=random.Random(0x973d02b)
    for _ in range(256):
        words=[rng.choice(EDGE) for _ in range(14)];corpus.append((words[:3],words[3:]))
    for _ in range(256):
        words=[rng.getrandbits(32) for _ in range(14)];corpus.append((words[:3],words[3:]))
    for rc in range(4):
      for daz in range(2):
       for ftz in range(2):
        csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
        for v,r in corpus:
            out,status=operation(v,r,csr)
            yield [csr,*v,*r,*out,status]
if __name__=='__main__':
    p=pathlib.Path(sys.argv[1]);n=0
    with p.open('wb') as f:
        for rec in records():f.write(struct.pack('<19I',*rec));n+=1
    print(n,'independent rational records,',n*64,'sticky-seeded comparisons; anchors',len(A))
