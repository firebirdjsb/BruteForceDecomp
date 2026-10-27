# 0x000A42D0: reconnect the two guest request words

The original XBE SHA-256 is
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The entry's 709-byte body hashes to
`49C324674E97B193CF2B87DEFAB44DA0E520AABD71B91824735AEB2A120F2C42`.
Both identities were authenticated before reconstructing these expressions.

The previous draft disconnected the first three virtual queries from their
arguments, represented fallback arguments by synthetic stack identifiers, and
used host pointer-sized locals for original DWORD values. This change restores
one shared `uint32_t[2]` and the argument words visible in the original PUSH
sequences. It does not name the interfaces or invent their implementations.

## Coordinates and observed calls

Let S be entry ESP. `SUB ESP,8; PUSH EBX; PUSH EBP; PUSH EDI` produces
steady ESP=S-20. **The following relative slot identities assume each indirect
call restores that steady ESP.** The caller's reuse and balanced return support
that inference; indirect callee cleanup is still unverified independently.
Array word 0 corresponds to S-8 and word 1 to S-4.

Every query at vtable byte offset `+0x28` passes `(self, word-address,
output-address)`. Each negative result conditionally releases the output's
existing interface with its explicit self argument and writes zero before
invoking the fallback at `+0x24`. Fallback argument order is `(self,
first-word-address, second-word-address, 0, output-address)`.

| Query / fallback CALL | Object output | Query word / value | Fallback first word / value | Fallback second word / value |
| --- | --- | --- | --- | --- |
| `0x000A4301` / `0x000A4336` | ESI+8 | 0 / `040EADE8` | 1 / `040EADE8` | 0 / `F8A2BD56` |
| `0x000A4362` / `0x000A4397` | ESI+C | 1 / `E4B5147F` | 0 / `E4B5147F` | 1 / `1EF1E920` |
| `0x000A43C3` / `0x000A43F8` | ESI+10 | 1 / `EB7A6BE1` | 0 / `EB7A6BE1` | 1 / `E2C39AC2` |
| `0x000A4424` / `0x000A4459` | ESI+14 | 1 / `1116BE9C` | 0 / `1116BE9C` | 1 / `1BEDF9A9` |

The first fallback reverses the address order relative to later fallbacks.
The replacement retains original store order: write the second fallback
value first, then copy the known EBX query constant to the other word. It
does not derive that constant from a word the preceding opaque call could
have modified. No second word is initialized without an original write.

At `0x000A4462/0x000A4467`, the next helper's address argument again uses
S-4, now containing `0796C3B0`; that address also uses array word 1. The
helper's implicit ECX input is not repaired by this change. All original
entry/address/body labels and the ordinary C signature are retained.

## Verification and handoff

- Focused Clang C11 checks pass for i686 and x86_64 using the full sweep flags.
- `scripts/verify_stack_storage_repairs.py` authenticates this whole original
  body and ten specific prologue, PUSH/LEA, store and CALL windows. This adds one
  body and ten instruction windows to the existing provenance suite.
- An independent reviewer checked the original instructions against the
  changed expressions and accepted the scoped storage/argument repair.
- Syntax and changed operand/argument correspondence are established. The
  entire function's ABI, guest memory translation, dynamic vtable targets,
  indirect cleanup, x87 suffix and original-game behavior remain unverified.

Next work must recover the incoming ESI contract and the actual virtual
targets/cleanup before attempting native linkage. A passing syntax check
does not make this function executable or prove whole-function equivalence.
No game installation, production data or deployment was touched. Revert the
scoped source/evidence commit and rerun the inventory to roll it back.
