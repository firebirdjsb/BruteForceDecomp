/* Brute Force original Xbox - explicit guest32 device command model.
 * Input x86 body SHA-256: F16934FA75EF9CF1324CBB5368F2B7FE11D39CEC94FB54FB787CD3D3E3E4FAC6
 * Entry: 0x00371b60, Ghidra index: 13384, label: FUN_00371b60
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_kick.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00371b60(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x00371b60u, guest.ecx + 0x17c0u);
    guest.eax = read32(guest, 0x00371b66u, guest.eax + 0x44u);
    guest.edx = read32(guest, 0x00371b69u, guest.ecx + 0x24u);
    guest.eax |= 0x80000000u;
    logic_flags(guest, guest.eax);
    bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    bool within_limits = false;
    if (guest.eax >= guest.edx) {
        const auto limit = read32(guest, 0x00371b75u, guest.ecx + 0x28u);
        bf_guest32_leaf_sub(guest, guest.eax, limit);
        within_limits = guest.eax < limit;
    }

    if (!within_limits) {
        guest.edx = read32(guest, 0x00371b7au, guest.ecx + 0x4f8u);
        guest.eax = read32(guest, 0x00371b80u, guest.edx + 0x324cu);
        guest.eax = (guest.eax & 0xfffffffeu) | 0x80000000u;
        logic_flags(guest, guest.eax);
    }

    // The CMP EAX,ESI follows both reads below. The preceding CMP or OR
    // determines fault-visible flags while saving ESI or loading [ECX].
    push(guest, 0x00371b8eu, guest.esi);
    guest.esi = read32(guest, 0x00371b8fu, guest.ecx);
    bf_guest32_leaf_sub(guest, guest.eax, guest.esi);
    guest.edx = guest.eax;
    if (guest.eax <= guest.esi) {
        guest.edx = read32(guest, 0x00371b97u, guest.ecx + 0x40u);
        guest.edx = bf_guest32_leaf_add(guest, guest.edx, guest.eax);
    }

    guest.eax = read32(guest, 0x00371b9cu, guest.edi + 4u);
    bf_guest32_leaf_sub(guest, guest.eax, guest.esi);
    if (guest.eax <= guest.esi) {
        const auto offset = read32(guest, 0x00371ba3u, guest.ecx + 0x40u);
        guest.eax = bf_guest32_leaf_add(guest, guest.eax, offset);
    }
    bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
    guest.eax -= guest.edx;
    if ((guest.eflags & sign) != 0u) {
        guest.eax = 0u;
        logic_flags(guest, guest.eax);
        guest.esi = pop(guest, 0x00371bacu);
        bf_guest32_leaf_ret(guest, 0x00371badu, 0u);
        return;
    }

    guest.edx = read32(guest, 0x00371baeu, guest.edi + 8u);
    const auto previous = read32(guest, 0x00371bb1u, guest.ecx + 0x1fe0u);
    bf_guest32_leaf_sub(guest, guest.edx, previous);
    guest.edx -= previous;
    if ((guest.eflags & sign) != 0u) {
        guest.edx = 0u;
        logic_flags(guest, guest.edx);
    }
    guest.eax = bf_guest32_leaf_add(guest, guest.eax, guest.edx);
    guest.esi = pop(guest, 0x00371bbdu);
    bf_guest32_leaf_ret(guest, 0x00371bbeu, 0u);
}
