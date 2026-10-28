/* Host ABI adapters for instruction-derived arithmetic at 0x2f508..0x2f53c,
 * 0x2f606..0x2f6c1 and 0x2f55d..0x2f56e. Original Xbox execution, exceptions,
 * hidden registers, virtual calls and surrounding helper contracts are excluded.
 * Memory bases use volatile x64 host registers; original m32 spill slots and
 * arithmetic/compare instruction order are retained. */
.intel_syntax noprefix
.text

.globl bf_reference_distance
bf_reference_distance:
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
    fld DWORD PTR [r11]
    fsub DWORD PTR [r9+0x14]
    fld DWORD PTR [r11+8]
    fsub DWORD PTR [r9+0x1c]
    fld st(1)
    fmul st(0), st(2)
    fld st(1)
    fmul st(0), st(2)
    faddp st(1), st(0)
    fstp DWORD PTR [rsp+0x20]
    fstp st(0)
    fstp st(0)
    sqrtss xmm0, DWORD PTR [rsp+0x20]
    movss DWORD PTR [r10], xmm0
    add rsp, 40
    ret

.globl bf_reference_direction
bf_reference_direction:
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
    fld DWORD PTR [r11+0x480]
    fsub DWORD PTR [r9+8]
    fld DWORD PTR [r11+0x478]
    mov DWORD PTR [rsp+0x18], 0
    fsub DWORD PTR [r9]
    fxch st(1)
    fstp DWORD PTR [rsp+0x20]
    mov ecx, DWORD PTR [rsp+0x20]
    mov DWORD PTR [rsp+0x1c], ecx
    fstp DWORD PTR [rsp+0x14]
    and DWORD PTR [r11+0x534], 0xfffffeff
    fld DWORD PTR [rsp+0x14]
    fmul DWORD PTR [rsp+0x14]
    fld DWORD PTR [rsp+0x18]
    fmul DWORD PTR [rsp+0x18]
    faddp st(1), st(0)
    fld DWORD PTR [rsp+0x1c]
    fmul DWORD PTR [rsp+0x1c]
    faddp st(1), st(0)
    fcom DWORD PTR [rip+.Lthreshold_0002f270]
    fnstsw ax
    test ah, 0x41
    jne .Lskip_0002f270
    fstp DWORD PTR [rsp+0x20]
    rsqrtss xmm0, DWORD PTR [rsp+0x20]
    movss DWORD PTR [rsp+0x10], xmm0
    fld DWORD PTR [rsp+0x10]
    fmul DWORD PTR [rsp+0x14]
    fstp DWORD PTR [rsp+0x14]
    fld DWORD PTR [rsp+0x10]
    fmul DWORD PTR [rsp+0x18]
    fstp DWORD PTR [rsp+0x18]
    fld DWORD PTR [rsp+0x1c]
    fmul DWORD PTR [rsp+0x10]
    fstp DWORD PTR [rsp+0x1c]
    or DWORD PTR [r11+0x3c4], 0x4000
    mov eax, 1
    jmp .Lfinish_0002f270
.Lskip_0002f270:
    fstp st(0)
    xor eax, eax
.Lfinish_0002f270:
    mov edx, DWORD PTR [rsp+0x14]
    mov DWORD PTR [r10], edx
    mov edx, DWORD PTR [rsp+0x18]
    mov DWORD PTR [r10+4], edx
    mov edx, DWORD PTR [rsp+0x1c]
    mov DWORD PTR [r10+8], edx
    add rsp, 40
    ret

.globl bf_reference_count
bf_reference_count:
#ifdef _WIN32
    sub edx, ecx
#else
    mov edx, esi
    sub edx, edi
#endif
    mov eax, 0x2aaaaaab
    imul edx
    sar edx, 2
    mov eax, edx
    shr eax, 31
    add eax, edx
    ret

.globl bf_reference_get_cw
bf_reference_get_cw:
    sub rsp, 8
    fnstcw WORD PTR [rsp]
    movzx eax, WORD PTR [rsp]
    add rsp, 8
    ret

.globl bf_reference_set_cw
bf_reference_set_cw:
    sub rsp, 8
#ifdef _WIN32
    mov WORD PTR [rsp], cx
#else
    mov WORD PTR [rsp], di
#endif
    fldcw WORD PTR [rsp]
    add rsp, 8
    ret

#ifdef _WIN32
.section .rdata,"dr"
#else
.section .rodata
#endif
.p2align 2
.Lthreshold_0002f270:
    .long 0x34000000
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
