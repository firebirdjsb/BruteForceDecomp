# 0x002bc340 vector and stack-buffer reconstruction

- Pinned original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. The original export records one contiguous 388-byte body at `0x002bc340` with SHA-256 `012F233C2FA3B1DCC3861E14F13DF3CDA3736233864CC96875434745F00B5EB5`.
- Let T be ESP after the `SUB ESP,0x44` and three saved-register pushes. `0x2bc343..0x2bc34a` reads the guest word at `param_2+0x14`, then its `+0xb4` word; `0x2bc363` saves that raw word at T+0x14 before any helper calls. `0x2bc38f..0x2bc3ae` loads three float words from the two object bases at `+0x12c`, subtracts with `SUBPS`, and stores lanes 0, 2 and 3 as X/Y/Z at T+0x20/+0x24/+0x28. T+0x2c is set to zero. The repaired draft uses the same MOVSS/MOVHPS lane shape and passes this four-word vector to `0x2b65a0`.
- The three called helpers end with `RET 4` (`0x2b65a0`) or `RET 8` (`0x2b3bc0` and `0x2b3b70`), restoring T after their stack arguments. The indirect callback at `0x2bc3cc` receives `param_2,param_3`; its x87 result is stored as binary32 at T+0x10 at `0x2bc3cf`. The C draft retains this round-to-float boundary while leaving the callback interface unverified.
- If the first object's signed status byte at `+0x64` is below 8, `0x2bc3d9..0x2bc412` computes a negated x87 factor and stores three scaled m32fp words at T+0x30/+0x34/+0x38, with T+0x3c zero. `0x2b3bc0` receives the original source-vector address and this buffer. Then T+0x40..+0x4c contains the raw saved word followed by three zeros for `0x2b3b70(param_2, buffer)`.
- If the second object's status is below 8, `0x2bc44e..0x2bc485` scales the same normalized delta without negation into T+0x40..+0x4c for `0x2b3bc0`. Then T+0x30..+0x3c contains the raw saved word and three zeros for `0x2b3b70(param_3, buffer)`. The two C arrays reflect the original buffer reuse and keep float bits as bits instead of converting pointers numerically.
- Focused Clang C11 syntax passed for i686 and x86_64 Windows with repository sweep flags; `git diff --check` passed. The `0x2b3bc0` callee also consumes implicit ESI from the original caller; the C call does not model that register. Guest address translation, x87 precision/control, the indirect callback return contract, and full runtime behavior remain ABI_UNVERIFIED. No native Xbox or byte-match claim follows.

Independent integration review authenticated all three helper bodies and
RET cleanup paths before using T across the calls. Buffers are float[4]
objects, with raw first-word copies through memcpy; guest address additions
use unsigned 32-bit arithmetic. The delta fourth-word zero precedes SIMD
loads. On the first scaling path the fourth-word zero precedes multiply;
on the second it follows multiply and precedes m32 storage, as observed.
The source-level ordering does not establish compiler scheduling or unmasked
x87 exception/trap equivalence. The body and relevant operand/cleanup
windows are checked by scripts/verify_stack_storage_repairs.py.

Both final i686 and x86_64 focused syntax checks passed using the existing
sweep flags. Verification: A and the described local B facts; complete C/D
interfaces and behavior remain unverified. No execution test of these entry
functions was performed, and no game installation or saves were changed.
