/* Brute Force original Xbox - guest DWORD dispatch stores.
 * Input x86 body SHA-256: FE3B9A017F31847F12ED380AA857D366575B43EB83DDF2B52F72AB200F7A94C6
 * Entry: 0x0035feb0, Ghidra index: 13223, label: FUN_0035feb0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * The original RET has no immediate. Return-address transport and
 * guest memory faults remain owned by the unresolved executing backend.
 */
#include "bf_0035feb0_guest_model.h"

namespace {
constexpr std::uint32_t carry_flag = 0x001u;
constexpr std::uint32_t parity_flag = 0x004u;
constexpr std::uint32_t auxiliary_flag = 0x010u;
constexpr std::uint32_t zero_flag = 0x040u;
constexpr std::uint32_t sign_flag = 0x080u;
constexpr std::uint32_t overflow_flag = 0x800u;
constexpr std::uint32_t all_arithmetic_flags = 0x8d5u;

std::uint32_t szp(std::uint32_t value, std::uint32_t sign_bit)
{
    const std::uint32_t low_byte = value & 0xffu;
    const std::uint32_t folded = (low_byte ^ (low_byte >> 4u)) & 0xfu;
    const bool even_parity = ((0x6996u >> folded) & 1u) == 0u;
    return (even_parity ? parity_flag : 0u) |
           (value == 0u ? zero_flag : 0u) |
           ((value & sign_bit) != 0u ? sign_flag : 0u);
}

std::uint32_t cmp_flags(std::uint32_t left, std::uint32_t right)
{
    const std::uint32_t difference = left - right;
    return szp(difference, 0x80000000u) |
           (left < right ? carry_flag : 0u) |
           (((left ^ right ^ difference) & 0x10u) != 0u ? auxiliary_flag : 0u) |
           (((left ^ right) & (left ^ difference) & 0x80000000u) != 0u ? overflow_flag : 0u);
}

void write_dispatch(std::uint32_t first, std::uint32_t second)
{
    bf_guest_write_u32(0x00414b38u, first);  // First MOV [disp32], imm32.
    bf_guest_write_u32(0x00414b10u, second); // Second slot write stays ordered.
}
}

bf_0035feb0_guest_result FUN_0035feb0(std::uint32_t guest_ecx, std::uint32_t guest_esp)
{
    const std::uint32_t mode = bf_guest_read_u32(0x004c07e0u);
    if (mode != 1u) {
        write_dispatch(0x0035fbb0u, 0x0035fc70u);
        return {mode, 1u, all_arithmetic_flags, cmp_flags(mode, 1u)};
    }

    const std::uint32_t word = bf_guest_read_u32(guest_ecx);
    if ((word & 1u) != 0u && word <= 0x2000u) {
        // MOV EDX,[ESP+4]; LEA EAX,[EAX+EDX*4] wraps as a guest DWORD.
        const std::uint32_t argument = bf_guest_read_u32(guest_esp + 4u);
        const std::uint32_t value = word + argument * 4u;
        const std::uint32_t tested = value & 2u;
        bf_guest_write_u32(guest_ecx, value);
        if (tested == 0u)
            write_dispatch(0x0035fa10u, 0x0035fae0u);
        else
            write_dispatch(0x0035fbb0u, 0x0035fc70u);
        // TEST AL,2 defines CF=OF=0 and SZP, with AF undefined.
        return {value, argument, all_arithmetic_flags & ~auxiliary_flag, szp(tested, 0x80u)};
    }

    write_dispatch(0x0035fe10u, 0x0035fe60u);
    bf_guest_write_u32(0x00414b44u, guest_ecx);
    bf_guest_write_u32(guest_ecx, 0x82u);
    bf_guest_write_u32(0x00414b1cu, 0x0035fa10u);
    bf_guest_write_u32(0x00414b28u, 0x0035fae0u);
    bf_guest_write_u32(0x00414b30u, 1u);
    if ((word & 1u) == 0u)
        return {word, 1u, all_arithmetic_flags & ~auxiliary_flag, szp(0u, 0x80u)};
    return {word, 1u, all_arithmetic_flags, cmp_flags(word, 0x2000u)};
}
