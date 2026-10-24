/* Instruction reference for 0x3318d-0x331c8 / 0x33bac-0x33be7.
 * Only pointer registers and return storage adapt to the host x64 ABI.
 * Test seeds vary inherited XMM lanes. MXCSR/flags are not compared.
 */
#ifdef _WIN32
#define INPUT rcx
#define SEED0 rdx
#define SEED1 r8
#define THRESHOLD r9
#else
#define INPUT rdi
#define SEED0 rsi
#define SEED1 rdx
#define THRESHOLD rcx
#endif
.intel_syntax noprefix
.text
.globl bf_reference_normalize3
bf_reference_normalize3:
    movups xmm0, XMMWORD PTR [SEED0]
    movups xmm1, XMMWORD PTR [SEED1]
    movss xmm0, DWORD PTR [INPUT]
    movhps xmm0, QWORD PTR [INPUT + 4]
    movaps xmm2, xmm0
    mulps xmm0, xmm0
    shufps xmm1, xmm0, 0x80
    addps xmm1, xmm0
    shufps xmm1, xmm1, 0x03
    addss xmm1, xmm0
    comiss xmm1, DWORD PTR [THRESHOLD]
    mov eax, 0
    jb .Lnormalize_done
    rsqrtss xmm1, xmm1
    shufps xmm1, xmm1, 0x00
    mulps xmm2, xmm1
    movss DWORD PTR [INPUT], xmm2
    movhps QWORD PTR [INPUT + 4], xmm2
    mov eax, 1
.Lnormalize_done:
    ret
.globl bf_reference_movss_load
bf_reference_movss_load:
#ifdef _WIN32
    movups xmm0, XMMWORD PTR [r8]
    movss xmm0, DWORD PTR [rdx]
    movups XMMWORD PTR [rcx], xmm0
#else
    movups xmm0, XMMWORD PTR [rdx]
    movss xmm0, DWORD PTR [rsi]
    movups XMMWORD PTR [rdi], xmm0
#endif
    ret
#ifndef _WIN32
.section .note.GNU-stack,"",@progbits
#endif
