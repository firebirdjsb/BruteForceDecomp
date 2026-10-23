# Continued Brute Force original-XBE C11 repair pass — 2026-10-23

All fixes were committed directly to the canonical `main` branch and preserve the original function entry-address filenames and embedded original-body SHA-256 labels. Original input identity is SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` for the user's original Xbox `default.xbe`. Neither the XBE nor game assets are committed.

## Scoped original-instruction observations and source changes

| Xbox entry | Original instruction evidence | C11 syntax repair | Remaining uncertainties |
| --- | --- | --- | --- |
| `0x0006C840` | `0x0006C9C6` and `0x0006CAA3` are x87 `FCHS` operations; `0x0006CA98` also changes the sign of an x87 value. **No** original float increment/decrement at those locations. | Replace Ghidra's invalid `--fVar1` and `--(float)fVar3` with explicit unary sign operations. | x87 intermediate precision and signed-zero/NaN behavior need differential tests; C11 parser acceptance is not x87 equivalence. |
| `0x000AA3B0` | `0x000AA4C4 xor edi,edi` and `0x000AA4D3 mov word [esp+0x30],di` write **only** the low 16 bits of the stack DWORD. `0x000AA4D8` immediately calls the original helper at `0x002EAA70`. | Replace invalid `local_18._2_2_` with the low-half clear `local_18 &= 0xffff0000`; do not initialize the high half. | High 16-bit provenance, incoming EAX/ECX registers, and all indirect/helper semantics remain unverified. |
| `0x000447B0` | `0x00044D63 shr ecx,4`; `0x00044D66 and cl,1`; `0x00044D6B mov [esp+0x40],cl`. | Express a **low-byte-only** store to `uStack_118`, preserving remaining guest-DWORD bytes. | The high bytes of this local guest word and the complete function's ABI and runtime behavior are not proven. |
| `0x0005C730` | `0x0005C879 sete cl`; `0x0005C87E mov [esp+0x18],cl`; `0x0005C884 mov ebx,[esp+0x18]`. | Express byte-lane update to `local_10`, not an invalid synthetic pointer `._1_3_` member access or full-DWORD zero-fill. | Upper 24 bits remain unknown; complete register and callee contracts are still unverified. |
| `0x0008F5D0` | `0x0008F5E4` saves a stack DWORD, `0x0008F63A` computes its address, `0x0008F63F push 0x000A3F80` supplies an original Xbox executable callback address, `0x0008F644` stores one low flag byte, and `0x0008F64C` invokes an indirect vtable slot. The original `0x000A3F80` is executable code. | Replace Ghidra's invalid partial-pointer field syntax with a **byte store**, and encode the callback's original guest virtual address explicitly rather than referencing an undeclared pseudo-label. | **Do not call the raw callback virtual address on Windows.** A verified guest-address-to-native-function relocation/thunk and the indirect caller's full ABI are outstanding. |

## Verification and progress

The focused [x86 instruction and C11 source verifier](../tools/verify_x86_c11_lane_contracts.py) now records **100 original instruction fingerprints**, **33 near-call destinations**, and **22 repaired-source invariant records**. Source-only invariants are checked in public GitHub CI; matching the exact original XBE is necessary to run instruction checks locally. The [focused workflow](../.github/workflows/focused-x86-c11-repairs.yml) checks 22 independently compiled original source files under documented C11 flags, rather than claiming an integrated PC game link.

The original-XBE instruction fingerprints in this specific pass were read and compared against the user-provided matching original XBE. Syntax compile checks are separate from proof of equivalent original x86 behavior.

The [README progress bars](../README.md#reconstruction-progress), [JSON snapshot](progress/current.json), and SVG bars are automatically regenerated **only from completed, exact-commit 13,694-function audit reports**. The overall seven-phase percentage remains explicitly a planning proxy, **not** verified native-PC game completion. This pass's function fixes will count only after a completed full-tree audit confirms their compiler status.

## Still required for 1:1 native PC reconstruction

Recover original register/stack ABI at every caller; preserve guest 32-bit pointer and byte-lane semantics; bind verified direct and indirect call interfaces; resolve platform/kernel/GPU/audio/input adapters; differentially test original instructions against native function groups; then build a correctly linked PC binary. Reusing [XboxRecomp](XBOXRECOMP_REFERENCE_1TO1.md) methods does not substitute for original Brute Force XBE evidence.
