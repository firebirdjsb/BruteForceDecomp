# 0x0034BD47 reused DWORD comparison

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original body: 472 bytes, SHA-256
`FBA8DA494E65B869D42F6BB90D71D1BFFA3330D9F6068ED85E2029896E957D73`.
The body and instruction windows are checked by
`scripts/verify_stack_storage_repairs.py` using original XBE section mapping.

0x34BD4E saves the incoming pointer from [EBP+8] in EDI. 0x34BD77
loads a DWORD from [ESI+0x10] into EDX (the draft's iVar13); 0x34BD8A
stores that entire DWORD into [EBP+8]. 0x34BE3C then compares BYTE [EBP+8]
with 0x7F. The erroneous Ghidra pointer subpiece assignment is replaced by
an unsigned low-byte comparison of iVar13, leaving saved-pointer uses intact.
This does not infer new protocol meaning or alter any external connection.

The local change establishes only the compared value and width. Existing
ECX/helper contracts, guest memory translation, other bitfields and full
function behavior remain unverified. No full native ABI or runtime claim.
Focused C11 checks use the repository sweep flags on i686/x86_64 Windows.
