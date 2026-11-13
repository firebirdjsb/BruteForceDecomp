/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 6B90EDAD0D9A78B6F7D0727F4F306C8F624BEE8495A8F8A31FD1CCE0D41C968B
 * Entry: 0x0029fbe0, label: FUN_0029fbe0
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_0029fbe0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    guest.ecx = read32(guest, 0x0029fbe0u, 0x46984cu);
    increment(guest, guest.ecx);
    write32(guest, 0x0029fbe7u, guest.eax, 0x390f08u);
    write32(guest, 0x0029fbedu, guest.eax + 4u, 0x390ef8u);
    write32(guest, 0x0029fbf4u, 0x46984cu, guest.ecx);
    guest.ecx = guest.eax + 0xcu;
    write32(guest, 0x0029fbfdu, guest.ecx, 0x390fdcu);
    write32(guest, 0x0029fc03u, guest.ecx + 4u, 1u);
    write32(guest, 0x0029fc0au, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x0029fc0du, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x0029fc12u, guest.eax + 8u, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x0029fc17u, guest.eax + 8u, guest.ecx);
        ret(guest, 0x0029fc1au);
        return;
    }

    guest.edx = read32(guest, 0x0029fc1bu, guest.esi + 0xcu);
    write32(guest, 0x0029fc1eu, guest.edx, guest.ecx);
    ret(guest, 0x0029fc20u);
}
