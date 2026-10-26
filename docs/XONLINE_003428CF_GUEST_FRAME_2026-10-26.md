# XOnline 0x003428CF — guest32 frame evidence (2026-10-26)

This is a narrowly instruction-backed C11 **draft storage repair**, not a
whole-function 1:1, native ABI, linkage, or gameplay verification.

**Original user-supplied XBE:** SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
**Function:** entry `0x003428CF`, 276 original bytes, original body SHA-256
`75000006E229D98C19569A3E02B2D25240BC8A994F823CF6EFC90ED0B6F7562D`.
The original binary remains outside Git. The verifier checks 46 original
instruction-byte windows when passed `--xbe`; public CI runs source-only.

## Direct original instruction observations

- `0x3428D2` allocates `0x42C` guest stack bytes; `0x3428DE` saves incoming
  `ECX` into `EBX`; `0x3429E0` ends in `RET 4` after saved-register restoration.
- `0x3428E2..0x342902` zeroes 131 DWORDs at `EBP-0x224`, 130 DWORDs at
  `EBP-0x42C`, and six DWORDs at `EBP-0x18` using `REP STOSD`.
- `0x342904..0x342939` initializes guest words at `EBP-0x10`,
  `EBP-0x220`, `EBP-0x18`, `EBP-0x14`, and `EBP-0x0C`.
- `0x342913..0x342940` pushes three stack arguments, sets `ECX=EBX`,
  and calls `0x342562`. Its observed return is **`RET 4`** at
  `0x3428CC`, not `RET 12`; the remaining caller/callee stack contract
  is unresolved and must not be guessed.
- `0x34294C..0x34295D` pushes `EBP+8`, `EBP-0x10`, `EBP-0x21C`
  (in that order), sets `ECX=EBX`, and calls `0x34204D`.
  That callee returns with `RET 12` at `0x34211D`.
- `0x342057..0x34206F` confirms that the second callee clears **four
  consecutive guest DWORDs** at its output pointer, then writes two WORDs.
  `0x342966..0x34297D` reads overlapping WORD/byte/DWORD lanes from the
  same caller frame. The byte pair is reordered before storing at
  `[ESI+0x42]`.

## Source correction and limits

The old C draft zeroed 131 DWORDs through a two-DWORD array and six DWORDs
through a two-pointer array; both were host out-of-bounds models. It also
separated an overlapping 16-byte output record into unrelated host locals.
The repaired draft uses 130- and 131-DWORD arrays plus a six-DWORD guest
frame. Its `guest_frame[2..5]` is the 16-byte callee output record and
`scratch_224[2]` is byte offset 8, matching `EBP-0x21C`.

The focused gate checks isolated Clang C11 at `-O0` and `-O2`, ten
negative source mutations, original function identity and body digest,
and (only when the private XBE is provided) 46 original instruction
windows. A separate strict local C11 model checked DWORD bounds and all
65,536 possible 16-bit output values at `-O0` and `-O2`.

**ABI_UNVERIFIED:** guest32 addresses still require real guest-memory
translation; the local host-pointer-to-guest-word cast is a draft-only
placeholder. First-callee effects on neighboring guest stack words,
implicit register contracts, nonstandard stack cleanup, full cross-function
linkage, and native Xbox behavior are unverified. No new runtime API or
playable-game claim is made. Only a completed full-tree audit may change
the 13,694-function pass/fail counts.
