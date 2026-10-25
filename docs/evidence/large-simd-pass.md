# Large SIMD operand repair evidence

Status: operand-repaired C drafts with focused host syntax checks. No function is claimed as ABI-reviewed, linked, behavior-tested, or byte-identical.

The source of truth was the project-pinned original Xbox executable; its SHA-256 matched `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Each function body was independently extracted and checked against its indexed body digest before review.

## `0x0012baf0`

- Original body SHA-256: `A158AB8BAEAE0C76832BF083F550B79E29FF902E9429FBD043C32DF2B54AFBAD`.
- Observed instructions load object offsets `0x44c`, `0x450`, and `0x454`; scalar constants at `0x3a4f88` and `0x3a5150` decode to `0.0f` and `1.4210854715202004e-14f`.
- Retains the draft's scalar/x87-derived C expressions without claiming host precision equivalence. The packed source lane order is `[axis0, 0, axis1, axis2]`, from `movss [eax]` followed by `movhps [eax+4]`; the edits replace invalid Ghidra lane members with explicit SSE extraction while retaining the original scalar expressions. The strict threshold checks, scalar `sqrtss`/`rsqrtss`, three output stores, and zero-result path remain represented. The stack return is `ret 0x10`.
- Object pointer validity, host representation of the guest 32-bit address, argument meaning, and full ABI remain unresolved. The third stack argument is present but unused in the observed body.

## `0x00233b10`

- Original body SHA-256: `4911F4E987F45DF85A910E477357C52F90778B138EED1EC08B40AB9D5839C479`.
- Reconstructed the four-lane multiplies, horizontal pair reductions, interpolation subtraction/addition order, sign-mask XOR conditional (including COMISS unordered behavior), scalar reciprocal-square-root, and full 16-byte store from the observed SSE sequence. Both horizontal scalar reductions preserve the original `shufps ..., 1` lane selection and add lane 1 to lane 0 in the observed operand order. The original returns the output pointer and ends in plain `ret`.
- Four-float extents, caller ABI, exceptional floating-point state, and end-to-end behavior remain unverified.

The pinned executable bytes at `0x0038d900` are `00000080000000800000008000000080`, the four-lane sign-bit mask used by the conditional XOR.

## `0x00219110` (deferred)

- Original body SHA-256: `14EAC87692CE198065B6786A8E1429A62C344BD13E2BF08D6DABAAB6386B51C5`.
- The original reads the vector through a stack argument, then writes one three-float result through ECX and another through EDX. The recovered draft exposes only the stack argument and does not establish those register inputs' source contract. It was left unchanged rather than inventing a signature or assigning register meanings. Its current Ghidra pseudo-vector expressions do not parse as C11.

## Checks and limits

- Clang C11 syntax-only checks passed for the repaired `0x0012baf0` and `0x00233b10` sources with both `i686-pc-windows-msvc` and `x86_64-pc-windows-msvc` targets.
- `0x00219110` remains a known syntax failure pending register/ABI evidence.
- No linking, Xbox build, original-versus-C differential execution, or game runtime validation was performed. The syntax checks establish only that the two edited drafts parse for those host targets.

Implementation uses the existing project x86 intrinsic convention under C11;
it is target-specific C and is not a portable software SSE emulator.
