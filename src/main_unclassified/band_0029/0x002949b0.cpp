/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 9258407C12F3B8AF378DC5C6D9B2E1364822DC4764662975B1175C96A122911A
 * Entry: 0x002949b0, Ghidra index: 9299, label: FUN_002949b0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_002949b0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t special = 0x003b9768u;
    push(guest, 0x002949b0u, guest.ebx);
    guest.ebx = read32(guest, 0x002949b1u, 0x00469888u);
    push(guest, 0x002949b7u, guest.esi);
    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    push(guest, 0x002949bau, guest.edi);
    write32(guest, 0x002949bbu, guest.ebx + 0x58u, guest.eax);

    guest.edi = 0x174u;
    do {
        guest.edx = read32(guest, 0x002949c3u, guest.ebx + 0x60u);
        guest.ecx = read32(guest, 0x002949c6u, guest.edx + guest.edi);
        guest.edx += guest.edi;
        guest.esi = 0u;
        logic_flags(guest, guest.ecx);
        if (guest.ecx != 0u && (guest.ecx & 0x80000000u) == 0u) {
            do {
                guest.ecx = read32(guest, 0x002949d1u, guest.edx + 8u);
                guest.ecx = read32(guest, 0x002949d4u, guest.ecx + guest.esi * 4u);
                logic_flags(guest, guest.ecx);
                if (guest.ecx != 0u) {
                    bf_guest32_leaf_sub(guest, guest.ecx, special);
                    if (guest.ecx != special) {
                        write32(guest, 0x002949e3u, guest.ecx, guest.eax);
                        guest.eax = guest.ecx;
                        guest.ecx = read32(guest, 0x002949e7u, guest.edx + 8u);
                        write32(guest, 0x002949eau, guest.ecx + guest.esi * 4u, special);
                    }
                }
                guest.ecx = read32(guest, 0x002949f1u, guest.edx);
                increment(guest, guest.esi);
                bf_guest32_leaf_sub(guest, guest.esi, guest.ecx);
            } while (((guest.eflags & sign) != 0u) != ((guest.eflags & overflow) != 0u));
        }
        guest.edi = bf_guest32_leaf_add(guest, guest.edi, 0xcu);
        bf_guest32_leaf_sub(guest, guest.edi, 0x2e8u);
    } while (guest.edi < 0x2e8u);

    guest.edi = pop(guest, 0x00294a03u);
    guest.esi = pop(guest, 0x00294a04u);
    guest.ebx = pop(guest, 0x00294a05u);
    ret(guest, 0x00294a06u);
}
