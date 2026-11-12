/* Brute Force original Xbox: FUN_001dcc40, entry 0x001dcc40.
 * Input x86 body SHA-256: B8D3A5E5B8B382F43EA397F9AD1EF426BE8885A1E22EADC7B22DEB7C7B5FF0CF
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

// The original uses atomic 16-bit guest loads/stores. Do not simulate them
// with two byte operations; fault and overlap behavior would differ.
std::uint16_t bf_guest_read_u16(std::uint32_t guest_va);
void bf_guest_write_u16(std::uint32_t guest_va, std::uint16_t value);

void FUN_001dcc40(std::uint32_t guest_begin, std::uint32_t guest_end,
                  std::uint32_t guest_dst_end, std::uint32_t guest_eax)
{
    std::uint32_t cursor = guest_end;
    std::uint32_t dst = guest_dst_end;
    while (cursor != guest_begin) {
        const std::uint16_t value = bf_guest_read_u16(cursor - UINT32_C(2));
        cursor -= UINT32_C(2);
        dst -= UINT32_C(2);
        bf_guest_write_u16(dst, value);
    }
    bf_guest_write_u32(guest_eax, dst);
}
