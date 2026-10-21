# C11 migrated drafts

Four selected drafts are translated from the legacy C++ source with TODOs preserved. Their function ABI, external calls, signedness and source semantics are *not yet verified* against instructions. On a 64-bit development computer pointer casts compile but the original runtime expects 32-bit pointers; these drafts are **analysis models, not runnable game replacements**.

- `0x00012000.c`: 32-byte stack region and incoming EAX; unknown initial 8 bytes.
- `0x00012050.c`: load two floats, scale and cast; floating-point and cast behavior need verification.
- `0x00012080.c`: indirect EAX? conditional call using ECX+4; callee signature unknown.
- `0x000120d0.c`: compare ECX+0x10 with incoming EAX; callee ABI unknown.
