/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 2F80EF5239DC488F935B07465F6CAE75FADBAC5DED6DBCEF40A0909345C34F2C
 * Entry: 0x0009a690, label: FUN_0009a690
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_0009a690(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x0009a690u, guest.edx + 4u, 0u);
    push(guest, 0x0009a697u, guest.edi);
    write32(guest, 0x0009a698u, guest.edx + 8u, 0u);
    write8(guest, 0x0009a69fu, guest.edx + 0x98u, 0u);
    guest.eax = 0u;
    logic_flags(guest, 0u);
    guest.ecx = 0x11u;
    guest.edi = guest.edx + 0xcu;
    rep_stosd(guest, 0x0009a6b0u);
    write32(guest, 0x0009a6b2u, guest.edx, 0x3a1130u);
    guest.eax = guest.edx + 0xa0u;
    write32(guest, 0x0009a6beu, guest.eax, 0x3a0f0cu);
    write32(guest, 0x0009a6c4u, guest.eax + 4u, 1u);
    write32(guest, 0x0009a6cbu, guest.eax + 8u, guest.edx);
    guest.ecx = read32(guest, 0x0009a6ceu, guest.esi + 8u);
    logic_flags(guest, guest.ecx);
    write32(guest, 0x0009a6d3u, guest.edx + 0x9cu, guest.ecx);
    guest.edi = pop(guest, 0x0009a6d9u);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x0009a6dcu, guest.edx + 0x9cu, guest.eax);
        guest.eax = guest.edx;
        ret(guest, 0x0009a6e4u);
        return;
    }

    guest.ecx = read32(guest, 0x0009a6e5u, guest.esi + 0xcu);
    write32(guest, 0x0009a6e8u, guest.ecx, guest.eax);
    guest.eax = guest.edx;
    ret(guest, 0x0009a6ecu);
}
