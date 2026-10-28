# 0x002a1a50: connected producer buffers and reused stack words

Status: bounded C11 storage repair; focused i686/x64 syntax passes. Complete
interfaces, x87/SSE environment, Xbox behavior and byte match remain unverified.
Original entry signature and identity header are unchanged.

## Provenance and boundary

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The original whole file and both ordered bodies were freshly reauthenticated.

| Entry | Original bytes | Original body SHA-256 |
| --- | ---: | --- |
| `0x002a1a50` | 2883 | `68CBE263227919DE03CAC12D03F674A88B800BFAEBE5B4E88C55A7AB6ED1EADA` |
| `0x0003d6c0` (unchanged producer) | 100 | `A3875BC357803FB9E03F912E86EABF8EC659F52F2474AF548CBEA08D675632E8` |

The caller path is resolved through `tools/source_layout.py`. Canonical LF
source SHA-256 before repair:
`9cff0a2eab885839dfdfcc70076c483a4ea129cecd393faa9db817dae0fac0a7`;
after repair: `d5a868643e337fb162d53564d1b999b942df48679084cb3fcaab278b4514afe0`.

## Observed producer and stack lifetimes

`0x0003d6c0` reads three stack arguments and returns with RET 12. It copies
36 bytes from argument two to argument one, then twelve bytes from argument
three to destination `+0x24`. Its existing typed draft is retained unchanged.
No new prototype, register binding, producer implementation or runtime bridge
was introduced.

At `0x2a1ad9..2a1ae0`, the caller passes actual output `EBP-0x110`; at
`0x2a1b13..2a1b1a`, it passes actual output `EBP-0xd4`. Both require 48 bytes.
The former draft allocated only 24 and four bytes respectively, leaving its
later scalar locals disconnected from both real producers. Both arrays now
have twelve DWORD lanes and are passed directly to the original typed calls.

| Producer output | Connected original consumers |
| --- | --- |
| `EBP-0x110`, lanes 6/7/8/11 | `0x2a1f18..2a1f47` raw loads from `EBP-0xf8/-0xf4/-0xf0/-0xe4` |
| `EBP-0xd4`, lanes 1/4/7 | first normalization at `0x2a1b48..2a1bc9` |
| `EBP-0xd4`, lanes 2/5/8 | second normalization at `0x2a1b91..2a1c4a` |
| `EBP-0xd4`, lanes 9/10/11 | position words copied at `0x2a1b1f..2a1b62`, then global stores `0x2a1cf3..2a1d12` |

The source reads these established DWORDs as binary32 representations, rather
than numerically converting their unsigned integer values. First-output loads
remain at their later lifetime, after intervening calls. `0x6ec90` still has
an unbound register interface: its original input ECX=`EBP-0x110` and output
EAX=`EBP-0x180` are not claimed to be represented by its existing no-argument C
call. Likewise the earlier `0x61eb0` output into `EBP-0x140` remains unresolved.
Those broader helper contracts and all indirect x87 ST(0) returns remain
`ABI_UNVERIFIED`; no host-language return prototype was manufactured.

## Scalar, float bits and packet storage

- `0x2a1b84/0x2a1bf4` RSQRTSS low results spill to `EBP-0x10`; the later
  next-node pointer at the same guest slot starts at `0x2a1f57..2a1f5c`.
  Separate scalar and pointer C lifetimes preserve this distinction.
  Norms retain observed association `(Z*Z + Y*Y) + X*X` and the m32fp spill
  before RSQRTSS. Original inherited upper XMM lanes remain unmodeled;
  their exit/callee contract is not inferred to be zero or dead.
- First normalized components remain local until their actual global stores
  at `0x2a1d1b/0x2a1d40/0x2a1d46`. The draft no longer writes the global
  Z component merely to hold the early reciprocal. Global float/word moves
  retain binary32 representations.
- `EBP-4` holds scalar-product bits passed through EDI, a virtual ST(0) spill,
  a scaled alpha word, packed color, and later index/pointer scratch.
  A four-byte raw word preserves those representations; scalar interpretation
  uses bit copies. `0x2a2196..2a21b5` spills alpha times 255 to binary32 before
  CVTTSS2SI, and `0x2a21d2..2a21da` shifts/ORs the resulting DWORD by 24.
- The final scalar at `EBP-0x1c`, later copied at `0x2a2370/0x2a2383`, has
  its own raw word instead of being cast to a node pointer. Packet fields
  written by MOV from float stack words retain their bits.
- Four fixed index pairs at `0x2a239a..2a24b1` retain the observed two-byte
  low-half writes and unsigned 16-bit packing. The variable-count path at
  `0x2a24b5..2a252a` uses the original integer counter and two-byte cursor;
  it reads source `+0x20` and `+0` before the allocator call and packs the
  observed low halves. Unread high-half guest scratch is not zero-filled.
- Initial table selection `0x2a1a74..2a1a88` uses the observed guest byte
  stride 9*8=`0x48`, rather than multiplying that stride again by DWORD size.
  Packet words at `0x2a1e93`, `0x2a2212`, and `0x2a2373` retain original
  literal values `0x00101a20`, `0x00101a10`, and `0x00101a30`; these stores
  are not host function or object addresses.

The source reuses the existing D3D device-global declaration. Its original
loads from `0x0037dd88` are visible throughout the inspected instruction body.
This declaration provides no device schema, initialized data or guest mapping.

## Dot-product branch follow-up

`0x2a1f68..0x2a1f7e` loads Y (`EBP-0x28`) times node `+0xc`,
then Z (`EBP-0x24`) times node `+0x10`, adds those x87 values, then
loads X (`EBP-0x2c`) times node `+8`, adds, and finally adds bias
`EBP-0x88`. No m32fp spill occurs between these operations and comparison.
The C draft now explicitly groups `((Y*y + Z*z) + X*x) + bias` in `float10`.
Host long double remains a precision/control/exception proxy, not an x87 model.

FCOMP at `0x2a1f84` uses original constant `0x003a52ec`, bytes
`9a 99 99 be` (DWORD `0xbe99999a`). `FNSTSW AX; TEST AH,0x41; JE`
at `0x2a1f8a..0x2a1f8f` skips the node only for an ordered-greater result.
The C condition `!(dot > threshold)` therefore continues for less, equal
and unordered, retaining the original branch truth table. The separate
flag-clear OR path short-circuits before any dot operand is evaluated.
This replaces the earlier draft's reordered binary32-style sum and `<=`
comparison, which excluded unordered. No intermediate float spill was added.

## Verification, scope and limits

Before editing, both focused Windows-target checks failed at the reused
float/pointer reciprocal slot. After editing,
`i686-pc-windows-msvc` and `x86_64-pc-windows-msvc` pass with no diagnostics
using unchanged `tools/sweep_c11.py` flags. Scoped `git diff --check` passes.
Original instruction windows and connected producer extents were inspected;
no native execution, original-versus-reconstruction whole-function comparison,
in-game QA or byte match was performed.

Host C floats, long double and SSE intrinsics do not emulate original x87
control, extended intermediates, NaNs, traps, status flags or original CPU
RSQRT approximation. Existing virtual ST(0) returns, register-only helpers,
source global aliases, guest 32-bit mapping, stack/scratch aliasing, other
scalar arithmetic/control paths and device ownership remain unverified. A
syntax pass is not evidence of a functioning renderer or faithful game.

Scope is this caller C source and this note. No callee/header, verifier,
metadata, binary, copyrighted assets, production process, game installation
or deployment was changed by this owner. Rollback restores this source and
removes this note.

Independent review authenticated both ordered bodies and accepted the changed
storage, raw-bit, packet and dot-branch facts at the recorded final source
digest. Both Windows-target checks were repeated without diagnostics.
Complete interfaces, processor floating-point state and game behavior remain
unverified.
