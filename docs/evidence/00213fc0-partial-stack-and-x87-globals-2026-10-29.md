# 0x00213FC0 original Xbox C11 repair — 2026-10-29

Original user-provided `default(2).xbe` SHA-256:
`b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.
Original Ghidra source body hash label remains
`5960A7F26C6E258994270C35B44EDDB96E0897DF24D6F3C070CDB0F7E56D95D7`.

| Original VA | Original instructions | C11 correction |
|---|---|---|
| `0x0021409D` | `88 4D EC` = `MOV BYTE [EBP-0x14],CL` | Store only the low 8 bits in the original local; do not clear its high three guest bytes |
| `0x002140A9` | `8B 45 EC` = `MOV EAX,DWORD [EBP-0x14]` | Confirm this later read uses the complete original guest word, not a zero-extended CL |
| `0x002140F6` | `D8 0D 68 70 40 00` = `FMUL m32fp [0x00407068]` | Declare the global's operand as 32-bit float, not a pointer |
| `0x00214122` | `D9 05 64 70 40 00` = `FLD m32fp [0x00407064]` | Declare the global's operand as 32-bit float |
| `0x002141AF` | `68 10 37 1F 00` = `PUSH 0x001F3710` | Preserve original callback code identity through external symbol |
| `0x001F3710` | `8B 44 24 04 8B 4C 24 08` | Callback consumes its two original guest-stack inputs; no host ABI assumed |
| `0x00214401` | `8B 1D 88 DD 37 00` = `MOV EBX,[0x0037DD88]` | Source external is a guest pointer-valued global for D3D command cursor |

`scripts/verify_00213fc0_partial_store.py --root . --clang`
checks the corrected source under the inventory's isolated C11 compiler
flags. With a private `--xbe` argument it independently verifies the
whole-file XBE digest and the original opcode windows. The XBE remains
outside GitHub.

The focused GitHub Actions run `40966018434` passed at commit `ced17194`;
the expanded seven-window source verifier passed at
`40966248437`.

**Scope:** The original C11 draft now parses in the project's isolated
Clang configuration. This does NOT prove complete guest-stack lifetimes,
32-bit pointer/address translation on an x64 host, the graphics command
buffer's native layout, callback ABI, Xbox SSE/x87 rounding and exception
parity, cross-function linking or a playable PC game. The partial byte
write is intentionally not widened: doing so would change an original
machine-code side effect. The source is intentionally not labeled a
behaviorally verified 1:1 entire function.

The total syntax count should be updated only after the completed
repository-wide audit, not from this isolated check.
