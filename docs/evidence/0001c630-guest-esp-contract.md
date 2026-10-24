# 0x0001C630 guest ESP save — original XBE evidence

Original XBE SHA-256: `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

Source: `src/main_unclassified/band_0001/0x0001c630.c`; original entry and body hash are retained there.

Verified original instruction sequence:

```asm
0001C630  55                     push ebp
0001C631  8B EC                  mov ebp,esp
0001C633  6A FF                  push -1
0001C635  68 10 7A 30 00         push 0x307a10
0001C63A  64 A1 00 00 00 00      mov eax,fs:[0]
0001C640  50                     push eax
0001C641  64 89 25 00 00 00 00   mov fs:[0],esp
0001C648  83 EC 50               sub esp,0x50
0001C64B  53                     push ebx
0001C64C  56                     push esi
0001C64D  57                     push edi
0001C64E  89 65 F0               mov [ebp-0x10],esp
0001C651  8B D9                  mov ebx,ecx
0001C653  B9 05 00 00 00         mov ecx,5
0001C658  8B F2                  mov esi,edx
0001C65A  8D 7D DC               lea edi,[ebp-0x24]
0001C65D  F3 A5                  rep movsd
```

At the save, `ESP = EBP - 0x68` (SEH setup 12 bytes, 0x50 local reservation, three register saves). The saved **value** is guest ESP, written to `[EBP-0x10]`. `LEA EDI,[EBP-0x24]` addresses a distinct 20-byte copy destination. Ghidra's `local_14 = &stack0xffffff94` is an unresolved host-C approximation, **not** evidence that the stored value is the address of `local_28`.

**Blocker:** guest 32-bit ESP and SEH frame storage must be represented without fabricating host stack addresses. No source change is authorized solely to remove the undeclared `stack0xffffff94` diagnostic. The first 0x300 bytes of disassembly show no later explicit `[EBP-0x10]` read, but that alone does not prove the save is semantically removable. The entry ABI and helper calls remain unverified.

**Verification scope:** original XBE SHA-256 and listed bytes checked locally. This is an instruction-evidence note, not a C11 pass, a runtime test, or proof of 1:1 function behavior.
