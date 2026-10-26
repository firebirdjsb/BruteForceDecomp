# 0x003526E9 incoming two-byte word

Pinned XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original function: 0x003526e9..0x00352e25, 1,853 bytes, body digest:
`F36960686064ABAF3099A385AF93BB14E788F25BC4D11431294D6D6827071614`.

The original establishes EBP at entry. The second incoming DWORD is at
EBP+0xc. At 0x3527c1 MOVZX CX,BYTE [EBP+0xd] loads its byte one into
CL, clearing CH; 0x3527c6 MOV CH,[EBP+0xc] fills CH with byte zero.
The low word is therefore (byte0 << 8) | byte1. INC ECX at 0x3527d0
increments it. MOVZX AX,CH and MOV AH,CL at 0x3527d2/0x3527d6 swap
the low word back before the helper call at 0x3527dc. The preceding
XOR EAX,EAX at 0x3527ba establishes the high half of EAX before the
16-bit moves and pushes. The original second argument slot has no writes
before these byte reads; later source lifetimes reuse it separately.

Only the two invalid decompiler subpiece expressions are replaced. Existing
byte representation helpers read lanes zero and one directly from the
incoming parameter object; the existing increment and final CONCAT11 are
retained, including the low-word carry/wrap behavior. This does not infer
protocol names or establish that the draft pointer-typed parameter is a
complete native ABI representation. Later cursor reuses, other memory/field
semantics, helper interfaces and runtime behavior remain unverified.

Independent review confirmed the original operand order and no preceding
write to the incoming slot. The body and five instruction windows are pinned
by scripts/verify_stack_storage_repairs.py. Both focused target checks pass
using sweep flags, with the two existing pointer-order warnings retained.
Verification is A and limited B; no full interface/runtime claim.
