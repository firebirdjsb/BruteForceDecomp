# 0x001f45a0 mixed word storage repair

Status: original operands observed; C11 syntax checked. ABI, behavior and byte
matching remain unverified. This document does not establish a structure layout
or gameplay meaning.

Original provenance:

- XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry: `0x001f45a0`; original body length: 407 bytes.
- Body SHA-256: `C7A59C855728A403E7180E1D4276043560D74C00DD219EC9CC19991F11EF19F8`.
- Both digests were reauthenticated against the private original XBE before
  editing. Source routing used `tools/source_layout.py`.

The old draft represented ESI storage and its records as `float *`. It then
numerically converted pointers and guest addresses to/from float. The repair
uses four-byte words for this mixed storage and the existing binary32 word
helpers only where original instructions consume or produce floating storage.

| Original instruction evidence | Source consequence |
| --- | --- |
| `0x1f45a9 MOV [ESI+0x20],EAX`; `0x1f45ac MOV [ESI+0x1c],ECX` | Preserve both incoming raw words. Neither field is inferred as a float. |
| `0x1f45af FDIV [EAX+8]`; `0x1f45b7/0x1f45c3 FLD [EAX+8]` | Input +8 is binary32 storage; remove the draft's numerical integer-to-float conversion. |
| `0x1f45b5/0x1f45c0/0x1f45cc/0x1f45d7/0x1f45e5` | FST/FSTP produce four-byte floating lanes at ESI +0/+4/+8/+0xc/+0x10. |
| `0x1f45e8..0x1f45f3 MOV/IMUL/SHL/ADD` | Count multiplication and allocation size retain the low 32 bits. |
| `0x1f4607 PUSH 0x001f3720` | Pass the observed raw immediate word, rather than taking an invented host label's address. Callback ABI remains unknown. |
| `0x1f461e MOV EAX,[ESI+0x20]`; `0x1f462a MOV [ESI+0x18],EDI`; `0x1f462d FILD [EAX]` | Reload the guest address and store the allocation cursor as a word. Counts at input +0/+4 are signed integers. |
| `0x1f4642/0x1f4663 FSTP m32fp`; `0x1f4688 FSTP m32fp` | Preserve separate scalar temporaries for the stored column/row bases and current row value. |
| `0x1f4658 MOV EBX,[EAX+0x3c]`; `0x1f4693 MOV [EDI+0x38],EBX`; `0x1f46c4 ADD EBX,0x134` | Cursor is a raw guest address, incremented by 0x134 bytes. |
| `0x1f4690 MOV [EDI+0x18],ESI`; `0x1f46bd ADD EDI,0x40` | Record +0x18 stores the raw owner word; record stride is 0x40 bytes. |
| `0x1f4696..0x1f46a5` and `0x1f46f2..0x1f46fe` | Global cell, table pointer and dispatch slots are each loaded as dwords. Slot offsets remain +0x54/+0x20; targets are not guessed. |
| `0x1f46b0 MOV [EBX+0x110],EAX`; `0x1f4701/0x1f4708` | Store the observed EAX word at cursor +0x110, and reload input address after the final call before storing at input +0x10. |
| `0x1f4722..0x1f472b MOV m32,EDI` after EDI zeroing | Final four stores are raw zero words at +0x3c/+0x54/+0x68/+0x6c. |

The constants were read directly from the same XBE: `0x3a4f78=0x3f800000`,
`0x3a4ff8=0x3fb504f3`, `0x3a4ff4=0x41800000`,
`0x3a4f74=0x3f000000`, and `0x3a4f7c=0xbf000000`.

## Remaining boundaries

- Entry remains `void FUN_001f45a0(void)`. EAX, ECX and ESI pseudo-register
  inputs are uninitialized C locals, as in the draft; a callable host interface
  has not been invented. Guest-address casts are not a guest-memory adapter.
- Original x87 extended intermediates, control word, exceptions and exact
  rounding are not reproduced by these C float expressions. In particular,
  the ST(1) reciprocal operand around `0x1f45cc..0x1f45d7` can retain precision
  beyond the separately stored binary32 step. Stored-word recovery is not
  full floating-point semantic verification.
- Indirect calls still need ECX and full register/stack/return-side-effect
  review. The existing `code()` form is only a syntax draft, not a recovered
  callable native prototype.
- `0x1f4710..0x1f4715` sets EBX to `[ESI+0x18] + EDI` before calling
  `0x1f3bd0`; the retained void call cannot convey this implicit register.
  No guessed stack argument or initialized substitute was introduced.
- `0x1f4730 MOV EAX,ESI` returns the object word; the draft's void signature
  awaits caller/register-interface review. Allocation failure still follows
  the original unchecked record path; no safety behavior was fabricated.

## Focused validation

Before editing, both i686 and x86_64 Windows targets failed the unchanged
`tools/sweep_c11.py` flags, including pointer/float conversions and the missing
label. After the repair, both targets passed with no diagnostics. This is
syntax evidence only. No runtime execution, in-game test, host link or byte
match was performed. Only this source and this evidence document were changed;
no headers, inventory, game files or deployment targets were modified.

Coordinator integration: independent review accepted the changed operand and
storage facts. Only affected inventory source fingerprints/syntax labels and
the original-byte verifier are updated at integration. ABI and behavior labels
remain unverified. Focused syntax does not replace the complete tree audit.
