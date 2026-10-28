# Pointer words, vector slots and ST(0) forwarding at 0x002c37d0

Scope: two C11 drafts, `0x002c37d0` and its direct dependency `0x002c2e90`.
The original XBE SHA-256 was independently checked as
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Ordered, section-mapped bodies also match their export records:

| Entry | Body bytes | SHA-256 |
| --- | ---: | --- |
| `0x002c37d0` | 1,242 | `8992EAE863FC22009B77AE36F8FDB55426C0022671CCC2E3B0B8518C13C42121` |
| `0x002c2e90` | 175 | `A8468C8DFC760BE46E8BC8E98D850D0F3D1E75DC0A6F61A9D8F562756131149B` |
| `0x002ba160` (read-only dependency evidence) | 248 | `3F0E95B193DD627D119E63E5587739CD4702C3625C2E8A97E9A70B112B0CC220` |
| `0x002b6500` (read-only return evidence) | 152 | `4DA4F3748F3EC3DA37B178462B78C7CA09ED2C655319DD40D6A81BB9122592F0` |
| `0x002c2a20` (read-only return evidence) | 1,121 | `C41FE2FA640E68D9B56E7F4885B7E7D3153FB5FC79FDEF77CC1F0967713DB9DB` |

## Observed frame slots

Here `S` is the caller ESP after `SUB ESP,0x11c` and all four saved-register
pushes. Temporary argument pushes and the final two pops are accounted for
before comparing offsets. The named arrays express these observed byte ranges;
no assumption is made that unrelated host C locals occupy adjacent addresses.

| Original slot | Bytes consumed | Evidence and C representation |
| --- | ---: | --- |
| `S+0x1c` | 4 | `0x002c37f0` spills the first ST(0) result; `result` is f32. |
| `S+0x24` | 4 | `0x002c3909` spills the preceding dot product. |
| `S+0x28` | 12, plus explicit fourth word | Output address passed at `0x002c37e3`; `axis[4]`. |
| `S+0x40` | 12, plus zero at `+0x4c` | Signed axis, three separately spilled x87 products. |
| `S+0x50` | 12, plus zero at `+0x5c` | Three SUBPS output components; `delta[4]`. |
| `S+0x60` | 4 | Bound from the original three-factor x87 product. |
| `S+0x64`, `S+0x68` | two 4-byte words | `0x002c3801/11` load pointers, `0x002c380d/20` store their bits. `objects[2]` uses `uint32_t`, never float conversion. |
| `S+0x6c` | 12, plus zero at `+0x78` | Temporary linear argument 3 for the second helper call. |
| `S+0x7c`, `S+0x8c` | two 16-byte slots | Linear records, zero fourth words at `0x002c3910`; `linear[2][4]`. |
| `S+0x9c` | 12, plus zero at `+0xa8` | Temporary angular argument 4 for the second helper call. |
| `S+0xac`, `S+0xbc` | two 16-byte slots | Angular records, zero fourth words at `0x002c3924`; `angular[2][4]`. |
| `S+0xcc` | 12, plus zero at `+0xd8` | Actual argument-5 output address pushed at `0x002c3b20`; `helper_output[4]`. |
| `S+0xdc`, `S+0xec` | two 16-byte slots | Matrix product records; zero fourth words at `0x002c3938`; `transformed[2][4]`. |
| `S+0xfc`, `S+0x10c` | two 16-byte slots | First helper output records; zero fourth words at `0x002c3834`; `first[2][4]`. |
| `S+0x124` | 4 | `0x002c3a90` spills the unscaled cross-product Z before reloading it. |

The first output loop increments ESI by `0x10` and fills three floats at
`ESI-4`, `ESI`, `ESI+4`. Thus the decompiler's `local_30._4_8_` and
`local_30._20_8_` are packed reads from two 16-byte records. They are not
five-float records, and no 40-byte or 48-byte guessed record is introduced.
Guest pointer additions use 32-bit unsigned arithmetic before conversion to
host pointers. No local host pointer is truncated into a guest stack offset.

## Direct-call dataflow

`0x002c3880` and `0x002c3b3c` target `0x002ba160`. Its entry reads five stack
words, and `0x002ba255` executes `RET 0x14`. The first argument addresses an
object whose matrix float offsets are `+0xfc/+0x100/+0x104`,
`+0x10c/+0x110/+0x114`, `+0x11c/+0x120/+0x124`. Argument 2 and argument 4
supply three-component inputs; the x87 results store through argument 5 at
`+0/+4/+8` before the final SSE addition reads argument 3 at `+0/+4/+8`.
The first caller passes object `+0xac` / `+0x9c` as arguments 3 / 4; the second
passes the observed temporary linear / angular slots. Both call sites pass
an actual output address. The typed declaration preserves the existing five
parameters and `void` return; it adds no new result channel.

The decompiler lost the return of `0x002c2e90`. At `0x002c2f1d`, its call to
`0x002b6500` leaves ST(0). Byte `object+0x34 != 1` retains it to `RET 8`.
The other branch explicitly discards it with `FSTP ST(0)` at `0x002c2f30`,
then `0x002c2f34` calls `0x002c2a20`, whose exits return ST(0). Both existing
callee definitions already use `float10`. The corrected draft returns the first
result unless the conditional call replaces it, and the caller immediately
rounds that return to float as the original `FSTP m32fp` does. No implicit-int
return value is converted into a manufactured floating-point result.

## Arithmetic/storage repair

- MOVSS from memory clears the upper three lanes; MOVHPS replaces lanes 2/3,
  giving `[x,0,y,z]`. Local four-lane operations retain lane 1 arithmetic and
  store only lanes 0/2/3. Packed guest loads and final stores keep separate
  four-byte and eight-byte memory copies, matching MOVSS and MOVHPS widths.
  Packed `uint64_t` values are not numerically cast to float. The same proven
  repair applies to `0x002c2ee4..0x002c2f14`.
- Each SIMD multiplication/addition/subtraction obtains a separate volatile
  f32 result. In particular, matrix products preserve the two additions and
  their rounding boundaries, and final updates round MULPS before ADDPS.
- `0x002c38e1..0x002c3909` computes `(Z + Y) + X`, then spills to f32.
  `0x002c3b41..0x002c3b6a` uses that same product order before adding the
  previous denominator. Long-double intermediates distinguish these x87
  sequences from the SIMD f32 operations without claiming x87 emulation.
- `0x002c3a90` spills cross-product Z before its scale multiplication;
  X/Y remain extended until their later stores. The bound comparison uses
  the unspilled quotient retained by `FST`, while the update uses its f32
  spill. Equal/unordered/below denominator cases skip the update.
- Constants were checked in the pinned XBE: `0x003a4fbc` is the f32 word
  `0x2edbe6ff` (`1e-10f`); `0x003a5000` is `0xbf800000` (`-1.0f`).

## Checks and limitations

The baseline `0x002c37d0` fails host C11 parsing on a float-to-pointer cast
and non-C array pseudo-members. Both edited files pass focused Clang checks
with the exact flags from `tools/sweep_c11.py`, targeting
`i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`. `git diff --check` passes.
Whole-XBE and all five ordered body digests above were authenticated directly
from the private original. These are syntax and instruction/dataflow checks,
not execution or byte-match tests.

The guest-memory bridge, actual Xbox calling conventions, guest scratch-stack
aliasing, x87 control/status/precision, MXCSR and signaling-NaN/fault behavior
remain `ABI_UNVERIFIED`. Native `long double` may have different precision.
The existing `0x002ba160` and `0x002c2a20` source bodies remain independently
unverified dependencies; their arithmetic was not repaired here. No integrated
runtime, original-versus-reconstruction execution oracle, complete linkage or
byte-identical rebuild was claimed. No binaries, assets, game processes,
saves, deployment targets or production data were modified. Rollback is the
two scoped source edits and this note; original identity labels are retained.
