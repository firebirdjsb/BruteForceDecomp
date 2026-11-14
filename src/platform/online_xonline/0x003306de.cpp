/* Brute Force original Xbox - ordered guest32 launch data access.
 * Input x86 body SHA-256: 4FF181C43BEFEC6C313C6A58F578D60B09AFAC675B35D520CCF791857F2687BA
 * Entry: 0x003306de, Ghidra index: 12366, label: FUN_003306de
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_packet_writers.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_003306de(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    push(guest, 0x003306deu, guest.ebp);
    guest.ebp = guest.esp;
    guest.edx = read32(guest, 0x003306e1u, guest.ebp + 0xcu);

    // OR DWORD PTR [EDX],-1 is a read-modify-write even though the result
    // is constant. The write must complete before setting the flags.
    (void)read32(guest, 0x003306e4u, guest.edx);
    write32(guest, 0x003306e4u, guest.edx, 0xffffffffu);
    logic_flags(guest, 0xffffffffu);
    push(guest, 0x003306e7u, guest.esi);
    guest.esi = read32(guest, 0x003306e8u, guest.ebp + 8u);
    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    write32(guest, 0x003306edu, guest.esi, guest.eax);

    guest.ecx = read32(guest, 0x003306efu, 0x00386444u);
    compare_zero(guest, guest.ecx);
    push(guest, 0x003306f7u, guest.edi);
    if (guest.ecx != 0u) {
        guest.ecx = read32(guest, 0x003306fau, guest.ecx);
        compare_zero(guest, guest.ecx);
    }
    if (guest.ecx == 0u) {
        // The original reloads the argument, which can alias an output store.
        guest.edi = read32(guest, 0x00330724u, guest.ebp + 0xcu);
    } else {
        guest.edi = guest.ecx;
        guest.ecx = guest.edi + 0x214u;
        guest.eip = 0x00330708u;
        const auto bit = bf_guest_read_u8(guest.ecx) & 1u;
        logic_flags(guest, bit, 0x80u);
        if (bit != 0u) {
            guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, 4u);
            guest.eax = read32(guest, 0x00330710u, guest.ecx);
            write32(guest, 0x00330712u, guest.edx, guest.eax);
            guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, 4u);
            guest.eax = 0u;
            logic_flags(guest, guest.eax);
            write32(guest, 0x00330719u, guest.esi, guest.ecx);
            increment(guest, guest.eax);
        } else {
            guest.ecx = read32(guest, 0x0033071eu, guest.edi);
            write32(guest, 0x00330720u, guest.edx, guest.ecx);
        }
    }

    const auto output = read32(guest, 0x00330727u, guest.edx);
    bf_guest32_leaf_sub(guest, output, 0xffffffffu);
    if (output != 0xffffffffu) {
        guest.esi = guest.edi + 0x400u;
        guest.edi = read32(guest, 0x00330732u, guest.ebp + 0x10u);
        guest.ecx = 0x300u; // The original copies 768 DWORDs in guest DF order.
        bf_d3d_guest_packet::rep_movsd(guest, 0x0033073au);
    }

    guest.edi = pop(guest, 0x0033073cu);
    guest.esi = pop(guest, 0x0033073du);
    guest.ebp = pop(guest, 0x0033073eu);
    bf_guest32_leaf_ret(guest, 0x0033073fu, 12u);
}
