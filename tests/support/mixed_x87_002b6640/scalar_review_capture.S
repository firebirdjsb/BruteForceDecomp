/* Reviewer-authored scalar probe; no original executable bytes. */
.text
.globl review_capture
.type review_capture,@function
review_capture:
/* rdi: valid FXSAVE seed; rsi: B[3]; rdx: C[3]; rcx: aligned output */
subq $520,%rsp
fxsave (%rsp)
fxrstor (%rdi)
.macro snap n
fxsave (512*\n)(%rcx)
fnstenv (5120+32*\n)(%rcx)
.endm
flds 8(%rsi)
snap 0
fmuls 8(%rdx)
snap 1
flds 4(%rsi)
snap 2
fmuls 4(%rdx)
snap 3
faddp %st,%st(1)
snap 4
flds (%rsi)
snap 5
fmuls (%rdx)
snap 6
faddp %st,%st(1)
snap 7
fchs
snap 8
fstps 5440(%rcx)
snap 9
fxrstor (%rsp)
addq $520,%rsp
ret
.size review_capture,.-review_capture
.section .note.GNU-stack,"",@progbits
