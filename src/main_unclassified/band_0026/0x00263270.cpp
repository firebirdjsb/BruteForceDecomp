/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 2B1C3DB089EB9B0C47E1B121A630ABED77ECD5B9FFFD86259B9E69B39F3A7E7E
 * Entry: 0x00263270, label: FUN_00263270
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00263270(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    guest.edx = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x00263272u, guest.eax + 4u, guest.edx);
    write32(guest, 0x00263275u, guest.eax + 0xcu, guest.edx);
    write32(guest, 0x00263278u, guest.eax + 0x10u, guest.edx);
    write32(guest, 0x0026327bu, guest.eax + 0x14u, guest.edx);
    write32(guest, 0x0026327eu, guest.eax + 0x1cu, guest.edx);
    write32(guest, 0x00263281u, guest.eax + 0x20u, guest.edx);
    write32(guest, 0x00263284u, guest.eax + 0x24u, guest.edx);
    write32(guest, 0x00263287u, guest.eax, 0x392ae8u);
    guest.ecx = guest.eax + 0x48u;
    push(guest, 0x00263290u, guest.esi);
    write32(guest, 0x00263291u, guest.ecx, 0x392c28u);
    write32(guest, 0x00263297u, guest.ecx + 4u, 1u);
    write32(guest, 0x0026329eu, guest.ecx + 8u, guest.eax);
    guest.esi = read32(guest, 0x002632a1u, guest.edi + 8u);
    write32(guest, 0x002632a4u, guest.eax + 0x44u, guest.esi);
    compare_zero(guest, guest.esi);
    guest.esi = pop(guest, 0x002632a9u);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x002632acu, guest.eax + 0x44u, guest.ecx);
        ret(guest, 0x002632afu);
        return;
    }

    guest.edx = read32(guest, 0x002632b0u, guest.edi + 0xcu);
    write32(guest, 0x002632b3u, guest.edx, guest.ecx);
    ret(guest, 0x002632b5u);
}
