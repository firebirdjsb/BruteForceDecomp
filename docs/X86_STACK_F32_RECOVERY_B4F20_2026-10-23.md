# Missing second stack argument and false return-address variable — 0x000B4F20

**Original game:** Xbox Brute Force, XBE SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
**Function:** `0x000B4F20`, original byte length 366,
SHA-256 `D84F53350DE361AB3328095AFAA8AA9B6DD10FD7712A672767D40F994AA1088B`.

## Original-instruction observations

- `0x000B4F20: sub esp,0x1c`; then
  `0x000B4F23: mov ecx,[esp+0x20]` reads the first incoming
  stack argument from original `[entry_esp+4]`, the object's pointer.
- The next call through `[vtable+0x2C]` passes a stack-address
  output argument. The subsequent `0x000B4F33: mov edx,[esp+0x28]`
  uses the **same first incoming object pointer**, not the return
  address. This offset relationship presumes the preceding indirect
  call cleans its pushed output-pointer word; confirm its dynamic
  target and cleanup before marking the callee ABI verified.
- `0x000B4F9D`, `0x000B4FCA` and `0x000B4FFD` each use
  `fld dword [esp+0x2C]` at the same call-frame depth: the original
  second stack argument `[entry_esp+8]` is a 32-bit **float**.
  It is multiplied by the object's f32 fields at offsets
  `0x40`, `0x44`, and `0x48`.
- `0x000B508B: ret 8` cleans exactly two incoming stack words.

## Narrow C11 repair

`FUN_000b4f20` now declares its two observed stack inputs as
`(int *param_1, float param_2)`. All four erroneous
`(float)param_1` expressions now use `param_2`, while
the erroneous `unaff_retaddr` pseudo-input is replaced by a
byte-address view of the actual first stack argument.

The rest of the draft is deliberately unchanged. Its vtable call at
`+0x2C` has **not** been proved to obey an ordinary host-C ABI;
the exact register usage, output stack record and cross-caller
linkage remain `ABI_UNVERIFIED`. A matching `ret 8`
and verified f32 operand widths establish this stack **model**,
not complete behavior or byte-equivalence. Source-wide
compiler success, if achieved, must be reported separately.

`tools/verify_x87_global_types.py` now also checks the original
366-byte function body and eight specified instruction windows.
It never stores the original XBE in this repository.
