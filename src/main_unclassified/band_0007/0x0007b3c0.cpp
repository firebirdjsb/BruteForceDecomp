/* Brute Force original Xbox - campaign record initializer guest32 model.
 * Input x86 body SHA-256: E0F42FF24D5DC38ECB0B0E15951A0111A93E923A0C790626AADC2E435F8AC9D7
 * Entry: 0x0007b3c0, Ghidra index: 1465, label: FUN_0007b3c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Retail campaign loader 0x0007b100 calls this entry at 0x0007b179 and 0x0007b2b9.
 */
#include "bf_guest32_campaign_records.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0007b3c0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.edx = 0u;
    logic_flags(guest, guest.edx);
    write32(guest, 0x0007b3c2u, guest.eax + 0x18u, guest.edx);
    guest.ecx = 0xfu;
    write32(guest, 0x0007b3cau, guest.eax + 0x1cu, guest.ecx);
    write8(guest, 0x0007b3cdu, guest.eax + 8u, 0u);
    write32(guest, 0x0007b3d0u, guest.eax + 0x38u, guest.ecx);
    write32(guest, 0x0007b3d3u, guest.eax + 0x34u, guest.edx);
    write8(guest, 0x0007b3d6u, guest.eax + 0x24u, 0u);
    write32(guest, 0x0007b3d9u, guest.eax + 0x54u, 7u);
    write32(guest, 0x0007b3e0u, guest.eax + 0x50u, guest.edx);
    push(guest, 0x0007b3e3u, guest.esi);
    guest.eip = 0x0007b3e4u;
    bf_guest_write_u16(guest.eax + 0x40u, 0u);
    write32(guest, 0x0007b3e8u, guest.eax + 0x58u, guest.edx);

    guest.ecx = guest.eax + 0x5cu;
    guest.esi = 4u;
    do {
        write32(guest, 0x0007b3f3u, guest.ecx, guest.edx);
        write32(guest, 0x0007b3f5u, guest.ecx + 4u, guest.edx);
        guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, 8u);
        bf_guest32_leaf_dec(guest, guest.esi);
    } while (guest.esi != 0u);

    write32(guest, 0x0007b3feu, guest.eax + 0x80u, guest.edx);
    write32(guest, 0x0007b404u, guest.eax + 0x84u, guest.edx);
    write32(guest, 0x0007b40au, guest.eax + 0x88u, guest.edx);
    write32(guest, 0x0007b410u, guest.eax + 0x90u, guest.edx);
    write32(guest, 0x0007b416u, guest.eax + 0x94u, guest.edx);
    write32(guest, 0x0007b41cu, guest.eax + 0x98u, guest.edx);
    guest.esi = pop(guest, 0x0007b422u);
    ret(guest, 0x0007b423u);
}
