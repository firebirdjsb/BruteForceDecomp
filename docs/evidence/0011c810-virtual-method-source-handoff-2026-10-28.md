# `0x0011C810` — original vtable `+0x30` handoff to real source producer

**Status:** scoped guest-state/dataflow bridge, **not** an original Xbox ABI
implementation, reconstructed virtual method, repaired caller C draft or
1:1-verified whole function. The canonical 13,694 game-function C sources
and original-body hash labels are not modified by this change.

## Provenance, observed original instructions and current baseline

Pinned original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The original XBE is private and is **not** stored or freshly read by GitHub CI.
Prior authenticated instruction evidence is in
[`0011c810-deferred-register-output.md`](0011c810-deferred-register-output.md)
and [`0011c810-matrix-frame-copy-2026-10-28.md`](0011c810-matrix-frame-copy-2026-10-28.md).
Original function body digests:

| Entry | Body SHA-256 |
| --- | --- |
| `0x0011C810` | `A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255` |
| `0x0001D0C0` | `799425F204B00DB36DEC83019E43890E71D10113DC10721CB8A2EFE0CAA969A4` |
| `0x0012B2A0` | `C5BD3DE3ABD46F47CA74FCBCF49E2399087B322B7E4BC54DADA22C6FF89EED1E` |

Let `S` be guest ESP **after** `SUB ESP,0x88; PUSH ESI` in the
`0x0011C810` prologue. The guest DWORD argument to the function is at
`[S+0x90]`; let its value be `A`.

- At `0x0011C82A..0x0011C82F`, original ECX addresses the receiver/subobject
  at `A+0x1B4`. Its vtable pointer is read from `[A+0x1B4]` and the method
  pointer is read from `[vtable+0x30]`. The pushed guest argument is `S+0x28`.
  No instruction writes EAX between the virtual return and `0x0001D0C0`;
  therefore **the virtual return EAX**, not the stack output pointer, must
  become `0x0001D0C0`'s EAX input.
- At `0x0011C893..0x0011C8AB`, the same receiver's virtual method offset
  `+0x30` is invoked again with a **different** pushed guest argument,
  `S+0x1C`. The later vector operations must not be replaced by the first
  call's output, even though both dispatches use the same slot.
- At `0x0011C832..0x0011C836`, ECX becomes `S+0x68`; the real host-source
  `0x0001D0C0` implementation then writes 36 bytes of matrix data. The
  original SSE copy moves exactly 16+16+4 bytes to `S+0x38`.
- At `0x0011C906..0x0011C912`, the second real host-source helper
  `0x0012B2A0` accepts ECX=`S+0x28` (three vector floats), EDX=`S+0x38`
  (nine matrix floats) and EAX=`S+0x0C` (three output floats). These
  positions and their separate lifetimes are established in the earlier
  evidence and existing bridge, not guessed here.

## New implementation

`include/bf_0011c810_virtual_call_link.h` adds an explicit *call request*
with a 32-bit guest method address, receiver ECX, pushed-argument **value**,
S and the **derived** S-4 argument-push ESP. The vtable pointer chain is
read using little-endian 4-byte guest memory callbacks. The original method
**is not simulated**. A caller-supplied executor must return actual guest EAX
and resulting ESP, and must own all actual CALL/RET stack effects, writes,
register side effects and exceptions. A refusal does not supply a default
EAX. Successful return is accepted for the modeled call boundary only if
ESP is back at S; the exact callee cleanup instruction is not asserted.

`bf_0011c810_first_virtual_to_matrix()` then passes that **returned EAX**
to the *existing* `bf_0011c810_source_matrix()` implementation, which
links and executes the actual reconstructed `FUN_0001D0C0` C function and
the tested guest 36-byte copy. A separate `dispatch_virtual()` call with
`BF_0011C810_SECOND_VIRTUAL` gives the second distinct argument value but
does not invent the later object/vector writes or consume the matrix.
Existing `bf_0011c810_dot_output()` remains responsible for the host-source
`FUN_0012B2A0` projection **after** the real caller has filled its inputs.

This layer intentionally does **not** write a fake return address or infer a
host `thiscall` calling convention. It does not know the actual virtual
method address, class/vtable ownership, original AL/flags, an original EIP
fault site, register clobbers, Xbox memory page rules, x87 precision, MXCSR
rounding/NaN effects, or the full 0x0011C810 return/control-flow behavior.
A synthetic executor in the tests proves only that the observable contracts
can be connected when a real guest execution engine supplies them.

## Tests and gates

`python3 scripts/verify_0011c810_virtual_call_link.py --root .` checks:

- Strict `-Wall -Wextra -Werror -pedantic` Clang syntax on Windows i686 and
  x86-64; the two existing original helper source files retain their narrowly
  excluded known decompiler warnings during the host-linked executable test.
- `-O0` and `-O2` host builds that actually link the original project source
  files `0x0001D0C0.c`, `0x0012B2A0.c` and the existing
  `tests/support/bf_0011c810_guest_producer_bridge.c`, without stubs replacing
  either game helper.
- **1,038 committed-test scenarios and 16,468 assertions per build** (plus a separate locally tested 1,039-scenario, 25,732-assertion diagnostic): 1,024 deterministic
  finite-input guest stacks, first and second virtual argument identity,
  two vtable DWORD reads, returned EAX to matrix, 36-byte output/copy,
  source-linked dot output, injected faults at all 10 read/write events,
  rejected execution, incorrect post-call ESP, invalid inputs, and wrapping
  32-bit vtable target pointer arithmetic.
- Local AddressSanitizer/UndefinedBehaviorSanitizer O1 execution in addition
  to O0/O2, without reported memory violations.
- Optional `--xbe /private/path/default.xbe` invokes the pre-existing private
  XBE authenticator for the three body digests; no private game data is
  uploaded or required in CI. Without it, new instruction-level verification
  is **not** claimed.

**Next:** recover the actual virtual `+0x30` method implementation and its
EAX/ESP/register effects from original instructions, connect both real
virtual call sites and the intervening vector writes to the actual
`0x0011C810.c` entry, then repair its conflated pointer/float lifetimes and
run full syntax, cross-function and native guest-state differential checks.
The number of C11 passes cannot increase merely from this intermediate
contract. Rollback removes this header, test, runner, evidence and CI hook.
