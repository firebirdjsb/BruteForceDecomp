/* Brute Force retail Xbox: FUN_00126b20, original entry 0x00126b20.
 * Input x86 body SHA-256: 8DED0466287A32323F35837AE2EAA85396FC2DAB8C443A6E6D853E63E0682F82
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00126b20(std::uint32_t guest_eax)
{
    const std::uint32_t loaded_eax = bf_guest_read_u32(guest_eax + UINT32_C(0x214));
    const bool match = loaded_eax != 0 && bf_guest_read_u32(loaded_eax) == 1;
    // Original B0 01 / 32 C0 touches AL, not the complete EAX word.
    return (loaded_eax & UINT32_C(0xffffff00)) | std::uint32_t(match);
}
