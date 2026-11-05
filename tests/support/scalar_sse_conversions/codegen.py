#!/usr/bin/env python3
"""Fail-closed checks on freshly authored wrapper disassemblies, not game code."""
import json
import re
import subprocess
import sys
from pathlib import Path

REG32 = r'(?:e(?:ax|bx|cx|dx|si|di|bp|sp)|r(?:[89]|1[0-5])d)'

def functions(text):
    result = {}
    for name in ('native_tt', 'native_si'):
        m = re.search(r'^\w+ <'+name+r'>:\n(.*?)(?=\n\n|\Z)', text, re.M | re.S)
        if not m:
            raise AssertionError('missing function '+name)
        insns = []
        for line in m[1].splitlines():
            v = re.match(r'\s*[0-9a-f]+:\s+([a-z0-9]+)\s*(.*)$', line)
            if v:
                insns.append((v[1], v[2].strip()))
        result[name] = insns
    return result

def verify_regions(regions, allow_sanitizer=False):
    for name, insns in regions.items():
        starts = [i for i,x in enumerate(insns) if x[0]=='stmxcsr']
        ends = [i for i,x in enumerate(insns) if x[0]=='ldmxcsr']
        assert len(starts)==2 and len(ends)==2, (name, 'csr count')
        region = insns[starts[0]:ends[-1]+1]
        expected = ['stmxcsr','ldmxcsr','movups',
                    'cvttss2si' if name=='native_tt' else 'cvtsi2ss']
        if name=='native_si':
            expected += ['movd']
        expected += ['stmxcsr','movups','ldmxcsr']
        assert [x[0] for x in region] == expected, (name, 'sequence')
        assert region[0][1] == region[-1][1], (name,'restore source')
        assert region[0][1] != region[1][1], (name,'requested csr not saved csr')
        assert all(x[1].startswith('DWORD PTR ') for x in region if x[0] in ('stmxcsr','ldmxcsr'))
        assert re.fullmatch(r'xmm0,XMMWORD PTR \[.+\]',region[2][1]), (name,'load')
        assert re.fullmatch(r'XMMWORD PTR \[.+\],xmm0',region[-2][1]), (name,'lane capture')
        conversion_pattern = REG32+r',xmm0' if name=='native_tt' else 'xmm0,'+REG32
        assert re.fullmatch(conversion_pattern,region[3][1]), (name,'operand width')
        if name=='native_si':
            assert re.fullmatch(REG32+r',xmm0',region[4][1]), (name,'extract width')
        # No hidden conversions, scalar FP arithmetic, x87 use, or calls in wrapper.
        for i,x in enumerate(insns):
            if x[0] in ('call','callq'):
                assert allow_sanitizer and re.search(r'<__(?:asan|ubsan)_[^>]+>',x[1]), (name,'unexpected call')
            if i < starts[0] or i > ends[-1]:
                assert not re.match(r'(?:v?(?:cvt|addss|subss|mulss|divss)|f(?:add|sub|mul|div|ld|st))',x[0]), (name,'hidden FP')
    return True

def negatives(regions, allow_sanitizer=False):
    import copy
    count=0
    for name, insns in regions.items():
        start=next(i for i,x in enumerate(insns) if x[0]=='stmxcsr')
        end=max(i for i,x in enumerate(insns) if x[0]=='ldmxcsr')
        variations=[]
        for i in range(start,end+1):
            v=copy.deepcopy(regions); del v[name][i]; variations.append(v)
            v=copy.deepcopy(regions); v[name][i]=('nop',''); variations.append(v)
        for i in range(start,end):
            v=copy.deepcopy(regions); v[name][i],v[name][i+1]=v[name][i+1],v[name][i]; variations.append(v)
        for opcode,operand in [('cvttss2si','rax,xmm0'),('cvtss2si','eax,xmm0'),
                               ('cvtsi2ss','xmm0,rax'),('cvtsi2ss','xmm1,eax'),
                               ('vcvtsi2ss','xmm0,xmm0,eax')]:
            v=copy.deepcopy(regions); v[name][start+3]=(opcode,operand); variations.append(v)
        v=copy.deepcopy(regions); v[name][end]=(v[name][end][0],'DWORD PTR [rsp-0x999]'); variations.append(v)
        v=copy.deepcopy(regions); v[name][start+2]=('movups','xmm0,DWORD PTR [rsp]'); variations.append(v)
        for v in variations:
            try: verify_regions(v, allow_sanitizer)
            except AssertionError: count+=1
            else: raise AssertionError('codegen mutant survived')
    return count
