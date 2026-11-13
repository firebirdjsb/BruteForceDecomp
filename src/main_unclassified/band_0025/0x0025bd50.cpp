/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: A40C381CF72B4B50AB316CF2079A43553BE3C1484D8EA2AB7EA52896561FD020
 * Entry: 0x0025bd50, label: FUN_0025bd50
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_0025bd50(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x0025bd50u, guest.eax + 4u, 0x3931b0u);
    write32(guest, 0x0025bd57u, guest.eax + 0xcu, 0u);
    write32(guest, 0x0025bd5eu, guest.eax + 0x10u, 0u);
    write32(guest, 0x0025bd65u, guest.eax + 8u, 0xffffffffu);
    write32(guest, 0x0025bd6cu, guest.eax, 0x393208u);
    write32(guest, 0x0025bd72u, guest.eax + 4u, 0x3931e4u);
    guest.ecx = guest.eax + 0x18u;
    write32(guest, 0x0025bd7cu, guest.ecx, 0x3931a4u);
    write32(guest, 0x0025bd82u, guest.ecx + 4u, 1u);
    write32(guest, 0x0025bd89u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x0025bd8cu, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x0025bd91u, guest.eax + 0x14u, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x0025bd96u, guest.eax + 0x14u, guest.ecx);
        ret(guest, 0x0025bd99u);
        return;
    }

    guest.edx = read32(guest, 0x0025bd9au, guest.esi + 0xcu);
    write32(guest, 0x0025bd9du, guest.edx, guest.ecx);
    ret(guest, 0x0025bd9fu);
}
