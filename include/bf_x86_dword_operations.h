/* Bounded x86 DWORD flag/storage operations. No guest memory mapping or ABI.
 * SBORROW4 means signed subtraction overflow (OF), not unsigned borrow (CF).
 * Each operand is a known 32-bit integer word; pointers/FP/wider words fail.
 */
#ifndef BF_X86_DWORD_OPERATIONS_H
#define BF_X86_DWORD_OPERATIONS_H
#include <cstdint>
#include <type_traits>

template<class A, class B>
static inline bool CARRY4(A left, B right) noexcept
{
    static_assert(std::is_integral<A>::value && std::is_integral<B>::value &&
                  sizeof(A) == 4 && sizeof(B) == 4, "Requires evidenced DWORD operands");
    return (std::uint64_t(static_cast<std::uint32_t>(left)) +
            std::uint64_t(static_cast<std::uint32_t>(right))) > UINT64_C(0xffffffff);
}

template<class A, class B>
static inline bool SBORROW4(A left, B right) noexcept
{
    static_assert(std::is_integral<A>::value && std::is_integral<B>::value &&
                  sizeof(A) == 4 && sizeof(B) == 4, "Requires evidenced DWORD operands");
    const std::uint32_t a = static_cast<std::uint32_t>(left);
    const std::uint32_t b = static_cast<std::uint32_t>(right);
    const std::uint32_t difference = a - b;
    return ((a ^ b) & (a ^ difference) & UINT32_C(0x80000000)) != 0;
}

/* C++17 [basic.lval]/8.4 permits corresponding signed/unsigned object views.
 * Preserve this same object/address and all four bytes, without conversion.
 * Source global-to-guest mapping and the consuming functions stay unverified.
 */
static inline int *bf_x86_signed_dword_view(std::uint32_t *word) noexcept
{
    static_assert(std::is_same<typename std::make_unsigned<int>::type,
                               std::uint32_t>::value, "Requires corresponding 32-bit int types");
    static_assert(sizeof(int) == 4 && alignof(int) == alignof(std::uint32_t),
                  "Requires identical DWORD size and alignment");
    return reinterpret_cast<int *>(word);
}
#endif
