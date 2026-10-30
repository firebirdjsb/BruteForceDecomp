# C++ call and bit-operation verification — original retail XBE (2026-10-30)

Original evidence: SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The source XBE remains outside Git. The facts below were checked against its original machine bytes, not inferred from a successful compiler parse.

| Entry/site | Original instruction evidence | Verified minimum | Still unresolved |
|---|---|---|---|
| `0x002EA01D` | `6A 01; FF 74 24 08; E8 A8 DC D7 FF; 59; 59; C3` | One incoming 32-bit stack word is forwarded to `0x00067CD0` followed by literal 1; two argument words are popped by caller; bare `RET` | Final allocator import implementation, guest memory, 32-bit host ABI |
| `0x00067CD0` | `8B 44 24 04; 50; FF 15 50 C6 3B 00; 83 C4 04; C3` | First stack word passed to indirect `[0x003BC650]` call; EAX is not overwritten after it returns | Actual imported allocator, failure behavior, full function signature |
| `0x00017027` | `E8 F1 2F 2D 00; 8B E8; 83 C4 04` | Direct call to `0x002EA01D`, save return EAX in EBP, caller removes one stack word; preceding `0x0001700F PUSH 0x18` | Host pointer translation; many other caller drafts are missing that stack argument |
| `0x002EA018` | `E9 D3 DB D7 FF` | Jump to `0x00067BF0`, which is `FF 25 54 C6 3B 00` (indirect tail jump) | Imported free target and native signature. Ghidra's label `thunk_FUN_00237ec0` is **not** proof of a call to `0x00237EC0` |
| `0x00015F41` | `E8 D2 40 2D 00` after `PUSH EAX` | A real caller invokes `0x002EA018`, not `0x00237EC0` | Which imported deallocator and its full behavior |
| `0x000120F0` | `83 EC 08; 33 C9; 89 4C 24 00; 8B 50 08` | Its original incoming object address is **EAX**, not a pushed normal C++ parameter | A native guest-register adapter and its callers |
| `0x00023134` | `5E B0 01 C3`; alternative `0x00023138: 5E 32 C0 C3` | The high 24 bits of EAX survive the low-byte AL set/clear; supports `CONCAT31` bit concatenation | Original x86 register value/ABI supplied by calling context |

**Do not fix the `FUN_002EA01D`, `FUN_000120F0`, or `thunk_FUN_00237EC0` mass diagnostics with a guessed global prototype.** Existing draft `0x002EA01D` incorrectly reports `void` although one inspected caller consumes the original EAX result. Some draft callers omit the original pushed size entirely. Reconciling the actual return representation and all register/stack contracts is prerequisite to declaring a host-facing function.

Ghidra's `CONCATxy` syntax helper is a pure integer bit splice for integral operands. It does not infer original program semantics or guest pointer storage. The new C++ helper intentionally fails when the operand is a host pointer or floating value so that those cases can be reconstructed from 32-bit guest address/IEEE754 evidence, not truncated by the host compiler.

No recovered class layout, virtual dispatch signature, or native PC gameplay is claimed.

## Caller memory and register contract — 0x00058D40 (2026-10-30)

The user-supplied original XBE was checked against its exact SHA-256. At
`0x00058D40` the original `PUSH 0x10` / `CALL 0x002EA01D` /
`ADD ESP,4` supplies the allocator size and preserves returned EAX.
`0x00058D4C` tests EAX against zero; only its nonzero branch stores
zero DWORDs at EAX+4, EAX+8 and EAX+0xC, in order. Both branches write the
original EAX bits through the **first** caller-pushed guest address.
`0x00058D5F/0x00058D75` load the **second** caller-pushed guest DWORD
into ECX and `0x00058D63/0x00058D79` copy allocation EAX to EDX;
`0x00058D65/0x00058D7B` call `0x001AAA90`.
`0x001AAAB1 MOV EDI,ECX; 0x001AAAB3 MOV ESI,EDX` independently
confirm consumption of the two incoming register words; original
`RET 8` consumes the two caller stack arguments.

The source deliberately delegates guest32 byte-address writes and the
register-entry call through **undefined external interfaces**. Tests supply
mock implementations and check order/values for both allocation branches,
not game behavior. Neither guest address translation nor the full SEH,
x87, object, allocator-import, or `0x001AAA90` runtime is implemented.
