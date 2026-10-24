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

## Recovered storage view and remaining interface gate

The subsequent helper and cleanup audit establishes the following byte layout.
`include/bf_x86_sso28.h` models these bytes without host pointer fields:

| Offset from record | Width | Observed use |
| --- | ---: | --- |
| +0 | 4 | Opaque prefix; no initialization inferred |
| +4 | 16 | Inline bytes, or a guest-address DWORD in its first four bytes |
| +0x14 | 4 | Length |
| +0x18 | 4 | Capacity |

`ADD EDI,0x1c` at `0x001e1cc4` and `0x001e1f04` establishes record
stride. Helpers `0x0001f4f0`, `0x0001f5a0`, `0x0001fed0`, `0x000784c0`
and `0x001e8a20` corroborate length/capacity offsets and selection of
inline bytes at +4 for capacity **below 16**, otherwise the DWORD stored
at +4. Empty initialization writes capacity DWORD 15, length DWORD 0,
and one NUL byte at +4. The other 19 bytes are preserved.

Relative to the relevant tail entry's incoming ESP, complete record starts are:

| Entry | Persistent | Temporary | Iteration clone | ESP after saves on nonempty path |
| --- | --- | --- | --- | --- |
| 0x001e1b30 | -0x54 | -0x38 | -0x1c | -0x6c |
| 0x001e1dc0 | -0x38 | none | -0x1c | -0x50 |

Thus the first path's `LEA EDX,[ESP+0x1c]` addresses the persistent
record's +4 inline region, at entry ESP-0x50. C automatic objects do not
promise this original stack placement or adjacency.

Initialization/reset triples begin at `0x001e1b48`, `0x001e1b6e`,
`0x001e1bde`, `0x001e1c62`, `0x001e1ccc`, `0x001e1dd8`,
`0x001e1e0b`, and `0x001e1e74`. Conditional cleanup CALLs occur at
`0x001e1bcf`, `0x001e1cb8`, `0x001e1cec`, `0x001e1e65` and
`0x001e1f21`; each heap path passes the stored guest-address DWORD to
`0x002ea018`. Ghidra's nonreturning annotation had omitted clone cleanup
and reset blocks. The corrected draft retains those observed branches.

The cleanup entry jumps through `0x00067bf0` to DWORD `[0x003bc654]`.
Its initial target is `0x00237ec0`; original code can replace the slot
with `0x002379d0` or `0x00237910`. The legacy C thunk name is an alias for
that dynamic entry, **not** proof of a fixed deallocator or host `free`.
The default path reaches `0x002f75e8` through `0x002f77dc`; allocator
semantics and other runtime targets remain unreconstructed.

The case-1 virtual CALL at `0x001e1ca9` has three observed pushed words;
case 4 at `0x001e1efd` has two and an implicit ECX receiver. Recording
those words does not establish either indirect prototype. Helper inputs
include ECX destination objects and, at `0x000784c0`, EBX/ECX/EAX plus
one stack word. Existing C calls still fail to convey those implicit
registers. Guest-address translation, complete allocation/growth behavior,
ownership, exceptional paths, and other incoming callers remain unresolved.

Validation: the grouped 946-byte body retains digest
`5DDE41611CF58912127F7EBB5DA80F5736EC6C8F424E8FA79DFE8DD9FD5992F3`.
`scripts/verify_001e_sso_layout.py` checks original body and instruction
evidence; `tools/test_x86_sso28.c` checks the bounded storage operations.
Independent review approves the changed storage expressions only.
**Levels A and limited B; no complete Level C or D.** This file already
passed syntax before the storage correction, so it contributes zero new passes.
