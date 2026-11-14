/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 76FAC55183573404BAF206374FBC7E731FF35BA02EA2CDFAA7A0826B91BD33AD
 * Entry: 0x002374d0, Ghidra index: 7849, label: FUN_002374d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_division_leaves.h"

bf_guest32_division_result FUN_002374d0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    using namespace bf_guest32_division;

    write32(guest, 0x002374d0u, guest.ecx + 0xcu, guest.eax);
    push(guest, 0x002374d3u, guest.esi);
    guest.esi = guest.edx;
    cdq(guest);
    if (!idiv_after_cdq(guest, 0x002374d7u))
        return bf_guest32_division_result::divide_error;

    write32(guest, 0x002374d9u, guest.ecx, guest.esi);
    write32(guest, 0x002374dbu, guest.ecx + 4u, guest.esi);
    guest.eax = imul(guest, guest.eax, guest.edi);
    guest.edx = guest.eax + guest.esi; // LEA uses modulo-2^32 addition.
    bf_guest32_leaf_sub(guest, guest.esi, guest.edx);
    write32(guest, 0x002374e6u, guest.ecx + 8u, guest.edx);
    guest.eax = guest.esi;
    while (guest.eax < guest.edx) { // Unsigned JAE/JB bound checks.
        guest.esi = guest.eax + guest.edi;
        write32(guest, 0x002374f3u, guest.eax, guest.esi);
        guest.eax = guest.esi;
        bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    }

    guest.eip = 0x002374fbu;
    const std::uint16_t first = bf_guest_read_u16(guest.esp + 8u);
    guest.eax = (guest.eax & 0xffff0000u) | first; // MOV AX preserves high EAX.
    guest.edx = read32(guest, 0x00237500u, guest.esp + 0xcu);
    guest.eip = 0x00237504u;
    bf_guest_write_u16(guest.ecx + 0x10u, static_cast<std::uint16_t>(guest.eax));
    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    guest.eip = 0x0023750au;
    bf_guest_write_u16(guest.ecx + 0x12u, static_cast<std::uint16_t>(guest.edi));
    write32(guest, 0x0023750eu, guest.ecx + 0x14u, guest.eax);
    write32(guest, 0x00237511u, guest.ecx + 0x18u, guest.eax);
    write32(guest, 0x00237514u, guest.ecx + 0x1cu, guest.edx);
    guest.esi = pop(guest, 0x00237517u);
    bf_guest32_leaf_ret(guest, 0x00237518u, 8u);
    return bf_guest32_division_result::returned;
}
