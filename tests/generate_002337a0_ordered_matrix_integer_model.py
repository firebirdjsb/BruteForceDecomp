#!/usr/bin/env python3
"""Instruction-event mutable integer oracle. The event graph is transcribed
from the original full listing. Scalar add/multiply are explicitly reused from
reviewed 002b3e60; this is not a newly independent scalar arithmetic model.
No host floating point and no execution of original/uploaded bytes.
"""
import pathlib,random,struct,sys
from functools import lru_cache
from generate_002b3e60_multiply_add_integer_model import add,multiply,EDGES
add=lru_cache(maxsize=262144)(add)
multiply=lru_cache(maxsize=262144)(multiply)
EVENTS = [('load', 0, 0), ('right', 1, 0), ('splat', 0), ('load', 2, 1), ('mul', 0, 1), ('splat', 2), ('right', 3, 4), ('load', 7, 2), ('mul', 2, 3), ('splat', 7), ('add', 0, 2), ('right', 4, 8), ('load', 2, 3), ('mul', 7, 4), ('splat', 2), ('add', 0, 7), ('right', 5, 12), ('load', 6, 4), ('mul', 2, 5), ('load', 7, 5), ('splat', 6), ('add', 0, 2), ('splat', 7), ('low', 0, 0), ('high', 0, 2), ('mul', 7, 3), ('load', 0, 6), ('mul', 6, 1), ('splat', 0), ('add', 6, 7), ('mul', 0, 4), ('load', 2, 9), ('add', 6, 0), ('load', 0, 7), ('load', 7, 8), ('splat', 0), ('splat', 7), ('mul', 0, 5), ('mul', 7, 1), ('add', 6, 0), ('splat', 2), ('low', 6, 4), ('high', 6, 6), ('mul', 2, 3), ('load', 6, 10), ('add', 7, 2), ('splat', 6), ('load', 2, 11), ('mul', 6, 4), ('splat', 2), ('add', 7, 6), ('mul', 2, 5), ('load', 0, 13), ('add', 7, 2), ('splat', 0), ('low', 7, 8), ('load', 2, 12), ('high', 7, 10), ('mul', 0, 3), ('splat', 2), ('load', 6, 14), ('mul', 2, 1), ('splat', 6), ('add', 2, 0), ('mul', 6, 4), ('load', 7, 15), ('splat', 7), ('add', 2, 6), ('mul', 7, 5), ('add', 2, 7), ('store', 2, 12)]

def operation(memory,left,right,out,csr):
    m=list(memory);x=[None]*8;status=csr
    for event in EVENTS:
        op,d,*tail=event
        if op=='load':x[d]=[m[left+tail[0]],0,0,0]
        elif op=='right':x[d]=m[right+tail[0]:right+tail[0]+4]
        elif op=='splat':x[d]=[x[d][0]]*4
        elif op in ('mul','add'):
            f=multiply if op=='mul' else add
            for j in range(4):x[d][j],flags=f(x[d][j],x[tail[0]][j],csr);status|=flags
        else:
            v=x[d][:2] if op=='low' else x[d][2:] if op=='high' else x[d][:]
            at=out+tail[0];m[at:at+len(v)]=v
    return m,status

ONE=0x3f800000
NAMED_ANCHORS={}
def anchor(name,left,right,lo=8,ro=40,oo=72):
    m=[0xa567bcde]*96;m[lo:lo+16]=left;m[ro:ro+16]=right
    NAMED_ANCHORS[name]=(m,lo,ro,oo)
anchor('ordered_finite',[0x3f800000+((i+1)<<18) for i in range(16)],[0x3f800000+(i<<17) for i in range(16)])
anchor('coefficient_nan',[0x7fc12345]*16,[0xffc54321]*16)
anchor('add_nan',[ONE]*16,[0x7fc12345]*4+[0xffc54321]*4+[0]*8)
anchor('association',[ONE]*16,[0x4b800000]*4+[ONE]*4+[0xcb800000]*4+[ONE]*4)
anchor('nonfused',[0xbf800000,0x3f800001,0,0]*4,[ONE]*4+[0x3f7ffffe]*4+[0]*8)
anchor('signed_zero',[0x80000000]*16,[ONE]*16)
anchor('underflow',[0x00800000,0,0,0]*4,[0x3f7fffff]*4+[0]*12)
anchor('overflow',[0x7f7fffff,0,0,0]*4,[0x40000000]*16)
anchor('lane3_invalid',[0,ONE,ONE,ONE]*4,[ONE,ONE,ONE,0x7f800000]+[0]*12)
anchor('split_store',[0x3f800000+(i<<19) for i in range(16)],[ONE,0,0,0,0,ONE,0,0,0,0,ONE,0,0,0,0,ONE],lo=8,ro=40,oo=12)
anchor('split_store_after',[0x3f800000+(i<<19) for i in range(16)],[ONE,0,0,0,0,ONE,0,0,0,0,ONE,0,0,0,0,ONE],lo=8,ro=40,oo=10)
anchor('right_alias',[0x3f800000+(i<<19) for i in range(16)],[ONE]*16,lo=8,ro=40,oo=40)

def record(memory,left,right,out,csr):
    m,status=operation(memory,left,right,out,csr)
    return struct.pack('<197I',csr,left,right,out,*memory,*m,status)

def cases():
    yield from NAMED_ANCHORS.values()
    rng=random.Random(0x2337a0)
    # Every operand edge pair at each first-row coefficient and sum stage.
    # Other rows are challenged by overlap and raw-bit corpora.
    for stage in range(4):
      for a in EDGES:
       for b in EDGES:
        m=[0]*96;m[8:24]=[ONE]*16;m[8+stage]=a;m[40+4*stage:44+4*stage]=[b]*4
        yield m,8,40,72
        m=[0]*96;m[8:24]=[ONE]*16;m[40:44]=[a]*4;m[44+4*(stage%3):48+4*(stage%3)]=[b]*4
        yield m,8,40,72
    # Complete pairwise/triple overlap starts: output fixed even; both inputs
    # cover every signed whole-float displacement including +/-16 endpoints.
    for align in (0,2):
      for ld in range(-16,17):
       for rd in range(-16,17):
        m=[EDGES[(j*5+ld*3+rd)%len(EDGES)] for j in range(96)]
        yield m,40+align+ld,40+align+rd,40+align
    for _ in range(512):
        yield [rng.getrandbits(32) for _ in range(96)],rng.randrange(4,25),rng.randrange(30,51),rng.choice(range(24,74,2))

def generate(path):
    count=0;corpus=list(cases())
    with path.open('wb') as f:
      for rc in range(4):
       for daz in range(2):
        for ftz in range(2):
         csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
         for m,l,r,o in corpus:f.write(record(m,l,r,o,csr));count+=1
    print(count,'integer mutable-memory records;',count*64,'sticky comparisons',flush=True)
if __name__=='__main__':generate(pathlib.Path(sys.argv[1]))
