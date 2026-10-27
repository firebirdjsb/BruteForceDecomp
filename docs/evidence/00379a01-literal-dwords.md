# 0x00379A01: six literal DWORD stores

Bounded storage repair, independently reviewed against the original
instructions. Focused syntax passes on i686 and x64 Windows Clang targets with
the project's sweep flags. Complete interfaces, native execution, behavior and
byte match remain unverified.

## Provenance

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x00379A01`, contiguous 2,527-byte original body
  `0x00379A01..0x0037A3DF`.
- Original body SHA-256:
  `D0725F94D600582CE3E217A9BAD7419BAED4B33DB5D7549AD5B711C27DB655D4`.
- Whole-XBE and body hashes checked before inspection by both the author and
  an independent reviewer. Instruction windows are pinned in
  `scripts/verify_stack_storage_repairs.py`.

## Changed facts

| Original site | Observed value and width | Correction |
| --- | --- | --- |
| `0x379DC7` followed by `0x379DCC/0x379DD3/0x379DDA/0x379DE1` | ESI receives `0x00080008`; four DWORD stores at offsets `+0x52C/+0x530/+0x534/+0x538` | Four `uint32_t` values and four-byte writes replace inferred `LAB_00080008` host pointers |
| `0x37A04A` | MOV DWORD `[EDI],0x000C001B`; the two preceding four-byte EDI advances place this at record word two | Preserve the literal word in `puVar5[2]`, replacing `&BYTE_000c001b` |
| `0x37A38A` | MOV DWORD `[EAX+ECX*4+0x700004],0x002FE000` | Preserve that literal word and four-byte width, replacing `&LAB_002fe000` |

These instruction operands do not reference host symbols or require symbol
relocation. No field meaning, external declaration, callback prototype or
runtime behavior was inferred from their apparent address-like values. Address
expressions, loop bounds and unrelated stores were preserved.

## Remaining scope

The entry's implicit ECX input, signed draft address arithmetic, guest mapping,
other register/flag contracts and complete buffer/index bounds remain
`ABI_UNVERIFIED`. Four-byte original stores are now represented at these six
sites; this does not prove the rest of the large initializer is correct.
No original-machine differential test was run. No game, installed binary,
production data or deployment was changed. Restoring this source and note
rolls back the scoped repair.
