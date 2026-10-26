# 0x00157260 stack/SIMD follow-up packet

Status: investigated and deferred; no source repair or compile pass credited.
Source: `src/main_unclassified/band_0015/0x00157260.c` at baseline
`3210cc2c394edd13cbb6f4622898a145e6ff8fc2`.
Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original 864-byte body digest:
`80C2A63D64FAD4C47F5885C9845DA25BF670BC67D50C0FF06AF6C64BF4EBB4E7`.

The first compiler error is a float-to-pointer cast into local_14. That
variable earlier belongs to a stack object built at 0x1572bc..0x1572e1
for 0x1fe3d0. Replacing the cast alone would leave numeric conversions of
float bit patterns in the surrounding draft, so that shortcut was rejected.

Original 0x15741b..0x15745a uses FLD/FADD/FSTP for three binary32 sums.
0x157462..0x157487 broadcasts 0.5 using SHUFPS and uses MOVSS/MOVHPS
and MULPS to scale the X,Y,Z data in lanes 0,2,3. 0x15749c..0x1574a9
then stores their raw DWORDs to object offsets +0xe8/+0xec/+0xf0.
The existing draft numerically converts those object words to floats and
converts the results back to integers; those operations are not bit copies.

Next action: trace all stack-object and vector-scratch lifetimes, confirm
all original body ranges, preserve observed x87 rounding points, map the
SSE lanes and write timing, and replace the entire affected representation
path together. Do not infer a complete object structure from these offsets.
Use an independent review and a meaningful instruction-based comparison
before claiming scalar/vector behavior. Complete ABI and runtime remain
unverified. Full disassembly is retained privately; no binary is published.
