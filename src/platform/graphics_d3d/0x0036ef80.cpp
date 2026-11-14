/* Brute Force original Xbox - ordered guest32 device packet writer.
 * Input x86 body SHA-256: E2CA26B1B1B04ECBA639E49668C899006CC5BC74D620652103AB7C3B51AE4AE9
 * Entry: 0x0036ef80, Ghidra index: 13318, label: FUN_0036ef80
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_packet_writers.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0036ef80(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.ecx = read32(guest, 0x0036ef80u, guest.esp + 8u);
    push(guest, 0x0036ef84u, guest.ebx);
    push(guest, 0x0036ef85u, guest.ebp);
    push(guest, 0x0036ef86u, guest.esi);
    push(guest, 0x0036ef87u, guest.edi);
    do {
        bf_guest32_leaf_sub(guest, guest.ecx, 0x20u);
        guest.ebx = guest.ecx < 0x20u ? guest.ecx : 0x20u;
        guest.esi = read32(guest, 0x0036ef94u, guest.esp + 0x14u);
        guest.ecx = bf_guest32_leaf_add(guest, guest.ebx << 18u, 0xb00u);
        write32(guest, 0x0036efa3u, guest.eax, guest.ecx);

        guest.edx = guest.ebx * 4u;
        guest.ebp = guest.edx;
        guest.ecx = guest.edx >> 2u;
        // SHR ECX,2 defines C/Z/S/P and makes AF and OF undefined.
        constexpr std::uint32_t shift_flags = carry | zero | sign | parity;
        guest.eflags = (guest.eflags & ~shift_flags) | szp(guest.ecx, 0x80000000u);
        guest.eflags_defined = (guest.eflags_defined | shift_flags) & ~(auxiliary | overflow);
        guest.edi = guest.eax + 4u;
        bf_d3d_guest_packet::rep_movsd(guest, 0x0036efb6u);

        // EBP was four times the chunk count, so AND sets ECX to zero.
        // The following REP MOVSB therefore performs no memory access.
        guest.ecx = guest.ebp & 3u;
        logic_flags(guest, guest.ecx);
        guest.esi = read32(guest, 0x0036efbfu, guest.esp + 0x14u);
        guest.ecx = read32(guest, 0x0036efc3u, guest.esp + 0x18u);
        guest.esi = bf_guest32_leaf_add(guest, guest.esi, guest.edx);
        bf_guest32_leaf_sub(guest, guest.ecx, guest.ebx);
        guest.ecx -= guest.ebx;
        write32(guest, 0x0036efcbu, guest.esp + 0x14u, guest.esi);
        guest.eax += guest.edx + 4u;
        write32(guest, 0x0036efd3u, guest.esp + 0x18u, guest.ecx);
    } while (guest.ecx != 0u);

    guest.edi = pop(guest, 0x0036efd9u);
    guest.esi = pop(guest, 0x0036efdau);
    guest.ebp = pop(guest, 0x0036efdbu);
    guest.ebx = pop(guest, 0x0036efdcu);
    bf_guest32_leaf_ret(guest, 0x0036efddu, 8u);
}
