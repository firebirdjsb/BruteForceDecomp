/* Brute Force original Xbox - explicit guest32 device command model.
 * Input x86 body SHA-256: 379B43248B1DB7734516CBE34FF3B71249CEB0E75905F1D604FD6FAB97FF73B7
 * Entry: 0x00371fa0, Ghidra index: 13389, label: CDevice_KickOff_0__LTCG_edx1
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_kick.h"
#include "bf_xbe_guest32_record_leaves.h"

void D3D8LTCG__CDevice_KickOff_0__LTCG_edx1(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x00371fa0u, guest.edx + 8u);
    logic_flags(guest, guest.eax & 4u, 0x80u); // TEST AL,4.
    push(guest, 0x00371fa5u, guest.esi);

    if ((guest.eax & 4u) != 0u) {
        guest.esi = read32(guest, 0x00371fa8u, guest.edx + 0x358u);
    } else {
        guest.esi = read32(guest, 0x00371fb0u, guest.edx);
    }
    logic_flags(guest, (guest.eax >> 8u) & 0x20u, 0x80u); // TEST AH,0x20.
    if ((guest.eax & 0x2000u) != 0u) {
        guest.eax = read32(guest, 0x00372008u, guest.edx);
        guest.eax &= 0x0fffffffu;
        logic_flags(guest, guest.eax);
        guest.ecx = 0x0037dd80u;
        bf_guest32_leaf_sub(guest, guest.ecx, 0x40u);
        guest.ecx -= 0x40u;
        write32(guest, 0x00372017u, guest.edx + 0x17c0u, guest.ecx);
        write32(guest, 0x0037201du, guest.ecx + 0x40u, guest.eax);
        guest.ecx = read32(guest, 0x00372020u, guest.edx + 0x17c0u);
        write32(guest, 0x00372026u, guest.ecx + 0x44u, guest.eax);

        guest.eax = read32(guest, 0x00372029u, guest.edx + 0x2cu);
        guest.ecx = read32(guest, 0x0037202cu, guest.edx + 0x30u);
        bf_guest32_leaf_sub(guest, guest.eax, 2u);
        guest.eax -= 2u;
        write32(guest, 0x00372032u, guest.ecx, guest.eax);
        guest.eax = read32(guest, 0x00372034u, guest.edx + 0x2018u);
        guest.ecx = read32(guest, 0x0037203au, guest.edx + 0x3cu);
        write32(guest, 0x0037203du, guest.edx + 0x1984u, guest.eax);
        write32(guest, 0x00372043u, guest.edx + 0x1fe0u, guest.ecx);
    } else {
        push(guest, 0x00371fb7u, 0x00371fbcu);
        FUN_00372180(guest);
        if (guest.eip != 0x00371fbcu) {
            return; // The guest return slot may alias a write.
        }

        guest.eax = read32(guest, 0x00371fbcu, guest.edx + 0x17c0u);
        guest.esi &= 0x0fffffffu;
        logic_flags(guest, guest.esi);
        write32(guest, 0x00371fc8u, guest.eax + 0x40u, guest.esi);
        guest.eax = read32(guest, 0x00371fcbu, 0x0037bd30u);
        logic_flags(guest, guest.eax);
        if (guest.eax != 0u) {
            guest.ecx = read32(guest, 0x00371fd4u, 0x0037dd88u);
            guest.eax = read32(guest, 0x00371fdau, guest.ecx + 0x4f8u);
            do {
                guest.ecx = read32(guest, 0x00371fe0u, guest.eax + 0x3240u);
                const auto compare = read32(guest, 0x00371fe6u, guest.eax + 0x3244u);
                bf_guest32_leaf_sub(guest, guest.ecx, compare);
                if (guest.ecx != compare) {
                    continue;
                }
                guest.esi = read32(guest, 0x00371feeu, guest.eax + 0x400700u);
                guest.ecx = guest.esi != 0u; // XOR ECX, ECX; TEST ESI, ESI; SETNE CL.
                logic_flags(guest, guest.ecx); // TEST ECX, ECX.
            } while ((guest.eflags & zero) == 0u);
            const auto status = read32(guest, 0x00371fffu, guest.edx + 8u) | 0x2000u;
            write32(guest, 0x00371fffu, guest.edx + 8u, status);
            logic_flags(guest, status);
            guest.esi = pop(guest, 0x00372006u);
            bf_guest32_leaf_ret(guest, 0x00372007u, 0u);
            return;
        }
    }

    guest.esi = pop(guest, 0x00372049u);
    bf_guest32_leaf_ret(guest, 0x0037204au, 0u);
}
