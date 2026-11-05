"""Reviewer-authored distinguishing mutations; installed driver adaptation.
The edits/anchors are retained; only paths/compiler/output ownership changes.
"""
import subprocess, os
def run(p,line):
 q=subprocess.run([str(p),'--stream'],input=line,text=True,capture_output=True,check=True,env=dict(os.environ,ASAN_OPTIONS='detect_leaks=0:halt_on_error=1',UBSAN_OPTIONS='halt_on_error=1'))
 return list(map(lambda x:int(x,16),q.stdout.split()))
def check(H,binary,baseline,c1_mutant):
 results=[]
 # Replace only the hidden C lane +0 with +1. Stored lanes and scalar do not
 # change on the anchor; only the architecturally required hidden-lane IE does.
 h=H.replace('"shufps $0, %%xmm3, %%xmm3\\n\\t"','"movl $0x3f800000, %%eax\\n\\t"\n        "movd %%eax, %%xmm4\\n\\t"\n        "pslldq $4, %%xmm4\\n\\t"\n        "orps %%xmm4, %%xmm2\\n\\t"\n        "shufps $0, %%xmm3, %%xmm3\\n\\t"').replace('"st", "st(1)", "xmm1"','"rax", "xmm4", "st", "st(1)", "xmm1"')
 line='64 0 0 00000000 00000000 7f7fffff 3f800000 3f800000 40000000\n'
 a=run(baseline,line);b=run(binary('hidden_lane_only',h),line)
 assert a[:5]==b[:5] and a[5]==0x1f81 and b[5]==0x1f80,(a,b)
 results.append(dict(name='hidden_lane_only',good=a,mutant=b,only_defined_difference='MXCSR.IE'))
 # Clear final C1 only after a defined, inexact non-overflow conversion.
 p=c1_mutant;line='64 0 0 00000000 33c00000 3f800000 00000000 3f800000 3f800000\n'
 a=run(baseline,line);b=run(p,line)
 assert a[:4]==b[:4] and a[5]==b[5] and a[4]^b[4]==0x200 and a[4]&0x200,(a,b)
 results.append(dict(name='defined_final_C1_only',good=a,mutant=b,only_defined_difference='SW.C1 on inexact non-overflow FSTP32'))
 # Negating the stored result is not equivalent under directed rounding.
 h=H.replace('"fchs\\n\\t"','"nop\\n\\t"').replace('"movss %[scratch], %%xmm3\\n\\t"','"xorl $0x80000000, %[scratch]\\n\\t"\n        "movss %[scratch], %%xmm3\\n\\t"').replace('"st", "st(1)",','"cc", "st", "st(1)",')
 line='64 1 0 00000000 33000000 3f800000 00000000 3f800000 3f800000\n'
 a=run(baseline,line);b=run(binary('negate_after_store',h),line)
 assert a[0]==0xbf800001 and b[0]==0xbf800000,(a,b)
 results.append(dict(name='negate_after_store',good=a,mutant=b,defined_difference='scratch and output under independent x87 round-down'))
 # Static compiler interface gates reject each missing written register, broad
 # memory effect, and genuine scratch output. This checks declarations, not a
 # claim that one compiler happens to expose every invalid-asm mutation.
 required=['[scratch] "=m"(scratch)','"st"','"st(1)"','"xmm1"','"xmm2"','"xmm3"','"memory"','__asm__ volatile']
 def interface(s):
  for token in required:assert token in s,token
 interface(H)
 for token in required:
  try:interface(H.replace(token,'REMOVED',1))
  except AssertionError:results.append(dict(name='missing_interface_'+token,detected=True))
  else:raise AssertionError(token)
 return results
