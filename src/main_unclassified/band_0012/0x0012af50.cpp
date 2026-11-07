/* Brute Force original retail Xbox entry 0x0012af50: FUN_0012af50.
 * Input x86 body SHA-256: 7BB467F812E4C8790EA318F82DE0036F7CF63F61C8BDE62B2B98030B83D03FD2
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Arguments below explicitly transport observed 32-bit guest registers/stack
 * words; they are NOT inferred original C++ prototypes or native Xbox ABI.
 * Full guest virtual memory/fault timing, register preservation, stack cleanup,
 * surrounding call linkage and game behavior remain unverified.
 */
#include "bf_xbe_guest32_record_model.h"

// Original EAX is the guest output address, not a host pointer.
// The original guest memory read/compare order is preserved.
std::uint32_t FUN_0012af50(std::uint32_t guest_eax, std::uint32_t begin, std::uint32_t end, std::uint32_t key_address)
{
    std::uint32_t current = begin;
    if (current != end) {
        const std::uint32_t key = bf_guest_read_u32(key_address);
        do {
            if (bf_guest_read_u32(current) == key)
                break;
            current += UINT32_C(4);
        } while (current != end);
    }
    bf_guest_write_u32(guest_eax, current);
    return guest_eax; // original live-out EAX still holds the output VA
}
