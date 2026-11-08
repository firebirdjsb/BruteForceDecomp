/* Brute Force retail Xbox: FUN_000908f0, original entry 0x000908f0.
 * Input x86 body SHA-256: F5CB8864F4EFAA8050761B3C9F5CF50965BB08F3B038B8A5A218884CF05A46D0
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_000908f0(std::uint32_t guest_ecx)
{
    std::uint32_t eax = bf_guest_read_u32(UINT32_C(0x003bb5b0));
    std::uint32_t index = 0;
    if (eax != UINT32_C(0xffffffff)) {
        const std::uint32_t target = bf_guest_read_u32(guest_ecx);
        std::uint32_t table_cursor = UINT32_C(0x003bb5b0);
        while (eax != target) {
            eax = bf_guest_read_u32(table_cursor + UINT32_C(0x60));
            table_cursor += UINT32_C(0x60);
            ++index;
            if (eax == UINT32_C(0xffffffff)) break;
        }
    }
    // LEA EAX,[EDX+EDX*2]; SHL EAX,5; ADD EAX,0x3BB5A8;
    // MOV AL,[EAX+0x14] preserves all high 24 bits of that EAX.
    const std::uint32_t address = UINT32_C(0x003bb5a8) + index * UINT32_C(0x60);
    const std::uint8_t value = bf_guest_read_u8(address + UINT32_C(0x14));
    return (address & UINT32_C(0xffffff00)) | std::uint32_t(value);
}
