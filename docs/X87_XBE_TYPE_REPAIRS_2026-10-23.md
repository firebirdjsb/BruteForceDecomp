# XBE-grounded x87 type corrections — 2026-10-23

This ledger records evidence from the user's original retail XBE. Only instruction
patterns and hashes are recorded here; the executable and full disassembly stay
local. Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## `FUN_00022790` — original 1,032-byte body

Original body SHA-256:
`0364BD7A70443AF264B4160D61090206B3F0D79744199DD3CF1D3D6631FB9E65`.

- `0x0002282B: fld dword ptr [edi+0x5c]` establishes a 32-bit
  floating-point field, not an integer numerically converted to float.
  It is compared against the 32-bit float constant at `0x003A551C`,
  raw value `0x42740000` (61.0).
- `0x000228A1: fld dword ptr [0x0040E748]` and
  `0x000228AE: fmul dword ptr [0x0040E748]` read the same
  floating-point global. Its original file-backed bits are
  `0x3F800000` (1.0f), not a pointer to a floating-point value.
- Source correction: declare `DAT_0040e748` as `extern float`
  and read the x86 [edi+0x5c] field as `float`. The enclosing
  indirect-call contracts, register inputs and runtime paths remain unverified.

## `FUN_000DC510` — original 803-byte body

Original body SHA-256:
`7016E00C4E198173D11C4C91B58EFA1753B0E24A56226F189240ABF1F8D7C087`.

- `0x000DC5DA` uses `fcomp m32fp`;
  `0x000DC5E7` uses `fld m32fp`; and
  `0x000DC5F3` uses `fmul m32fp`.
  All use original address `0x0040D5C4`.
- The intervening `mov ecx, dword ptr [0x0040D5C4]`
  transfers the same raw 32-bit lane, **not** a C pointer.
- Original file-backed bits are `0x3F000000` (0.5f).
  Source correction: `extern float DAT_0040d5c4`.
  Other SSE/x87 pseudocode issues are explicitly unresolved.

## `FUN_00372270` — original 358-byte body

Original body SHA-256:
`A5CD890106CCF4EEAE3F779FA3A20803299B681A9DFA1081A7D78CF760E2FFD0`.

- `0x0037228A`, `0x00372294`, `0x0037229E` copy
  DWORDs from `0x0037DF6C`, `0x0037DF84`, `0x0037DF68`
  into stack lanes later read by `fld` / `fcom` as 32-bit floats.
- `0x003722FE`, `0x00372310`, `0x0037231A` similarly
  copy `0x0037DF78`, `0x0037DF7C`, `0x0037DF80`.
  The resulting lanes are used by floating-point instructions
  around `0x0037236B–0x0037237D`.
- `0x0037AF5C` is used by `fcom m32fp` at `0x003722E0`
  and `fld m32fp` at `0x003722F3`; initializer
  `0x42800000` (64.0f).
- Source declarations for only these seven observed f32 globals
  were corrected. `DAT_0037DF74` (integer branch condition)
  and `DAT_0037DF70` (raw command word) remain 32-bit integers.
  The command-buffer layout, writes, raw pointer words,
  indirect calls and implicit ESI ABI are **NOT verified**.

## Reproducibility and limits

Run `python3 tools/verify_x87_global_types.py --xbe /path/to/default.xbe`
with the user's original local binary. It fails closed when the XBE
identity, file-backed VA mapping, original body hashes, original opcodes,
or documented initial data bits do not match.

These are evidence-backed **type repairs**, not claims that the C
functions compile, link together, execute, preserve x87 rounding,
or match the original game 1:1. Do not mark them ABI_VERIFIED or
SEMANTICS_TESTED without independent full-function validation.
Keep all changes on the sole canonical `main` branch.
