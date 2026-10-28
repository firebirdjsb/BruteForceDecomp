/* Independent native x86-64 System V hardware oracle for the *instructions*
 * in original 0x0010FBF0, not original 32-bit Xbox CALL/RET or guest layout.
 * System V: RDI=output, RSI=&x, RDX=&z.
 * Windows x64: RCX=output, RDX=&x, R8=&z (all volatile registers).
 * Implements exact original FLD, FMUL, FADDP, FSTP, RSQRTSS and output order.
 * Original XBE is authenticated independently by verifier. */
.text
.globl bf_0010fbf0_reference
#ifndef _WIN32
.type bf_0010fbf0_reference,@function
#define BF_OUTPUT %rdi
#define BF_X %rsi
#define BF_Z %rdx
#else
#define BF_OUTPUT %rcx
#define BF_X %rdx
#define BF_Z %r8
#endif
bf_0010fbf0_reference:
    subq $32,%rsp
    flds (BF_X)
    flds (BF_Z)
    fld %st(0)
    fmul %st(1),%st(0)
    fld %st(2)
    fmul %st(3),%st(0)
    faddp %st(0),%st(1)
    fstps 8(%rsp)
    fstp %st(0)
    fstp %st(0)
    rsqrtss 8(%rsp),%xmm0
    movss %xmm0,4(%rsp)
    flds 4(%rsp)
    fmuls (BF_Z)
    fchs
    fstps 12(%rsp)
    flds 4(%rsp)
    fmuls (BF_X)
    fchs
    fstps (BF_OUTPUT)
    movl $0,4(BF_OUTPUT)
    movl 12(%rsp),%eax
    movl %eax,8(BF_OUTPUT)
    addq $32,%rsp
    ret
#ifndef _WIN32
.size bf_0010fbf0_reference,.-bf_0010fbf0_reference
.section .note.GNU-stack,"",@progbits
#endif
