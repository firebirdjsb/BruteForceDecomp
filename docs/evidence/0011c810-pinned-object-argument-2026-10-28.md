# 0x0011C810 — pinned original-object argument correction (2026-10-28)

## Independent original-byte check

- Original user-owned XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x0011C810`, contiguous original body length **647 bytes**, original ordered body SHA-256 `A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255`. Both hashes were independently verified against the user's original XBE for this repair.
- Original `SUB ESP,0x88; MOV ECX,[ESP+0x8C]; ...; PUSH ESI` takes the sole incoming object argument. With `S` defined as guest ESP after the push, that original argument resides at `S+0x90`.
- The same input word is reloaded at `0x0011C893` (`MOV ECX,[ESP+0x90]`), `0x0011C8AE` (`MOV ESI,[ESP+0x90]`), `0x0011C966` (`MOV EDX,[ESP+0x90]`), `0x0011C977` (`MOV ECX,[ESP+0x90]`), and `0x0011C986` (`MOV EDX,[ESP+0x90]`). The `0x0011C8B5` instruction reads `[ESI+0x6C]`.

## C11 draft repair

The original draft already receives the object as `param_1` for the first virtual dispatch, but mistakenly uses uninitialized Ghidra pseudos `unaff_retaddr` and `iStack_4` for the second dispatch, object data, forwarded scalar-call argument and the three `+0x7B0/+0x7B4/+0x7B8` stores. All these reads and writes originate from **that same incoming object DWORD** in the authenticated original instructions.

Those source expressions now use `param_1` consistently. No object, frame, extra arguments or synthetic values are introduced. Existing arithmetic, call expressions, original body-hash label, and explicit `ABI_UNVERIFIED` state remain intact.

## Verification boundary

This is a narrow original-operand-to-C-source provenance repair, **not an additional C11 syntax pass**. The draft still contains pointer-to-float cast failures and still lacks a connected original guest stack, original indirect virtual-call targets, and correct source integration for `FUN_0001D0C0` and `FUN_0012B2A0`; x87 status/rounding and whole-function 1:1 runtime behavior are unverified. Do not increase the published syntax or overall-completion percentages until a new complete audit demonstrates a passing source. See `0011c810-original-tail-and-caller-repair-gate-2026-10-28.md` for those outstanding gates.

The original binary stays outside this public repository. Its complete bytes and private disassembly were neither committed nor included in this evidence note.
