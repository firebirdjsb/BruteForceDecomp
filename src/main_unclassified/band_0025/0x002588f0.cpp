/* Brute Force original Xbox: FUN_002588f0, entry 0x002588f0.
 * Input x86 body SHA-256: 6C8FA43CDC6039B93F33DC765BD97324107DFBE434C3C49BC761655511E36BA7
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_002588f0(std::uint32_t guest_begin, std::uint32_t guest_end,
                           std::uint32_t guest_dst_end, std::uint32_t guest_edi)
{
    std::uint32_t cursor = guest_end;
    std::uint32_t dst = guest_dst_end;
    while (cursor != guest_begin) {
        // Original MOV AL,[ECX-1] is before DEC EDX, DEC ECX, MOV [EDX],AL.
        const std::uint8_t value = bf_guest_read_u8(cursor - UINT32_C(1));
        --dst;
        --cursor;
        bf_guest_write_u8(dst, value);
    }
    bf_guest_write_u32(guest_edi, dst);
    // Original MOV EAX,EDI overwrites the partial AL writes before RET.
    return guest_edi;
}
