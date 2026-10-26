# 0x001FEDB0 reused incoming flag word

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original body: 514 bytes, SHA-256 `A6BDA7FEDEB2E8341086F009E700B8E78E8809C5DECDE54662D1634CCE27D541`.

At 0x1fedb6, EBP saves the incoming second argument pointer. After four
register saves, its original slot is ESP+0x18 (entry ESP+8). The original
stores AL to that byte at 0x1fede3, initially zero on the branch being repaired.
Subsequent flag writes at 0x1fee0a, 0x1fee3d, 0x1fee72, 0x1feea6,
0x1feeda, 0x1fef12 and 0x1fef4e affect only this byte. The remaining bytes
are not cleared. The C draft retains the saved pointer in piVar2 and uses
existing byte representation helpers to replace decompiler subpiece syntax.

At 0x1fef1e and 0x1fef55, after one DWORD push, LEA ESP+0x1c obtains
the same slot address for the existing helper calls. At 0x1fef7a, before
removing eight pushed DWORDs, MOV AL,[ESP+0x38] reloads the flag.
The later MOV AL,1 at 0x1fef9b changes the return byte only; the draft's
separate cVar7 assignment is retained, with no extra stack write.

Scope: byte reads/writes and their existing address aliases only. The host
pointer-sized draft slot is not a complete guest stack implementation. The
implicit EAX input to 0x20d220, ECX object input, helper contracts, other
bitfield expressions and runtime behavior remain unverified. Both focused
i686 and x86_64 checks use the existing sweep flags; syntax does not prove
complete interfaces or behavior. Original body and instruction windows are
pinned by scripts/verify_stack_storage_repairs.py.

Independent review approved these byte operations against the pinned
instructions. Both i686 and x86_64 focused syntax checks passed. Verified
levels: A and limited B; full C and D remain unverified.
