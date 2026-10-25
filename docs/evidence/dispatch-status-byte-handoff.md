# Dispatch status-byte repair handoff

Baseline: main `285f31a6`, successful full audit `40228259038` of
`0a6459bac01ea7fbb6472d8665ee3a50a5c44ae1`: 13,372 passing, 322 failing,
13,694 total. These are syntax metrics, not original-game equivalence.

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The original/source body digests and instruction windows are pinned in
`scripts/verify_stack_storage_repairs.py`; route sources through
`tools/source_layout.py`.

## 0x001F8C90

Compiler failure: invalid pointer subpiece assignments. Body: 280 bytes,
`AF6D003D928DE65FDE56B9138C3A5CDE5961EAA0A9F29EAF6A6FFA227C0C67A8`.
SUB ESP,0x34 and four register saves place incoming argument two at ESP+0x4C
(entry ESP+8). EDI saves the original pointer before the AL store at 0x1F8CAF.
0x1F8CD3 writes the same byte; 0x1F8D2D compares only that byte. 0x1F8D48
passes its address to 0x1FAF20; 0x1F8D69 reloads the byte while 16 argument
bytes remain pending. Preserve the remaining bytes and the saved pointer.

## 0x00202F40

Compiler failure: invalid pointer subpiece assignments. Body: 285 bytes,
`320CB01D45AE02FDBF082D43FA39528FC938D04D609B4D392D64629472DBA284`.
Four saved registers place incoming argument three at ESP+0x1C (entry ESP+12).
EBP saves its original pointer. 0x202F5C stores AL, 0x202F80 stores byte 1.
0x202F95 supplies ESI with this slot address while 20 argument bytes are pending;
0x202FA8 reloads the byte. 0x203024 reloads the same byte with 40 argument bytes
pending. The draft still omits this implicit ESI input to 0x000EE560.

## Scope and next work

Use byte object-representation stores/loads instead of treating a pointer as
an integer status or inventing a structure member. Do not zero the whole slot.
The inherited drafts contain additional synthesized stores and incomplete
calls; this patch only repairs their status-byte representation. Host pointer
storage is not a complete guest32 stack model. Full Level C interfaces and
Level D behavior remain unverified, including ECX object input, 0x0006EB80,
0x001FAF20 and 0x000EE560 implicit registers, and callback signatures.

Focused Clang C11 checks pass for i686 and x86_64 Windows targets. The byte
verifier passes 34 body digests and 113 instruction windows. This establishes
Level A and limited Level B only. Continue by recovering these helpers and
callers before claiming either complete function is faithful or playable.
