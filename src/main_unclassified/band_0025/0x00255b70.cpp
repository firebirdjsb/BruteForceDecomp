/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: E8ACB3CEF8ED988BF2E7B14F129DB0B646130F9B2CFCA5A64D68DDF4E2E75952
 * Entry: 0x00255b70, label: FUN_00255b70
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00255b70(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x00255b70u, guest.eax, 0x3938d0u);
    guest.ecx = guest.eax + 8u;
    write32(guest, 0x00255b79u, guest.ecx, 0x3938e4u);
    write32(guest, 0x00255b7fu, guest.ecx + 4u, 1u);
    write32(guest, 0x00255b86u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x00255b89u, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x00255b8eu, guest.eax + 4u, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x00255b93u, guest.eax + 4u, guest.ecx);
        ret(guest, 0x00255b96u);
        return;
    }

    guest.edx = read32(guest, 0x00255b97u, guest.esi + 0xcu);
    write32(guest, 0x00255b9au, guest.edx, guest.ecx);
    ret(guest, 0x00255b9cu);
}
