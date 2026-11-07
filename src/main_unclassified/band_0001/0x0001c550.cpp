/* Brute Force retail Xbox x86 entry: FUN_0001c550, 0x0001c550.
 * Input x86 body SHA-256: FB37FFC1E06F452E2078CD0FAFF8D2311A1B497FF5217BAF6D02C19B0CD7E67B
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 *
 * Host argument guest_eax models the original incoming EAX register. The
 * host return value models its final EAX register (not a recovered x86 C++
 * signature). Original ECX and DL also change; their live-out contracts,
 * original register/stack ABI, guest VA mapping and guest fault behavior
 * remain unresolved. Native pointers must never be truncated to guest32.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_0001c550(std::uint32_t guest_eax)
{
    // XBE 0x1C550 MOV ECX,[EAX]; 0x1C552 MOV DL,[ECX+0xA9].
    std::uint32_t guest_ecx = bf_guest_read_u32(guest_eax);
    std::uint8_t guest_dl = bf_guest_read_u8(guest_ecx + UINT32_C(0xa9));
    while (guest_dl == 0) {
        // XBE 0x1C560 MOV EAX,ECX; 0x1C562 MOV ECX,[EAX].
        guest_eax = guest_ecx;
        guest_ecx = bf_guest_read_u32(guest_eax);
        guest_dl = bf_guest_read_u8(guest_ecx + UINT32_C(0xa9));
    }
    // Original 0x1C56E RET has no explicit stack cleanup. Only EAX is
    // exported by this bounded host adapter; ECX, DL, flags are ABI_UNVERIFIED.
    return guest_eax;
}
