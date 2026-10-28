# `0x0011C810`: recovered original first post-dot x87 comparison and reset branch

**Scope:** first post-dot comparison and its true/reset action only. The game
C source `0x0011c810.c` remains unchanged and `ABI_UNVERIFIED`. Other
post-dot branches, original Xbox x87 control/status and CALL/RET, the native PC
build and full behavior equivalence remain unverified.

## Original authenticated instruction proof

Original Xbox XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Caller original body SHA-256 (647 bytes)
`A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255`.
The local `--xbe` verifier checks those pinned hashes and **26 precise
original opcode windows**, including the following source and branch paths:

- At `0x0011C917` original `FLD [S+0x14]`, `FABS`, then
  `FLD [S+0x0C]`, `FMUL m32 [0x003A51B0]`, `FABS`, `FCOMPP`.
  The authenticated constant is **8.0f** (`00 00 00 41`).
  `[S+0x0C]` is the first dot output and `[S+0x14]` the **third** dot
  output, both previously written by `0x0012B2A0` (the original x87 helper).
- `0x0011C92F` `FNSTSW AX`; `0x0011C931` `TEST AH,0x05`;
  `0x0011C934` `JP 0x0011C99D`. For finite ordered operands, the original
  reset path is taken only when `fabs(8*first) < fabs(third)` (strictly).
  Equality does not reset. Unordered/NaN conditions are explicitly deferred.
- The reset path writes `[caller_arg+0x7B0]=0x3F800000`,
  `[caller_arg+0x7B4]=0`, and `[caller_arg+0x7B8]=0` in this exact order,
  then restores the guest frame and executes `RET 4`. The earlier SSE
  `MOVSS/MAXSS/MINSS` scratch writes do not touch those three guest output
  fields, but their exception/status behavior remains a separate obligation.

## Bounded C11 implementation and differential tests

`include/bf_0011c810_threshold_reset.h` projects only this finite binary32
comparison and three guest DWORD writes via the established callback memory
model. Since multiplying a binary32 by the exact power-of-two constant 8 is
exact in binary64 for **all finite binary32**, the finite ordering does not
need a guessed host-float pointer cast or a new x87 register ABI. NaNs and
infinities are rejected instead of silently treated as ordinary numbers.

`tests/x86_0011c810_threshold_reference.S` is an **independent 64-bit
x87 hardware instruction oracle**, executing the original FABS/FLD/FMUL/
FCOMPP/FNSTSW/TEST/JP comparison sequence with a 64-bit host pointer ABI.
Exact reset/non-reset decisions match for **32,786 deterministic scenarios
and 104,480 assertions per `-O0` and `-O2` build**, including positive,
negative, equal, signed-zero, extreme finite, object-write fault and
unverified-special-input cases. ASan/UBSan also pass. This independent
host oracle is not the original 32-bit Xbox game runtime.

`python3 scripts/verify_0011c810_threshold_reset.py --root .
--xbe /path/to/private/default.xbe --sanitize` additionally authenticates
all pinned original instruction windows and the source digest before the
strict Windows i686/x64 syntax/host executable tests. CI omits the user XBE,
so its source-only run is explicitly **not new binary authentication**.

**Next verified repair gate:** recover both remaining post-dot x87 comparison
and division branches, link the eventual `FUN_00117310` output contract,
and preserve the full original caller's guest stack/indirect register state
before attempting to replace the canonical invalid `(float)puVar1` casts.
Do not increase syntax coverage or claim native link parity based on this
bounded helper alone.
