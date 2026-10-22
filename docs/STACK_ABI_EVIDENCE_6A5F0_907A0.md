# Assembly-grounded review: stack pseudo-parameters (2026-10-22)

These are **read-only findings**, not verified source reconstructions or ABI-compatible C function signatures. Inspected original Xbox `default.xbe` with SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## `FUN_0006a5f0` (entry `0x0006A5F0`)

Ghidra draft contains only `FUN_0006a610(&stack0x00000004);`, but the original instructions do substantially more:

```asm
0006a5f0  push ebx
0006a5f1  push edi
0006a5f2  lea  edx,[esp+0xc]
0006a5f6  lea  eax,[eax+eax*4+0x19]
0006a5fa  push edx
0006a5fb  lea  ebx,[ecx+0x8]
0006a5fe  lea  edi,[ecx+eax*4]
0006a601  call 0x0006a610
0006a606  pop edi
0006a607  pop ebx
0006a608  ret 4
```

With two prior register saves, `[esp+0x0c]` denotes the **address** of the first caller-supplied stack argument, not a local uninitialized variable. The callee receives a stack pointer to that argument and uses register values computed before the call. In 32-bit modular arithmetic, the computed register values are `EBX = original ECX + 8` and `EDI = original ECX + 4*(5*original EAX + 25)`. `ret 4` cleans one 32-bit caller stack argument, **not** proof of the complete calling convention.

Original function body bytes hash: `307A25290BA18AAA55A25A67CB64712923EF1AF477E272CC6174F6A25F5A583C`.

## `FUN_000907a0` (entry `0x000907A0`)

Ghidra draft contains only `FUN_0006a610(&stack0x00000008);`. Original instructions:

```asm
000907a0  imul eax,eax,0x1d
000907a3  push ebx
000907a4  push edi
000907a5  lea  edx,[esp+0x10]
000907a9  push edx
000907aa  add  eax,[esp+0x10]
000907ae  lea  eax,[eax+eax*2]
000907b1  lea  ebx,[ecx+0x8]
000907b4  lea  edi,[ecx+eax*8+0x62c]
000907bb  call 0x0006a610
000907c0  pop edi
000907c1  pop ebx
000907c2  ret 8
```

The pushed pointer points to the **second** incoming stack argument; the first incoming stack argument is added to the EAX-derived index. With 32-bit arithmetic, `EBX = original ECX + 8` and `EDI = original ECX + 24*(29*original EAX + first_stack_arg) + 0x62C`. `ret 8` cleans two caller stack words. This still does not prove a C-callable signature or callee semantics.

Original function body bytes hash: `39EFCDB2B2C5B4FBEEC607D2E76CA473952B3A6B8FE8A84104380F12D0E5EF54`.

## Shared callee `FUN_0006a610`

The beginning uses `EDI`, `EBX`, and a stack-passed pointer; at `0x0006A64D`, a confirmed path ends with `ret 4`. **Do not** treat it as a standard C call with one pointer parameter without analyzing each caller and all return paths.

## Required next steps

- Trace `0x0006A610` through all control-flow paths and call sites.
- Give incoming registers and stack arguments explicit, **non-ABI-equivalent analysis model** slots before any C rewrite.
- Do not silently add `stack0x...` as an uninitialized local or substitute dummy data merely to pass Clang.
- Human-readable names may describe verified arithmetic roles (e.g. `stack_arg_1`, `computed_edi`), but do not invent game object names, container identities, or behavior.
