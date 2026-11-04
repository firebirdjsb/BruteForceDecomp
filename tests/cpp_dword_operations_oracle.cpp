/* Native x86 instruction oracle for isolated flag/storage primitives only.
 * No original game function is executed and no guest ABI credit is claimed.
 */
#include "bf_x86_dword_operations.h"
#include <cstring>

#if !defined(__i386__) && !defined(__x86_64__) && !defined(_M_X64)
#error This instruction oracle requires an x86 host
#endif

static bool cpu_carry(std::uint32_t a, std::uint32_t b)
{
    unsigned char carry;
    __asm__ volatile("addl %2,%0; setc %1" : "+r"(a), "=qm"(carry) : "r"(b) : "cc");
    return carry != 0;
}

static bool cpu_sub_overflow(std::uint32_t a, std::uint32_t b)
{
    unsigned char overflow;
    __asm__ volatile("subl %2,%0; seto %1" : "+r"(a), "=qm"(overflow) : "r"(b) : "cc");
    return overflow != 0;
}

static bool check(std::uint32_t a, std::uint32_t b)
{
    std::int32_t signed_a, signed_b;
    std::memcpy(&signed_a,&a,4);
    std::memcpy(&signed_b,&b,4);
    return CARRY4(a,b) == cpu_carry(a,b) &&
           SBORROW4(a,b) == cpu_sub_overflow(a,b) &&
           CARRY4(signed_a,signed_b) == cpu_carry(a,b) &&
           SBORROW4(signed_a,signed_b) == cpu_sub_overflow(a,b);
}

int main()
{
    const std::uint32_t edges[] = {0,1,2,0x7ffffffe,0x7fffffff,
                                  0x80000000,0x80000001,0xfffffffe,0xffffffff};
    for (auto a : edges) for (auto b : edges) if (!check(a,b)) return 1;
    std::uint32_t random = 0x19660d;
    for (unsigned i=0; i<262144; ++i) {
        random = random * UINT32_C(1664525) + UINT32_C(1013904223);
        const auto a = random;
        random = random * UINT32_C(1664525) + UINT32_C(1013904223);
        if (!check(a,random)) return 2;
    }
    struct Frame { std::uint32_t before, word, after; } frame = {0x12345678,0,0x87654321};
    for (auto bits : edges) {
        frame.word = bits;
        int *view = bf_x86_signed_dword_view(&frame.word);
        if (static_cast<void *>(view) != static_cast<void *>(&frame.word)) return 3;
        const int value = *view;
        std::uint32_t observed;
        std::memcpy(&observed,&value,4);
        if (observed != bits) return 4;
        *view = -1;
        if (frame.word != UINT32_C(0xffffffff) || frame.before != 0x12345678 ||
            frame.after != 0x87654321) return 5;
    }
    return 0;
}
