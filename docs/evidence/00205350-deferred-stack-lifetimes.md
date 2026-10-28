# 0x00205350: connected scalar/vector lifetimes, repair deferred

Status: original instruction facts observed; caller source unchanged. This is
not a syntax repair, complete interface review, behavior test, or byte match.

## Provenance

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The XBE and the following original body digests were checked before analysis:

| Entry | Body bytes | SHA-256 |
| --- | ---: | --- |
| `0x00205350` | 1392 | `6F0DFA692F241AE1D5888DACA0E579145B1B7072A4FEC12440BCA1C2DA136A28` |
| `0x00234DC0` | 312 | `ECB5D129E8C5EFB3D488E233677D4DB54F3E01E85FDF9D18B880AF3B7119B10B` |
| `0x0001FD10` | 39 | `08D2CC5256CD581BE8FFA89CEC01B4C39BE7F3CDD29052BB4827CB1C2FCC4815` |
| `0x0001FC40` | 40 | `DE39B6DECE42B44E9508DD2033A9641D4725D83CE2F99F0BBC52BE9D5E26A993` |
| `0x0001FDD0` | 40 | `13832B0FFE3CCB2E86EC5E06B944B7E16DDDFE35C04F722A781393BBBEECF49F` |

`tools/source_layout.py` resolves the caller to
`src/main_unclassified/band_0020/0x00205350.c`. Its unchanged canonical Git LF source SHA-256 is
`6d23844061dbc3373096b3657f5d48e2bc4e4751fa960f7f27bef383809bc9bc`.

## Branch and slot map

Define `S` as ESP after entry's `SUB ESP,0xEC; PUSH ESI`. The explicit arguments
are `[S+0xF4]` and `[S+0xF8]`. On the fallback path `PUSH EDI` at `0x00205485`
creates `T=S-4`; its arguments are `[T+0xF8]` and `[T+0xFC]`. Offsets below are
guest bytes, not inferred structure definitions.

| Branch / instruction window | Observed lifetime and connected consumer |
| --- | --- |
| ID `0xFD8F670C`, `0x0020539C..0x002053A5` | Pushes the address of the original second argument, then the object, into `0x00234DC0`. No new buffer is needed. |
| ID `0xE94EB66A`, `0x002053BC..0x002053DC` | FLD `[S+0xF8]`; FMUL constant at `0x003A4FE0`; LEA EAX=`S+8`; PUSH EAX; FSTP `[ESP+0x0C]` now means `[S+8]`; PUSH object; CALL `0x00234DC0`. This is a 4-byte float stored in the same slot whose address was pushed. Draft `local_e8 = (undefined4 *)(float expression)` conflates this scalar with later scratch pointers. |
| ID `0xE3BE168E`, `0x00205403..0x0020546D` | Zeroes 12 bytes at `[S+0x18/0x1C/0x20]`; an axis value `0/1/2` replaces the corresponding DWORD with second-argument bits; pushes `S+0x18`, then object, into `0x00234DC0`. Draft `local_d8/local_d4/local_d0` represent this contiguous three-float buffer. The third element is float bits, not a pointer. Other axis values retain all three zero DWORDs. |
| Fallback mode 0, `0x002054BC..0x0020558D` | Virtual slot `+0x40` supplies EAX; reads float bits from EAX `+0x24/+0x28/+0x2C` into `[T+0x1C/0x20/0x24]`. Reads the caller object `+0x88/+0x8C/+0x90` into `[T+0x34/0x38/0x3C]`. Axis `0/1/2` replaces the matching output with that object's float plus the second argument. Then pushes `T+0x1C` to virtual slot `+0x48`. Draft `local_d0` again represents the third float, and `local_e8` temporarily transports its DWORD bits. The virtual targets remain unresolved. |
| Fallback mode 1, `0x002055A4..0x002055C9` | Virtual slot `+0x40` returns EAX, saved in ESI. Three direct calls pass this ESI through ECX and distinct EAX output addresses; see the getter table below. |
| Mode 1, `0x002055CE..0x00205601` | Copies object `+0x88/+0x8C/+0x90` float bits to `[T+0x40/0x44/0x48]`. Draft `puStack_ac` is this last float lifetime, not a pointer. |
| Mode 1 axis 0/1/2, `0x00205615..0x0020575E` | Uses the respective getter buffer `T+0x1C`, `T+0x4C`, or `T+0x34`. SSE broadcasts the second argument and multiplies three components, storing them at `[T+0x10/0x14/0x18]`. x87 adds the three object floats; the resulting 12 bytes go to `[T+0x28/0x2C/0x30]`. PUSH `T+0x28` at `0x00205768` connects this result to virtual slot `+0x48`. Draft `local_e8`/`puStack_c4` conflate the third scalar result with pointer scratch lifetimes. |
| Mode 1 other axis, `0x0020560F -> 0x00205762` | Bypasses the output stores and still passes `T+0x28` to virtual slot `+0x48`. These 12 bytes are not established on this path. Do not zero-fill or manufacture a default vector. |

Fallback modes 2/3 have separate matrix operations and pointer scratch lifetimes;
they do not justify globally changing `local_e8` from pointer to float. Draft
`uStack_a4` also conflates packed float components with a numeric 64-bit value;
converting that integer numerically to float would not recover its components.

## Callee contracts: available and missing

`0x00234DC0` has an existing typed draft `void(uint *, float *)`. Original
instructions load its two arguments from `[entry ESP+4/8]` and use `RET 8`.
For ID `0xE94EB66A` it reads one DWORD through argument 2, performs SSE clamp
operations, and stores a float through the object. For ID `0xE3BE168E` it reads
three DWORDs through argument 2 at byte offsets `0/4/8` and writes those bits to
object offsets `0x48/0x4C/0x50`. These observations establish the early buffers'
actual consumers; they do not validate the callee's entire current C draft.
In particular, its existing numeric `(uint)` conversions are not proof of the
original bit-preserving stores.

The mode-1 getters are a different interface:

| Call site / target | Incoming registers | Original output |
| --- | --- | --- |
| `0x002055B3 -> 0x0001FD10` | EAX=`T+0x1C`, ECX=ESI | Three DWORDs from ECX `+0/+0x0C/+0x18` to EAX `+0/+4/+8`. The first component uses MOV; later components pass through x87 loads/stores. |
| `0x002055BE -> 0x0001FC40` | EAX=`T+0x4C`, ECX=ESI | Three floats from ECX `+4/+0x10/+0x1C` to EAX `+0/+4/+8` through x87 loads/stores. |
| `0x002055C9 -> 0x0001FDD0` | EAX=`T+0x34`, ECX=ESI | Three floats from ECX `+8/+0x14/+0x20` to EAX `+0/+4/+8` through x87 loads/stores. |

All three original getters use plain RET, no stack arguments, and explicit
output memory through EAX. Their current C drafts are `void(void)` with unbound
`in_EAX/in_ECX` locals. No typed callable bridge was found in the shared include,
assembly-reviewed source aliases, or existing relevant evidence. New arrays
combined with those unchanged no-argument calls would remain unbound. This
batch neither invents their C ABI nor adds competing inline getter logic.

## Verification and next step

Before/after focused Clang checks use unchanged `tools/sweep_c11.py` FLAGS for
`i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`. Both retain the same first
three float-to-pointer diagnostics, at draft lines 65, 82, and 154. The caller
source digest is unchanged; no syntax improvement is claimed.

Defer the complete caller until a scoped register-bridge/getter review can
connect all mode-1 producers and consumers, then split the documented stack
lifetimes into actual scalar/vector/pointer objects. Keep the invalid-axis
uninitialized-output path explicit. Preserve 32-bit guest mapping, x87 load/store
and exception details, SSE behavior, indirect call ownership, and unresolved
callee semantics as ABI_UNVERIFIED. No runtime or byte-match claim is made.

Only this evidence note changed for this candidate. No production, process,
game data, assets, headers, metadata, verifier, or deployment changed. Rollback
removes this note. Original entry signature and body labels remain untouched.
