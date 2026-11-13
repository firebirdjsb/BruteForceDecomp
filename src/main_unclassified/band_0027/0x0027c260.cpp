/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 7A175F3557C5AFE0E3822533CAA0A3B67805A227387ECD61A832F8E9A66059D9
 * Entry: 0x0027c260, label: FUN_0027c260
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_0027c260(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x0027c260u, guest.eax + 4u, 0x399efcu);
    write32(guest, 0x0027c267u, guest.eax + 8u, 0x39c2a0u);
    write32(guest, 0x0027c26eu, guest.eax + 0xcu, 0u);
    write32(guest, 0x0027c275u, guest.eax, 0x391c20u);
    write32(guest, 0x0027c27bu, guest.eax + 4u, 0x391d1cu);
    write32(guest, 0x0027c282u, guest.eax + 8u, 0x391c08u);
    guest.ecx = guest.eax + 0x74u;
    write32(guest, 0x0027c28cu, guest.ecx, 0x391ce8u);
    write32(guest, 0x0027c292u, guest.ecx + 4u, 1u);
    write32(guest, 0x0027c299u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x0027c29cu, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x0027c2a1u, guest.eax + 0x70u, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x0027c2a6u, guest.eax + 0x70u, guest.ecx);
        ret(guest, 0x0027c2a9u);
        return;
    }

    guest.edx = read32(guest, 0x0027c2aau, guest.esi + 0xcu);
    write32(guest, 0x0027c2adu, guest.edx, guest.ecx);
    ret(guest, 0x0027c2afu);
}
