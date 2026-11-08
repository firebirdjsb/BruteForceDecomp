/* Brute Force original Xbox: FUN_0024f210, entry 0x0024f210.
 * Input x86 body SHA-256: 3E760A2A59114BE232DC6308A1D9D706FBDEDD359E73DA979A1E9DB591204FA5
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_0024f210(std::uint32_t guest_dst, std::uint32_t guest_src,
                  std::uint32_t guest_ebx, std::uint32_t guest_eax)
{
    if (guest_dst != guest_src) {
        const std::uint32_t end = bf_guest_read_u32(guest_ebx + UINT32_C(8));
        std::uint32_t cursor = guest_src;
        std::uint32_t output = guest_dst;
        while (cursor != end) {
            const std::uint32_t value = bf_guest_read_u32(cursor);
            bf_guest_write_u32(output, value);
            cursor += UINT32_C(4);
            output += UINT32_C(4);
        }
        bf_guest_write_u32(guest_ebx + UINT32_C(8), output);
    }
    bf_guest_write_u32(guest_eax, guest_dst);
}
