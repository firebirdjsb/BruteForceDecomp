# 0x0011C810: deferred register-output repair

Status: original instruction facts observed; source repair deferred. This note
does not promote syntax, interface, runtime behavior, or byte-match status.

## Provenance and scope

- Original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Caller `0x0011C810`: 647 original body bytes, SHA-256
  `A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255`.
- Helper `0x0012B2A0`: 93 original body bytes, SHA-256
  `C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E`.
- Earlier producer `0x0001D0C0`: 594 original body bytes, SHA-256
  `799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4`.
- Source path resolved through `tools/source_layout.py`:
  `src/main_unclassified/band_0011/0x0011c810.c`.
- Caller source is unchanged; SHA-256 of its checked bytes:
  `2d8c00de0251c80158389d830eace8cd17d47967e912c445b7a35f9aa6399df0`.

The original XBE hash and all three body hashes were checked against extracted
original bytes before drawing the following conclusions. No process memory,
game data, deployment, shared header, inventory, or verifier changed.

## Observed stack lifetimes and direct edges

Let `S` be ESP after `SUB ESP,0x88` and `PUSH ESI` at entry. The saved ESI
occupies `[S]`, return address `[S+0x8C]`, and explicit argument `[S+0x90]`.
Offsets below are bytes in this guest frame, not host structure fields.

| Site | Original setup and observed use |
| --- | --- |
| `0x0011C82A..0x0011C82F` | Pushes `S+0x28`; ECX is argument + `0x1B4`; indirect call through its vtable + `0x30`. The destination's behavior, target, EAX return and cleanup remain unverified. Subsequent frame accesses require the pushed 4-byte argument to have been removed. |
| `0x0011C832..0x0011C836` | ECX = `S+0x68`; calls `0x0001D0C0`. There is no instruction setting EAX between the indirect call and this call. `0x0001D0C0` reads three DWORD floats at EAX + `0/4/8`, writes nine DWORDs through ECX at offsets `0..0x20`, and ends in plain RET. Its incoming EAX must be connected to the preceding indirect call's actual return contract before a C interface can be used. |
| `0x0011C83B..0x0011C867` | Initializes scratch DWORDs and zeroes `[S+0x5C]`, `[S+0x60]`, `[S+0x64]`. These stores are outside the later 36-byte copy destination. |
| `0x0011C857..0x0011C88F` | EAX = `S+0x68`, EDX = `S+0x38`, with these pointers spilled to scratch `[S+4/8]`. Two MOVUPS loads/stores cover byte offsets `0..0x1F`; MOVSS covers `0x20..0x23`. Exactly **36 bytes** are copied, not 20. The destination is `[S+0x38..S+0x5B]`. |
| `0x0011C893..0x0011C8AB` | Reloads the argument; ECX = argument + `0x1B4`; pushes `S+0x1C`; calls through vtable + `0x30`. The target and its full return/cleanup contract remain unverified. |
| `0x0011C8AE..0x0011C902` | ESI = explicit argument, then loads the guest pointer at ESI + `0x6C`. The three floats at that pointer + `0x1C/0x28/0x34` are negated and stored at `S+0x28/0x2C/0x30`, overwriting the earlier first indirect-call destination. `[S+0x10/0x14]` temporarily hold the original `+0x28/+0x34` values. |
| `0x0011C906..0x0011C912` | ECX = `S+0x28` input (12 bytes), EAX = `S+0x0C` output (12 bytes), EDX = `S+0x38` copied input (36 bytes), then CALL `0x0012B2A0`. No stack arguments are pushed. |

The two indirect calls are distinct calls to the same vtable offset on the same
argument-derived receiver. The first call's returned EAX is critical to the
following producer. An invented ordinary C return value would not establish it.

## Actual scalar producer

`0x0012B2A0` consumes EAX/ECX/EDX as above. It computes three x87 combinations
from the 9 input floats at EDX and 3 input floats at ECX. The original grouping
starts with input offsets `0x18*8 + 0x0C*4 + 0*0` for output offset 0;
`0x1C*8 + 0x10*4 + 4*0` for output offset 4; and
`0x20*8 + 0x14*4 + 8*0` for output offset 8 (each pair means one EDX offset
times one ECX offset, in bytes). x87 intermediate precision remains significant.

At `0x0012B2E1..0x0012B2F6`, the third and second results pass through 4-byte
stack spills and then EDX/ECX; stores write `[EAX+8]`, `[EAX]`, `[EAX+4]`.
`ADD ESP,8; RET` follows. EAX remains the output address; this is **not** a float
return in EAX or ST(0). ECX and EDX return as output float bit patterns, not as
their incoming pointers.

Consequently the later arithmetic's two values are:

- `[S+0x0C]`: first output float, read at `0x0011C91D`, `0x0011C99D`, and later
  comparisons/divisions. This replaces the draft's conflated `puVar1` scalar
  lifetime only once a connected helper bridge exists.
- `[S+0x14]`: third output float, read at `0x0011C917` and later expressions.
  It is **not** still the earlier object `+0x34` float: the helper overwrites
  that same scratch slot as output index 2. Replacing only the pointer casts
  would leave this second conflation incorrect.

The helper's existing source is `void FUN_0012b2a0(void)` with unbound local
`in_EAX`, `in_ECX`, and `in_EDX`; the preceding producer is likewise
`void FUN_0001d0c0(void)` with unbound input/output register locals. No typed
callable interface was found in the shared includes, assembly-reviewed source
aliases, or the existing relevant evidence. Creating local output arrays and
continuing these no-argument calls would leave those arrays disconnected from
their producers. Initializing them to zero would manufacture behavior.

## Checks and next bounded work

Focused Clang checks use the unmodified `tools/sweep_c11.py` FLAGS and include
directory with targets `i686-pc-windows-msvc` and `x86_64-pc-windows-msvc`.
Both still fail at the same pointer-to-float casts, with the sweep error limit
of 3. The source digest remains unchanged. No repair was attempted merely to
change those diagnostics; no syntax-pass increase is claimed.

The next repair needs a separately scoped, evidence-backed interface for both
register-based producers, plus resolution of both virtual call contracts. It
must connect the first virtual return to the EAX input of `0x0001D0C0`, the
36-byte output/copy to `0x0012B2A0`'s EDX input, and the latter's explicit
three-float output to the two later scalar lifetimes. This ownership scope
did not permit changing either callee or a shared register bridge. The original
entry signature and body labels are retained.

ABI_UNVERIFIED remains for indirect call targets, their return/cleanup behavior,
guest pointer mapping, producer linkage and register effects. Original x87
precision/status/NaN behavior and SSE details are not runtime-tested. There is
no original-versus-reconstruction behavior test or compatible-toolchain byte
comparison. Rollback, if desired, is removal of this evidence note only.
