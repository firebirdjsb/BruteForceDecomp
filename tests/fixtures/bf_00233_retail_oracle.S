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

observe observe_retail_232d40, retail_232d40
observe observe_cpp_232d40, _Z12FUN_00232d40f
observe observe_retail_232e80, retail_232e80
observe observe_cpp_232e80, _Z12FUN_00232e80f
observe observe_retail_233150, retail_233150
observe observe_cpp_233150, _Z12FUN_00233150f
observe observe_retail_2331f0, retail_2331f0
observe observe_cpp_2331f0, _Z12FUN_002331f0f
observe observe_retail_233290, retail_233290
observe observe_cpp_233290, _Z12FUN_00233290f

.global observe_retail_233590
observe_retail_233590:
    pushl %ebx
    pushl %esi
    movl 12(%esp), %eax
    movl 16(%esp), %esi
    movl 20(%esp), %edx
    movl 24(%esp), %ecx
    movb 28(%esp), %bl
    call retail_233590
    popl %esi
    popl %ebx
    ret

retail_232d40:
    .incbin "232d40.bin"
    # Preserve the E8 displacement between the two retail routines.
    .fill (0x140 - (. - retail_232d40)), 1, 0x90
retail_232e80:
    .incbin "232e80.bin"

.global retail_233020
retail_233020:
    .incbin "233020.bin"
retail_233150:
    .incbin "233150.bin"
retail_2331f0:
    .incbin "2331f0.bin"
retail_233290:
    .incbin "233290.bin"
retail_233590:
    .incbin "233590.bin"

# The retail instructions reference absolute VAs. The verifier maps the
# extracted constant range at its original VA with --section-start.
.section .bf_constants_38d850,"a",@progbits
    .incbin "38d850.bin"
.section .bf_constants_3942fc,"a",@progbits
    .incbin "3942fc.bin"
.section .bf_constants_3a4f74,"a",@progbits
    .incbin "3a4f74.bin"
.section .note.GNU-stack,"",@progbits
