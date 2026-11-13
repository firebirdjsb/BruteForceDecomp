/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 1C7243D9BF5B03DE96A7F9E1CC6AEE0C942D1811E91DA023778515825F6774C3
 * Entry: 0x00094f20, label: FUN_00094f20
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00094f20(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    push(guest, 0x00094f20u, guest.esi);
    guest.esi = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x00094f23u, guest.eax + 4u, guest.esi);
    write32(guest, 0x00094f26u, guest.eax + 8u, guest.esi);
    write32(guest, 0x00094f29u, guest.eax + 0xcu, 0x3a1870u);
    write32(guest, 0x00094f30u, guest.eax + 0x18u, guest.esi);
    write32(guest, 0x00094f33u, guest.eax + 0x1cu, guest.esi);
    write32(guest, 0x00094f36u, guest.eax + 0xd0u, 0x3a83126fu);
    write32(guest, 0x00094f40u, guest.eax + 0x14u, 2u);
    write32(guest, 0x00094f47u, guest.eax, 0x3a1708u);
    write32(guest, 0x00094f4du, guest.eax + 0xcu, 0x3a16d8u);
    write32(guest, 0x00094f54u, guest.eax + 0x10u, 0x3a16c8u);
    guest.ecx = guest.eax + 0xd8u;
    write32(guest, 0x00094f61u, guest.ecx, 0x3a17a0u);
    write32(guest, 0x00094f67u, guest.ecx + 4u, 1u);
    write32(guest, 0x00094f6eu, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x00094f71u, guest.edi + 8u);
    compare_zero(guest, guest.edx);
    write32(guest, 0x00094f76u, guest.eax + 0xd4u, guest.edx);
    guest.esi = pop(guest, 0x00094f7cu);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x00094f7fu, guest.eax + 0xd4u, guest.ecx);
        ret(guest, 0x00094f85u);
        return;
    }

    guest.edx = read32(guest, 0x00094f86u, guest.edi + 0xcu);
    write32(guest, 0x00094f89u, guest.edx, guest.ecx);
    ret(guest, 0x00094f8bu);
}
