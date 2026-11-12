/* Brute Force retail Xbox: FUN_00162cd0, original entry 0x00162cd0.
 * Input x86 body SHA-256: 6BC7641B3AEEC64CCB3C0C1D0593A186A70A1E39590BB7B395CA3B93C32B2149
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00162cd0(std::uint32_t guest_eax, std::uint32_t guest_edx)
{
    const std::uint32_t count = bf_guest_read_u32(guest_eax + UINT32_C(0x104));
    const std::uint32_t end = guest_eax + count * UINT32_C(4) + UINT32_C(4);
    std::uint32_t cursor = guest_eax + UINT32_C(4);
    while (cursor != end) {
        if (bf_guest_read_u32(cursor) == guest_edx) break;
        cursor += UINT32_C(4);
    }
    // Original SETNE DL / MOV AL,DL: high 24 bits remain from cursor.
    return (cursor & UINT32_C(0xffffff00)) | std::uint32_t(cursor != end);
}
