/* Brute Force original Xbox - bounded x87 and scalar SSE call path.
 * Input x86 body SHA-256: 7852B4C395DF2F18036F550215B05358EC877C27491C0C65C12BF7D342358030
 * Entry: 0x00232e80, Ghidra index: 7776, label: FUN_00232e80
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_00233_scalar_sse.h"
#include "bf_00233_sse_operations.h"

namespace {

// Raw x87 operands at 0x003A4F74, 0x003A4F78 and 0x003A4F7C.
constexpr uint32_t half = 0x3f000000u;
constexpr uint32_t unit = 0x3f800000u;
constexpr uint32_t negative_half = 0xbf000000u;

int prepare(uint32_t &word)
{
    int range;
    // 0x00232E85..0x00232EE6 tests the FCOMP condition bits through AH and
    // rounds the reduced operand to m32fp before SQRTSS on either outer path.
    __asm__ volatile(
        "flds %[word]\n\t"
        "fcomps %[negative_half]\n\t"
        "flds %[word]\n\t"
        "fnstsw %%ax\n\t"
        "testb $5, %%ah\n\t"
        "jp 1f\n\t"
        "fadds %[unit]\n\t"
        "fmuls %[half]\n\t"
        "fstps %[word]\n\t"
        "movl $-1, %[range]\n\t"
        "jmp 3f\n\t"
        "1: fcomps %[half]\n\t"
        "fnstsw %%ax\n\t"
        "xorl %[range], %[range]\n\t"
        "testb $0x41, %%ah\n\t"
        "jne 3f\n\t"
        "flds %[unit]\n\t"
        "fsubs %[word]\n\t"
        "fmuls %[half]\n\t"
        "fstps %[word]\n\t"
        "movl $1, %[range]\n\t"
        "3:"
        : [word] "+m"(word), [range] "=&r"(range)
        : [negative_half] "m"(negative_half), [unit] "m"(unit), [half] "m"(half)
        : "ax", "cc", "memory");
    return range;
}

struct scalar_result {
    uint32_t word;
    int range;
};

scalar_result evaluate_input(float input)
{
    using namespace bf_00233_sse;
    uint32_t argument = capture(input);
    const int range = prepare(argument);
    if (range != 0) {
        argument = capture_lane(square_root(load(argument)));
    }
    // The three original E8 calls at 0x00232EB7, 0x00232EFB and 0x00232F0C
    // push one m32fp word. Keep the callee's binary32 store and x87 load.
    return {bf_00232d40_word(argument), range};
}

} // namespace

#if defined(__ELF__) && LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384
// System V returns this integer pair in EDX:EAX on i386 and RAX on x86-64.
// A direct x87 epilogue preserves C1 from the original final arithmetic.
// The compiler's unoptimized binary80 spill/reload clears that status bit.
static uint64_t result_bits(float input) __asm__("bf_00232e80_result_bits");
__attribute__((used, noinline)) static uint64_t result_bits(float input)
{
    const scalar_result result = evaluate_input(input);
    return (static_cast<uint64_t>(static_cast<uint32_t>(result.range)) << 32) | result.word;
}

__attribute__((naked)) long double FUN_00232e80(float)
{
    // Align the host call stack and reuse a DWORD slot for the x87 operands.
#if defined(__i386__)
#define BF_00232E80_CALL "subl $8, %esp\n\tpushl 12(%esp)\n\tcall bf_00232e80_result_bits\n\t"
#define BF_00232E80_SLOT "(%esp)"
#define BF_00232E80_RETURN "addl $12, %esp\n\tretl"
#else
#define BF_00232E80_CALL "subq $8, %rsp\n\tcall bf_00232e80_result_bits\n\t"
#define BF_00232E80_SLOT "(%rsp)"
#define BF_00232E80_RETURN "addq $8, %rsp\n\tretq"
#endif
    __asm__(
        BF_00232E80_CALL
        "movl %eax, " BF_00232E80_SLOT "\n\t"
#if defined(__x86_64__)
        "shrq $32, %rax\n\tmovl %eax, %edx\n\t"
#endif
        "flds " BF_00232E80_SLOT "\n\t"
        "testl %edx, %edx\n\t"
        "jz 1f\n\t"
        "fadd %st(0), %st(0)\n\t"
        "jg 3f\n\t"
        "movl $0x40490fdb, " BF_00232E80_SLOT "\n\t"
        "jmp 2f\n\t"
        "1: movl $0x3fc90fdb, " BF_00232E80_SLOT "\n\t"
        "2: fsubrs " BF_00232E80_SLOT "\n\t"
        "3: " BF_00232E80_RETURN);
#undef BF_00232E80_CALL
#undef BF_00232E80_SLOT
#undef BF_00232E80_RETURN
}
#else
long double FUN_00232e80(float input)
{
    const auto [word, range] = evaluate_input(input);
    // Raw correction words at 0x003A5018 and 0x003A50D8.
    const uint32_t correction = range < 0 ? 0x40490fdbu : 0x3fc90fdbu;

    // 0x00232EBC/0x00232F00 doubles in ST(0). The negative outer and
    // central paths then apply the respective reverse subtraction.
#define BF_00232E80_FINISH \
    "flds %[word]\n\t" \
    "testl %[range], %[range]\n\t" \
    "jz 1f\n\t" \
    "fadd %%st(0), %%st(0)\n\t" \
    "jg 2f\n\t" \
    "1: fsubrs %[correction]\n\t" \
    "2:"
#if LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384
    long double result;
    __asm__ volatile(BF_00232E80_FINISH
                     : "=t"(result)
                     : [word] "m"(word), [correction] "m"(correction), [range] "r"(range)
                     : "cc", "memory");
#else
    // Expose the existing binary64 host return; Xbox ST(0) ABI is unverified.
    double result;
    __asm__ volatile(BF_00232E80_FINISH "\n\tfstpl %[result]"
                     : [result] "=m"(result)
                     : [word] "m"(word), [correction] "m"(correction), [range] "r"(range)
                     : "cc", "memory");
#endif
#undef BF_00232E80_FINISH
    return result;
}
#endif
