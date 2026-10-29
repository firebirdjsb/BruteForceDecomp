# 0x0011afa0 scalar lanes and normalization storage

Scope: repair 65 host C11 diagnostics, explicit memory spans and the observed
in-place normalization connection. The entry/signature and original body hash
remain unchanged. This is not a complete ABI, linked runtime, x87 emulator,
Xbox behavior test or byte-identical rebuild.

The original XBE is pinned to
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The verifier authenticates these complete contiguous bodies plus instruction
windows and the normalization constant:

| Entry | Bytes | SHA-256 |
| --- | ---: | --- |
| 0x0011afa0 | 3411 | 903905D04CA2B5CAF2D3FAD9B4188098462C67BF6EEC966A62DABEB5D1654056 |
| 0x0001fd40 | 59 | BD8404AC490D6FD5998635B9C0EC962C3D0A4FC6930010655F35C27A81C10DA4 |
| 0x0003d6c0 | 100 | A3875BC357803FB9E03F912E86EABF8EC659F52F2474AF548CBEA08D675632E8 |
| 0x0012b250 | 72 | D1C693C7D10C55771BDE592AD1D8B55AED3F0FB5F3B8537752B59F7A04CDA8EB |
| 0x002333b0 | 254 | 43F0D4453372A1B4E5F54209D1CA198B28D4FDF32EBD4DE09D3B667501340A7E |
| 0x002339d0 | 305 | F629722E1C092FF356AE5231F20680377341B951D88EF3069DCF6DD392B00126 |

## Instruction and storage findings

Let F be ESP after the 0xd0-byte allocation and the three saved registers:
F = entry ESP - 0xdc. Local names identify original offsets, not gameplay types.

| Original span | C storage | Observed use |
| --- | --- | --- |
| F+0x14..0x1f | direction_c8[3] | Three raw F32 direction words |
| F+0x24..0x2f | direction_b8[3] | Direction and in-place 0x0001fd40 output |
| F+0x30..0x3b | transverse_ac[3] | Three cross-product words |
| F+0x3c | fStack_a0 | Separate scalar, including the later interpolation ratio |
| F+0x40..0x4f | basis_9c[4] | Three basis words, later four-word helper output |
| F+0x50..0x5f | quaternion_8c[4] | First 0x002339d0 output |
| F+0x64..0x73 | quaternion_78[4] | Second 0x002339d0 output; earlier three-word scratch |
| F+0x78..0xa7 | matrix_64[12] | 48-byte 0x0003d6c0 output; tail uses first nine words |

Five RSQRTSS sites (11b253/11b2c4/11b63b/11b7d5/11b9c9) and SQRTSS at
11b582 spill only their low F32 lane. RCPSS at 11b5b5/11b679 broadcasts its
low lane before MULPS. The vector input's low and high two lanes are freshly
loaded; only those three lanes are stored. No live output depends on inherited
upper XMM0 bytes. Removing the dead pseudo-register copies does not zero or
otherwise define unknown incoming state. The actual full MOVUPS copy at
11b3c5..11b3dd is retained as a 16-byte snapshot, followed by the original
four-byte and sixteen-byte stores after all 36 source bytes were read.

The qword pseudo-values are pairs of F32 words, not numeric integer values.
They now use the same three-float objects as their producers and consumers.
The blend retains two separately rounded MULPS stages: reciprocal scaling,
then weighting. Its backward Z word is deliberately not multiplied by the
RSQRTSS result; the original instructions only scale X and the zero Y word
before the packed weight. The middle branch calls 0x0001fd40 with EAX=F+0x24
at 11b776/11b77e. The new memory operation writes that exact twelve-byte
object before the dot-product consumer at 11b80d. It loads +8/+4/+0, forms
(x*x+y*y)+z*z, performs FSQRT/FDIVR without an intermediate F32 reciprocal
spill, then reloads and stores +0/+4/+8 in order. Host long double/sqrtl are
proxies, not a guest floating-point implementation.

Earlier F+0x54/+0x58 scratch values have no surviving reader after the
four-word 0x002339d0 output replaces them. Their dead qword assembly copies
are removed. F+0x60's old constant is used by the existing scalar clamp;
that clamp still uses literal 1.0. No missing outputs or unknown bytes are
initialized merely to obtain a syntax pass.

## Verification and explicit limits

`scripts/verify_0011afa0_scalar_storage.py` extracts the actual repaired
direction block, all five scalar expressions and the raw-copy block. Strict
C11 fixtures at O0/O2 cover 120 scalar cases with poisoned upper lanes,
20 unaligned normalization/guard cases, 40 direction paths spanning all
three branches and 25 overlapping raw copies. Finite normalization references
check the memory projection, not guest x87 precision or exceptional behavior.
Changing the in-place destination is rejected dynamically; replacing RCPSS
with exact division is rejected by the instruction-count gate. Complete-source
syntax checks use the existing sweep flags on Windows i686/x86_64; Linux CI
also runs the host fixture and complete inventory sweep.

The existing calls at the tail retain unresolved interfaces. The two
0x002339d0 calls have original ECX inputs from the object at self+0x3e8 plus
0x14 and F+0x78 respectively. Their four-word destinations are now properly
sized, but the separate drafts still omit the register inputs. At 11bc44,
ESP is F-4 until caller cleanup, so `[ESP+0x40]` reads the ratio at F+0x3c.
0x0012b250 writes F+0x40 through ECX and reads F+0x64 through EDX; 0x002333b0
writes nine words at self+0x37c through EDX. These register interfaces are
documented, not replaced with invented C arguments. The 0x00306c80 ST0 input,
other pre-existing helper/callback ABI, host/guest pointer mapping, x87 state,
NaNs/exceptions and complete function semantics remain ABI_UNVERIFIED.

Inventory origin, ABI and behavior flags remain unverified. No game process,
installation, copyrighted assets, saves, deployment or production data was
touched. The original binary and full disassembly remain private and untracked.
