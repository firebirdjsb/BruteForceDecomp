/* Brute Force retail Xbox: FUN_00085410, original entry 0x00085410.
 * Input x86 body SHA-256: BC3EC1C34D74F3A8E1F825D56C305A05777503C8860660CE5C1B673C81AB2EEA
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_00085410(std::uint32_t guest_eax, std::uint32_t guest_ebx,
                  std::uint32_t guest_stack_arg0)
{
    const std::uint32_t end = bf_guest_read_u32(guest_ebx + UINT32_C(8));
    std::uint32_t cursor = guest_stack_arg0 + UINT32_C(4);
    // The original ESI equals (EDI - (EDI+4)) modulo 32-bit, i.e. -4.
    while (cursor != end) {
        const std::uint32_t word = bf_guest_read_u32(cursor);
        bf_guest_write_u32(cursor - UINT32_C(4), word);
        cursor += UINT32_C(4);
    }
    // ADD DWORD PTR [EBX+8],-4 occurs after all copy operations.
    const std::uint32_t old_end = bf_guest_read_u32(guest_ebx + UINT32_C(8));
    bf_guest_write_u32(guest_ebx + UINT32_C(8), old_end - UINT32_C(4));
    bf_guest_write_u32(guest_eax, guest_stack_arg0);
    // Original 0x8543A RET 4. Host stack cleanup not modeled.
}
