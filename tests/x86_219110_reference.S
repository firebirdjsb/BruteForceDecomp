/* Original 219117..2192d8 arithmetic; host pointer registers and stack
 * placement adapted. Establish masked x87 extended/RNE, restore control
 * afterward; MXCSR is set by the harness. Status flags are not compared. */
.intel_syntax noprefix
.text
.globl bf_reference_219110
bf_reference_219110:
#ifndef _WIN32
    mov r8, rdx
    mov rcx, rdi
    mov rdx, rsi
#endif
    sub rsp, 0x48
    fnstcw word ptr [rsp + 0x40]
    mov word ptr [rsp + 0x42], 0x037f
    fldcw word ptr [rsp + 0x42]
    mov rax, r8
    fld dword ptr [rax + 8]
    fld dword ptr [rax + 4]
    fld dword ptr [rax]
    fld st(0)
    fmul st(1)
    fld st(2)
    fmul st(3)
    faddp st(1)
    fld st(3)
    fmul st(4)
    faddp st(1)
    fsqrt
    fstp st(3)
    fstp st(0)
    fstp st(0)
    fstp dword ptr [rsp]
    movss xmm0, dword ptr [rsp]
    rcpss xmm0, xmm0
    mov rax, r8
    movss xmm1, dword ptr [rax]
    shufps xmm0, xmm0, 0
    movhps xmm1, qword ptr [rax + 4]
    mulps xmm0, xmm1
    lea rax, [rsp + 0x10]
    movss dword ptr [rax], xmm0
    movhps qword ptr [rax + 4], xmm0
    mov eax, dword ptr [rsp + 0x18]
    mov dword ptr [rsp + 0x2c], eax
    mov eax, dword ptr [rsp + 0x14]
    mov dword ptr [rsp + 8], eax
    fld dword ptr [rsp + 8]
    mov eax, dword ptr [rsp + 0x2c]
    fabs
    fcomp dword ptr [rip + .L219110_threshold]
    mov dword ptr [rsp + 0xc], eax
    fnstsw ax
    test ah, 0x41
    jp .L21919f
    fld dword ptr [rip + .L219110_one]
    mov dword ptr [rsp + 0x2c], 0
    jmp .L2191ad
.L21919f:
    fld dword ptr [rip + .L219110_zero]
    mov dword ptr [rsp + 0x2c], 0x3f800000
.L2191ad:
    fld dword ptr [rsp + 0x10]
    mov eax, dword ptr [rsp + 0x2c]
    fmul st(1)
    mov dword ptr [rsp + 0x24], eax
    fld dword ptr [rsp + 8]
    fmul dword ptr [rip + .L219110_zero]
    fsubp st(1)
    fstp dword ptr [rsp]
    fld dword ptr [rsp + 0xc]
    fmul dword ptr [rip + .L219110_zero]
    fld dword ptr [rsp + 0x24]
    fmul dword ptr [rsp + 0x10]
    fsubp st(1)
    fstp dword ptr [rsp + 0x2c]
    fld dword ptr [rsp + 0x24]
    mov eax, dword ptr [rsp + 0x2c]
    fmul dword ptr [rsp + 8]
    mov dword ptr [rdx + 4], eax
    fld dword ptr [rsp + 0xc]
    mov eax, dword ptr [rsp]
    fmul st(2)
    mov dword ptr [rdx + 8], eax
    fsubp st(1)
    fstp st(1)
    fst dword ptr [rdx]
    fld dword ptr [rdx + 8]
    fld dword ptr [rdx + 4]
    fld st(2)
    fmul st(3)
    fld st(1)
    fmul st(2)
    faddp st(1)
    fld st(2)
    fmul st(3)
    faddp st(1)
    fstp dword ptr [rsp]
    fstp st(0)
    fstp st(0)
    fstp st(0)
    rsqrtss xmm0, dword ptr [rsp]
    movss dword ptr [rsp + 0x2c], xmm0
    fld dword ptr [rsp + 0x2c]
    fmul dword ptr [rdx]
    fst dword ptr [rdx]
    fld dword ptr [rsp + 0x2c]
    fmul dword ptr [rdx + 4]
    fst dword ptr [rdx + 4]
    fld dword ptr [rsp + 0x2c]
    fmul dword ptr [rdx + 8]
    fst dword ptr [rdx + 8]
    fld st(2)
    fmul dword ptr [rsp + 8]
    fld st(2)
    fmul dword ptr [rsp + 0x10]
    fsubp st(1)
    fstp dword ptr [rsp]
    fld dword ptr [rsp + 0x10]
    mov eax, dword ptr [rsp]
    fmul st(1)
    mov dword ptr [rcx + 8], eax
    fxch st(3)
    fmul dword ptr [rsp + 0xc]
    fsubp st(3)
    fxch st(2)
    fstp dword ptr [rsp + 0x2c]
    mov edx, dword ptr [rsp + 0x2c]
    fmul dword ptr [rsp + 0xc]
    mov dword ptr [rcx + 4], edx
    fld st(1)
    fmul dword ptr [rsp + 8]
    fsubp st(1)
    fxch st(1)
    fstp st(0)
    fst dword ptr [rcx]
    fld dword ptr [rcx + 8]
    fld dword ptr [rcx + 4]
    fld st(2)
    fmul st(3)
    fld st(1)
    fmul st(2)
    faddp st(1)
    fld st(2)
    fmul st(3)
    faddp st(1)
    fstp dword ptr [rsp]
    fstp st(0)
    fstp st(0)
    fstp st(0)
    rsqrtss xmm0, dword ptr [rsp]
    movss dword ptr [rsp + 0x2c], xmm0
    fld dword ptr [rsp + 0x2c]
    fmul dword ptr [rcx]
    fstp dword ptr [rcx]
    fld dword ptr [rsp + 0x2c]
    fmul dword ptr [rcx + 4]
    fstp dword ptr [rcx + 4]
    fld dword ptr [rsp + 0x2c]
    fmul dword ptr [rcx + 8]
    fstp dword ptr [rcx + 8]
    fldcw word ptr [rsp + 0x40]
    add rsp, 0x48
    ret
.p2align 2
.L219110_threshold: .long 0x3f7c1bda
.L219110_one: .long 0x3f800000
.L219110_zero: .long 0
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
