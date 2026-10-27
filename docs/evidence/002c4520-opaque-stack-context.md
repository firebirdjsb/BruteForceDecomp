# 0x002C4520: observed opaque stack context

Bounded C11 storage reconstruction. This restores the original allocated byte
extent, known DWORD writes, embedded address and repeated argument identity.
It does not establish a named structure, complete callback ABI or behavior.

## Provenance

- Whole original XBE SHA-256:
  `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
- Entry `0x002C4520`, contiguous 270 bytes, `0x002C4520..0x002C462D`.
- Original body SHA-256:
  `D26B2A0F796594557ADC8FA929391A64A1B039114BE12978E9A94C791A1F57F0`.
- Fresh private inspection authenticated the whole XBE and complete body
  before decoding the original instructions and unchanged helper bodies.

## Stack coordinates and initialization

Let `S` be entry ESP. SUB ESP,0x54 followed by three PUSHes gives `T=S-0x60`.
The LEA at `0x2C4589` produces `T+0x0C=S-0x54`, the beginning of the actual
84-byte local allocation. `uint32_t local_frame[21]` represents that allocation,
not a guessed structure size. The last eight bytes have no observed write in
this body and are left unknown, as are other unwritten words.

| Original sites | Frame byte offset | Observed write |
| --- | --- | --- |
| `0x2C4576/0x2C457A/0x2C457E` | `+0x18/+0x28/+0x38` | Zero DWORD at each offset |
| `0x2C4582..0x2C4585` | `+0x44` | Raw word read from ESI+0x18 |
| `0x2C4592` | `+0x00` | EDI word retained before the two earlier virtual calls |
| `0x2C4596/0x2C459A` | `+0x3C/+0x40` | EBX/EBP words from ESI+0x10/+0x24 |
| `0x2C459E` | `+0x48` | ECX word captured from ESI+0x2C at `0x2C4571` |
| `0x2C458D/0x2C45A2` | `+0x04` | DWORD address of frame+0x0C |
| `0x2C45A6` | `+0x08` | Original ESI word |

The PUSH at `0x2C4591` lowers ESP by four: subsequent store coordinates in
the table account for that change. No blanket zero fill was introduced.

The LEAs at `0x2C4589`, `0x2C45BA`, and `0x2C45D1` address the same frame
for `0x2B5590` and both conditional `0x2BCCD0` calls. The embedded address
and call arguments are four-byte guest words; conversion of a host local
address requires a real guest-stack mapping before native execution.

## Helper and verification boundary

`0x2B5590` reads its stack argument and forwards that unchanged DWORD to
virtual byte offset 12, then RET 4. `0x2BCCD0` reads its third stack word,
forwards it to virtual offset 12, and RET 12. These observations support the
shared context argument; they do not establish what every callback reads,
writes or retains. No callee, declaration or callback prototype was changed.

ESI/EDI register marshalling, guest pointer translation, callback retention,
all callback-accessed bytes and complete register/stack cleanup remain
`ABI_UNVERIFIED`. The untouched draft still has signed guest-address arithmetic
outside this repair. A local array is not a guest-stack implementation.

Focused syntax passes with project sweep flags for i686 and x64 Windows Clang.
An independent reviewer authenticated the original and approved the observed
frame extent, offsets, store order and repeated argument identity. No linked or
original-versus-C behavior test was run. Only this source and evidence note
are in scope; no installed game, production data or deployment was touched.
Rollback restores these files and their inventory/evidence records.
