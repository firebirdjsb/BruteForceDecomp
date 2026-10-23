# Original x86 DWORD-lane syntax repair ledger — 2026-10-23

## Authority and limits

Original retail-Xbox Brute Force XBE identity: SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

This batch normalizes **Ghidra C-draft** scalar subpieces, **not original disassembled x86 opcodes**. Ghidra's `value._1_3_` and `value._2_2_` reflect little-endian byte ranges of an already-typed four-byte word. A host C11 scalar has no such pseudo-members.

The new pure `include/bf_x86_word_lanes.h` provides bit-exact preservation of the untouched high bits for **initialized 32-bit unsigned words** only. `tools/test_x86_word_lanes.c` tests the C lane operations, including high/low preservation and 65,536 indexed inputs. A successful C syntax or helper test does **not** prove original machine-code fidelity, x87/SSE state, calling conventions, or native-PC behavior.

## Precisely scoped caller repairs

| Entry | Previously unrepresentable Ghidra C draft | Source-level equivalent |
|---|---|---|
| `0x000ECFE0`, `0x000EDEA0`, `0x000EE020`, `0x001F9D40`, `0x001FF870`, `0x0020A400`, `0x003554BB` | `CONCAT31(param_3._1_3_, byte)` | Preserve upper 24 bits of incoming `uint32_t param_3` and insert the returned low byte |
| `0x000C2550` | `param_1._0_1_ = 1/0` | Preserve incoming parameter's high 24 bits, replace low byte |
| `0x0010D9D0` | `CONCAT31(param_1._1_3_, 1)` | Preserve high 24 bits of existing masked `param_1`; low byte becomes 1 |
| `0x0034470A` | `param_2._0_1_ = (byte)uVar1` | Preserve remaining bits of the source `param_2` |
| `0x0006E7F0`, `0x00155450` | `CONCAT22(global._2_2_, low16)` | Preserve high 16 bits of a draft `uint32_t` global and replace low 16 bits |
| `0x00350C50` | `CONCAT11(lowbyte(param_2), secondbyte(param_2))` | Construct the exact 16-bit ordered byte pair without invented structure fields |
| `0x002F0937` | `CONCAT13(local_14._3_1_, 0x10000)` | Preserve initialized local's upper byte and replace low 24 bits |

The source revisions only substitute the indicated expressions and add a checked header include. Embedded original x86 body-hash labels remain unchanged. Only `main` is an active source branch.

## Deliberate exclusions

- **Uninitialized stack fields:** `0x00043470`, `0x000874A0`, `0x000AA3B0`, `0x001056F0`, `0x0010DE90` and related functions may refer to prior stack bytes or overlapping stack records. Do not replace these with unverified initialization, fabricated `struct` members, or guesses about high bytes.
- **Original ABI:** Unknown `stack0x...` inputs and `in_ECX`/`in_EAX` register values must be recovered from original disassembly and callers before converting to normal C parameter lists.
- **Indirect calls:** A draft `uint32_t` stored function address is **not** a native 64-bit pointer. Do not silence invalid indirect calls by fabricating callable pointer signatures.
- **Floating point:** Numeric `float` conversions and IEEE-754 bit transfers are different operations. Do not rewrite invalid pointer/float casts until original x86 transfer opcodes and lane origins are identified.
- **Global identity:** A syntax-passing `extern` is not a storage definition, memory relocation, ABI proof, or linkable implementation.

Follow the REA evidence-first procedure: reconstruct original instruction bytes, access widths, register/stack inputs, caller contracts and effects; cross-compile 32-bit; add behavior tests; only then upgrade a function to verified. **These fourteen functions are still C11 drafts, not 1:1-verified reimplementations.**
