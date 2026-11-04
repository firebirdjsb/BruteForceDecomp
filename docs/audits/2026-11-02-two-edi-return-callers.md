# Two original EDI-backed EAX caller contracts — 2026-11-02

Starting main: `8b4a2e50336cf40ea7df69f8ffa8b4484c884af5`. Last completed exact-tree Clang++17 audit: **3,943/13,694 passing (28.79%)**, audited at `c64556f7545eb1d2cd063dc0656d41e9fba9f6bf`. This source batch does not manually change README percentages.

## Private original retail XBE verification

SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` authenticated locally. Four complete original function-body SHA-256 digests match the existing source labels:

| Original entry | Body length | Contract |
| --- | --- | --- |
| `0x00279280` | `0x2A` | Direct E8 at `0x0027929B` to `0x00279C40`; dereferences EAX at `0x002792A0` |
| `0x00279C40` | `0xC0` | `MOV EAX,EDI` and `RET 4` at all three exits |
| `0x0027BF80` | `0x58` | Direct E8 at `0x0027BFC9` to `0x0027C1A0`; dereferences EAX at `0x0027BFCE` |
| `0x0027C1A0` | `0xC0` | `MOV EAX,EDI` and `RET 4` at all three exits |

The six original exit windows start at `0x00279CA9`, `0x00279CE7`, `0x00279CF7`, `0x0027C209`, `0x0027C247`, `0x0027C257`. Signed `SETL` at `0x00279C63` contrasts with unsigned `SETB` at `0x0027C1C3`. This supports the signed four-byte `local_10` in the first caller while preserving the second caller's unsigned DWORD array. Direct-call displacement, body-digest, and return-window mutation controls reject changed evidence.

Recheck privately: `python3 scripts/verify_cpp_20261102_edi_return_xbe.py --xbe /path/to/user-owned/default.xbe`. The original XBE, extracted code, and assets are **not** committed.

## Bounded C++17 edits and remaining limits

The two callee drafts now return their already-written EDI output address through EAX on each of the three original exits. The two callers receive source-matched return declarations; the signed caller's stack word is typed `int` to match the original signed comparison. Original function entry labels, SHA-256 comments, calls, data writes, and guest-visible memory offsets remain unchanged.

Two complete caller files passed isolated Clang++17 syntax at `-O0` and `-O2`, with four `void`-return negative controls rejected. The callee drafts retain unrelated compiler failures; **no callee syntax pass, complete Xbox ABI, 1:1 runtime behavior, or native PC linkage is claimed**. Their implicit EDI/register provenance remains `ABI_UNVERIFIED`. Full exact-tree CI must finish before publishing new coverage.

Quarantine unresolved `0x00294B10` allocator/guest32 return state, `0x001FACD0` (nonreproducible contiguous body digest), `0x0016FB60` x87 output, `thunk_FUN_00237EC0`, `0x000A2840`, SEH, indirect dispatch, and vtable contracts. No demo content is introduced.
