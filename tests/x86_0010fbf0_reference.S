/* Independent native x86-64 System V hardware oracle for the *instructions*
 * in original 0x0010FBF0, not original 32-bit Xbox CALL/RET or guest layout.
 * Input: RDI=3-float output, RSI=&receiver_x, RDX=&receiver_z.
 * Implements exact original FLD, FMUL, FADDP, FSTP, RSQRTSS and output order.
 * Original XBE is authenticated independently by verifier. */
.text
.globl bf_0010fbf0_reference
.type bf_0010fbf0_reference,@function
bf_0010fbf0_reference:
    subq $32,%rsp
    flds (%rsi)
    flds (%rdx)
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
    fmuls (%rdx)
    fchs
    fstps 12(%rsp)
    flds 4(%rsp)
    fmuls (%rsi)
    fchs
    fstps (%rdi)
    movl $0,4(%rdi)
    movl 12(%rsp),%eax
    movl %eax,8(%rdi)
    addq $32,%rsp
    ret
.size bf_0010fbf0_reference,.-bf_0010fbf0_reference
.section .note.GNU-stack,"",@progbits
