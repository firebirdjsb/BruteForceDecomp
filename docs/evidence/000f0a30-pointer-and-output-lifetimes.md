# 0x000F0A30: pointer result and signed output lifetimes

Status: scoped C11/instruction repair. Complete interfaces, helper behavior,
guest-frame binding, Xbox execution and machine-code equivalence remain
unverified. Entry and original function-body identity are unchanged.

The original XBE was freshly authenticated against SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The ordered body is 93 bytes at `0x000F0A30`, nine 61-byte spans beginning
at `0x000F0A90` through `0x000F0C90` in 64-byte steps, and 1,642 bytes at
`0x000F0CD0`: **2,284 bytes**, digest
`4C4297B4CE0AA57E7CFC9324D3ED5C70AAA5B54AB5BFAE6C58093C5EBC68CFA6`.
The verifier authenticates those ranges and eight instruction/data windows.

## Established facts

S denotes the steady ESP after SUB ESP,0x240 and saved EBX/EBP/ESI/EDI;
temporary argument pushes shift subsequent ESP-relative operands.

- `0x000F0D35..0x000F0D3F` calls virtual slot +0x1c4 and moves EAX into
  EDI and DWORD[S+0x34]. `0x000F0DA7` tests EDI for zero; later instructions
  reload the saved word and use it as an address. There is no numeric float
  conversion or x87 return here. The C draft now retains a pointer result.
- `0x000F0EED..0x000F0F19` zeroes adjacent DWORDs at S+0x3c/+0x40, keeps
  the separate S+0x44 byte, and passes the pair's base to virtual +0x1dc.
  The earlier S+0x3c metadata-pointer lifetime is separate. An int32_t[2]
  represents only this later pair; the original virtual-call ABI and all
  memory the callee might access remain unresolved.
- `0x000F1077..0x000F108F` defaults EAX to zero and accepts only a signed
  positive denominator. It executes FILD of the signed numerator, FMUL by
  the authenticated binary32 100.0, signed FIDIV, FSTP to one binary32
  scratch word, and CVTTSS2SI. The C retains extended arithmetic, the single
  float spill and the intrinsic's signed indefinite result on overflow.
  A C cast from an out-of-range float would have undefined behavior.
- `0x000F1095..0x000F109F` pushes that result and the two original DWORDs
  for formatting. The C call now uses the pair's signed values. The prior
  S+0x34 pointer lifetime, key literal 0x173ebcaf, and arithmetic scratch
  lifetime are distinguished without inventing the key helper's register
  inputs or a formatter prototype.

## Focused evidence and limits

The full source passes i686/x86_64 Clang C11 syntax with the existing sweep
flags and additional pedantic checks. An actual-source excerpt of the guarded
arithmetic compares with a separately transcribed host instruction adapter.
At each of `-O0` and `-O2`, **200,112 cases** cover signed extremes, zero and
negative denominators, conversion overflow, rounding boundaries and 4,000
deterministic random pairs. These run under all three defined x87 precision
settings, four x87 rounding modes and four SSE rounding modes, with exceptions
masked. Input words are checked unchanged; host control is restored afterward.
Three negative controls reject early integer-to-float rounding, rounded SSE
conversion and accepting negative denominators.

Pointer capture, output initialization, call-base and formatter argument shapes
also have source-contract guards anchored to the checked original instructions.
Those guards are not execution tests of the virtual call, original frame,
formatter or pointer dereferences. No original external implementation is
substituted into production code. Entry EAX, remaining register inputs and
helpers, local aggregate layouts, pointer-width assumptions and other function
paths remain ABI_UNVERIFIED. FP status/traps and Xbox hardware accuracy are
not tested. Numeric fixtures explicitly request 80-bit host long double;
default Windows float10 remains an unverified host proxy.

No game process, binary, assets, saves, installation, deployment or production
data was changed. Private disassembly and the XBE remain outside Git.
