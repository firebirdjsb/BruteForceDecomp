# Original-XBE stack-slot and exception-address repair pass — 2026-10-23

The retail original-Xbox `default.xbe` was supplied outside GitHub and its SHA-256 was verified as `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. No executable or game assets are committed.

## Four same-shape functions

Original entries: `0x00136410`, `0x001364e0`, `0x001365b0`, `0x00136680`. Each has an original `8B 74 24 1C` load at entry + `0x03`, after three pushes, reading the incoming stack word at entry ESP + `0x10`. At entry + `0x7e`, each has `8D 44 24 30 50 E8 <rel32>`, computing that same original stack-word address after temporary pushes, passing it to the direct call at `0x00045180`. All four original near-call destinations were independently decoded and verified.

Ghidra's C drafts already declare `int in_stack_00000010` and use it for the corresponding stack word. The one unresolved `&stack0x00000010` expression per function was replaced with `&in_stack_00000010`. This removes a missing pseudo-symbol without introducing a new signature, guessing an external API, or replacing the original function's body-hash marker. The source explicitly labels the C variable as a **syntax stand-in**. The host local does **not** reproduce the original caller-frame storage or a valid x86 ABI. This is not a runtime equivalence claim.

## Original Xbox RaiseException record

Original entry `0x002f4c4a` stores the literal 32-bit guest code address `0x002f4c4a` at instruction VA `0x002f4c69` (`C7 45 BC 4A 4C 2F 00`). The C draft's unresolvable `RaiseException` symbol is replaced with `UINT32_C(0x002f4c4a)` in a 32-bit `local_48`, preserving the observed **data word** rather than inventing a host-callable function pointer. Native exception translation remains unimplemented.

## Original Xbox atexit callback word

Original entry `0x002ea4bf` starts with `FF 74 24 04 E8 75 FF FF FF`: it pushes the unchanged incoming 32-bit stack word and directly calls `0x002ea43d`. The unresolved Ghidra type `__func` was replaced with `undefined4 callback_guest_word`, without asserting a callback signature, host pointer type or runtime ABI. This is only a syntax representation of the observed 32-bit forwarding.

## Validation and scope

The six exact original-entry sources each passed isolated Clang C11 syntax with the repository audit flags. `tools/verify_x86_stack_slot_and_exception_address.py --xbe <local-default.xbe>` also validated the retail XBE SHA-256, all four input stack-load and LEA/near-call instruction windows, the atexit forwarding instruction/call, and the exception-address store. The source-only CI check validates the same source invariants and isolated C11 syntax without distributing the XBE. A complete repository-wide audit is required before updating the public syntax percentage; source commits alone do not prove an increased audited percentage.

**Still unverified:** x86 register/stack calling conventions, caller-frame identity in host C, Xbox exception delivery, function linking, native PC execution and 1:1 behavior.
