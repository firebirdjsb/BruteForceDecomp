# 0x002B4780: reused scalar slot and literal DWORDs

Bounded C11 storage repair. Syntax and the listed original instruction facts
were checked; the complete function, calling conventions and behavior remain
unverified. This does not establish a native or byte-identical rebuild.

## Provenance

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x002B4780`; ordered body ranges `0x002B4780..0x002B4F49`
  (1,994 bytes), `0x002B4F50..0x002B500D` (190 bytes), and
  `0x002B502A..0x002B5042` (25 bytes).
- Original ordered body SHA-256:
  `920C8454E85C99488F83FCDAF8F0EC28ED3B242EEC2A136AC707D3FCC9FDB0C8`.
- The complete hash-pinned body was inspected privately. Compact byte windows
  are retained in `scripts/verify_stack_storage_repairs.py`.

## Observed lifetimes

Use `T` for ESP after the prologue's local allocation and three register saves.
The prologue aligns ESP to eight bytes; this notation does not assume a fixed
offset from incoming ESP.

| Sites | Original operation | Bounded correction |
| --- | --- | --- |
| `0x2B4A6B..0x2B4A79` | MOVSS writes four bytes at `T+0x10`, DWORD copy, then SQRTSS reads those four bytes | Copy the existing low-word draft value into four bytes of `local_b8`; do not read or clear the other four bytes |
| `0x2B4D5A` | FLD **m32fp** from object `+0xB4` | Read the float's storage bits, rather than numerically convert the inferred `int` member |
| `0x2B4D60..0x2B4D77` | PUSH lowers ESP by four; FSTP **m64fp** to `[ESP+0x14]`, then two DWORD copies to object `+0x110/+0x114` | The destination is again `T+0x10`; represent its complete double lifetime and copy eight bytes |
| `0x2B4ED7` | MOV DWORD `[T+0x10],0x3F800000` | Replace only the low four bytes, retaining the high word from the m64fp store; remove the erroneous numeric CONCAT44-to-double conversion |
| `0x2B497F`, `0x2B502F` | Immediate DWORD stores `0x11170` and `0x1E240` | Preserve the literal words instead of referencing inferred host symbols |

The original first SIMD computation was already folded to `0x42C141FF` in the
draft. This batch preserves that draft value; it does **not** establish its
equivalence for all guest MXCSR settings. Reconstructing that SIMD calculation,
its SQRTSS result and related stores remains separate work.

The later LEA at `0x2B4FE2`, after one PUSH, addresses `T+0x10` for the call to
`0x2CCE90`. That observation proves this slot is reused; it does not recover the
complete adjacent parameter block or the callee's hidden register inputs.

## Validation and remaining work

- Whole-XBE and ordered-body digests verified before instruction inspection.
- Focused Clang syntax passes with `tools/sweep_c11.py` flags on both
  `i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`.
- Independent reviewer rechecked the pinned original and both focused target
  compilations; approved only the changed storage operations and literal words.
- Full ABI, guest mapping, endianness translation, x87 control/exceptions/NaN
  payloads, adjacent stack arrays and helper interfaces remain unverified.
  Existing unrelated numeric conversions are still draft code.
- No original-versus-C runtime tests or byte match were performed. No game,
  installed artifact, production data or deployment was changed. Restore the
  scoped source and this note to roll back this repair.
