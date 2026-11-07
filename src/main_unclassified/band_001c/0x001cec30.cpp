/* Brute Force original retail Xbox entry 0x001cec30: FUN_001cec30.
 * Input x86 body SHA-256: 2D97245F0AD64C29B40A030ED364358DC1A2B90D0E80FBFD130D7945390B79DE
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Arguments below explicitly transport observed 32-bit guest registers/stack
 * words; they are NOT inferred original C++ prototypes or native Xbox ABI.
 * Full guest virtual memory/fault timing, register preservation, stack cleanup,
 * surrounding call linkage and game behavior remain unverified.
 */
#include "bf_xbe_guest32_record_model.h"

// Original per-iteration x86 instruction order is: read [ECX], write
// [EAX], read [EDX+EAX+4] (equivalent to [ECX+4] after EDX=ECX-EAX),
// write [EAX+4], increment both guest pointers by eight.
// Reads must not be hoisted over writes: guest ranges may overlap.
std::uint32_t FUN_001cec30(std::uint32_t guest_eax,
                              std::uint32_t guest_begin,
                              std::uint32_t guest_end)
{
    while (guest_begin != guest_end) {
        const std::uint32_t word0 = bf_guest_read_u32(guest_begin);
        bf_guest_write_u32(guest_eax, word0);
        const std::uint32_t word1 = bf_guest_read_u32(guest_begin + UINT32_C(4));
        bf_guest_write_u32(guest_eax + UINT32_C(4), word1);
        guest_begin += UINT32_C(8);
        guest_eax += UINT32_C(8);
    }
    return guest_eax;
}
