/* Brute Force original Xbox - ordered guest32 device packet writer.
 * Input x86 body SHA-256: 6C032181F7B88352120F449AB12B68941B5211F005218032B2B26C810467E956
 * Entry: 0x00370e10, Ghidra index: 13374, label: FUN_00370e10
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_packet_writers.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00370e10(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    push(guest, 0x00370e10u, guest.ebx);
    push(guest, 0x00370e11u, guest.ebp);
    push(guest, 0x00370e12u, guest.esi);
    guest.esi = read32(guest, 0x00370e13u, guest.edx + 0x36cu);
    guest.ecx = static_cast<std::uint32_t>(guest.esi != 0u);
    logic_flags(guest, guest.esi); // TEST ESI,ESI precedes the saved EDI store.
    push(guest, 0x00370e20u, guest.edi);

    guest.ebx = guest.eax + 4u;
    guest.edx = 0x00181b68u;
    // The SHL flags are overwritten by ADD before the next guest access.
    guest.ebp = bf_guest32_leaf_add(guest, guest.ecx << 7u, 0x0037bb88u);
    do {
        write32(guest, 0x00370e34u, guest.eax, guest.edx);
        guest.esi = guest.ebp;
        guest.edi = guest.ebx;
        guest.edx += 0x40u;
        guest.ecx = 6u;
        guest.eax += 0x1cu;
        guest.ebx += 0x1cu;
        guest.ebp += 0x80u;
        // REP MOVSD preserves the CMP flags consumed by JBE.
        bf_guest32_leaf_sub(guest, guest.edx, 0x00181be8u);
        bf_d3d_guest_packet::rep_movsd(guest, 0x00370e54u);
    } while (guest.edx <= 0x00181be8u);

    guest.edi = pop(guest, 0x00370e58u);
    guest.esi = pop(guest, 0x00370e59u);
    guest.ebp = pop(guest, 0x00370e5au);
    guest.ebx = pop(guest, 0x00370e5bu);
    ret(guest, 0x00370e5cu);
}
