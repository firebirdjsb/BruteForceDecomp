/* Brute Force retail Xbox: FUN_00075620, original entry 0x00075620.
 * Input x86 body SHA-256: 5CB0E7070245F247D47FA3618B2CF52B864EC53555A49B8683559183F3054DFA
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_00075620(std::uint32_t guest_ecx, std::uint32_t guest_stack_arg0)
{
    const std::uint32_t removed = bf_guest_read_u32(guest_ecx + UINT32_C(8));
    std::uint32_t next = bf_guest_read_u32(removed);
    bf_guest_write_u32(guest_ecx + UINT32_C(8), next);
    // The original repeats the [removed] load after the preceding store.
    next = bf_guest_read_u32(removed);
    if (bf_guest_read_u8(next + UINT32_C(0x29)) == 0)
        bf_guest_write_u32(next + UINT32_C(4), guest_ecx);
    const std::uint32_t previous = bf_guest_read_u32(guest_ecx + UINT32_C(4));
    bf_guest_write_u32(removed + UINT32_C(4), previous);
    const std::uint32_t argument_link = bf_guest_read_u32(guest_stack_arg0 + UINT32_C(4));
    if (guest_ecx == bf_guest_read_u32(argument_link + UINT32_C(4))) {
        bf_guest_write_u32(argument_link + UINT32_C(4), removed);
    } else {
        const std::uint32_t neighbor = bf_guest_read_u32(guest_ecx + UINT32_C(4));
        if (guest_ecx == bf_guest_read_u32(neighbor))
            bf_guest_write_u32(neighbor, removed);
        else
            bf_guest_write_u32(neighbor + UINT32_C(8), removed);
    }
    bf_guest_write_u32(removed, guest_ecx);
    bf_guest_write_u32(guest_ecx + UINT32_C(4), removed);
    // Three original RET 4 sites; guest stack cleanup remains unverified.
}
