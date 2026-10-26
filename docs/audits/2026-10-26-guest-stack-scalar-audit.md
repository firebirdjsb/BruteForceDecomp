# C11 recovery audit: guest stack and scalar layouts (2026-10-26)

**Source of record:** [Full C11 GitHub Actions run 40313981479](https://github.com/firebirdjsb/BruteForceDecomp/actions/runs/40313981479), `full-c11-inventory` artifact ID **12645299606**, audited `main` commit `bf0c577f5a54cfc589a65782bc6114b9212a0994`.

This is the last **completed full audit** at the time of this report. Later source/test commits must **not** be credited until a fresh full audit completes. Re-audit this table after each change. Do not interpret Clang syntax as instruction-by-instruction equivalence.

## Whole-repository C11 inventory

| Measurement | Completed audit |
| --- | ---: |
| Original source function drafts | 13,694 |
| Isolated Clang C11 syntax **pass** | 13,434 |
| Isolated Clang C11 syntax **fail** | **260** |
| Syntax coverage | **98.10%** |
| Missing original x86 source-body hash labels | 0 |
| Mismatched original x86 source-body hash labels | 0 |

The body-hash integrity check tracks canonical source provenance only; it does **not** prove 1:1 C behavior. Native PC build and gameplay are not yet verified or playable. Six other project phases receive no completion credit in the existing roadmap.

## First-error family classification — 260 functions

| Family | Distinct functions |
| --- | ---: |
| Unresolved Xbox guest-stack references | **114** |
| Float/pointer storage or conversion errors | **61** |
| Invalid scalar/member/structure access | **37** |
| Unresolved labels | 19 |
| Other unresolved symbols | 10 |
| Invalid array assignments (often SSE) | 9 |
| Other first compiler errors | 7 |
| Unresolved memory references | 2 |
| Invalid type use | 1 |
| **Total** | **260** |

Classification is by **first compiler diagnostic per function**. Repairs may uncover further independent defects. Original x86 body hashes, guest register mappings and full ABI correctness have not been comprehensively verified.

## Highest-value next families

1. **Guest-stack: 114 functions.** Trace guest `ESP` through prologue, pushes and calls to recover actual 32-bit argument/temporary aliasing. Reproduce the pointer-to-slot only if original operands prove its size and ownership. Some large, dynamically aligned frames (e.g. `0x001665C0`, `0x00232AD0`) cannot use a guessed host `&param_n`. Formatter variadics (`0x002EA9A9`, `0x002EAA86`) require an explicit 32-bit guest argument layout, not host contiguous parameters.
2. **Float/pointer: 61 functions.** A Ghidra `float` may be an overwritten 32-bit guest pointer or raw IEEE-754 bits. Differentiate `FSTP m32fp` from `MOV r32,[mem]`, verify original producer and consumer, and use `memcpy` where *bit copying* is required. A numeric float-to-pointer cast is not a replacement for a guest DWORD load.
3. **Scalar/member: 37 functions.** Trace the exact byte/word lanes (`MOVZX`, `MOV r/m8`, `MOV r/m16`), their predecessor writes and whether any higher bytes are defined. In `0x00155840`, the first-error low-word store may retain unspecified high bytes on one path; substituting an assumed zero-extended value is not yet justified. In `0x0028F610`, `[ESP+0x34]` receives only low-byte writes before a full 32-bit load in some paths; do not invent its high-word contents just to improve syntax counts.
4. **SSE/label families:** verify vector lane ordering, alignment, branch destinations and stack ownership before changing array assignments or introducing labels.

## Evidence-backed changes made after the initial 265-failure audit

- `0x0012F440`: status byte at guest `[ESP+0x0F]`; local high-byte extraction after original clear/set. Focused opcode regression `scripts/verify_0012f440_status_byte.py`.
- `0x00177D50`: x87 `FSTP m32fp` result is forwarded as raw 32-bit bits, distinct from pointer variable reused later. `scripts/verify_00177d50_x87_argword.py`.
- `0x00233F80`: `MOV EAX,[ESI+0x0C]` loads a guest interface DWORD, not a float. `scripts/verify_two_guest_pointer_word_loads.py`.
- `0x0023C1D0`: `MOV EBP,[EBX-4]` and `MOV [EDI+0x18],EAX` preserve an item pointer's raw guest DWORD. Same regression script.
- `0x002D56E0`: `MOV ECX,[EBX]; MOV EDX,[ECX]; CALL [EDX]` traverses original guest object/vtable words. `scripts/verify_002d56e0_guest_vtable_chain.py`.
- `0x001357B0`: an x87-produced float Y delta and its integer-copied DWORD are distinct from an unrelated list-iterator pointer. `scripts/verify_001357b0_float_lane_alias.py`. This later repair **is not included in the above audited counts**.

**Regression strategy:** check original opcode bytes privately against the supplied authentic XBE (guest VA to file offset = VA - `0x10000`), check scoped source invariants, run focused Clang C11 checks, then rely on a completed full repository Clang workflow for metrics. Do not check the copyrighted game image into the repository.

## Not yet verified

The native game still requires original x86 calling conventions, Xbox SEH and CRT, x87 return/rounding semantics, guest address translation, interfaces/linkage, kernel/XDK equivalents, render and input systems, and behavioral testing. Even source files passing the isolated syntax sweep are not certified 1:1 until these checks are completed.

**Next milestone:** at most **199** failures; from 260 this requires at least **61 additional** individually passing functions, with no regressions. Recompute from a completed full audit, not from a number of commits.
