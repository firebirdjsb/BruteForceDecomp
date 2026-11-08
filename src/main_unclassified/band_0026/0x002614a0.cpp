/* Brute Force original Xbox: FUN_002614a0, entry 0x002614a0.
 * Input x86 body SHA-256: 791992BD8D647201AA014AC6C6DF474F1FC464CC8C7C87B05C16DA61DF8B41E5
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_002614a0(std::uint32_t guest_begin, std::uint32_t guest_end,
                  std::uint32_t guest_dst_end, std::uint32_t guest_eax)
{
    std::uint32_t cursor = guest_end;
    std::uint32_t dst = guest_dst_end;
    while (cursor != guest_begin) {
        // Original MOV EDI,[ECX-4] precedes both pointer decrements and write.
        const std::uint32_t value = bf_guest_read_u32(cursor - UINT32_C(4));
        cursor -= UINT32_C(4);
        dst -= UINT32_C(4);
        bf_guest_write_u32(dst, value);
    }
    bf_guest_write_u32(guest_eax, dst);
}
