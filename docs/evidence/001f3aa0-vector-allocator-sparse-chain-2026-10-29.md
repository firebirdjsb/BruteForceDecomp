# 0x001F3AA0 full guest chain through the sparse frame

Date: 2026-10-29 / 2026-10-30. Original Brute Force Xbox XBE:
`b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.

**Scope:** connected, tested guest operations from original
`0x001F3AB0` through `0x001F3B62`, not the whole original
`FUN_001F3AA0` and not full 1:1 Xbox CPU/heap/SEH equivalence.

## Operation chain verified

`src/guest_cpu/bf_001f3aa0_vector_alloc_sparse.h` composes the
existing instruction-verified components with one guest-memory state:

1. The **actual** `bf_001f3aa0_make_2b7970_args` constructs the
   input object from incoming guest ECX, `[EBP+8]`, `[EBP+12]`
   and the two original x87 calculations. Its returned guest address
   relationship is checked explicitly.
2. Original `0x001F3B2C` CALL pushes return address `0x001F3B31`.
   `bf_002b7970_execute_complete` executes the verified x87
   vector construction, x87 half-scale, two packed-SSE vector
   operations, output zeros and `RET 8`. It restores caller ESP
   and returns guest EAX as the constructed output object.
3. `bf_001f3aa0_execute_allocator_call` takes **that exact
   returned guest ESP**, stores original vtable metadata
   `0x0039EFC8` at `[ESP+0x40]`, passes count 8 and output object
   `[ESP+0x90]` to original `0x002B8D60`, and verifies
   return EIP `0x001F3B4A` and original ESP. The metadata
   deliberately overwrites the prior vector object's first word
   only at this original instruction; earlier writes are not
   moved or coalesced.
4. The original sparse-frame site writes **256 distinct DWORD zeros
   at stride 32**, beginning `[ESP+0xB0]` and ending
   `[ESP+0x2090]`; the intervening guest bytes remain untouched.

The original heap allocation target is read from guest
`[0x003BC650]` and supplied to an explicit guest allocation callback.
Tests use a *synthetic* allocator returning two known guest buffers;
they do not claim to have recovered an Xbox XDK allocator function.
No raw guest VA is cast to a host pointer.

### Automated checks

GitHub Actions run
`40981339626` completed successfully on `main`:

- Original x87/SSE tail: 40,584 assertions at Clang `-O0` and
  `-O2`.
- Original CALL/RET8 composition: 6,814 assertions at each setting.
- Genuine original producer into SSE callee: 15,618 assertions at
  each setting.
- **Producer → complete x87/SSE vector → allocator → sparse frame:
  146,044 assertions at each optimization setting.**
- AddressSanitizer and UndefinedBehaviorSanitizer also passed the
  new combined tests. Injected faults cover the call-return push,
  allocator refusal and the first sparse DWORD write.

Separate original-XBE check:
`scripts/verify_002b7970_complete_xbe.py` matched the user's
pinned original executable, all 384 bytes of the complete callee
`0x002B7970` (SHA-256
`0c66011a1ef28b7d259dc354572bad0594545ba5b2d1a1b9006420e2753d3d72`),
and **33 original opcode windows** including the caller CALL and
the callee `RET 8`.

## Not yet connected or claimed

After `0x001F3B62`, the original `FUN_001F3AA0` includes:

- A conditional call to `0x001F35B0` at `0x001F3B70`, preceded
  by a pushed literal `0x3F800000`.
- An alternative call to `0x002B8C60` at `0x001F3B80`.
- A conditional x87 sequence at `0x001F3B9A..0x001F3BA9`
  reading the original object's float fields and writing
  `[ESP+0x14]`.
- A cleanup call to `0x002B8DE0` at `0x001F3BBC`;
  its body contains original guest pointer traversal and indirect
  heap deallocation through `[0x003BC654]`.
- The final original `FLD`, stack/EBP restoration and `RET 8`
  at `0x001F3BC1..0x001F3BCA`.

These paths require further original instruction and callee-output
verification before replacing the original C11 draft.
Xbox x87 precision/status/control, SSE MXCSR, signaling NaN
payloads, guest EFLAGS, heap allocator/free target identity,
and fault restart/SEH behavior are still separate validation gates.

**Syntax progress:** last completed published inventory remains
13,636 of 13,694 original drafts passing isolated host C11 syntax
(99.58%), 58 failures. The new guest-execution headers are separately
tested but do not change those function counts.
