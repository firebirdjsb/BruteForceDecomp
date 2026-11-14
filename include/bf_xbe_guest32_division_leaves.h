#ifndef BF_XBE_GUEST32_DIVISION_LEAVES_H
#define BF_XBE_GUEST32_DIVISION_LEAVES_H

#include "bf_xbe_guest32_record_leaves.h"

// Host-side entry model. A divide error leaves EIP at DIV/IDIV with
// all earlier instructions committed. Guest exception delivery is separate.
enum class bf_guest32_division_result { returned, divide_error };

bf_guest32_division_result FUN_002e9e80(bf_guest32_constructor_state& guest);
bf_guest32_division_result FUN_002374d0(bf_guest32_constructor_state& guest);
bf_guest32_division_result FUN_00237520(bf_guest32_constructor_state& guest);

namespace bf_guest32_division {

inline std::int64_t signed_dword(std::uint32_t value)
{
    return static_cast<std::int64_t>(value) -
           ((value & 0x80000000u) != 0u ? 0x100000000ll : 0ll);
}

inline std::uint32_t read_signed_word(bf_guest32_constructor_state& guest,
                                      std::uint32_t site, std::uint32_t address)
{
    guest.eip = site;
    const std::uint32_t word = bf_guest_read_u16(address);
    return (word ^ 0x8000u) - 0x8000u;
}

inline void cdq(bf_guest32_constructor_state& guest)
{
    guest.edx = 0u - (guest.eax >> 31u);
}

// Both IDIV instructions immediately follow CDQ, so EDX:EAX is the signed
// extension of EAX. Use a wider host quotient to detect x86 quotient overflow.
inline bool idiv_after_cdq(bf_guest32_constructor_state& guest, std::uint32_t site)
{
    guest.eip = site;
    const auto dividend = signed_dword(guest.eax);
    const auto divisor = signed_dword(guest.edi);
    if (divisor == 0)
        return false;
    const auto quotient = dividend / divisor;
    if (quotient < -2147483648ll || quotient > 2147483647ll)
        return false;
    guest.eax = static_cast<std::uint32_t>(quotient);
    guest.edx = static_cast<std::uint32_t>(dividend % divisor);
    guest.eflags_defined &= ~bf_guest32_constructor::arithmetic;
    return true;
}

inline std::uint32_t imul(bf_guest32_constructor_state& guest,
                          std::uint32_t left, std::uint32_t right)
{
    using namespace bf_guest32_constructor;
    const std::int64_t product = signed_dword(left) * signed_dword(right);
    const bool wide = product < -2147483648ll || product > 2147483647ll;
    guest.eflags = (guest.eflags & ~(carry | overflow)) | (wide ? carry | overflow : 0u);
    guest.eflags_defined = (guest.eflags_defined & ~arithmetic) | carry | overflow;
    return static_cast<std::uint32_t>(product);
}

inline void increment_dword(bf_guest32_constructor_state& guest,
                             std::uint32_t site, std::uint32_t address)
{
    using namespace bf_guest32_constructor;
    const std::uint32_t old_value = read32(guest, site, address);
    write32(guest, site, address, old_value + 1u);
    // A faulting store leaves INC uncommitted, including its flag writes.
    auto value_for_flags = old_value;
    increment(guest, value_for_flags);
}

} // namespace bf_guest32_division

#endif
