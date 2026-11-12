/* Brute Force original retail Xbox entry 0x001810f0: FUN_001810f0.
 * Input x86 body SHA-256: 601DF151802ADBC0189E901976670BB9D19B0350F230B095CDE550437E1258E2
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Arguments below explicitly transport observed 32-bit guest registers/stack
 * words; they are NOT inferred original C++ prototypes or native Xbox ABI.
 * Full guest virtual memory/fault timing, register preservation, stack cleanup,
 * surrounding call linkage and game behavior remain unverified.
 */
#include "bf_xbe_guest32_record_model.h"

// Original MOV ECX,[EAX], MOV DL,[ECX+0x41]. If the first
// byte is nonzero, EAX retains the original incoming guest address.
std::uint32_t FUN_001810f0(std::uint32_t guest_eax)
{
    std::uint32_t guest_ecx = bf_guest_read_u32(guest_eax);
    if (bf_guest_read_u8(guest_ecx + UINT32_C(0x41)) != 0)
        return guest_eax;
    // Each original iteration first moves ECX to EAX, then loads its link.
    for (;;) {
        guest_eax = guest_ecx;
        guest_ecx = bf_guest_read_u32(guest_eax);
        if (bf_guest_read_u8(guest_ecx + UINT32_C(0x41)) != 0)
            return guest_eax;
    }
}
