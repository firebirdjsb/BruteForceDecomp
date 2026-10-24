# Three original x86 partial-byte operations

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
`scripts/verify_xnet_dsound_partial_bytes.py` validates section-mapped
instruction windows, full original body digests and source provenance.

| Entry | Original evidence | Bounded C11 correction |
| --- | --- | --- |
| 0x0031b3c5 | `0x0031b46d: LEA EAX,[EBP+0xf]` passes one output byte to 0x0031b31f; `0x0031b47d: XOR BL,[EBP+0xf]` consumes it | Read byte 3 of the existing four-byte parameter storage |
| 0x00349b99 | `0x00349c27: MOV BYTE [ESP+0x10],AL`; `0x00349c9b: MOV CL,[ESP+0x10]` | Write only byte 0 of the existing local; preserve the other three bytes |
| 0x00350cd7 | `0x00350cf5: MOV AX,[ECX+0xa36]`; `0x00350cfd: MOVZX BX,AH`; `0x00350d01: MOV BH,AL`; `0x00350d0e: MOV WORD [EBP-0x1a],BX` | Read the word once and store its swapped low two bytes without reading the local's unknown upper half |

Each draft failed the repository's isolated Clang C11 syntax check before
this change and passes afterward on Windows x86 and x64. Independent review
approved only these changed operand/storage expressions (Level A and limited
Level B). Existing implicit register inputs, guest stack adjacency, integer
to host-pointer conversions, external function prototypes and linked behavior
remain unverified. In particular, the final call in 0x00349b99 still does not
convey its observed CL input through the C ABI. No complete Level C or D is
claimed. The source entry addresses and original body digests are unchanged.

The latest upstream review also checked the changed expressions in
0x002eca9e, 0x002ecb23, 0x002f01a2, 0x002f1bfa, 0x0001c630 and
0x0001c980. No new mismatch was found in their reviewed integer field/shift
operations. This is a bounded review, not certification of all 267 new
commits: 0x002eca9e's original x87 load/store may affect signaling NaNs or
exception state unlike a raw C copy, and the SEH frame/handler semantics in
the last two drafts remain unmodeled.
