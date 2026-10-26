# Original-XBE evidence: 0x002EAA86 incoming argument alias

This is an **instruction-level triage note, not a C11 repair**. The
original user-supplied Xbox `default(2).xbe` was read during this pass
(2026-10-26), independently SHA-256 checked as
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Do not assume the binary is present on future runs; never commit it.

- Original function entry: `0x002EAA86`.
- Contiguous original body: **88 bytes** (through `RET` at `0x002EAADD`).
- Independently reproduced original body SHA-256:
  `A3AF5B889AAEDDFF70DFC7BE5796FD4586FC4832B162617ACD8666392181E1C1`.
- Existing C11 draft: `src/main_unclassified/band_002e/0x002eaa86.c`.
  Its original body-hash label must remain unchanged.

## Original x86 stack and call evidence

| Address | Bytes | Observed instruction / implication |
| --- | --- | --- |
| `0x002EAA86` | `55 8B EC 83 EC 20` | Save EBP; establish EBP frame; allocate 32 local bytes. |
| `0x002EAA8D` | `8B 75 08` | ESI receives first incoming DWORD from `[EBP+8]`. |
| `0x002EAA91` | `8D 45 10 50` | Push address of `[EBP+0x10]`, the **third incoming argument word**, not a local buffer. |
| `0x002EAA95` | `FF 75 0C` | Push second incoming DWORD from `[EBP+0x0C]`. |
| `0x002EAA98` | `8D 45 E0 50` | Push address of 32-byte local record at `[EBP-0x20]`. |
| `0x002EAA9C` | `C7 45 E4 FF FF FF 7F` | Store `0x7fffffff` in local record at `[EBP-0x1C]`. |
| `0x002EAAA3` | `C7 45 EC 42 00 00 00` | Store `0x42` at `[EBP-0x14]`. |
| `0x002EAAAA` | `89 75 E8` | Store first incoming DWORD at `[EBP-0x18]`. |
| `0x002EAAAD` | `89 75 E0` | Store first incoming DWORD at `[EBP-0x20]`. |
| `0x002EAAB0` | `E8 29 31 00 00` | Direct call to `0x002EDBDE` with three pushed arguments. |
| `0x002EAAB5` | `83 C4 0C` | Caller removes 12 bytes of outgoing arguments. |
| `0x002EAAD8` | `8B C7 5F 5E C9 C3` | Return saved EDI result in EAX; restore EDI/ESI/EBP; plain `RET`. |

The decompiler's unresolved `&stack0x0000000c` is the incoming
`[EBP+0x10]` address passed to the formatter. It is **not** justified to
replace it with an invented local variable or a host pointer. The existing
two-parameter C draft does not establish the true guest variadic/argument
storage contract. This remains an unresolved syntax failure pending caller
inspection, formatter argument-consumption analysis, and a guest-ABI-safe
representation. No host variadic ABI equivalence, full function behavior, or
native runtime compatibility is claimed.

This note records original executable bytes and address relationships only;
it does not include or redistribute the original XBE.
