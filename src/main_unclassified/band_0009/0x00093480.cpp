/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 108B6E5C8501BA77F4103F4C1F62B26794BBBF52964AB0420062E929A45CB9DE
 * Entry: 0x00093480, label: FUN_00093480
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00093480(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    push(guest, 0x00093480u, guest.esi);
    guest.esi = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x00093483u, guest.eax + 4u, guest.esi);
    write32(guest, 0x00093486u, guest.eax + 8u, guest.esi);
    write32(guest, 0x00093489u, guest.eax + 0xcu, 0x3a1870u);
    write32(guest, 0x00093490u, guest.eax + 0x18u, guest.esi);
    write32(guest, 0x00093493u, guest.eax + 0x98u, guest.esi);
    write32(guest, 0x00093499u, guest.eax + 0x9cu, guest.esi);
    guest.edx = 1u;
    write32(guest, 0x000934a4u, guest.eax + 0x94u, 0x3a83126fu);
    write32(guest, 0x000934aeu, guest.eax + 0x14u, guest.edx);
    write32(guest, 0x000934b1u, guest.eax, 0x3a18e8u);
    write32(guest, 0x000934b7u, guest.eax + 0xcu, 0x3a18bcu);
    write32(guest, 0x000934beu, guest.eax + 0x10u, 0x3a18acu);
    guest.ecx = guest.eax + 0xa4u;
    write32(guest, 0x000934cbu, guest.ecx, 0x3a17a0u);
    write32(guest, 0x000934d1u, guest.ecx + 4u, guest.edx);
    write32(guest, 0x000934d4u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x000934d7u, guest.edi + 8u);
    compare_zero(guest, guest.edx);
    write32(guest, 0x000934dcu, guest.eax + 0xa0u, guest.edx);
    guest.esi = pop(guest, 0x000934e2u);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x000934e5u, guest.eax + 0xa0u, guest.ecx);
        ret(guest, 0x000934ebu);
        return;
    }

    guest.edx = read32(guest, 0x000934ecu, guest.edi + 0xcu);
    write32(guest, 0x000934efu, guest.edx, guest.ecx);
    ret(guest, 0x000934f1u);
}
