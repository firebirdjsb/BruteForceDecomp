# 0x000D29B0 → 0x002463A0: first guest-stack DWORD out-slot

**Source of truth:** original Brute Force retail `default.xbe`, SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The executable stays outside Git. Local verification: `python3 scripts/verify_000d29b0_guest_outword.py --root . --xbe /private/default.xbe`.

| Entry | Original body SHA-256 | Original size |
| --- | --- | ---: |
| `0x000D29B0` | `073A4A2E9E3EBE0131000B38C3A9C59D6362C7983AF7499C7B5F3468D33F4501` | 168 bytes |
| `0x002463A0` | `E04927CD5883B795B0D495555A87EC4E43ECDB2B4DEEA2F40AFD874FF0C7CD1F` | 75 bytes |

## Verified stack arithmetic and call edge

Let `ESP0` be the original guest stack pointer at entry to `0x000D29B0`. Three saved registers (`push ebx`, `push esi`, `push edi`) make `ESP=ESP0-12`. Two additional scratch-word pushes at `0xD2A34` and `0xD2A3C` make `ESP=ESP0-20`. The instructions `0xD2A37: 89 18` and `0xD2A45: 89 02` write end/begin pointers into those scratch words.

`0xD2A47: 8D 54 24 18` computes `EDX=ESP+24=ESP0+4`: the address of the **first incoming guest DWORD**, not an invented local pointer. `0xD2A4B: 52 51` pushes that address and the ECX object. `0xD2A4D: E8 4E 39 17 00` calls `0x002463A0`. The callee loads its out-pointer at `0x2463DC: 8B 4C 24 18` (after saving four registers), writes a full DWORD at `0x2463E3: 89 01`, and ends in `ret 10h`. The caller ends in `ret 18h`.

The C11 source now represents the first incoming word as `undefined4 guest_out_word` and forwards `&guest_out_word`, replacing unresolved `&stack0x00000004`. This is a **syntax and local storage-contract repair only**.

## Unverified behavior and regression coverage

The caller also consumes original implicit EAX and ECX register inputs and six guest stack DWORDs. The C11 draft does **not** yet reproduce the original register-transfer ABI, caller-visible guest-stack mutation, 32-bit guest address translation, or full `rep movsd` runtime behavior. The other five stack words are not declared irrelevant. No complete 1:1 or native PC execution claim follows from this change.

`scripts/verify_000d29b0_guest_outword.py` checks 13 original instruction signatures, both original body hashes, the direct-call destination, stack arithmetic, source mutation negative controls, and focused Clang C11 syntax. GitHub CI runs the source/Clang portion without the private XBE. REA and XboxRecomp are engineering references, not replacements for Brute Force's instruction evidence.
