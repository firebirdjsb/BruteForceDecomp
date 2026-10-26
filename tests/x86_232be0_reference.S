/* Scalar SSE reference from 0x232be3..0x232d33. Only memory bases,
 * host callee-save state and return storage adapt to the x64 ABI.
 * This does not execute the original x87 return bridge or compare exceptions. */
.intel_syntax noprefix
.text
.globl bf_reference_232be0
bf_reference_232be0:
#ifdef _WIN32
    sub rsp, 32
    movups XMMWORD PTR [rsp], xmm6
    movups XMMWORD PTR [rsp+16], xmm7
#else
    mov r8, rdx
    mov rdx, rsi
    mov rcx, rdi
#endif
    movss xmm0, DWORD PTR [rdx]
    movss xmm1, xmm0
    rcpss xmm4, xmm0
    orps xmm1, xmmword ptr [r8 + 0x90]
    movss xmm6, xmm4
    comiss xmm1, dword ptr [r8 + 0x0]
    jb .L232c95
    movss xmm3, dword ptr [r8 + 0xf0]
    movss xmm2, xmm0
    mulss xmm2, xmm2
    movss xmm1, dword ptr [r8 + 0x100]
    addss xmm1, xmm2
    movss xmm7, dword ptr [r8 + 0x104]
    rcpss xmm1, xmm1
    mulss xmm1, xmm3
    movss xmm3, dword ptr [r8 + 0xf4]
    addss xmm7, xmm2
    addss xmm1, xmm7
    movss xmm7, dword ptr [r8 + 0x108]
    rcpss xmm1, xmm1
    mulss xmm1, xmm3
    movss xmm3, dword ptr [r8 + 0xf8]
    addss xmm7, xmm2
    addss xmm1, xmm7
    movss xmm7, dword ptr [r8 + 0x10c]
    rcpss xmm1, xmm1
    mulss xmm1, xmm3
    movss xmm3, dword ptr [r8 + 0xfc]
    addss xmm7, xmm2
    mulss xmm0, xmm3
    addss xmm1, xmm7
    rcpss xmm1, xmm1
    mulss xmm0, xmm1
    jmp .L232d33
.L232c95:
    movss xmm3, dword ptr [r8 + 0xf0]
    mulss xmm6, xmm6
    movss xmm5, dword ptr [r8 + 0x100]
    addss xmm5, xmm6
    movss xmm7, dword ptr [r8 + 0x104]
    rcpss xmm5, xmm5
    mulss xmm5, xmm3
    movss xmm3, dword ptr [r8 + 0xf4]
    addss xmm7, xmm6
    addss xmm5, xmm7
    movss xmm7, dword ptr [r8 + 0x108]
    rcpss xmm5, xmm5
    mulss xmm5, xmm3
    movss xmm3, dword ptr [r8 + 0xf8]
    addss xmm7, xmm6
    addss xmm5, xmm7
    movss xmm7, dword ptr [r8 + 0x10c]
    rcpss xmm5, xmm5
    mulss xmm5, xmm3
    movss xmm3, dword ptr [r8 + 0xfc]
    addss xmm7, xmm6
    mulss xmm4, xmm3
    addss xmm5, xmm7
    movss xmm2, dword ptr [r8 + 0x90]
    rcpss xmm5, xmm5
    mulss xmm5, xmm4
    movss xmm7, dword ptr [r8 + 0x50]
    andps xmm0, xmm2
    orps xmm0, xmm7
    subss xmm0, xmm5
.L232d33:
    movss DWORD PTR [rcx], xmm0
#ifdef _WIN32
    movups xmm6, XMMWORD PTR [rsp]
    movups xmm7, XMMWORD PTR [rsp+16]
    add rsp, 32
#endif
    ret
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
