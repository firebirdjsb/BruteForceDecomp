/* Instruction-derived host arithmetic reference. Memory bases and the host
 * ABI are adapted. It excludes original calls, full guest stack aliases,
 * status/trap equivalence and inherited register state. */
.intel_syntax noprefix
.text
.globl bf_ref_226cc0_vector
bf_ref_226cc0_vector:
#ifdef _WIN32
    mov r10, rcx
    mov r11, rdx
#else
    mov r9d, ecx
    mov r8, rdx
    mov r11, rsi
    mov r10, rdi
#endif
    sub rsp, 32
    test r9d, r9d
    jne .Ldelta
    /* 0x226e33..0x226e89: initial X kept in x87, (X²+Y²)+Z². */
    fld DWORD PTR [r11]
    mov eax, DWORD PTR [r11+8]
    mov edx, DWORD PTR [r11+4]
    fst DWORD PTR [rsp]
    mov DWORD PTR [rsp+8], eax
    mov DWORD PTR [rsp+4], edx
    fld st(0)
    fmul st(0), st(1)
    fld DWORD PTR [rsp+4]
    fmul DWORD PTR [rsp+4]
    faddp st(1), st(0)
    fld DWORD PTR [rsp+8]
    fmul DWORD PTR [rsp+8]
    faddp st(1), st(0)
    fstp DWORD PTR [rsp+12]
    fstp st(0)
    sqrtss xmm0, DWORD PTR [rsp+12]
    movss DWORD PTR [r10+12], xmm0
    movss DWORD PTR [rsp+12], xmm0
    fld DWORD PTR [rsp+12]
    fcomp DWORD PTR [rip+.Lthreshold23]
    fnstsw ax
    test ah, 0x41
    jne .Lskip
    movss xmm1, DWORD PTR [rsp+12]
    rcpss xmm1, xmm1
    jmp .Lscale
.Ldelta:
    /* Both later paths spill Z and Y first. */
    fld DWORD PTR [r11+8]
    fsub DWORD PTR [r8+8]
    fstp DWORD PTR [rsp+8]
    fld DWORD PTR [r11+4]
    fsub DWORD PTR [r8+4]
    fstp DWORD PTR [rsp+4]
    fld DWORD PTR [r11]
    fsub DWORD PTR [r8]
    cmp r9d, 1
    jne .Lfinal_norm
    /* 0x226f5f..0x226f86: all components spilled, (X²+Z²)+Y². */
    fstp DWORD PTR [rsp]
    fld DWORD PTR [rsp]
    fmul DWORD PTR [rsp]
    fld DWORD PTR [rsp+8]
    fmul DWORD PTR [rsp+8]
    faddp st(1), st(0)
    fld DWORD PTR [rsp+4]
    fmul DWORD PTR [rsp+4]
    faddp st(1), st(0)
    fcom DWORD PTR [rip+.Lone]
    jmp .Lcompare
.Lfinal_norm:
    /* 0x2271a5..0x2271cb: X stored without popping; Z²+Y² then raw X². */
    fst DWORD PTR [rsp]
    fld DWORD PTR [rsp+8]
    fmul DWORD PTR [rsp+8]
    fld DWORD PTR [rsp+4]
    fmul DWORD PTR [rsp+4]
    faddp st(1), st(0)
    fld st(1)
    fmul st(0), st(2)
    faddp st(1), st(0)
    fstp st(1)
    fcom DWORD PTR [rip+.Lthreshold46]
.Lcompare:
    fnstsw ax
    test ah, 0x41
    jne .Lskip_pop
    fstp DWORD PTR [rsp+12]
    rsqrtss xmm0, DWORD PTR [rsp+12]
    movss DWORD PTR [rsp+16], xmm0
    movss xmm1, DWORD PTR [rsp+16]
.Lscale:
    /* Each original normalize uses MOVSS/MOVHPS, MULPS vector,scale. */
    shufps xmm1, xmm1, 0
    movss xmm0, DWORD PTR [rsp]
    movhps xmm0, QWORD PTR [rsp+4]
    mulps xmm0, xmm1
    movss DWORD PTR [rsp], xmm0
    movhps QWORD PTR [rsp+4], xmm0
    mov eax, 1
    jmp .Lfinish
.Lskip_pop:
    fstp st(0)
.Lskip:
    xor eax, eax
.Lfinish:
    movss xmm0, DWORD PTR [rsp]
    movhps xmm0, QWORD PTR [rsp+4]
    movss DWORD PTR [r10], xmm0
    movhps QWORD PTR [r10+4], xmm0
    add rsp, 32
    ret

.globl bf_ref_226cc0_scale
bf_ref_226cc0_scale:
#ifndef _WIN32
    mov rcx, rdi
    mov rdx, rsi
#endif
    movss xmm0, DWORD PTR [rip+.Ltwohundred]
    shufps xmm0, xmm0, 0
    movss xmm1, DWORD PTR [rdx]
    movhps xmm1, QWORD PTR [rdx+4]
    mulps xmm0, xmm1
    movss DWORD PTR [rcx], xmm0
    movhps QWORD PTR [rcx+4], xmm0
    movss DWORD PTR [rcx+12], xmm0
    movhps QWORD PTR [rcx+16], xmm0
    ret

.globl bf_ref_226cc0_fields
bf_ref_226cc0_fields:
#ifndef _WIN32
    mov rcx, rdi
    mov rdx, rsi
#endif
    fld DWORD PTR [rcx+0x230]
    fsub DWORD PTR [rdx]
    fstp DWORD PTR [rcx+0x230]
    fld DWORD PTR [rdx+4]
    fmul DWORD PTR [rdx]
    fsubr DWORD PTR [rcx+0x1d8]
    fstp DWORD PTR [rcx+0x1d8]
    fld DWORD PTR [rdx+4]
    fmul DWORD PTR [rdx]
    fsubr DWORD PTR [rcx+0x1d4]
    fstp DWORD PTR [rcx+0x1d4]
    fld DWORD PTR [rdx]
    fadd DWORD PTR [rcx+0x218]
    fstp DWORD PTR [rcx+0x218]
    ret

.globl bf_ref_226cc0_dot
bf_ref_226cc0_dot:
#ifndef _WIN32
    mov rcx, rdi
    mov rdx, rsi
#endif
    sub rsp, 16
    fld DWORD PTR [rdx+8]
    fchs
    fstp DWORD PTR [rsp]
    fld DWORD PTR [rdx+4]
    fchs
    fstp DWORD PTR [rsp+4]
    fld DWORD PTR [rdx]
    fchs
    fld DWORD PTR [rcx]
    fmul st(0), st(1)
    fld DWORD PTR [rsp]
    fmul DWORD PTR [rcx+8]
    faddp st(1), st(0)
    fld DWORD PTR [rsp+4]
    fmul DWORD PTR [rcx+4]
    faddp st(1), st(0)
    fcomp DWORD PTR [rip+.Lhalf]
    fnstsw ax
    fstp st(0)
    test ah, 5
    setnp al
    movzx eax, al
    add rsp, 16
    ret

#ifdef _WIN32
.section .rdata,"dr"
#else
.section .rodata
#endif
.p2align 2
.Lthreshold23: .long 0x34000000
.Lthreshold46: .long 0x28800000
.Lone: .long 0x3f800000
.Ltwohundred: .long 0x43480000
.Lhalf: .long 0x3f000000
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
