#!/usr/bin/env python3
"""Isolate SUB status using the separate reviewer Fraction oracle.
Imports only the reviewer model, never the production integer model. Corpus:
MXCSR, destination bits, source bits, result bits, complete expected MXCSR.
"""
import pathlib,random,struct,sys
from generate_002b7360_three_product_rational_model import EDGE,binary,self_check

def records():
    rng=random.Random(0xf01d7360)
    pairs=[(a,b) for a in EDGE for b in EDGE]
    pairs += [(rng.getrandbits(32),rng.getrandbits(32)) for _ in range(4096)]
    for rc in range(4):
      for daz in range(2):
       for ftz in range(2):
        csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)
        for a,b in pairs:
            result,status=binary(a,b,csr,'sub')
            yield [csr,a,b,result,csr|status]
if __name__=='__main__':
    self_check();count=0
    with pathlib.Path(sys.argv[1]).open('wb') as f:
        for r in records():f.write(struct.pack('<5I',*r));count+=1
    print(count,'isolated reviewer SUB records,',count*64,'all-sticky comparisons')
