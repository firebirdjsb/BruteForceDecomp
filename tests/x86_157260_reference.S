/* Instruction-based oracle for 0x15741b..0x1574a9. Only memory bases and
 * stack allocation adapt to the x64 test ABI. Establish masked x87 extended/RNE
 * for this bounded test and restore the caller's control word. */
.intel_syntax noprefix
.text
.globl bf_reference_157260
bf_reference_157260:
#ifndef _WIN32
    mov r8, rdx
    mov rdx, rsi
    mov rcx, rdi
#endif
    sub rsp, 40
    fnstcw WORD PTR [rsp+32]
    mov WORD PTR [rsp+34], 0x037f
    fldcw WORD PTR [rsp+34]
    fld DWORD PTR [rcx+0xf0]
    fadd DWORD PTR [rdx+0x2c]
    fstp DWORD PTR [rsp+8]
    fld DWORD PTR [rcx+0xec]
    fadd DWORD PTR [rdx+0x28]
    fstp DWORD PTR [rsp+4]
    fld DWORD PTR [rcx+0xe8]
    fadd DWORD PTR [rdx+0x24]
    fstp DWORD PTR [rsp]
    mov DWORD PTR [rsp+12], 0x3f000000
    movss xmm0, DWORD PTR [rsp+12]
    shufps xmm0, xmm0, 0
    movss xmm1, DWORD PTR [rsp]
    movhps xmm1, QWORD PTR [rsp+4]
    mulps xmm0, xmm1
    movss DWORD PTR [r8], xmm0
    movhps QWORD PTR [r8+4], xmm0
    mov eax, DWORD PTR [r8]
    mov DWORD PTR [rcx+0xe8], eax
    mov eax, DWORD PTR [r8+4]
    mov DWORD PTR [rcx+0xec], eax
    mov eax, DWORD PTR [r8+8]
    mov DWORD PTR [rcx+0xf0], eax
    fldcw WORD PTR [rsp+32]
    add rsp, 40
    ret

#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
