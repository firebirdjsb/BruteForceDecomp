/* Brute Force original Xbox: FUN_00071ce0, entry 0x00071ce0.
 * Input x86 body SHA-256: B480B88E81031EB0F0B3B3B3097D72FC20C43B963286D0DA3C0828CE8D6C14E6
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_00071ce0(std::uint32_t guest_base, std::uint32_t guest_dst,
                  std::uint32_t guest_src, std::uint32_t guest_eax)
{
    if (guest_dst != guest_src) {
        const std::uint32_t end = bf_guest_read_u32(guest_base + UINT32_C(8));
        std::uint32_t cursor = guest_src;
        std::uint32_t output = guest_dst;
        while (cursor != end) {
            const std::uint8_t value = bf_guest_read_u8(cursor);
            bf_guest_write_u8(output, value);
            ++output;
            ++cursor;
        }
        bf_guest_write_u32(guest_base + UINT32_C(8), output);
    }
    bf_guest_write_u32(guest_eax, guest_dst);
}
