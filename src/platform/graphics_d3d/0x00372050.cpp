/* Brute Force original Xbox - explicit guest32 device command model.
 * Input x86 body SHA-256: DEBF01DFDEECBEBCD09E17F114EACEE09C45CADFCFD56C6A417C8D51CA1279BF
 * Entry: 0x00372050, Ghidra index: 13390, label: FUN_00372050
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_kick.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00372050(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x00372050u, guest.esi + 8u);
    logic_flags(guest, guest.eax & 4u, 0x80u); // TEST AL,4.
    if ((guest.eax & 4u) != 0u) {
        guest.edx = read32(guest, 0x00372057u, guest.esi + 0x358u);
    } else {
        guest.edx = read32(guest, 0x0037205fu, guest.esi);
    }
    logic_flags(guest, (guest.eax >> 8u) & 0x20u, 0x80u); // TEST AH,0x20.
    if ((guest.eax & 0x2000u) == 0u) {
        push(guest, 0x00372066u, 0x0037206bu);
        FUN_00372180(guest);
        if (guest.eip != 0x0037206bu) {
            return; // The guest return slot may alias a write.
        }

        guest.eax = read32(guest, 0x0037206bu, guest.esi + 0x17c0u);
        guest.ecx = read32(guest, 0x00372071u, 0x0037dd88u);
        guest.edx &= 0x0fffffffu;
        logic_flags(guest, guest.edx);
        write32(guest, 0x0037207du, guest.eax + 0x40u, guest.edx);
        guest.eax = read32(guest, 0x00372080u, guest.ecx + 0x4f8u);
        do {
            guest.ecx = read32(guest, 0x00372090u, guest.eax + 0x3240u);
            const auto compare = read32(guest, 0x00372096u, guest.eax + 0x3244u);
            bf_guest32_leaf_sub(guest, guest.ecx, compare);
            if (guest.ecx != compare) {
                continue;
            }
            guest.ecx = read32(guest, 0x0037209eu, guest.eax + 0x400700u);
            guest.edx = guest.ecx != 0u; // XOR EDX, EDX; TEST ECX, ECX; SETNE DL.
            guest.ecx = guest.edx;
            logic_flags(guest, guest.ecx); // TEST ECX, ECX.
        } while ((guest.eflags & zero) == 0u);
    }

    bf_guest32_leaf_ret(guest, 0x003720b1u, 0u);
}
