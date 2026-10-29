/* Host ABI adapters for original F32 node fields and their x87 guards.
 * Full node traversal, guest frame, entry EAX and helper calls are excluded. */
.intel_syntax noprefix
.text
.globl bf_ref_1f8db0_fields
bf_ref_1f8db0_fields:
#ifdef _WIN32
    mov r10, rcx
    mov r11d, edx
#else
    mov r10, rdi
    mov r11d, esi
#endif
    sub rsp, 8
    mov DWORD PTR [rsp], r11d
    fld DWORD PTR [r10+0x10]
    fcomp DWORD PTR [rip+.Lzero_1f8db0]
    fnstsw ax
    test ah, 1
    jne .Lskip_1f8db0
    fld DWORD PTR [rsp]
    fadd DWORD PTR [r10+0x10]
    fstp DWORD PTR [r10+0x10]
.Lskip_1f8db0:
    fld DWORD PTR [rsp]
    fadd DWORD PTR [r10+0x14]
    fst DWORD PTR [r10+0x14]
    fcomp DWORD PTR [rip+.Lpoint_two_1f8db0]
    fnstsw ax
    test ah, 1
    setz al
    movzx eax, al
    add rsp, 8
    ret
.globl bf_ref_1f8db0_threshold
bf_ref_1f8db0_threshold:
#ifdef _WIN32
    mov r10, rcx
#else
    mov r10, rdi
#endif
    fld DWORD PTR [r10]
    fcomp DWORD PTR [rip+.Lpoint_one_1f8db0]
    fnstsw ax
    test ah, 1
    setz al
    movzx eax, al
    cmp DWORD PTR [r10], 0xbf800000
    jne .Lthreshold_done_1f8db0
    mov eax, 1
.Lthreshold_done_1f8db0:
    ret
#ifdef _WIN32
.section .rdata,"dr"
#else
.section .rodata
#endif
.p2align 2
.Lzero_1f8db0:
    .long 0
.Lpoint_one_1f8db0:
    .long 0x3dcccccd
.Lpoint_two_1f8db0:
    .long 0x3e4ccccd
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
