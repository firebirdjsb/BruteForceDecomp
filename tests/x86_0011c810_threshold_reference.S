/* Independent x86-64 x87 reference for original 0x0011C917..0x0011C934.
 * System V: RDI=&first, RSI=&third; Windows x64: RCX=&first, RDX=&third.
 * Return EAX=1 only on original non-JP/reset branch. */
.text
.globl bf_0011c810_threshold_reference
#ifndef _WIN32
.type bf_0011c810_threshold_reference,@function
#endif
bf_0011c810_threshold_reference:
#ifdef _WIN32
    flds (%rdx)
    fabs
    flds (%rcx)
#else
    flds (%rsi)
    fabs
    flds (%rdi)
#endif
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
#ifndef _WIN32
.size bf_0011c810_threshold_reference,.-bf_0011c810_threshold_reference
.section .rodata
#else
.section .rdata,"dr"
#endif
.align 4
bf_0011c810_reference_eight:
    .long 0x41000000
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
