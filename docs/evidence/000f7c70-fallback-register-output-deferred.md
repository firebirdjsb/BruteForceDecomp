# 0x000F7C70: remaining fallback output contract

Status: investigation handoff; no source repair or syntax credit in this batch.
The source contains upstream first-loop address corrections but still fails
at the remaining synthetic `stack0xffffffac` fallback argument.

The original XBE matches
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The contiguous 411-byte body at `0x000F7C70` hashes to
`B45DB82AACDE6146D99B320E0B8C30B0473B309A02C8C233833196B4C072C80A`.
The whole file and body were authenticated before this investigation.

Let S be entry ESP. `SUB ESP,0x50` and four saved-register pushes establish
T=S-0x60 immediately after the prologue. Let F be ESP at `0x000F7DAA`.
This investigation has not proved F=T through all preceding helper calls;
their cleanup must be checked before assigning incoming-argument identities.
Post-call F-relative identities below additionally require the virtual call
and following helper to restore the expected balance.

| Original instructions | Observed operand |
| --- | --- |
| `0x000F7DAA MOV EAX,[ESP+0x68]` | DWORD at F+0x68; its formal-argument identity still requires the preceding cleanup proof |
| `0x000F7DB6 PUSH EAX` | push that loaded word |
| `0x000F7DB7 LEA EAX,[ESP+0x20]`; PUSH | address F+0x1C |
| `0x000F7DBC LEA EAX,[ESP+0x18]`; PUSH | address F+0x10 |
| `0x000F7DC1 CALL [EDX+0x8C]` | three stack words; ECX separately contains the receiver from guest cell 0x00469AB4 |
| `0x000F7DC7 MOV EAX,[ESP+0x10]`; TEST | consumes the post-call stack DWORD, conditionally F+0x10; this is not an independent incoming EDI value |
| `0x000F7DDA/0x000F7DDE` | after the next helper, reload stack DWORDs at offsets +0x10 and +0x1C |
| `0x000F7DE2..0x000F7DF3` | address the then-current ESP+0x64; after PUSH copy into ESP+0x68 and ESP+0x1C; EBX separately takes the latter address |

If F=T, both fallback addresses fall inside the original 80-byte allocation.
Neither that relationship nor their readable/writable extent and initial-state
requirements are established by LEA alone. Earlier calls to `0x0005C2F0`
and `0x0005C3C0` receive stack addresses through implicit registers that their
current C calls do not transport. Possible aliasing with earlier and later
temporaries must be checked; separate guessed locals could lose those values.

Do not replace the ghost with an arbitrary initialized DWORD or independent
scratch array. Recover the producing helper/import interfaces, frame aliases
and complete fallback packet first. Then connect the actual output reads,
prove which later addresses belong to caller-owned words or locals, and review
`0x001E97C0`/`0x0010C660` register transport before claiming native linkage.

The original byte facts are retained for the next agent. No new output size,
structure, receiver prototype or zero value is inferred. Source, entry/body
labels and inventory syntax status remain unchanged by this investigation.
No game code, import, installation or production data was executed or changed.
