# 2026-10-31 — three C++17 caller-output syntax repairs

## Scope and provenance

- Starting source audit: exact-tree `1f8f8ccc238a4507b76411c02cde709ba157c7df`, workflow [41186295926](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/41186295926), 3,342 / 13,694 syntax passes, 10,352 failures, no reported provenance errors.
- Repair staging base: `3caf28df07935520e0d3ef07bdd6c4d566a692a9` (progress-only descendant of that audited source tree).
- Original retail XBE SHA-256 independently rehashed: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Original binary was **not** committed.
- All five original function-body SHA-256 labels below were independently matched to original XBE bytes: `0x000577C0` (199 bytes), `0x00057610` (288), `0x0005E1E0` (54), `0x0005E600` (98), `0x0005EB60` (87). Original function-body comments and entry addresses remain unchanged.

## Direct call and output evidence

| Caller CALL VA | Callee | Original cleanup | Output evidence |
| --- | --- | --- | --- |
| `0x00057801`, `0x0005781E` | `0x00057610` | callee `RET 16`; caller `RET 12` at `0x00057884` | Callee writes one byte through each of three pushed output pointers. First caller call points to the low byte of its third incoming guest stack word; preserve upper bytes. |
| `0x0005E20A` | `0x0005EB60` | callee `RET 8`; caller `RET 4` | Caller passes a pointer to its four-byte stack output slot; callee writes a full DWORD through the first argument. |
| `0x0005E62A`, `0x0005E65A` | `0x0005EB60` | callee `RET 8`; caller plain `RET` | Both caller paths pass the address of a four-byte stack output slot. |

Every recorded call was independently checked as an `E8 rel32` instruction with its decoded target. Ten negative controls (opcode replaced, or rel32 low byte flipped) were rejected. The callee `0x00057610` also has `RET 16` at `0x00057660` and `0x000576D5`; `0x0005EB60` has `RET 8` at `0x0005EBB4`.

## Source edits and syntax gates

- `0x0005E1E0.cpp` and `0x0005E600.cpp`: add a source-matched declaration for `FUN_0005eb60(int*, int)`, and represent the existing four-byte local output as `int` rather than `undefined1[4]`. Both original CALL paths write a full four-byte output, and the original source bodies are otherwise unchanged.
- `0x000577C0.cpp`: add the source-matched four-argument declaration of `FUN_00057610`; use unsigned-byte storage for five byte-sized locals and an unsigned-byte pointer to the low byte of the third guest stack word. This is a byte-aliasing syntax fix, **not** a recovered native calling convention.
- The original Git blobs of all three caller files and the original `bf_ghidra_types.h` were matched exactly before editing. After editing, isolated `clang++ -std=c++17 -x c++ -fsyntax-only -ferror-limit=3 -I include` passed for all three files; separate `-O0` and `-O2` syntax checks also passed. Remaining compiler warnings about guest integer-to-pointer casts in two files were **not** suppressed.
- These are three isolated syntax-pass candidates. A new complete exact-tree audit is required before crediting any global syntax delta or updating README progress.

## Unverified boundaries and quarantine

Guest EAX/ESI/EBX inputs, guest stack identity, host 32/64-bit pointer translation, cross-function linkage, virtual dispatch and original game behavior remain **ABI_UNVERIFIED**. No new class layout, game semantics, host pointer truncation or platform API is claimed.

The `0x000230A0 -> 0x00023010` draft call was inspected but **not** repaired: although a direct original CALL and `RET 8` are visible, the available callee body-digest representation did not reproduce its source label in a simple contiguous byte span. The `0x00038C30 -> 0x00039270` draft has a two-versus-three argument mismatch. Both require further instruction/body-boundary and register/stack review rather than a guessed prototype.
