/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 9578F74CD30AEB9CED11D2285047B3FEE1D0D965129B2F45B7D4C1F81958DE6D
 * Entry: 0x00256d80, label: FUN_00256d80
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00256d80(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    guest.ecx = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x00256d82u, guest.eax + 4u, guest.ecx);
    write32(guest, 0x00256d85u, guest.eax + 0xcu, guest.ecx);
    write32(guest, 0x00256d88u, guest.eax + 0x10u, guest.ecx);
    write32(guest, 0x00256d8bu, guest.eax + 0x14u, guest.ecx);
    write32(guest, 0x00256d8eu, guest.eax + 0x18u, guest.ecx);
    write32(guest, 0x00256d91u, guest.eax + 0x1cu, guest.ecx);
    write32(guest, 0x00256d94u, guest.eax + 0x20u, guest.ecx);
    write32(guest, 0x00256d97u, guest.eax + 0x24u, guest.ecx);
    write32(guest, 0x00256d9au, guest.eax + 0x28u, guest.ecx);
    write32(guest, 0x00256d9du, guest.eax + 8u, 0x394160u);
    push(guest, 0x00256da4u, guest.esi);
    guest.esi = 1u;
    write32(guest, 0x00256daau, guest.eax + 0x2cu, guest.esi);
    write32(guest, 0x00256dadu, guest.eax + 0x34u, guest.ecx);
    write32(guest, 0x00256db0u, guest.eax + 0x38u, guest.ecx);
    write32(guest, 0x00256db3u, guest.eax + 0x3cu, guest.ecx);
    write32(guest, 0x00256db6u, guest.eax + 0x44u, guest.ecx);
    write32(guest, 0x00256db9u, guest.eax + 0x48u, guest.ecx);
    write32(guest, 0x00256dbcu, guest.eax + 0x4cu, guest.ecx);
    write32(guest, 0x00256dbfu, guest.eax, 0x3937f0u);
    guest.edx = guest.eax + 0x54u;
    write32(guest, 0x00256dc8u, guest.edx + 4u, guest.esi);
    write32(guest, 0x00256dcbu, guest.edx, 0x393834u);
    write32(guest, 0x00256dd1u, guest.edx + 8u, guest.eax);
    guest.esi = read32(guest, 0x00256dd4u, guest.edi + 8u);
    write32(guest, 0x00256dd7u, guest.eax + 0x50u, guest.esi);
    compare_zero(guest, guest.esi);
    guest.esi = pop(guest, 0x00256ddcu);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x00256ddfu, guest.eax + 0x50u, guest.edx);
        ret(guest, 0x00256de2u);
        return;
    }

    guest.ecx = read32(guest, 0x00256de3u, guest.edi + 0xcu);
    write32(guest, 0x00256de6u, guest.ecx, guest.edx);
    ret(guest, 0x00256de8u);
}
