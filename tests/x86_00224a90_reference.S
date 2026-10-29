/* Host ABI adapters for scoped direction arithmetic. Guest calls, hidden
 * registers, original frame and Xbox execution are not reproduced. */
.intel_syntax noprefix
.text
.globl bf_ref_224a90
bf_ref_224a90:
#ifdef _WIN32
    mov r10, rcx
    mov r11, rdx
    mov r9, r8
#else
    mov r10, rdi
    mov r11, rsi
    mov r9, rdx
#endif
    sub rsp, 40
    fld DWORD PTR [r11+12]
    fsub DWORD PTR [r9+0x2c]
    fstp DWORD PTR [rsp+8]
    fld DWORD PTR [r11+8]
    fsub DWORD PTR [r9+0x28]
    fstp DWORD PTR [rsp+4]
    fld DWORD PTR [r11+4]
    fsub DWORD PTR [r9+0x24]
    fst DWORD PTR [rsp]
    fld DWORD PTR [rsp+8]
    fmul DWORD PTR [rsp+8]
    fld st(1)
    fmul st(0), st(2)
    faddp st(1), st(0)
    fld DWORD PTR [rsp+4]
    fmul DWORD PTR [rsp+4]
    faddp st(1), st(0)
    fstp DWORD PTR [rsp+12]
    fstp st(0)
    sqrtss xmm0, DWORD PTR [rsp+12]
    movss DWORD PTR [rsp+16], xmm0
    fld DWORD PTR [rsp+16]
    fcomp DWORD PTR [rip+.Lzero_224a90]
    fnstsw ax
    test ah, 0x41
    jp .Lnormalize_224a90
    mov DWORD PTR [rsp+4], 0x3f800000
    mov DWORD PTR [r10+16], 0
    xor eax, eax
    jmp .Lfinish_224a90
.Lnormalize_224a90:
    movss xmm1, DWORD PTR [rsp+16]
    rcpss xmm1, xmm1
    movss xmm0, DWORD PTR [rsp]
    shufps xmm1, xmm1, 0
    movhps xmm0, QWORD PTR [rsp+4]
    mulps xmm0, xmm1
    movss DWORD PTR [rsp], xmm0
    movhps QWORD PTR [rsp+4], xmm0
    mov edx, DWORD PTR [rsp+16]
    mov DWORD PTR [r10+16], edx
    mov eax, 1
.Lfinish_224a90:
    mov edx, DWORD PTR [rsp]
    mov DWORD PTR [r10], edx
    mov edx, DWORD PTR [rsp+4]
    mov DWORD PTR [r10+4], edx
    mov edx, DWORD PTR [rsp+8]
    mov DWORD PTR [r10+8], edx
    mov edx, DWORD PTR [rsp+16]
    mov DWORD PTR [r10+12], edx
    add rsp, 40
    ret

.globl bf_ref_224a90_scale
bf_ref_224a90_scale:
#ifdef _WIN32
    mov r10, rcx
    mov r11, rdx
    mov r9, r8
#else
    mov r10, rdi
    mov r11, rsi
    mov r9, rdx
#endif
    fld DWORD PTR [r9]
    fld DWORD PTR [r11]
    fmul st(0), st(1)
    fstp DWORD PTR [r10]
    fld DWORD PTR [r11+4]
    fmul st(0), st(1)
    fstp DWORD PTR [r10+4]
    fld DWORD PTR [r11+8]
    fmul st(0), st(1)
    fstp DWORD PTR [r10+8]
    fstp st(0)
    ret
#ifdef _WIN32
.section .rdata,"dr"
#else
.section .rodata
#endif
.p2align 2
.Lzero_224a90:
    .long 0
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
