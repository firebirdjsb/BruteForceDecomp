/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 56AF7A4BBC9EE0560436C8562DE5BF6AD964E94D437101506289F00190AD03BF
 * Entry: 0x000998c0, label: FUN_000998c0
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_000998c0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x000998c0u, guest.eax + 4u, 0u);
    write32(guest, 0x000998c7u, guest.eax + 8u, 0u);
    write32(guest, 0x000998ceu, guest.eax, 0x3a11e8u);
    write32(guest, 0x000998d4u, guest.eax + 0xcu, 0x3a11d8u);
    guest.ecx = guest.eax + 0x34u;
    write32(guest, 0x000998deu, guest.ecx, 0x3a0f00u);
    write32(guest, 0x000998e4u, guest.ecx + 4u, 1u);
    write32(guest, 0x000998ebu, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x000998eeu, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x000998f3u, guest.eax + 0x30u, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x000998f8u, guest.eax + 0x30u, guest.ecx);
        ret(guest, 0x000998fbu);
        return;
    }

    guest.edx = read32(guest, 0x000998fcu, guest.esi + 0xcu);
    write32(guest, 0x000998ffu, guest.edx, guest.ecx);
    ret(guest, 0x00099901u);
}
