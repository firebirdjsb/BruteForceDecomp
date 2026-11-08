/* Brute Force retail Xbox FUN_001a6d20, Input x86 body SHA-256: 923040CB35B330A83C7F4148D7634CD3856C85681CEBA9AEE05A008853C35D34.
 * Host guest_eax/guest_edx are original register live-ins, NOT an Xbox C++ ABI.
 * The original absolute DWORD load at guest VA 0x00387430 is kept as a guest
 * memory read. EDX live-out and guest-stack spill effects remain unmodeled.
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_001a6d20(std::uint32_t guest_eax, std::uint32_t guest_edx)
{
    const std::uint32_t original = bf_guest_read_u32(guest_eax);
    std::uint32_t ecx = original != UINT32_C(0xffc00000) ? UINT32_C(1) : UINT32_C(0);
    if (ecx == 0) {
        // At original 0x1A6D3C: MOV EDX,1; not a parameter change.
        guest_edx = UINT32_C(1);
    }
    ecx += guest_edx; // original ADD ECX,EDX wraps modulo 2^32.
    if (ecx == 0) {
        bf_guest_write_u32(guest_eax, bf_guest_read_u32(UINT32_C(0x00387430)));
    } else {
        if (bf_guest_read_u32(guest_eax) == UINT32_C(0xffc00000)) {
            bf_guest_write_u32(guest_eax, UINT32_C(0));
        }
    }
    // Original final [EAX] read follows all writes; preserve possible aliasing.
    return bf_guest_read_u32(guest_eax) == UINT32_C(0xffc00000)
        ? UINT32_C(0) : guest_eax;
}
