.text
.global _start
_start:
    andl $-16, %esp
    call verify_retail
    movl %eax, %ebx
    movl $1, %eax
    int $0x80

# Capture ST(0) as ten bytes and the status word before consuming it.
.macro observe name, callee
.global \name
\name:
    movl 4(%esp), %eax
    subl $8, %esp
    pushl %eax
    call \callee
    addl $12, %esp
    movl 12(%esp), %eax
    fnstsw (%eax)
    movl 8(%esp), %eax
    fstpt (%eax)
    ret
.endm

observe observe_retail_233150, retail_233150
observe observe_cpp_233150, _Z12FUN_00233150f
observe observe_retail_2331f0, retail_2331f0
observe observe_cpp_2331f0, _Z12FUN_002331f0f
observe observe_retail_233290, retail_233290
observe observe_cpp_233290, _Z12FUN_00233290f

.global retail_233020
retail_233020:
    .incbin "233020.bin"
retail_233150:
    .incbin "233150.bin"
retail_2331f0:
    .incbin "2331f0.bin"
retail_233290:
    .incbin "233290.bin"

# The retail instructions reference absolute VAs. The verifier maps the
# extracted constant range at its original VA with --section-start.
.section .bf_00233_constants,"a",@progbits
    .incbin "constants.bin"
.section .note.GNU-stack,"",@progbits
