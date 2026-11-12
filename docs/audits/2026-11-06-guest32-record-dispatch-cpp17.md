# Guest32 record dispatch: two bounded original-XBE-backed C++17 drafts

## Scope and instruction evidence

The independently authenticated retail Xbox XBE has SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The exact original function-body digests are:

| Original function | Original body bytes | Original SHA-256 |
|---|---:|---|
| `0x00012540` | 22 | `17ECDF624151AA6A24020748FA3D463DCB4EB707EA1E78CB6D33999629EE9522` |
| `0x0001D470` | 74 | `9D9A8EBA1FF910609ABDE98C000B99E3AE58251E5FFEDCEE9E1768D7710C511E` |
| callee `0x0008F6E0` (unchanged) | 61 | `C83564B5BD0C213EA1598C92023CBE67820B89831FC3F077EBE732522791C80E` |

At `0x12540`, `LEA EDX,[ECX+0x10]` precedes the guest DWORD store
`MOV [ECX],0x003A4F68`. The next `MOV EAX,[EDX+4]` controls a conditional
`JMP 0x8F6E0` at `0x12550`; the other branch ends in `RET` at `0x12555`.
The host-side `guest_ecx` argument is an **explicit live-register model**, not
an original C++ argument or recovered Xbox calling convention.

At `0x1D470`, memory at guest offsets `+0x58`, `+0x3C`, `+0x28`, and
`+0x14` is checked in that order. `EDX` is produced by `LEA` of guest
`ESI+0x54`, `ESI+0x38`, `ESI+0x24` and `ESI+0x10` respectively. The
nonzero branches at `0x1D47A`, `0x1D490`, and `0x1D49F` are direct **CALL**
transfers to `0x8F6E0`. The fourth at `0x1D4B4` is a **JMP**, not CALL.
Stores to guest addresses `[ESI+0x1C] = 0x003A4F64` and
`[ESI] = 0x003A4F68` occur between those checks in their original order.

The existing `bf_xbe_guest32_record_model.h` already declares the guest-VA
read/write interface and the callee's host-side `guest_edx` adapter. The
repaired files use only that already-declared interface. In particular, no
native pointer/address truncation, guessed data-member declaration, class,
callback, or missing runtime implementation is introduced.

## Tests, controls and limitations

`python3 scripts/verify_20261106_guest32_record_drafts_xbe.py --xbe PRIVATE_XBE`
verifies the pinned entire XBE, three complete original-body byte ranges,
25 narrow original-instruction windows and five original E8/E9 destination
transfers. It runs 253 negative mutation controls. This private gate is not
called by public CI; the retail XBE must remain outside the repository.

`python3 tools/test_cpp_20261106_guest32_records.py` compiles the actual
repaired `.cpp` translation units at Clang C++17 O0 and O2. Synthetic, isolated
mock guest memory checks 8,192 initial states per function for original
read/write/call ordering, including nonzero branches and 32-bit address wrap.
Three deliberately wrong offset substitutions must fail the same fixture.
The callee mock **only records dispatch**; it does not simulate callee memory
side effects. These tests therefore do not verify full-game behavior.

Existing original entry addresses and original body hashes remain unchanged.
The original `0x8F6E0` implementation is **not** linked into an Xbox runtime;
full guest VA mapping, actual register and stack entry/exit ABI, tail-call
return semantics, callee/caller integration and game behavior remain
**ABI_UNVERIFIED**, **CROSS_FUNCTION_UNVERIFIED** and **BEHAVIOR_UNVERIFIED**.
The strict host C++17 syntax pass is not a binary-identical rebuild.
