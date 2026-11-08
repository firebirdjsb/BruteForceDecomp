/* Brute Force original Xbox: FUN_001d6460, entry 0x001d6460.
 * Input x86 body SHA-256: C458383790F9D8503FD9EE2DAE7A93A896349CC148115A671C8AB5455293DC96
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_001d6460(std::uint32_t guest_begin, std::uint32_t guest_end,
                  std::uint32_t guest_dst_end, std::uint32_t guest_eax)
{
    std::uint32_t cursor = guest_end;
    std::uint32_t dst = guest_dst_end;
    while (cursor != guest_begin) {
        // Two original loads/writes per record, not a snapshot of a whole pair.
        const std::uint32_t first = bf_guest_read_u32(cursor - UINT32_C(8));
        cursor -= UINT32_C(8);
        dst -= UINT32_C(8);
        bf_guest_write_u32(dst, first);
        const std::uint32_t second = bf_guest_read_u32(cursor + UINT32_C(4));
        bf_guest_write_u32(dst + UINT32_C(4), second);
    }
    bf_guest_write_u32(guest_eax, dst);
}
