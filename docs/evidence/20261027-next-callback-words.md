# Next callback-word representation repairs

Status: **original-instruction-backed 32-bit representation fixes; focused C11
syntax passes; ABI_UNVERIFIED; no runtime or callback-binding claim**.

The private original XBE was independently authenticated against full SHA-256
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Every instruction in the private full-body inspection cache was checked against
the corresponding original XBE section bytes. Each instruction sequence was
contiguous and covered its complete half-open body range below. Its independently
computed SHA-256 matched both the cache and the retained source header.

| Original entry | Complete range (end exclusive) | Bytes | Original body SHA-256 |
| --- | --- | ---: | --- |
| `0x00342a84` | `0x00342a84..0x00342ff1` | 1389 | `CDD5D9DAA4285F5112A0DD90785E2F4C098EFAE1DEEA94D039773E29027F1644` |
| `0x0034cca3` | `0x0034cca3..0x0034ce3c` | 409 | `1E4A411DD2E51A52DC1BD547D48AA112974BFBBA8F51CE0A360EADEC7FD220F3` |
| `0x0034d726` | `0x0034d726..0x0034db96` | 1136 | `069AF2DCF7328E19D49ECBCB28F9B8180B38888976EA4553D6EC2CD0DCF91D50` |
| `0x0035f8d0` | `0x0035f8d0..0x0035f988` | 184 | `F4B210F82BD2701874C5D47F1F3A5B1DE8184EE7A90EE36BD4895D81C9F7F8DA` |
| `0x0035feb0` | `0x0035feb0..0x0035ff3d` | 141 | `FE3B9A017F31847F12ED380AA857D366575B43EB83DDF2B52F72AB200F7A94C6` |
| `0x0037f621` | `0x0037f621..0x0037f6c4` | 163 | `4FA3C5B8948EFA4E67D27AB6E456445A6E64D5E42336A388CBE72BCD2F4FDCF1` |

## 0x0035f8d0: six DWORD table entries

The six instructions write four-byte literal words to the already four-byte
`undefined4` table. The former `FUN_*` expressions and `&LAB_*` expressions
incorrectly named host symbols. All six now use `UINT32_C` guest values. The
unused speculative host declaration for `FUN_0035f280` was removed.

| Instruction VA | Exact bytes | Literal / destination byte offset |
| --- | --- | --- |
| `0035f909` | `c70680f23500` | `0x0035f280` / `+0x00` |
| `0035f90f` | `c74604a0f33500` | `0x0035f3a0` / `+0x04` |
| `0035f916` | `c7460880f63500` | `0x0035f680` / `+0x08` |
| `0035f91d` | `c7460ca0f63500` | `0x0035f6a0` / `+0x0c` |
| `0035f924` | `c7461040f73500` | `0x0035f740` / `+0x10` |
| `0035f92b` | `c7461400f73500` | `0x0035f700` / `+0x14` |

## 0x0035feb0: DWORD global words

All eight stores below encode literal words. Their destination declarations
remain `uint32_t`; no target signature or global execution binding is added.
Unused `UNK_0035fe10` and `UNK_0035fe60` extern declarations were removed.
The separate dynamic ECX store at `0x0035ff16` remains ABI_UNVERIFIED and unchanged.

| Instruction VA | Exact bytes | DWORD destination / literal |
| --- | --- | --- |
| `0035fed8` | `c705384b4100b0fb3500` | `0x00414b38` / `0x0035fbb0` |
| `0035fee2` | `c705104b410070fc3500` | `0x00414b10` / `0x0035fc70` |
| `0035feed` | `c705384b410010fa3500` | `0x00414b38` / `0x0035fa10` |
| `0035fef7` | `c705104b4100e0fa3500` | `0x00414b10` / `0x0035fae0` |
| `0035ff02` | `c705384b410010fe3500` | `0x00414b38` / `0x0035fe10` |
| `0035ff0c` | `c705104b410060fe3500` | `0x00414b10` / `0x0035fe60` |
| `0035ff22` | `c7051c4b410010fa3500` | `0x00414b1c` / `0x0035fa10` |
| `0035ff2c` | `c705284b4100e0fa3500` | `0x00414b28` / `0x0035fae0` |

## 0x00342a84: three DWORD fields

EBX is formed as ESI+0x98 at `0x00342e9c` (`8d9e98000000`), and EAX
is formed as EBX+0xe8 at `0x00342f19` (`8d83e8000000`). Therefore
`[EAX+4]`, `[EAX+8]`, and `[EAX+0xc]` are the original ESI base+0x184,
+0x188, and +0x18c fields. The old pointer-sized stores become `uint32_t`
stores using unsigned 32-bit address addition, preserving four-byte spacing
on both host target widths.

| Instruction VA | Exact bytes | DWORD literal |
| --- | --- | --- |
| `00342f3e` | `c74004c37c3300` | `0x00337cc3` |
| `00342f45` | `c74008127d3300` | `0x00337d12` |
| `00342f4c` | `c7400c177d3300` | `0x00337d17` |

## 0x0037f621: two literal initializer arguments

| Instruction VA | Exact bytes | Observed argument word |
| --- | --- | --- |
| `0037f659` | `68ee203800` | PUSH `0x003820ee` |
| `0037f6a3` | `68362e3800` | PUSH `0x00382e36` |

The two former `&LAB_*` arguments now pass `UINT32_C` words. The surrounding
initializer calls, implicit ECX state, and existing argument lists remain
unverified; the patch does not supply host callback prototypes.

## 0x0034cca3: callback words and the import-slot load

| Instruction VA | Exact bytes | Observed operation |
| --- | --- | --- |
| `0034cd37` | `6897cc3400` | PUSH `0x0034cc97` |
| `0034cd58` | `c783d801000080970600` | DWORD `[EBX+0x1d8] = 0x00069780` |
| `0034cd62` | `a18c643800` | EAX = DWORD `[0x0038648c]` |
| `0034cd67` | `8b00` | EAX = DWORD `[EAX]` |
| `0034cd6d` | `8983dc010000` | DWORD `[EBX+0x1dc] = EAX` |

The `+0x1d8` field now stores a raw four-byte value instead of a native function
pointer, and its unused speculative `FUN_00069780(float)` declaration is
removed. The undeclared `KeTickCount_exref` expression is represented by the
exact two DWORD loads: the first obtains the guest address from slot 0x38648c,
the second reads its DWORD value. The result uses a four-byte destination at
+0x1dc. This does not bind the import to any host clock, add a kernel interface,
or assert that raw guest addresses are directly executable on a host.

The existing two-argument `KeInitializeDpc` draft remains ABI_UNVERIFIED. The
original also pushes EBX at `0x0034cd2e`; resolving its full call contract is
outside this representation repair. Implicit registers and unrelated fields
are retained without claiming semantic completion.

## 0x0034d726: three callback words and literal global values

| Instruction/window VA | Exact bytes | Observed operation |
| --- | --- | --- |
| `0034d747` | `c780500200000bd63400` | DWORD `[EAX+0x250] = 0x0034d60b` |
| `0034d834` | `681ad73400` | PUSH `0x0034d71a` |
| `0034d85b` | `6884d03400` | PUSH `0x0034d084` |
| `0034da4e` | `c7058000f0fe3e0f3b00` | DWORD `[0xfef00080] = 0x003b0f3e` |
| `0034dadb` | `b810003000` | EAX = `0x00300010` |
| `0034dae6` | `a34001f0fe` | DWORD `[0xfef00140] = EAX` |
| `0034daeb` | `a33c01f0fe` | DWORD `[0xfef0013c] = EAX` |

The `+0x250` native pointer store becomes a DWORD store with 32-bit guest base
addition. The two callback arguments become raw immediate words. The three
literal global assignments use DWORD constants instead of addresses of fake
`UNK_*` host objects, whose unused extern declarations are removed. Their
values are not assigned gameplay meanings. Existing direct and indirect call
contracts, local/implicit register inputs, global bindings and all unrelated
fields remain unverified.

## Validation and limits

Before editing, all six sources failed the focused Clang syntax check for
both `i686-pc-windows-msvc` and `x86_64-pc-windows-msvc` because of undeclared
label expressions. After this first repair loop, all twelve checks passed
using the existing `tools/sweep_c11.py` FLAGS and repository include directory.
The existing signed/unsigned pointer assignment warning in 0x0034d726 remains;
it was not hidden or changed. This check does not add stricter semantic flags
or claim a successful Xbox build.

Only the six sources and this evidence note are owned by this batch. Original
entry addresses, body hashes, labels and control-flow structure are retained.
No shared headers, verifier scripts, metadata, game data, saves, deployment,
production data or runtime target processes were changed. No callbacks or
network/device routines were executed. Remaining pointer-sized dynamic stores,
raw guest-memory translation, implicit registers, flags, stack cleanup, imported
function contracts, indirect targets and runtime behavior need separate review.
There is no behavior, ABI, byte-match, linked-game or runnable-rebuild claim.
The coordinator separately performs exact-tree audit and metadata integration.
Rollback consists of reverting this scoped source/evidence change; no external
installation or data rollback is needed.

Integration review: an independent reviewer authenticated the original bytes
and accepted the changed operand, storage or argument-word correspondence.
Whole-function ABI, native execution and game behavior remain unverified.
