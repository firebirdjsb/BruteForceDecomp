#!/usr/bin/env python3
"""Exact complete instruction whitelist for reviewer and author scalar probes."""
import json,pathlib,re,subprocess
ROOT=pathlib.Path(__file__).resolve().parent
def body(binary,symbol):
    text=subprocess.check_output(['objdump','-d','--no-show-raw-insn',str(binary)],text=True)
    match=re.search('<'+symbol+r'>:\n(.*?)(?=\n[0-9a-f]+ <|\Z)',text,re.S)
    assert match,(binary,symbol)
    return [re.sub(r'\s+',' ',x.strip()) for x in re.findall(r'^\s*[0-9a-f]+:\s+(.+)$',match[1],re.M)]
def mem(n,reg):return ('0x%x'%n if n else '')+'(%'+reg+')'
ops=['flds 0x8(%rsi)','fmuls 0x8(%rdx)','flds 0x4(%rsi)','fmuls 0x4(%rdx)','faddp %st,%st(1)','flds (%rsi)','fmuls (%rdx)','faddp %st,%st(1)','fchs']
expected=['sub $0x208,%rsp','fxsave (%rsp)','fxrstor (%rdi)']
for j,op in enumerate(ops+['fstps 0x1540(%rcx)']):
    expected.extend([op,'fxsave '+mem(j*512,'rcx'),'fnstenv '+mem(5120+j*32,'rcx')])
expected.extend(['fxrstor (%rsp)','add $0x208,%rsp','ret'])
def check(binary):
    actual=body(binary,'review_capture');assert actual==expected,(binary,actual,expected)
    return dict(symbol='review_capture',exact_instructions=len(actual))
