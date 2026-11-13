/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: CCCB1036388E1081DD57AE02BDF946D114D0DCE7A6D7143B902C406E6B4C0166
 * Entry: 0x00261fb0, label: FUN_00261fb0
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00261fb0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x00261fb0u, guest.eax + 4u, 0u);
    write32(guest, 0x00261fb7u, guest.eax, 0x392c68u);
    guest.ecx = guest.eax + 0x20u;
    write32(guest, 0x00261fc0u, guest.ecx, 0x392cc4u);
    write32(guest, 0x00261fc6u, guest.ecx + 4u, 1u);
    write32(guest, 0x00261fcdu, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x00261fd0u, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x00261fd5u, guest.eax + 0x1cu, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x00261fdau, guest.eax + 0x1cu, guest.ecx);
        ret(guest, 0x00261fddu);
        return;
    }

    guest.edx = read32(guest, 0x00261fdeu, guest.esi + 0xcu);
    write32(guest, 0x00261fe1u, guest.edx, guest.ecx);
    ret(guest, 0x00261fe3u);
}
