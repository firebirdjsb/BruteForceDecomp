#!/usr/bin/env python3
"""Integer-only binary32 composition for the complete 002ccc10 packed operation.
The reviewed add/multiply primitives are reused unchanged. Subtraction handles
NaNs before sign inversion, preserving source NaN sign/payload. Every rounded
intermediate and every lane contributes exception flags; no host FP oracle.
"""
import pathlib,random,struct,sys
from generate_002b3e60_multiply_add_integer_model import add,multiply,EDGES,SIGN,INF,FRAC,QUIET

def subtract(a,b,csr):
    def nan(x):return x&INF==INF and bool(x&FRAC)
    if nan(a) or nan(b):
        return (a if nan(a) else b)|QUIET,int(any(nan(x) and not x&QUIET for x in (a,b)))
    return add(a,b^SIGN,csr)

def operation(base,third,fourth,csr):
    flags=0
    def apply(fn,a,b):
        nonlocal flags
        result=[]
        for x,y in zip(a,b):
            value,status=fn(x,y,csr);flags|=status;result.append(value)
        return result
    def packed(v):return [v[0],0,v[1],v[2]]
    u=apply(subtract,packed(fourth),packed(base))
    v=apply(subtract,packed(third),packed(base))
    left=apply(multiply,[u[2],u[0],u[3],u[0]],[v[3],v[0],v[0],v[2]])
    right=apply(multiply,[u[3],u[0],u[0],u[2]],[v[2],v[3],v[3],v[0]])
    result=apply(subtract,left,right)
    return [result[i] for i in (0,2,3)],csr|flags

NAMED_ANCHORS={
 'hidden_lane_invalid':([0,0,0],[0,0x3f800000,0x3f800000],[INF,0,0]),
 'hidden_subtraction_invalid':([0,0,0],[0x3f800000]*3,[INF,0x3f800000,0x3f800000]),
 'hidden_overflow':([0,0,0],[0x7f7fffff,0,0],[0x7f7fffff,0,0]),
 'nonfused_cancellation':([0,0,0],[0x3f800000,0x3f7ffffe,0],[0x3f800001,0x3f800000,0]),
 'negative_source_qnan':([0xffc12345,0,0],[0x3f800000]*3,[0x40000000]*3),
 'destination_qnan_priority':([0x7fc6789a]*3,[0xffc54321]*3,[0x7fc00001]*3),
 'source_snan_priority':([0xff800123]*3,[0x3f800000]*3,[0x40000000]*3),
 'signed_zero':([0x80000000,0,0x80000000],[0,0x80000000,0],[0x80000000]*3),
 'tiny_product':([0]*3,[0x3f7fffff,0x3f800001,0x3f000000],[0x00800000,0x007fffff,1]),
 'overflow_difference':([0xff7fffff]*3,[0x7f7fffff,0,1],[0x3f800000,0x7f7fffff,0x80000000]),
}

def cases():
    result=[]
    for i,a in enumerate(EDGES):
        for j,b in enumerate(EDGES):
            result.append(([a,b,a],[b,a,b],[EDGES[(i+j)%len(EDGES)],a,b]))
            result.append(([0]*3,[a,b,a],[b,a,b]))
    for a in EDGES:
        for b in EDGES:
            for c in EDGES:result.append(([a,b,c],[b,c,a],[c,a,b]))
    result+=list(NAMED_ANCHORS.values())
    rng=random.Random(0x2ccc10)
    for _ in range(4096):result.append(tuple([rng.getrandbits(32) for _ in range(3)] for _ in range(3)))
    return result

def record(base,third,fourth,csr):
    result,status=operation(base,third,fourth,csr)
    return struct.pack('<14I',csr,*base,*third,*fourth,*result,status)

def generate(path):
    count=0;corpus=cases()
    with path.open('wb') as f:
        for rc in range(4):
            for daz in range(2):
                for ftz in range(2):
                    csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
                    for base,third,fourth in corpus:f.write(record(base,third,fourth,csr));count+=1
    print('Generated',count,'integer-only packed difference/product cases',flush=True)
if __name__=='__main__':generate(pathlib.Path(sys.argv[1]))
