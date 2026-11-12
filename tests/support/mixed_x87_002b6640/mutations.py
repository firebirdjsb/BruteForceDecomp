"""Native negative controls retained from accepted standalone proposal.
Only root/file selection and compiler execution move to the installed runner.
"""
def replace(s,a,b):
 assert a in s,a
 return s.replace(a,b,1)
def changes(H,T):
 return [
 ('reverse_xyz',H.replace('8(%[b])','TEMPB').replace('0(%[b])','8(%[b])').replace('TEMPB','0(%[b])').replace('8(%[c])','TEMPC').replace('0(%[c])','8(%[c])').replace('TEMPC','0(%[c])'),T),
 ('missing_fchs',replace(H,'"fchs\\n\\t"','"nop\\n\\t"'),T),
 ('wide_scratch',replace(H,'"fstps %[scratch]','"fstpl %[scratch]'),T),
 ('swap_SSE_destination',replace(H,'mulps %%xmm3, %%xmm2','mulps %%xmm2, %%xmm3'),T),
 ('skip_packed_lanes',replace(H,'mulps %%xmm3, %%xmm2','mulss %%xmm3, %%xmm2'),T),
 ('wide_input',replace(H,'movhps 4(%[c]), %%xmm2','movups 4(%[c]), %%xmm2'),T),
 ('wide_output',replace(H,'movhps %%xmm1, 4(%[out])','movups %%xmm1, 4(%[out])'),T),
 ('extra_pop',replace(H,'"movss %[scratch], %%xmm3','"fstp %%st(0)\\n\\t"\n        "movss %[scratch], %%xmm3'),T),
 ('corrupt_old_live80',replace(H,'"movss %[scratch], %%xmm3','"fxch %%st(0)\\n\\t"\n        "fchs\\n\\t"\n        "movss %[scratch], %%xmm3'),T),
 ('clear_sticky',replace(H,'"movss %[scratch], %%xmm3','"fnclex\\n\\t"\n        "movss %[scratch], %%xmm3'),T),
 ('force_final_C1_zero',replace(H,'"movss %[scratch], %%xmm3','"fldz\\n\\t"\n        "fstp %%st(0)\\n\\t"\n        "movss %[scratch], %%xmm3'),T),
 ('omit_caller_restore',H,replace(T,'fxrstor 544(%r10)\\nfxsave 1056(%r10)','nop\\nfxsave 1056(%r10)')),
]
