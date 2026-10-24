# 0x0001C980 original guest stack and copy contract

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

Source: `src/main_unclassified/band_0001/0x0001c980.c`, which retains original entry and body-hash metadata.

Locally verified x86 bytes (original XBE VA = file offset + `0x10000`):

```asm
0001C980 55                    push ebp
0001C981 8B EC                 mov ebp,esp
0001C983 6A FF                 push -1
0001C985 68 00 7F 30 00        push 0x307f00
0001C98A 64 A1 00 00 00 00     mov eax,fs:[0]
0001C990 50                    push eax
0001C991 64 89 25 00 00 00 00  mov fs:[0],esp
0001C998 83 EC 7C              sub esp,0x7c
0001C99B 53                    push ebx
0001C99C 56                    push esi
0001C99D 57                    push edi
0001C99E 89 65 F0              mov [ebp-0x10],esp
0001C9A1 8B D9                 mov ebx,ecx
0001C9A3 B9 10 00 00 00        mov ecx,0x10
0001C9A8 8B F2                 mov esi,edx
0001C9AA 8D 7D B0              lea edi,[ebp-0x50]
0001C9AD F3 A5                 rep movsd
```

The `MOV [EBP-0x10],ESP` saves the **value of the guest 32-bit ESP**, at that point `EBP-0x88`: three SEH pushes (12 bytes), `SUB ESP,0x7c`, then three register pushes (12 bytes). This is **not** a C pointer to `local_54`. `REP MOVSD` copies 16 DWORDs (64 bytes) from guest EDX into the distinct destination `[EBP-0x50]`. The source draft's `local_14 = &stack0xffffff68` is unresolved and cannot be replaced with `&local_54` as a purported 1:1 fix.

Compare `docs/evidence/0001c630-guest-esp-contract.md`: there the guest ESP is `EBP-0x68`, and `REP MOVSD` copies five DWORDs to `[EBP-0x24]`. Both functions have the same save-slot offset but different frame size and copied object size.

**Repair gate:** establish guest ESP/SEH frame representation and check later unwind reads before editing the C draft. Original x86 bytes and SHA-256 were checked locally; C11 compilation, ABI equivalence and runtime behavior have **not** been established. Do not change progress percentages based on this evidence note.
