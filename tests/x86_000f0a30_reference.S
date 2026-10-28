/* Host ABI adapter for 0xf1077..0xf108f. Inputs are two signed DWORDs;
 * this does not reproduce the guest frame, virtual call or formatter ABI. */
.intel_syntax noprefix
.text
.globl bf_ref_000f0a30
bf_ref_000f0a30:
#ifdef _WIN32
    mov r10, rcx
#else
    mov r10, rdi
#endif
    xor eax, eax
    cmp DWORD PTR [r10+4], 0
    jle .Ldone_000f0a30
    sub rsp, 8
    fild DWORD PTR [r10]
    fmul DWORD PTR [rip+.Lhundred_000f0a30]
    fidiv DWORD PTR [r10+4]
    fstp DWORD PTR [rsp]
    cvttss2si eax, DWORD PTR [rsp]
    add rsp, 8
.Ldone_000f0a30:
    ret
#ifdef _WIN32
.section .rdata,"dr"
#else
.section .rodata
#endif
.p2align 2
.Lhundred_000f0a30:
    .long 0x42c80000
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
