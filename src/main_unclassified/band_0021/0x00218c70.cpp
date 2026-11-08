/* Brute Force original Xbox: FUN_00218c70, entry 0x00218c70.
 * Input x86 body SHA-256: D59D53FB9798B4144562AE98CDAF3AC1F7921F56021D939DA83D54DA8252079D
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_00218c70(std::uint32_t guest_begin, std::uint32_t guest_end,
                  std::uint32_t word0, std::uint32_t word1,
                  std::uint32_t guest_eax)
{
    std::uint32_t cursor = guest_begin;
    while (cursor != guest_end) {
        if (bf_guest_read_u32(cursor) == word0 &&
            bf_guest_read_u32(cursor + UINT32_C(4)) == word1)
            break;
        cursor += UINT32_C(0x14);
    }
    bf_guest_write_u32(guest_eax, cursor);
}
