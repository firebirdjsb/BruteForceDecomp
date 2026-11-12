/* Brute Force original Xbox function: FUN_0008f690, entry 0x0008f690.
 * Input x86 body SHA-256: A2E7B7D3A7DD6A4F5F264C6DEBD3A89E8588ECA8F90B3ED3FE84637F77145138
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 *
 * The host argument models the incoming EAX register, NOT an original
 * Xbox stack argument or verified C++ calling convention. XBE 0x8F690
 * contains only IMUL EAX,EAX,0x19660D; ADD EAX,0x3C6EF35F;
 * SHR EAX,0x15; RET. All intermediate results wrap to 32 bits.
 */
#include <cstdint>

std::uint32_t FUN_0008f690(std::uint32_t guest_eax)
{
    const std::uint32_t multiplied = guest_eax * UINT32_C(0x0019660d);
    const std::uint32_t added = multiplied + UINT32_C(0x3c6ef35f);
    return added >> 21u;
}
