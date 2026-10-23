# Direct3D Xbox DWORD/f32 command stream — 2026-10-23

The user's original retail XBE matches
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The `0x00372270` body hash remains unchanged:
`A5CD890106CCF4EEAE3F779FA3A20803299B681A9DFA1081A7D78CF760E2FFD0`.

The original Xbox **does not numerically convert** f32 data to int for its
command buffer. The generated source did. Evidence:

- `0x00372354/57/5A`: `mov [eax+0x10/14/18],ecx`
  copies the original 32-bit f32 delta lane to three command words;
  `0x00372361` copies the 32-bit `DAT_0037DF6C` lane to `[eax+0x20]`.
- `0x00372371/7A/81`: `fstp dword ptr [eax+0x4/8/c]`;
  `0x0037238E`: `fstp dword ptr [eax+0x1c]`.
  Store rounded 32-bit float bit patterns, not cast-to-integer results.
- `0x00372346`: `mov dword ptr [eax],0x200A30`, and
  `0x0037239C`: `mov dword ptr [ecx],0x80318`.
  Literal 32-bit command words, not host `&LAB` or `&DAT` pointers.
- `0x003723C3`: `mov dword ptr [ecx+0xc],0x4043C`;
  `0x003723CD`: `add ecx,0x14`; original `mov [esi],ecx`
  stores a 32-bit Xbox command cursor. Both original branches set ECX to
  the command cursor; no invented `extraout_ECX` input is required.

A new narrow C11 helper `bf_x86_store_f32_word` uses `memcpy` from
`float` to a 32-bit word, never a numeric conversion. The local host
unit test passed for 11 edge cases and 65,536 varied original word patterns.
The GitHub syntax audit now runs this test. The local Windows i386 cross-target
test did not run because that compiler lacks target `string.h` headers;
that is not a verified cross-build.

`tools/verify_x87_global_types.py` can verify these exact instruction
windows against the user's original XBE without committing copyrighted data.
The previous windows and function hashes are retained unchanged.

**Scope limit:** This is a verified **storage-lane correction** only, not
proof of the whole Direct3D call or faithful x87 intermediate rounding.
The indirect callee `0x00371E10`, the conversion callee `0x00373A30`,
implicit ESI, D3D state ownership, and 32-bit Xbox-to-PC address mapping
are not yet verified. All function-wide ABI and runtime statuses remain
`ABI_UNVERIFIED`. Never use a 64-bit host pointer as a verified Xbox VA.
