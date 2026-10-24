# Verified x86 entry contracts: 0x001E1B30 / 0x001E1DC0

Source: user-provided original Xbox `default.xbe`, SHA-256 `b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`. For these addresses the file offset is virtual address minus `0x10000`. These observations are **instruction facts**, not verified high-level prototypes.

## Dispatcher 0x001E1F40

- `001e1f40: cmp ecx, 6`, `001e1f4a: jmp dword ptr [ecx*4+0x001e1fd0]`: seven-way selector in ECX.
- `001e1f89: mov ecx,eax; 001e1f8b: pop ebx; 001e1f8c: jmp 0x001e1b30`: tail transfer, original EAX becomes callee ECX; dispatcher restores EBX first.
- `001e1f91: mov ecx,eax; 001e1f93: pop ebx; 001e1f94: jmp 0x001e1dc0`: same transfer to second callee.
- Neither transfer pushes an argument or return address. The destination inherits the dispatcher's caller return address; it is **not** a normal C call.

## Destination 0x001E1B30

- `001e1b30: sub esp,0x5c`: reserves 92 bytes of local stack.
- `001e1b33: mov eax,[ecx+4]` and `001e1b36: mov ecx,[ecx+8]`: ECX points to an object with 32-bit values at offsets +4 and +8. Their semantic type is unverified.
- `001e1b39: push ebx`, `001e1b3e: push ebp`; on nonempty path `001e1b5a: push esi; 001e1b5b: push edi`.
- `001e1b3c: cmp eax,ecx` and `001e1b54: je 0x001e1cf4`: empty-range branch.
- `001e1b63..0x001e1b7a`: pushes `-1`, zero, and element pointer; supplies a stack-local object in ECX to `0x0001f4f0`. Do not infer a cdecl prototype for this helper.
- `001e1c3c..0x001e1c4e`: loads indirect callback from `[0x004698d4]`, pushes `[0x004698d8]`, calls through EAX, then caller pops four bytes.

## Destination 0x001E1DC0

- `001e1dc0: sub esp,0x40`: reserves 64 bytes of local stack.
- `001e1dc3: mov eax,[ecx+4]` and `001e1dc6: mov ecx,[ecx+8]`: same input layout.
- `001e1dc9: push ebx`, `001e1dce: push esi`; nonempty path `001e1dea: push ebp; 001e1deb: push edi`.
- `001e1dcc: cmp eax,ecx` and `001e1de4: je 0x001e1f29`: empty-range branch.
- `001e1e00..0x001e1e17`: three stack arguments and local-object ECX for `0x0001f4f0`.
- `001e1ecc..0x001e1ede`: same callback pointer `[0x004698d4]` and one pushed argument `[0x004698d8]`; caller cleans up.
- `001e1eef..0x001e1efd`: virtual call via `[0x00443310]`, vtable offset +12, with two stack arguments. The return convention and target remain unverified.

## C11 repair gate

The draft `src/main_unclassified/band_001e/0x001e1f40.c` merges these tail-called routines into its case bodies and contains an unresolved `stack0xffffffb0` pseudo-variable. That variable cannot be safely declared or replaced without mapping the appropriate callee's local stack layout and original object representation. Preserve the original draft and its body-hash provenance until the source is split or typed using verified boundaries, and then compile the affected functions with Clang C11 before committing source changes.

**Audit impact:** evidence-only note; zero C11 syntax fixes claimed, no progress percentage change.

## 2026-10-24: independent original-XBE recheck and unresolved layout risk

Rechecked the exact eight instruction-byte sequences in `scripts/verify_001e_dispatch_and_sso.py` against the private original XBE: all eight matched. This establishes the pinned bytes, not high-level behavior.

**Important limitation of the current C11 draft:** `in_stack_ffffffb0` is declared as a single 32-bit `uint`, while the original small-string path selects an **address** with `LEA EDX,[ESP+0x1c]` when capacity is below 16. The original may read multiple bytes starting at that address; taking the address of a four-byte host C object does not by itself model a 16-byte inline buffer or its neighboring stack slots. Also, `(in_stack_ffffffb0 & 0xffffff00)` in the other branch is only a draft reconstruction, not a verified pointer representation. The draft's `local_3c` pointer-typed capacity comparison likewise needs type recovery from original stores and loads.

**Source-repair gate:** before claiming 1:1 C semantics, map every original access to the inline-buffer region, recover the capacity and pointer fields, model the object with verified offsets, and compile/test the full function. Do not promote the earlier single-slot address substitution to a complete semantic fix. No syntax-count improvement is claimed here.
