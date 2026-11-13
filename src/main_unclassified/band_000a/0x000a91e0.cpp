/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: BEAD1F78C43C62168FC699627F8346E0BFA342B3A472DDC81501F7EF598E6E6B
 * Entry: 0x000a91e0, label: FUN_000a91e0
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_000a91e0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    push(guest, 0x000a91e0u, guest.esi);
    guest.esi = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x000a91e3u, guest.eax + 4u, guest.esi);
    write32(guest, 0x000a91e6u, guest.eax + 8u, guest.esi);
    write32(guest, 0x000a91e9u, guest.eax + 0xcu, guest.esi);
    write32(guest, 0x000a91ecu, guest.eax + 0x10u, guest.esi);
    write32(guest, 0x000a91efu, guest.eax, 0x3a0448u);
    guest.ecx = guest.eax + 0x34u;
    write32(guest, 0x000a91f8u, guest.ecx, 0x3a0f0cu);
    write32(guest, 0x000a91feu, guest.ecx + 4u, 1u);
    write32(guest, 0x000a9205u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x000a9208u, guest.edi + 8u);
    compare_zero(guest, guest.edx);
    write32(guest, 0x000a920du, guest.eax + 0x30u, guest.edx);
    guest.esi = pop(guest, 0x000a9210u);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x000a9213u, guest.eax + 0x30u, guest.ecx);
        ret(guest, 0x000a9216u);
        return;
    }

    guest.edx = read32(guest, 0x000a9217u, guest.edi + 0xcu);
    write32(guest, 0x000a921au, guest.edx, guest.ecx);
    ret(guest, 0x000a921cu);
}
