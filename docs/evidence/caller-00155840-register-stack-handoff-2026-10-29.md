# 0x00155840 register and stack handoffs — original XBE, 2026-10-29

Evidence source: user's original Xbox `default.xbe` SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`; section 0 code VA maps to file offset VA - 0x10000. This ledger contains limited original instruction windows, not copied executable data. Status: **instruction operands verified; full calling interface, native linkage, and behavior unverified**.

## Call 0x00022BC0 at 0x00155962

| Caller VA | Instruction | Established contract |
| --- | --- | --- |
| 0x00155951 | `mov esi,[ebp-0x8]` | ESI = guest pointer held at caller frame -0x8 |
| 0x00155954 | `lea eax,[ebp-0x4]` | EAX temporarily addresses caller's output stack word |
| 0x00155957 | `push eax` | One explicit stack pointer argument, pointing at [EBP-4] |
| 0x00155958 | `lea edi,[ebp-0x68]` | EDI = caller's local vector/output region |
| 0x0015595B | `mov dword ptr [ebp-0x5c],0x3f800000` | Initialize float 1.0 at local offset +0x0c |
| 0x00155962 | `call 0x00022bc0` | ESI, EDI, and argument pointer consumed by callee |
| 0x00155967 | `test al,al` | Low return byte controls branch |

The original callee uses ESI, EDI and the incoming stack pointer argument; verified early path has `ret 4`. Its output includes three DWORDs at EDI+0, +4, +8 and one DWORD through the explicit pointer. The other callee path and all register preservation require a complete review. Existing C draft `FUN_00022bc0(&local_8)` **does not bind ESI/EDI**. The actual ESI producer is the value saved in caller [EBP-8], not an invented host register global.

## Call 0x000621C0 at 0x00155A92

| Caller VA | Instruction | Established contract |
| --- | --- | --- |
| 0x00155A7E | `mov ecx,[ebp+0x8]` | ECX = caller's explicit argument |
| 0x00155A81 | `mov eax,[ecx+0x48]` | Virtual table/code pointer |
| 0x00155A84 | `add ecx,0x48` | Virtual-call this pointer |
| 0x00155A87 | `call dword ptr [eax+0x14]` | Virtual result returned in EAX |
| 0x00155A8A | `mov ecx,eax` | ECX = returned 12-float transform pointer |
| 0x00155A8C | `lea edx,[ebp-0x68]` | EDX = three-float source |
| 0x00155A8F | `lea eax,[ebp-0x2c]` | EAX = three-float destination |
| 0x00155A92 | `call 0x000621c0` | Register-only transform call |

Original callee reads ECX offsets 0..44 (12 float words), EDX offsets 0..8 (3 float words); writes EAX offsets 0, 4, 8 (3 float words), and returns with `ret`. The source's `FUN_000621c0()` has **no explicit bindings** for these registers. Do not infer that host C float multiplication plus addition has identical x87 rounding/order.

## Stack extent and aliases

Caller [EBP-0x68] is the vector source and later the start of a 12-DWORD contiguous copy at `0x00155D45 rep movsd` (48 bytes, ending at [EBP-0x3c]). Caller [EBP-0x2c] is a separate three-float transform result. The overlapping decompiler local object declarations cannot be treated as individually allocated host objects without explicit offsets and lifetime analysis. The source's `local_6c[5]` is insufficient as the contiguous 48-byte transfer region, while individual `local_58` etc. may not occupy original offsets.

## Required next source gate

1. Recover the complete caller frame writes and reads for -0x68..-0x3c, including whether all 48 bytes are initialized on the paths that upload them.
2. Establish the destination of the original twelve-word `rep movsd` and subsequent D3D call's relevant register state.
3. Introduce explicit call-site operation interfaces without changing original `FUN_` entry semantics or assuming ordinary C ABI applies to x86 register calls.
4. Verify partial writes, x87 precision/rounding, and relevant volatile register preservation independently.
5. Run focused Clang C11 and full-tree audit at the exact commit, then count syntax improvements separately from reviewed semantics.

No caller/callee source behavior is marked 1:1 by this evidence alone.
