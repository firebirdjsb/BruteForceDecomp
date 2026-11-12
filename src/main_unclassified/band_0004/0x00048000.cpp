/* Brute Force retail Xbox: FUN_00048000, original entry 0x00048000.
 * Input x86 body SHA-256: E2946DF4AF39C73E87C4DFF5F9FCE98D18F0C54365190C81B373325C4E52959A
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00048000(std::uint32_t guest_eax, std::uint32_t guest_edx)
{
    const std::uint32_t end = bf_guest_read_u32(guest_eax + UINT32_C(0x64));
    std::uint32_t cursor = bf_guest_read_u32(guest_eax + UINT32_C(0x60));
    while (cursor != end) {
        if (bf_guest_read_u32(cursor) == guest_edx) break;
        cursor += UINT32_C(8);
    }
    // SETNE DL; MOV AL,DL: the upper 24 EAX bits are the final cursor.
    return (cursor & UINT32_C(0xffffff00)) | std::uint32_t(cursor != end);
}
