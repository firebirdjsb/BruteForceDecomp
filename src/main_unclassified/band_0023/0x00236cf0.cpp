/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: F036B2FDE00DBD97E894915F8CE78DAB0D894AD820A4B52EE7E9F86F40DC14FA
 * Entry: 0x00236cf0, Ghidra index: 7838, label: FUN_00236cf0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00236cf0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    logic_flags(guest, guest.ecx);
    if (guest.ecx != 0u)
        bf_guest32_leaf_sub(guest, guest.ecx, 0xffffffffu);
    if (guest.ecx == 0u || guest.ecx == 0xffffffffu) {
        write32(guest, 0x00236d31u, guest.edx + 4u, 0u);
        guest.eax = read32(guest, 0x00236d38u, guest.edx + 4u);
        write32(guest, 0x00236d3bu, guest.edx, 0u);
        write8(guest, 0x00236d41u, guest.edx + 8u, 0u);
        bf_guest32_leaf_ret(guest, 0x00236d45u, 4u);
        return;
    }

    push(guest, 0x00236cf9u, guest.esi);
    write32(guest, 0x00236cfau, guest.edx, guest.ecx);
    guest.esi = read32(guest, 0x00236cfcu, guest.ecx + 0x4cu);
    logic_flags(guest, guest.esi);
    if (guest.esi != 0u) {
        guest.eax = read32(guest, 0x00236d03u, guest.ecx + 0x50u) - guest.esi;
        // SAR EAX,2 with sign extension in the 32-bit guest word.
        guest.eax = (guest.eax >> 2u) | ((0u - (guest.eax >> 31u)) & 0xc0000000u);
        logic_flags(guest, guest.eax);
        if (guest.eax != 0u) {
            guest.eip = 0x00236d0fu;
            const auto byte = bf_guest_read_u8(guest.esp + 8u);
            guest.ecx = (guest.ecx & 0xffffff00u) | byte;
            guest.eax = guest.esi;
            guest.eax = read32(guest, 0x00236d15u, guest.eax);
            write32(guest, 0x00236d17u, guest.edx + 4u, guest.eax);
            write8(guest, 0x00236d1au, guest.edx + 8u, byte);
            guest.esi = pop(guest, 0x00236d1du);
            bf_guest32_leaf_ret(guest, 0x00236d1eu, 4u);
            return;
        }
    }

    guest.eip = 0x00236d21u;
    const auto byte = bf_guest_read_u8(guest.esp + 8u);
    guest.ecx = (guest.ecx & 0xffffff00u) | byte;
    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    write32(guest, 0x00236d27u, guest.edx + 4u, guest.eax);
    write8(guest, 0x00236d2au, guest.edx + 8u, byte);
    guest.esi = pop(guest, 0x00236d2du);
    bf_guest32_leaf_ret(guest, 0x00236d2eu, 4u);
}
