# Register-and-stack call preparation, NOT a game-call bridge

Source binary: retail original-Xbox Brute Force XBE (SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`).

The original `FUN_0006A610` reads **EBX** and **EDI** as incoming address bases and receives the address of a caller stack word. On three inspected exits it performs `ret 4`. Ghidra's normal C pseudocode does not represent this contract.

- `0x0006A5F0` computes EBX = ECX + 8 and EDI = ECX + 4×(5×EAX+25) in 32-bit wraparound arithmetic, forwards **the address** of original first stack argument, then ends in `ret 4`.
- `0x000907A0` computes EBX = ECX + 8 and EDI = ECX + 0x62C + 24×(29×EAX+first_stack_arg), forwards **the address** of original second stack argument, then ends in `ret 8`.

The new `analysis/bf_6a610_call_preparation.c` and its header encode register-value arithmetic and the *ordinal and stored value* of the caller stack argument. The actual address of that argument in the original caller's x86 frame **is not reproduced**, because the model has an ordinary C ABI. It intentionally does not call `FUN_0006A610`.

Host Clang strict C11 and Windows i386-target C11 syntax tests pass; mock-free unit checks confirm arithmetic and unsigned 32-bit wraparound. These are analysis aids only. The original `src/0x0006a5f0.c`, `src/0x000907a0.c`, and `src/0x0006a610.c` remain unverified and must not be counted as repaired/linked source. The direct-call inventory identifies **57 distinct caller functions**, not 57 fully inspected calling conventions.

Next: trace each callsite and produce an x86 register-aware bridge or mechanically validated model for the callee before changing the three game-function sources.
