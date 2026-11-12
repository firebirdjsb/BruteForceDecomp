/* Brute Force retail Xbox x86 entry: FUN_00015f80, 0x00015f80.
 * Input x86 body SHA-256: 46944BDE93CACAC236E2744F46EC746CA169DC29643CC7D75DE51A78196C9659
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 *
 * Host guest_eax and guest_ecx explicitly model *incoming x86 registers*,
 * not original Xbox stack arguments or a recovered C++ function prototype.
 * The 32-bit guest-memory interface has no runtime implementation here.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00015f80(std::uint32_t guest_eax, std::uint32_t guest_ecx)
{
    // 0x15f80: MOV EDX,[ECX] (first read, even for an empty range).
    const std::uint32_t value = bf_guest_read_u32(guest_ecx);
    // 0x15f82: MOV ECX,[EAX+8]; 0x15f85: MOV EAX,[EAX+4].
    const std::uint32_t end = bf_guest_read_u32(guest_eax + UINT32_C(8));
    std::uint32_t current = bf_guest_read_u32(guest_eax + UINT32_C(4));
    // Original 0x15f88/0x15f97 exit on current == end. For nonempty
    // ranges, 0x15f90 reads one DWORD and advances guest EAX by 0x18.
    while (current != end) {
        if (bf_guest_read_u32(current) == value) {
            // 0x15f9b..0x15fa5 returns current when equality is found.
            return current;
        }
        current += UINT32_C(0x18);  // original 32-bit ADD wraps
    }
    // Original SETE; DEC EDX; AND EAX,EDX masks exhausted range to 0.
    return UINT32_C(0);
}
