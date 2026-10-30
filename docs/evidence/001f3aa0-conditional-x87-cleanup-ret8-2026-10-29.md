# Original 0x001F3AA0 conditional branches, x87 result, cleanup and RET 8

Date: 2026-10-29 (local) / 2026-10-30 (UTC). Original Brute Force
Xbox XBE SHA-256:
`b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.

**Status: complete bounded after-producer guest instruction schedule,
with external guest-callee callbacks. This is NOT full 1:1 Xbox
behavioral certification or a new original draft syntax pass.**

## Original machine-code evidence

`scripts/verify_001f3aa0_tail_xbe.py` was executed against the
user's private original Xbox executable. It authenticated **four
original complete function bodies and 48 original instruction windows**:

| Original function | Body length | Pinned SHA-256 |
| --- | ---: | --- |
| `0x001F3AA0` | 0x12D | `2799e1de683050265d1fd694276a459a7f7f777c1c6e6fb1f19635691ce6c948` |
| `0x001F35B0` | 0x157 | `3e7d18910aab35a23ed5e3edc448ae54a4b9c87ee9dba44a74cfb5f02a706fad` |
| `0x002B8C60` | 0x4A | `45044552c47c60822ffc7fb5b55ef43725b60a3ea810014aeb8184c35affc9ba` |
| `0x002B8DE0` | 0x6B | `3c4f05dfa1620b34b71f2d0b2509ecf872c03d2f5ea10c6ad9afc4faaf6838cb` |

Verified original return conventions: `0x001F35B0` ends in
`RET 4` at `0x001F3704`; `0x002B8C60` ends in plain
`RET` at `0x002B8CA9`; `0x002B8DE0` ends in plain `RET`
at `0x002B8E4A`; `0x001F3AA0` ends in `RET 8` at
`0x001F3BCA`. The original XBE is not in GitHub.

## Source operation contracts

`src/guest_cpu/bf_001f3aa0_guest_tail.h` reconstructs original
`0x001F3B62..0x001F3BCA` with guest-memory callbacks and an
external x87 stack backend:

- It reads `[EDI+8]`. If zero, it pushes floating-point binary32
  `0x3F800000`, places EDI into ESI, and calls original
  `0x001F35B0`. The call's actual EIP and ESP must match its
  `RET 4` cleanup; otherwise the bridge refuses the result.
- It **re-reads** `[EDI+8]` after the first callee. If now
  nonzero, it sets ESI to guest `ESP+0x40` and calls original
  `0x002B8C60`. That callee must return using plain `RET`.
  Both conditional calls **can occur sequentially** on one path.
  Treating them as mutually exclusive C `if/else` would be wrong.
- It reads original `[ESP+0x94]`, then `[EDX+4]`, followed by
  `[EAX+0x0C]` if nonzero. Only the complete nonzero chain
  performs `FLD [EDI+0x38->+4]`, `FADD [0x003A4F78]`,
  `FSUB [EAX+0x1C]`, and `FSTP [ESP+0x14]`. The other paths
  retain the earlier raw sentinel `0xFF7FFFFF`.
- It restores the original metadata at `[ESP+0x40]`, constructs
  the allocated object pointer from `ESP+0x90`, and calls guest
  cleanup `0x002B8DE0`, verifying its EIP and ESP.
- The final original `FLD [ESP+0x14]` is kept in the x87
  backend's ST(0). The original saved EDI, ESI, previous EBP,
  caller return EIP and final `RET 8` stack adjustment
  are reconstructed using guest DWORD reads. No host float C
  return is substituted for the original x87 register.

`src/guest_cpu/bf_002b8de0_guest_cleanup.h` reconstructs
the 107-byte cleanup callee, including the guest linked-node
traversal and its original memory access order:

- Reads dynamic bucket count `[EDI]` and array `[EDI+0x0C]`.
- For each bucket, reads each linked node's next pointer **before**
  its original direct `CALL 0x002EA018`, preserving the next
  pointer across guest deallocation. Re-reads count after each bucket.
- Performs two separate indirect frees from guest
  `[0x003BC654]`: first bucket array `[EDI+0x0C]`, then second
  allocation `[EDI+0x04]`, zeroing each pointer **after** the
  corresponding free returns.
- Validates every nested free's expected guest return EIP and ESP.
  Retains memory-write order and partially completed effects on faults.
- Exposes configurable finite traversal budgets for safety. These
  limits **are not original Xbox behavior**, and the bridge explicitly
  reports exhaustion rather than claiming universal equivalence.

`src/guest_cpu/bf_001f3aa0_complete_guest.h` then links the
prior proven producer → full `0x002B7970` SSE/vector → original
`RET 8` → `0x002B8D60` allocator → 256 sparse guest writes
to the just reconstructed conditional/x87/cleanup/final-RET tail.
The result leaves the original returned floating-point value
in the supplied x87 backend, with guest ESP `EBP+16`.

## Automated checks

- Focused `0x002B8DE0` cleanup: **1,458 assertions** at
  Clang `-O0` and `-O2`. Covers zero and nonzero bucket counts,
  multiple linked nodes, free order, guest return contracts, budget
  exhaustion and partial failure.
- Focused `0x001F3AA0` tail: **841 assertions** at each
  optimization level. Covers first-only, second-only and **both**
  conditional calls, both x87 result branches, saved guest registers,
  guest heap free order, final ST(0), `RET 8`, and fault boundaries.
- Combined producer through *final* original return:
  **155,120 assertions** at Clang `-O0` and `-O2`,
  including the earlier full vector, allocator and sparse tests.
  Different bounded inputs and different synthetic callee effects
  exercise original path-sensitive output mutations.
- GitHub Actions focused runs
  `40982432726` (isolated tail) and
  `40982788886` (full after-producer chain)
  both **succeeded**, including AddressSanitizer and UBSan checks.

## Remaining correctness gates before original source replacement

1. The concrete behavior inside `0x001F35B0` is not yet
   substituted: it contains multiple constructor/allocator calls,
   indirect guest free and object writes. Likewise `0x002B8C60`
   can call `0x002B89F0` or an indirect virtual method.
   The call boundaries, branch conditions and return conventions are
   verified, but their complete behavior is represented by **explicit
   guest CPU callbacks**.
2. Original `[0x003BC650]` allocator and `[0x003BC654]`
   free targets, and the direct `0x002EA018` node-free implementation,
   need concrete guest heap/platform contracts.
3. x87 80-bit control/status/exception delivery, SSE MXCSR, guest
   condition flags, precise fault restart/SEH, and cross-function
   guest register/stack ABI must be validated before native PC linkage.
4. Original `src/main_unclassified/band_001f/0x001f3aa0.c`
   remains an independent Ghidra draft with unresolved pseudo-stack
   identifiers. It has **not** been replaced merely to force a
   compiler pass. Only when the complete original call targets and
   ABI are connected should it be credited as behaviorally verified.

**Published C11 syntax status:** 13,636 passing / 13,694
(99.58%), 58 original failures; zero original-body hash mismatches
at the most recent full audit. The new bridges are independently
C11-compiled but do not change the original draft count.
