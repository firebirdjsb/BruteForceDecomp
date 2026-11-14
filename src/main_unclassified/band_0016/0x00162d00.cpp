/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 4A02D41EB754FC8AF2F1FA1AED4343C4C331D06BC9F365E6248D90DE0A16DD45
 * Entry: 0x00162d00, Ghidra index: 4657, label: FUN_00162d00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00162d00(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eip = 0x00162d00u;
    const auto mode = bf_guest_read_u8(guest.ecx + 0x108u);
    guest.eax = (guest.eax & 0xffffff00u) | mode;
    logic_flags(guest, mode, 0x80u);
    push(guest, 0x00162d08u, guest.esi);
    guest.esi = read32(guest, 0x00162d09u, guest.esp + 8u);
    if (mode != 0u) {
        guest.eip = 0x00162d0fu;
        const auto bit = bf_guest_read_u8(guest.esi + 0x26u) & 0x40u;
        // AND AL,40h; NEG AL; SBB EAX,EAX; TEST ESI,EAX.
        // No memory access occurs until TEST has set the defined flags.
        guest.eax = bit == 0u ? 0u : 0xffffffffu;
        const auto test = guest.esi & guest.eax;
        logic_flags(guest, test); // TEST ESI,EAX supersedes the NEG and SBB flags.
        if (test != 0u) {
            guest.edx = read32(guest, 0x00162d1cu, guest.esi + 0xcu);
            guest.eax = read32(guest, 0x00162d1fu, guest.edx + 0xa8u) >> 11u;
            logic_flags(guest, guest.eax & 1u, 0x80u);
            if ((guest.eax & 1u) != 0u) {
                guest.eax &= 0xffffff00u;
                logic_flags(guest, 0u, 0x80u);
                guest.esi = pop(guest, 0x00162d2eu);
                bf_guest32_leaf_ret(guest, 0x00162d2fu, 4u);
                return;
            }
        }
    }

    guest.edx = read32(guest, 0x00162d32u, guest.ecx + 0x104u);
    guest.eax = guest.ecx + 4u;
    guest.edx = guest.eax + guest.edx * 4u;
    bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    while (guest.eax != guest.edx) {
        const auto item = read32(guest, 0x00162d43u, guest.eax);
        bf_guest32_leaf_sub(guest, item, guest.esi);
        if (item == guest.esi)
            break;
        guest.eax = bf_guest32_leaf_add(guest, guest.eax, 4u);
        bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    }
    guest.ecx = 0u;
    logic_flags(guest, guest.ecx);
    bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    guest.ecx = guest.eax == guest.edx;
    guest.eax = (guest.eax & 0xffffff00u) | guest.ecx;
    guest.esi = pop(guest, 0x00162d57u);
    bf_guest32_leaf_ret(guest, 0x00162d58u, 4u);
}
