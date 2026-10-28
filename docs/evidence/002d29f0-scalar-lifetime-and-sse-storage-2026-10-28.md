# 0x002D29F0: scalar lifetime and SSE/guest-word storage repair

**Status:** focused C11 syntax repair and authenticated instruction/dataflow
correction. Full function behavior, original Xbox ABI, guest-memory integration,
x87 state/precision and byte-identical compilation remain unverified.

## Original evidence

The private original XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The section-mapped contiguous 1,695-byte body at `0x002D29F0` was independently
reauthenticated on 2026-10-28 against original export digest
`8410B9159F7E13616468E55670C8D2C5B39AACB44E5CE477A904D7F75571CD49`.

| Original instructions | Established operation and repaired representation |
| --- | --- |
| `0x002D2A40/47/4D` | Read a raw DWORD at allocation `+0x4C`, AND with `0xFFFFFCFF`, write its bits back; the old numeric float conversions were incorrect. Existing preceding byte/word zero stores remain. |
| `0x002D2C8B..0x002D2C9F` | Read original object pointer, FLD its `+0x88` binary32 value, FST/FSTP to stack `+0x38/+0x4C`. This later scalar lifetime is split from the earlier `uint *local_88` pointer lifetime. |
| `0x002D2CA7..0x002D2CD7` | MOVSS/MOVHPS load `{X,0,Y,Z}`, broadcast scalar, MULPS, ADDPS, then MOVSS/MOVHPS store twelve bytes. Intrinsics retain all four arithmetic lanes, operand order and X-before-Y/Z store order. No numeric conversion of packed float words remains in this block. |
| `0x002D2CDE..0x002D2CEE` | FLD second object's `+0x88`, FADD spilled first scalar, FSUBR caller `+0x58`, FSTP caller `+0x58`. The C expression now retains that order through the existing `float10` proxy, with the final binary32 conversion at the store. |
| `0x002D2D6C`, `0x002D2EA8` | Read two actual four-byte guest pointer words at original object `+0x90`, rather than reading native pointer width. |
| `0x002D2EA2`, `0x002D2FFF` | MOV stores guest pointer bits to allocation `+0x68/+0x6C`. Four-byte memcpy stores replace pointer-to-float numeric conversions; zero alternate paths remain. |

The original signed selector repairs at `0x002D2A6C/70` remain unchanged.
No function signature, external declaration, indirect-call contract, allocation
helper, dispatch, or unrelated arithmetic was replaced or invented.

## Checks and their limits

- Before this change, unchanged `tools/sweep_c11.py` flags failed on Windows
  i686 and x64 at pointer-to-float casts in the vector block. Both complete
  source-file syntax checks now pass with those same flags. This is parsing,
  not a linked game or a completed original interface.
- A private local runner extracts the edited source's actual intrinsic block
  and compiles it at Clang `-O0` and `-O2`. Its independent oracle executes the
  unchanged authenticated original `0x002D2CA7..0x002D2CD7` machine bytes under
  a native 64-bit setup with low-address test storage. Only host call/frame
  setup is supplied; the original SSE instruction bytes remain unchanged.
- **6,000 cases per optimization level** compare complete output-buffer bytes
  (including canaries), four overlapping/nonoverlapping source/destination
  arrangements, and masked MXCSR status under all four DAZ/FTZ combinations.
  Deterministic cases include arbitrary bit patterns, NaNs, infinities,
  signed zeros and subnormals. All passed at both optimization levels.
- This bounded host instruction comparison covers the SSE block only. It is
  not execution of the original 32-bit function, its x87 FLD/FST boundary,
  helper calls, unmasked exception/fault handling, or the Xbox runtime. The
  function's inherited guest/native pointer assumptions, external declarations,
  helper interfaces and other draft arithmetic remain `ABI_UNVERIFIED`.
  Windows host `long double` does not establish original 80-bit x87 behavior.

Only the canonical source and this evidence note are part of this repair.
The original XBE, private oracle setup and generated host binaries remain
outside Git. No game, save data or production environment was modified.
