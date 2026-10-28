# 0x001E4E30 — one original guest-stack output DWORD (2026-10-28)

**Scope:** authenticated one-slot original-output repair, not complete Xbox virtual-dispatch or runtime verification.

## Original provenance

- Original user-owned Xbox XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Function `0x001E4E30`, **815-byte contiguous original function body**: SHA-256 `925663FE25ABAFA5F1CA8C0D3CD6710CBF1A7302A0B202B9863C8E5239F916AB`. Both were verified against the supplied original binary on 2026-10-28.
- The original prologue `SUB ESP,0x7EC; PUSH EBX; PUSH EBP; PUSH ESI; PUSH EDI` establishes a stable original guest ESP `S=E-0x7FC`, where `E` is function-entry ESP.

The virtual-call sequence at `0x001E4FA8..0x001E4FC4` establishes precisely one output pointer and subsequent read:

| Original address | Instruction | Meaning |
|---|---|---|
| `0x001E4FAE` | `LEA ECX,[ESP+0x1C]` | Take address of original guest output DWORD `S+0x1C` |
| `0x001E4FB2` | `PUSH ECX` | Pass pointer as the last original stack argument |
| `0x001E4FB3` | `PUSH 0x20C` | Request 524 bytes; unchanged in the draft |
| `0x001E4FB8` | `LEA ECX,[ESP+0x3F0]` | Existing buffer pointer after two pushes |
| `0x001E4FBF..0x001E4FC1` | `PUSH ECX; PUSH EAX; CALL [EDX+0x10]` | Existing receiver and virtual call slot |
| `0x001E4FC4` | `CMP DWORD[ESP+0x1C],0x20C` | Test that **same four-byte output**, after callee stack cleanup |

The original 4-byte output is **not initialized by the caller** before the call. The C draft's `&stack0xfffff80c` represented an unresolved stack pseudo-address at this call, and its subsequent `unaff_EBP == 0x20C` compared an unrelated, uninitialized host pseudo-register instead of the output. This is a producer/consumer alias, not a new incoming parameter.

## Narrow C11 source correction

The existing virtual call now takes `&bytes_read_word` to a declared `undefined4` local; the subsequent comparison reads `bytes_read_word`. The original `0x20C` request, existing caller buffer, next two compares, cleanup, and all other behavior are unchanged. No zero initialization, host stack synthesis, new runtime mapping or function prototype is fabricated.

The source's original x86 body digest and `ABI_UNVERIFIED` label remain unchanged. A host C11 syntax pass, if observed by the full audit, certifies **syntax only**. The unknown virtual-call implementation, original guest address translation, output production on all fault paths, original Xbox runtime behavior and native PC linking remain unverified.

Private original XBE data and executable bytes are not committed.
