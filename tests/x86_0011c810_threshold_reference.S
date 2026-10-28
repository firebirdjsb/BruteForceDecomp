/* Independent x86-64 x87 reference for original 0x0011C917..0x0011C934.
 * System V: RDI=&first output float; RSI=&third output float.
 * Return EAX=1 only on original non-JP/reset branch. */
.text
.globl bf_0011c810_threshold_reference
.type bf_0011c810_threshold_reference,@function
bf_0011c810_threshold_reference:
    flds (%rsi)
    fabs
    flds (%rdi)
    fmuls bf_0011c810_reference_eight(%rip)
    fabs
    fxch %st(1)
    fxch %st(1)
    fcompp
    fnstsw %ax
    testb $0x05,%ah
    jp 1f
    movl $1,%eax
    ret
1:  xorl %eax,%eax
    ret
.size bf_0011c810_threshold_reference,.-bf_0011c810_threshold_reference
.section .rodata
.align 4
bf_0011c810_reference_eight:
    .long 0x41000000
.section .note.GNU-stack,"",@progbits
