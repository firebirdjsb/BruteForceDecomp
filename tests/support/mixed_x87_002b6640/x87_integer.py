#!/usr/bin/env python3
"""Independent integer-dyadic x87 model for the reachable 002b6640 scalar graph.
No host float, decimal, Fraction, native execution, or imported arithmetic model.
The native operand domain is every binary32 bit pattern; all exceptions masked.
"""
from dataclasses import dataclass, replace
import json, sys
IE, DE, ZE, OE, UE, PE = 1, 2, 4, 8, 16, 32
@dataclass(frozen=True)
class Value:
    kind: str
    sign: int = 0
    n: int = 0
    e: int = 0
    signaling: bool = False
    defined: bool = True

def decode32(word):
    if not isinstance(word,int) or not 0 <= word < 1<<32:
        raise ValueError('binary32 raw word out of range')
    sign=word>>31; exp=(word>>23)&255; frac=word&0x7fffff
    if exp==255:
        if not frac:return Value('inf',sign)
        return Value('nan',sign,frac<<40,signaling=not bool(frac&0x400000))
    return Value('finite',sign,frac|(0x800000 if exp else 0),(exp-150) if exp else -149)

def subnormal32(word):return (word&0x7f800000)==0 and bool(word&0x7fffff)
def quiet(v):return replace(v,n=v.n|(1<<62),signaling=False)
def indefinite():return Value('nan',1,1<<62)

def ext80(v):
    if v.kind=='nan':return [(1<<63)|v.n,(v.sign<<15)|0x7fff]
    if v.kind=='inf':return [1<<63,(v.sign<<15)|0x7fff]
    if not v.n:return [0,v.sign<<15]
    width=v.n.bit_length(); exponent=v.e+width-1
    assert -16382 <= exponent <= 16383 and width<=64
    return [v.n<<(64-width),(v.sign<<15)|(exponent+16383)]

def quantize(n,e,quantum,sign,rc):
    """Round unsigned integer * 2**e to a multiple of 2**quantum.
    Return integer coefficient, any lost bits, and magnitude increment.
    """
    shift=quantum-e
    if shift<=0:return n<<(-shift),False,False
    q,r=divmod(n,1<<shift)
    if not r:return q,False,False
    increment=(rc==0 and (r>(1<<(shift-1)) or (r==(1<<(shift-1)) and bool(q&1)))) or (rc==1 and sign==1) or (rc==2 and sign==0)
    return q+int(increment),True,bool(increment)

def round_precision(v,pc,rc):
    if v.kind!='finite' or not v.n:return v,0,0
    quantum=v.e+max(v.n.bit_length()-pc,0)
    n,inexact,inc=quantize(v.n,v.e,quantum,v.sign,rc)
    if n.bit_length()>pc:n>>=1;quantum+=1
    return Value('finite',v.sign,n,quantum),PE if inexact else 0,int(inc)

def select_nan(a,b):
    """Intel priority: QNaN over SNaN; then larger significand.
    Equal-significand opposite-sign ambiguity is tracked in graph metadata.
    Deterministic representative selects positive, never claims portability.
    """
    ns=[v for v in (a,b) if v.kind=='nan']
    flags=IE if any(v.signaling for v in ns) else 0
    qs=[v for v in ns if not v.signaling]
    ns=qs or ns
    v=quiet(max(ns,key=lambda v:(v.n,-v.sign)))
    tied=len(ns)==2 and ns[0].n==ns[1].n and ns[0].sign!=ns[1].sign
    return replace(v,defined=all(v.defined for v in ns) and not tied),flags,0

def load32(word):
    v=decode32(word)
    if v.kind=='nan' and v.signaling:return quiet(v),IE,0
    return v,DE if subnormal32(word) else 0,0

def multiply_memory(a,word,pc,rc):
    b=decode32(word)
    if a.kind=='nan' or b.kind=='nan':return select_nan(a,b)
    flags=DE if subnormal32(word) else 0
    sign=a.sign^b.sign
    if a.kind=='inf' or b.kind=='inf':
        if (a.kind=='finite' and not a.n) or (b.kind=='finite' and not b.n):return indefinite(),IE,0
        return Value('inf',sign),flags,0
    result,raised,c1=round_precision(Value('finite',sign,a.n*b.n,a.e+b.e),pc,rc)
    return result,flags|raised,c1

def add_extended(a,b,pc,rc):
    if a.kind=='nan' or b.kind=='nan':return select_nan(a,b)
    if a.kind=='inf' or b.kind=='inf':
        if a.kind==b.kind=='inf' and a.sign!=b.sign:return indefinite(),IE,0
        return (a if a.kind=='inf' else b),0,0
    exponent=min(a.e,b.e)
    n=((-1 if a.sign else 1)*a.n<<(a.e-exponent))+((-1 if b.sign else 1)*b.n<<(b.e-exponent))
    if not n:
        sign=a.sign if not a.n and not b.n and a.sign==b.sign else int(rc==1)
        return Value('finite',sign),0,0
    return round_precision(Value('finite',int(n<0),abs(n),exponent),pc,rc)

def store32(v,rc):
    sign=v.sign<<31
    if v.kind=='nan':return sign|0x7f800000|(v.n>>40)|0x400000,IE if v.signaling else 0,0
    if v.kind=='inf':return sign|0x7f800000,0,0
    if not v.n:return sign,0,0
    # Overflow is determined by rounding to target precision with an unbounded
    # exponent. Target subnormal quantum is applied directly to original v.
    unbounded,uflag,_=round_precision(v,24,rc)
    high=unbounded.e+unbounded.n.bit_length()-1
    if high>127:
        infinity=rc==0 or (rc==1 and v.sign) or (rc==2 and not v.sign)
        return sign|(0x7f800000 if infinity else 0x7f7fffff),OE|PE,int(infinity)
    quantum=max(-149,v.e+v.n.bit_length()-24)
    n,inexact,increment=quantize(v.n,v.e,quantum,v.sign,rc)
    if not n:bits=sign
    elif quantum==-149 and n<0x800000:bits=sign|n
    else:
        if n.bit_length()>24:n>>=1;quantum+=1
        assert n.bit_length()==24
        exponent=quantum+23+127
        bits=sign|(exponent<<23)|(n&0x7fffff)
    flags=(PE if inexact else 0)|(UE if inexact and high < -126 else 0)
    return bits,flags,int(increment)

def scalar_x87(b,c,pc,rc):
    if len(b)!=3 or len(c)!=3 or pc not in (24,53,64) or rc not in range(4):raise ValueError('invalid graph inputs or mode')
    # Decode eagerly only to validate representation; instruction events remain
    # separate and ordered below. No narrowing of any binary32 class.
    for w in b+c:decode32(w)
    flags=0;trace=[];stack=[];ambiguities=[]
    def emit(stage,v,f,c1):
        nonlocal flags
        flags|=f
        trace.append(dict(stage=stage,ext80=ext80(v),raised_flags=flags,c1=c1,c1_defined=True,value_defined=v.defined,depth=len(stack)))
    def tie(a,d,stage):
        if a.kind==d.kind=='nan' and a.signaling==d.signaling and a.n==d.n and a.sign!=d.sign:
            ambiguities.append(dict(stage=stage,kind='equal_payload_opposite_sign_nan'))
    for idx,label in ((2,'z'),(1,'y'),(0,'x')):
        v,f,c1=load32(b[idx]);stack.append(v);emit('fld_'+label,v,f,c1)
        tie(stack[-1],decode32(c[idx]),'fmul_'+label)
        v,f,c1=multiply_memory(stack[-1],c[idx],pc,rc);stack[-1]=v;emit('fmul_'+label,v,f,c1)
        if idx!=2:
            tie(stack[-2],stack[-1],'fadd_'+label)
            v,f,c1=add_extended(stack[-2],stack[-1],pc,rc);stack[-2:]=[v];emit('fadd_'+label,v,f,c1)
    v=replace(stack[-1],sign=stack[-1].sign^1);stack[-1]=v;emit('fchs',v,0,0)
    bits,f,c1=store32(v,rc);flags|=f;stack.pop()
    trace.append(dict(stage='fstp32',scratch_bits=bits,raised_flags=flags,c1=c1,c1_defined=bool(f&PE) and not bool(f&OE),value_defined=v.defined,depth=0))
    return dict(scratch_bits=bits,raised_flags=flags,c1=c1,c1_defined=bool(f&PE) and not bool(f&OE),value_defined=v.defined,representative_policy='positive_nan_tie; exact_store_c1_zero; overflow_c1_infinity',trace=trace,ambiguities=ambiguities)

if __name__=='__main__':
    for line in sys.stdin:
        if line.strip():
            item=json.loads(line);print(json.dumps(scalar_x87(item['b'],item['c'],item['pc'],item['rc']),separators=(',',':')))
