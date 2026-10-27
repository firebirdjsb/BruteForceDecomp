# 0x001E48E0: caller-owned argument words used as file and read-count outputs

Status: **instruction-verified handoff; no source repair authorised yet**.

The private original `default(2).xbe` was authenticated by full SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The original decomp body embedded digest remains:
`8866BEFBCD5D7EE5C9642B87D1105CD829F3530B3AC7F3DB41BCA78028975D1F`.

## Original stack coordinates

Let `S` be entry ESP. Original code executes `SUB ESP,0x0C`,
`PUSH EBP`, `PUSH ESI`, `PUSH EDI`, leaving stable `ESP=S-0x18`.
An additional `PUSH EBX` at 0x001E494F changes ESP to `S-0x1C`
in the fallback branch.

| Instruction | Observed original behavior |
| --- | --- |
| 0x001E48E4 `MOV EBP,[ESP+0x14]` | copies the first incoming guest DWORD at `S+4` for use as the 52-byte result-buffer address |
| 0x001E4917 `MOV [ESP+0x2C],ESI` | zeroes the first incoming guest DWORD `S+4`, not an unrelated local |
| 0x001E4949 `MOV AL,[ESP+0x20]` | reads the low byte of the second incoming guest DWORD `S+8` |
| 0x001E495E `MOV [ESP+0x24],EDI` | writes the original sentinel `0xE0C43D05` into `S+8` |
| 0x001E4975 `LEA EDX,[ESP+0x20]` | addresses first incoming guest DWORD `S+4` (file-interface output) |
| 0x001E497A `LEA EDX,[ESP+0x28]` | after one PUSH, addresses second incoming guest DWORD `S+8` (read-size/sentinel output) |
| 0x001E497F and 0x001E498A | passes access flag `0x80000000`, then calls original interface vtable at byte offset `+0x0C` |
| 0x001E49A3 `CMP [ESP+0x24],0x34` | checks the second incoming guest DWORD after the file read for precisely 52 bytes |
| 0x001E4A5F `RET 8` | **two** guest stack DWORDs are callee-popped, not one |

All twelve opcode windows were compared byte-for-byte against the authenticated XBE.

## Why this is deferred

The current draft `src/main_unclassified/band_001e/0x001e48e0.c`
has a one-parameter signature, a synthetic `&stack0xfffffff0` and
misassociated locals `local_c`, `puStack_1c`, `local_8` and `param_1`.
Simply replacing the ghost with `&local_c` or an arbitrary four-byte local
would **erase the original caller-owned writable argument protocol**.
The original first incoming argument is simultaneously saved in EBP as
the destination buffer and overwritten as a file-interface handle. The
second incoming DWORD is reused as a flag, sentinel and returned byte count.
The two virtual `+0x0C` opens, virtual `+0x10` reads and virtual `+0x08`
release must be traced together, including call-site ownership and
callee stack cleanup.

Next safe repair: find every original x86 caller of 0x001E48E0; recover
how it provisions `S+4` and `S+8`, then reconstruct a 2-DWORD guest
entry adapter without exposing writes into an unrelated native caller
frame. Verify both return branches and resource releases before changing C.
A host Clang syntax pass alone is not evidence of 1:1 Xbox behavior.

This is an original-instruction contract note, **not a successful syntax
repair or a native Windows/Linux/Android ABI implementation**.
