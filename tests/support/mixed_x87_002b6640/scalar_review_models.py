#!/usr/bin/env python3
"""Reviewer-authored anchors and complete physical-stack/tag comparisons.
Reads both frozen models; derives anchor expectations without either rounder.
Unknown fields are first compared diagnostically, then constrained separately.
"""
import collections, hashlib, importlib.util, json, pathlib, random, struct, subprocess, sys
HERE=pathlib.Path(__file__).resolve().parent
ROOT=HERE.parent
def load(name,path,expected):
    assert hashlib.sha256(path.read_bytes()).hexdigest()==expected,('unreviewed dependency',path)
    spec=importlib.util.spec_from_file_location(name,path); m=importlib.util.module_from_spec(spec);sys.modules[name]=m;spec.loader.exec_module(m);return m
I=load('review_integer',HERE/'x87_integer.py','895ca1f749a917b637b4f3c116affcf0b241ddc054c8f618c4940b83f1dd6278')
R=load('review_rational',HERE/'x87_fraction.py','c7be1257607f0d27f3f01a3bae3695676593edbf08754d23b5b1f9528db48453')
def power(e,negative=False):
    assert -149<=e<=127
    return (int(negative)<<31)|((e+127)<<23 if e>=-126 else 1<<(e+149))
ONE=power(0)
def anchors():
    out=[]
    for pc in (53,64):
      for rc in range(4):
       for sign in (0,1): # final result sign after FCHS
        for delta in (-1,0,1):
          outward=(rc==1 and sign==1) or (rc==2 and sign==0)
          b=[power(80,delta<0) if delta else 0,power(103),0x7f7fffff];c=[ONE]*3
          b=[x^((1-sign)<<31) for x in b]
          inf=outward or (rc==0 and delta>=0)
          out.append((f'overflow_midpoint_{delta}_{sign}',b,c,pc,rc,(sign<<31)|(0x7f800000 if inf else 0x7f7fffff),0x28 if inf else 0x20,int(inf)))
          # q=2^-126 - 2^-151 + delta*2^-176. This is around
          # the UNBOUNDED p24 threshold, not the subnormal rounding midpoint.
          b=[power(-88,delta<0) if delta else 0,power(-75,True),power(-126)];c=[power(-88),power(-76),ONE]
          b=[x^((1-sign)<<31) for x in b]
          normal=rc==0 or outward
          tiny=not outward and (rc!=0 or delta<0)
          out.append((f'tininess_midpoint_{delta}_{sign}',b,c,pc,rc,(sign<<31)|(0x00800000 if normal else 0x007fffff),0x30 if tiny else 0x20,int(normal)))
    # PC24 can have a finite intermediate enormously above binary32 range.
    # Two identical rounded products cancel BEFORE narrowing; no store OE.
    for pc in (24,53,64):
     for rc in range(4):
      # Equal signed magnitude multiplication is exact here: 2^120*2^120.
      out.append(('wide_cancel',[power(120,True),0,power(120)],[power(120),ONE,power(120)],pc,rc,0 if rc==1 else 0x80000000,0,0))
      # Same for 2^-280, far below f32 and f64's precision24/53 analogues.
      out.append(('tiny_exact_cancel',[power(-140,True),0,power(-140)],[power(-140),ONE,power(-140)],pc,rc,0 if rc==1 else 0x80000000,2,0))
    return out
def base_cases():
    items=[]
    for k,a in enumerate(anchors()):
      label,b,c,pc,rc,*_=a;items.append((label,b,c,pc,rc,0,k%8,k%64,0x1f80))
    # All ordered Q/S NaN pairs in FMUL, both independent add locations and
    # later larger-payload NaNs. No dependency-wide mask for new loads.
    edge=[0,0x80000000,1,0x80000001,0x007fffff,0x00800000,ONE,0xbf800000,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7f800001,0xff800001,0x7fbfffff,0xffbfffff,0x7fc00000,0xffc00000,0x7fc00001,0xffc00001,0x7fffffff,0xffffffff]
    for pc in (24,53,64):
     for rc in range(4):
      for j,a in enumerate(edge):
       for k,b in enumerate(edge):
        items.append(('special_add',[0,a,b],[ONE]*3,pc,rc,0,(j+k)%8,(j*9+k)%64,0x1f80))
        items.append(('special_mul',[ONE,ONE,a],[ONE,ONE,b],pc,rc,0,(j+k)%8,(j*9+k)%64,0x1f80))
    for top in range(8):
     for pattern in range(64):
      a=anchors()[(top*64+pattern)%len(anchors())];label,b,c,pc,rc,*_=a
      items.append(('full_stack_'+label,b,c,pc,rc,0x4700,top,pattern,0xffc0))
    for x87 in range(64):
     for mx in range(64):
      a=anchors()[(x87+mx)%len(anchors())];label,b,c,pc,rc,*_=a
      items.append(('sticky_'+label,b,c,pc,rc,0x4700|x87|(64 if x87&1 else 0),x87%8,mx,0x1f80|mx))
    rng=random.Random(0x7ad1a5a1)
    for k in range(1200):
      b=[rng.getrandbits(32) for _ in range(3)];c=[rng.getrandbits(32) for _ in range(3)]
      items.append(('fresh_random',b,c,(24,53,64)[k%3],k%4,0,k%8,k%64,0x1f80|((k%4)<<13)|((k%2)<<6)|(((k//2)%2)<<15)))
    return items
OLD=[(0xa999999999999999,0xc00b),(0,0x8000),(0x8000000000000000,0xffff),(0xc001122334455667,0x7fff),(0x8000122334455667,0xffff),(0x0000000076543210,0)]
def classify(v):
    sig,se=v
    if sig==0 and se&0x7fff==0:return 1
    if 0<se&0x7fff<0x7fff and sig>>63:return 0
    return 2
def quiet(v):return v[1]&0x7fff==0x7fff and v[0]&0xc000000000000000==0xc000000000000000
def main():
    # The literal anchor specification is evaluated before the random corpus.
    literal=[]
    for name,b,c,pc,rc,bits,flags,c1 in anchors():
      a=I.scalar_x87(b,c,pc,rc);z=R.scalar_x87(b,c,pc,rc)
      for m in (a,z): assert (m['scratch_bits'],m['raised_flags'],m['c1'])==(bits,flags,c1),(name,pc,rc,m,bits,flags,c1)
      literal.append(dict(name=name,b=b,c=c,pc=pc,rc=rc,scratch_bits=bits,flags=flags,c1=c1))
    cases=base_cases();data=b''.join(struct.pack('<6IHHB3xI',*b,*c,0x7f|({24:0,53:2,64:3}[pc]<<8)|(rc<<10),sw|(top<<11),pattern,mx) for _,b,c,pc,rc,sw,top,pattern,mx in cases)
    executable=pathlib.Path(sys.argv[1]).resolve() if len(sys.argv)>1 else HERE/'review-native'
    output_prefix=pathlib.Path(sys.argv[2]) if len(sys.argv)>2 else HERE/'review-results'
    run=subprocess.run([str(executable)],input=data,capture_output=True,check=True)
    assert len(run.stdout)==5456*len(cases),(len(run.stdout),len(cases))
    diagnostic=collections.Counter();examples=[];defined_checks=collections.Counter();semantic=hashlib.sha256()
    for n,(label,b,c,pc,rc,sw,top,pattern,mx) in enumerate(cases):
      a=I.scalar_x87(b,c,pc,rc);r=R.scalar_x87(b,c,pc,rc);blob=run.stdout[n*5456:(n+1)*5456]
      scratch=struct.unpack_from('<I',blob,5440)[0]
      semantic.update(struct.pack('<I',scratch))
      if scratch!=a['scratch_bits']:diagnostic['raw_scratch_integer_mismatches']+=1
      if scratch not in r['scratch_bits_allowed']:diagnostic['raw_scratch_fraction_alternative_mismatches']+=1
      for key in ('raised_flags','c1','c1_defined','value_defined'):assert a[key]==r[key],(label,key,a,r)
      if a['value_defined']:assert scratch==a['scratch_bits']==r['scratch_bits'],(label,'scratch');defined_checks['scratch']+=1
      else: assert scratch&0x7fc00000==0x7fc00000;diagnostic['undefined_scratch_cases']+=1
      stack=[]
      for j,(x,y) in enumerate(zip(a['trace'],r['trace'])):
        st=blob[j*512:(j+1)*512];env=blob[5120+j*32:5120+(j+1)*32]
        cw,actualsw=struct.unpack_from('<HH',st);tags=struct.unpack_from('<H',env,8)[0]
        assert cw==(0x7f|({24:0,53:2,64:3}[pc]<<8)|(rc<<10))
        assert struct.unpack_from('<I',st,24)[0]==mx
        assert x['raised_flags']==y['cumulative_flags'] and x['value_defined']==y['value_defined'] and x['c1_defined']==y['c1_defined'] and x['c1']==y['c1']
        if x['value_defined'] and j<9:assert x['ext80']==y['ext80']
        if j in (0,2,5):stack.insert(0,(x['ext80'],x['value_defined']))
        elif j in (1,3,6,8):stack[0]=(x['ext80'],x['value_defined'])
        elif j in (4,7):stack=stack[1:];stack[0]=(x['ext80'],x['value_defined'])
        else:stack=stack[1:]
        depth=len(stack);now=(top-depth)&7
        expected_sw=sw|(x['raised_flags'])|(now<<11)
        expected_sw=(expected_sw&~0x200)|(x['c1']<<9)
        # Diagnose ALL raw SW differences before excluding unspecified bits.
        rawdiff=actualsw^expected_sw
        for bit in range(16):
          if rawdiff&(1<<bit):diagnostic[f'raw_sw_bit_{bit}_mismatches']+=1
        if not x['c1_defined']:
          diagnostic['unresolved_c1_snapshots']+=1
          if rawdiff&0x200:diagnostic['unresolved_c1_mismatches']+=1
        mask=0xbaff if x['c1_defined'] else 0xb8ff
        assert not rawdiff&mask,(label,j,hex(actualsw),hex(expected_sw))
        expected_ftw=0;expected_tags=0xffff
        for logical,(value,known) in enumerate(stack):
          phys=(now+logical)&7;expected_ftw|=1<<phys
          observed=struct.unpack_from('<QH',st,32+16*logical)
          if list(observed)!=value:
            diagnostic['raw_temporary_value_mismatches']+=1
            if len(examples)<8:examples.append(dict(case=n,stage=j,logical=logical,expected=value,actual=observed,defined=known))
          if known:assert list(observed)==value,(label,j,logical,observed,value);defined_checks['temporary_live80']+=1
          else:assert quiet(observed);diagnostic['undefined_temporary_snapshots']+=1
          tag=classify(observed) if not known else classify(value)
          expected_tags=(expected_tags&~(3<<(2*phys)))|(tag<<(2*phys))
        for k,v in enumerate(OLD):
          if not pattern&(1<<k):continue
          phys=(top+k)&7;expected_ftw|=1<<phys
          observed=struct.unpack_from('<QH',st,32+16*(k+depth))
          assert observed==v,(label,j,k,observed,v);defined_checks['old_live80']+=1
          expected_tags=(expected_tags&~(3<<(2*phys)))|(classify(v)<<(2*phys))
        assert st[4]==expected_ftw,(label,j,'ftw')
        assert tags==expected_tags,(label,j,'full tags',hex(tags),hex(expected_tags))
        assert struct.unpack_from('<H',env,0)[0]==cw and struct.unpack_from('<H',env,4)[0]==actualsw
        semantic.update(st[:5]+struct.pack('<HI',tags,mx))
        for logical in range(8):
          if expected_ftw&(1<<((now+logical)&7)):semantic.update(st[32+16*logical:42+16*logical])
        defined_checks['full_stack_top_tags_control_flags_stages']+=1
    report=dict(cases=len(cases),literal_anchors=len(literal),input_sha256=hashlib.sha256(data).hexdigest(),raw_output_sha256=hashlib.sha256(run.stdout).hexdigest(),semantic_output_sha256=semantic.hexdigest(),checks=dict(defined_checks),unmasked_diagnostics=dict(diagnostic),raw_mismatch_examples=examples)
    output_prefix.with_name(output_prefix.name+'-anchors.json').write_text(json.dumps(literal,indent=2)+'\n');output_prefix.with_suffix('.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))
if __name__=='__main__':main()
