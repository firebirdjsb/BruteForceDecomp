/* Brute Force retail Xbox: FUN_0006ebc0, original entry 0x0006ebc0.
 * Input x86 body SHA-256: BDBD1D7FBC36A1621E15677C8105949D5538E2742D9731C71C60E18960BD02E2
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_0006ebc0(std::uint32_t guest_eax, std::uint32_t guest_ecx,
                           std::uint32_t guest_edx, std::uint8_t guest_stack_flag,
                           std::uint32_t guest_stack_arg1, std::uint32_t guest_stack_arg2)
{
    // XOR AL,AL keeps the high 24 bits of incoming EAX.
    std::uint32_t eax = guest_eax & UINT32_C(0xffffff00);
    if (bf_guest_read_u8(guest_ecx) != 0) return eax;
    // Two stack-provided guest pointers are dereferenced in reverse order.
    const std::uint32_t arg2_value = bf_guest_read_u32(guest_stack_arg2);
    const std::uint32_t arg1_value = bf_guest_read_u32(guest_stack_arg1);
    if (arg1_value != arg2_value) return eax;
    if (guest_stack_flag != 0) {
        const std::uint32_t word = bf_guest_read_u32(guest_eax);
        bf_guest_write_u32(guest_edx, word);
        bf_guest_write_u8(guest_ecx, UINT8_C(1));
        return eax;
    }
    const std::uint32_t word = bf_guest_read_u32(guest_edx);
    bf_guest_write_u32(guest_eax, word);
    eax = (word & UINT32_C(0xffffff00)) | UINT32_C(1);
    bf_guest_write_u8(guest_ecx, UINT8_C(1));
    return eax;
}
