/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: C06C8DD4878EAABB287D3AB724771341B860854D375610D2890830C02BF5D4E0
 * Entry: 0x0027c3e0, label: FUN_0027c3e0
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_0027c3e0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x0027c3e0u, guest.eax + 4u, 0x399efcu);
    write32(guest, 0x0027c3e7u, guest.eax + 8u, 0x39c2a0u);
    write32(guest, 0x0027c3eeu, guest.eax + 0xcu, 0u);
    write32(guest, 0x0027c3f5u, guest.eax, 0x391d40u);
    write32(guest, 0x0027c3fbu, guest.eax + 4u, 0x391d1cu);
    write32(guest, 0x0027c402u, guest.eax + 8u, 0x391d04u);
    guest.ecx = guest.eax + 0x74u;
    write32(guest, 0x0027c40cu, guest.ecx, 0x391c60u);
    write32(guest, 0x0027c412u, guest.ecx + 4u, 1u);
    write32(guest, 0x0027c419u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x0027c41cu, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x0027c421u, guest.eax + 0x70u, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x0027c426u, guest.eax + 0x70u, guest.ecx);
        ret(guest, 0x0027c429u);
        return;
    }

    guest.edx = read32(guest, 0x0027c42au, guest.esi + 0xcu);
    write32(guest, 0x0027c42du, guest.edx, guest.ecx);
    ret(guest, 0x0027c42fu);
}
