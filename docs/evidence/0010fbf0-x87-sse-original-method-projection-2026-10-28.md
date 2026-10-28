# Original `0x0010FBF0`: instruction-authenticated x87/SSE scalar and two virtual-caller links

## Provenance, scope and limits

The original **private** user XBE has SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The method `0x0010FBF0..0x0010FC6E` is **127 bytes** (SHA-256
`76FA58DB21575D08E0CB43636A07DEB374229D553CFF0AAB4F8EE845C63882D1`).
It is pointed to by the constructor-installed concrete vtable
`DWORD[0x0039DCE8+0x30]=0x0010FBF0`; this method is *absent as a separate
canonical game C source entry*. The base vtable `0x0039DBE8` instead points
at an `XOR EAX,EAX;RET` method and **does not** meet the concrete ABI.
See [earlier method and vector evidence](0011c810-original-xbe-concrete-method-and-vector-lanes-2026-10-28.md).

**This is a bounded, source-linked host projection, not a 1:1 byte-level
recompilation, not an added entry to the canonical 13,694-function inventory,
and not a complete `0x0011C810` caller repair.** All original C sources and
embedded original-body provenance are unchanged.

## Verified original method arithmetic (not inferred from Ghidra)

`ECX` is the receiver subobject (`caller_arg+0x1B4`), `output` is the
original pushed guest DWORD from each callsite (first `S+0x28`, second
`S+0x1C`). `S` is the caller guest ESP after the prologue. Original bytes
verified with `--xbe` have:

| Original address | Instruction | Role |
| --- | --- | --- |
| `0x0010FBF7`, `0x0010FBFD` | `FLD [ECX+0x410]`; `FLD [ECX+0x428]` | Source x/z binary32 |
| `0x0010FC03..0x0010FC0D` | `FLD`, `FMUL`, `FLD`, `FMUL`, `FADDP`, `FSTP m32` | x87 x²+z², rounded to binary32 |
| `0x0010FC15` | `RSQRTSS [ESP+8]` | SSE approximate inverse square root of rounded sum |
| `0x0010FC25..0x0010FC3D` | `FLD`, `FMUL [ECX+0x428]`, `FCHS`, `FSTP m32` | Negative z lane |
| `0x0010FC41..0x0010FC62` | `FLD`, `FMUL [ECX+0x410]`, `FCHS`, `FSTP`, `MOV` x2 | Outputs: `[-q*x, +0, -q*z]`, stored +0,+4,+8 |
| `0x0010FC65..0x0010FC6E` | `MOV EAX,[ESP+0x14]`, `ADD ESP,0x10`, `RET 4` | EAX = output guest VA, callee stack cleanup |

The modeled C header `include/bf_0010fbf0_scalar_projection.h` uses **32-bit
guest-address callbacks** to read the receiver at +0x410/+0x428 and writes
exactly three binary32 words at output +0/+4/+8. Its finite-normal-input
projection uses host **80-bit long double** for x87 intermediate arithmetic and
actual `RSQRTSS` hardware intrinsic for the SSE operation. Host targets that
do not supply 80-bit `long double` plus x86 SSE **decline the projection**;
there is no substituted guessed operation. The numeric domain excludes NaNs,
infinities, subnormal inputs, zero vector and non-normal squared sum, because
original x87/MXCSR exception/rounding/status behavior is still unverified.

An independently written **native x86-64 System V assembly oracle** in
`tests/x86_0010fbf0_reference.S` executes the original sequence of x87 FPU
and SSE mathematical instructions, with 64-bit pointer ABI adaptation and
normal default host FPU settings. It is *not* an executable copy of the 32-bit
Xbox method, and does not validate original guest stack/SEH, control words,
MXCSR or game environment. This is stricter than a float tolerance check:
comparison uses exact **32-bit word equality** on both nonzero outputs.

`tests/test_0010fbf0_scalar_projection.c` tests **21,035 scenarios and
332,859 assertions per `-O0` and `-O2` build**, including 20,000 deterministic
finite x/z pairs against independent hardware-oracle output bits; 1,024
full first and second original virtual +0x30 callsite traversals using the
**actual existing** `FUN_0001D0C0`/`FUN_0012B2A0` host C sources, copied
matrix, second virtual's distinct output address, original verified negated
vector, dot output and scratch-storage lifetimes; six rejected special-value
cases and five guest-memory callback fault points. `-O1` with ASan/UBSan
is also supported and runs with fail-fast sanitizer diagnostics. The isolated
interface passes Windows i686/x64 Clang C11 syntax with strict warnings;
these target checks do **not** imply Windows runtime/ABI parity.

The verifier `scripts/verify_0010fbf0_scalar_projection.py` optionally takes
`--xbe /private/path/default.xbe`. It authenticates original XBE/body hashes,
constructor/vtable and **27 individual instruction windows** for the method
including x87 and SSE arithmetic, writes, returned EAX and `RET 4`. CI without
this file only checks source provenance and fixtures; no executable is
uploaded or committed. Synthetic corruption tests reject each mismatched
opcode byte.

## Remaining blockers

The `0x0011C810` source still uses disconnected no-argument helper calls,
conflated pointers and floating scalars. An original-instruction-supported
complete guest CPU-context and guest-memory representation is required before
changing that original draft. In particular, original x87 and SSE exception
and precision policy, all floating-point branches, output side effects,
other possible dynamic vtables and the one-to-one function inventory must be
resolved. The source syntax count cannot improve simply by adding this
scoped bridge; status remains **ABI_UNVERIFIED** and the native PC game is
not currently buildable.
