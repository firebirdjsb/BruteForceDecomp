/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 657B86EB3F69AD621B91DA27D47A0F2E983E2D2F7FDE04370D77C2FC69CBC145
 * Entry: 0x000d0830, Ghidra index: 2578, label: FUN_000d0830
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_000d0830(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.edx = read32(guest, 0x000d0830u, guest.ecx + 0x14u);
    guest.eax = bf_guest32_leaf_add(guest, (guest.eax & 0xffffu) << 4u, guest.edx);
    guest.edx = read32(guest, 0x000d083bu, guest.eax + 4u);
    logic_flags(guest, guest.edx);
    push(guest, 0x000d0840u, guest.esi);
    guest.esi = read32(guest, 0x000d0841u, guest.eax);
    if (guest.edx != 0u)
        write32(guest, 0x000d0845u, guest.edx, guest.esi);
    else
        write32(guest, 0x000d0849u, guest.ecx, guest.esi);
    logic_flags(guest, guest.esi);
    if (guest.esi != 0u)
        write32(guest, 0x000d084fu, guest.esi + 4u, guest.edx);
    else
        write32(guest, 0x000d0854u, guest.ecx + 4u, guest.edx);
    write32(guest, 0x000d0857u, guest.eax + 4u, 0u);
    write32(guest, 0x000d085eu, guest.eax, 0u);
    guest.edx = read32(guest, 0x000d0864u, guest.ecx + 0xcu);
    logic_flags(guest, guest.edx);
    guest.esi = pop(guest, 0x000d0869u);
    if (guest.edx != 0u) {
        write32(guest, 0x000d086cu, guest.edx, guest.eax);
        guest.edx = read32(guest, 0x000d086eu, guest.ecx + 0xcu);
        write32(guest, 0x000d0871u, guest.eax + 4u, guest.edx);
        write32(guest, 0x000d0874u, guest.ecx + 0xcu, guest.eax);
        ret(guest, 0x000d0877u);
        return;
    }
    write32(guest, 0x000d0878u, guest.eax + 4u, 0u);
    write32(guest, 0x000d087fu, guest.ecx + 8u, guest.eax);
    write32(guest, 0x000d0882u, guest.ecx + 0xcu, guest.eax);
    ret(guest, 0x000d0885u);
}
