#!/usr/bin/env python3
"""Candidate-specific integer composition. No host floating operations/oracle.
Each coefficient is MULPS destination, row is source. All four lanes accrue
flags; only final lanes 0,1,2 are stored. Every multiply/add rounds separately.
"""
import pathlib,random,struct,sys
from generate_002b3e60_multiply_add_integer_model import add,multiply,EDGES
ONE=0x3f800000

def operation(coeff,rows,csr):
    flags=0;result=[]
    for lane in range(4):
        acc,f=multiply(coeff[0],rows[lane],csr);flags|=f
        for term in range(1,4):
            product,f=multiply(coeff[term],rows[4*term+lane],csr);flags|=f
            acc,f=add(acc,product,csr);flags|=f
        result.append(acc)
    return result[:3],csr|flags

NAMED_ANCHORS={
 'hidden_invalid':([ONE,ONE,ONE,0],[ONE,ONE,ONE,ONE]*3+[ONE,ONE,ONE,0x7f800000]),
 'hidden_add_invalid':([ONE]*4,[0,0,0,0x7f800000]+[0,0,0,0xff800000]+[0]*8),
 'hidden_row3_snan':([ONE]*4,[0]*12+[0,0,0,0x7f800123]),
 'hidden_row3_denormal':([ONE]*4,[0]*12+[0,0,0,1]),
 'fourth_scalar_qnan':([ONE,ONE,ONE,0x7fc12345],[0]*12+[0xffc54321]*4),
 'hidden_overflow':([ONE,ONE,ONE,0x7f7fffff],[ONE,ONE,ONE,ONE]*3+[0,0,0,0x40000000]),
 'nonfused_cancellation':([0xbf800000,0x3f800001,0,0],[ONE]*4+[0x3f7ffffe]*4+[0]*8),
 'left_association':([ONE]*4,[0x4b800000]*4+[ONE]*4+[0xcb800000]*4+[ONE]*4),
 'multiply_nan_priority':([0x7fc12345,ONE,ONE,ONE],[0xffc54321]*4+[0]*12),
 'add_nan_priority':([ONE]*4,[0x7fc12345]*4+[0xffc54321]*4+[0]*8),
 'fourth_scalar_snan':([ONE,ONE,ONE,0xff800123],[ONE]*16),
 'tiny_boundary':([0x00800000,0,0,0],[0x3f7fffff]*4+[0]*12),
 'tiny_rounds_normal':([0x007fffff,0,0,0],[0x3f800001]*4+[0]*12),
 'signed_zero':([0x80000000]*4,[ONE]*16),
}

def cases():
    result=list(NAMED_ANCHORS.values())
    # Every edge pair reaches every product stage and adjacent sum stage.
    for stage in range(4):
        for a in EDGES:
            for b in EDGES:
                c=[ONE]*4;r=[0]*16;c[stage]=a;r[4*stage:4*stage+4]=[b]*4
                result.append((c,r))
                r=[0]*16;r[:4]=[a]*4;sum_stage=1+stage%3;r[4*sum_stage:4*sum_stage+4]=[b]*4
                result.append(([ONE]*4,r))
    rng=random.Random(0x3759c0)
    for _ in range(4096):result.append(([rng.getrandbits(32) for _ in range(4)],[rng.getrandbits(32) for _ in range(16)]))
    return result

def record(coeff,rows,csr):
    output,status=operation(coeff,rows,csr)
    return struct.pack('<25I',csr,*coeff,*rows,*output,status)

def generate(path):
    count=0;corpus=cases()
    with path.open('wb') as f:
        for rc in range(4):
            for daz in range(2):
                for ftz in range(2):
                    csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
                    for c,r in corpus:f.write(record(c,r,csr));count+=1
    print('Generated',count,'integer-only four-term packed cases',flush=True)
if __name__=='__main__':generate(pathlib.Path(sys.argv[1]))
