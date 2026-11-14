/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 44CCAF35353636DF62DB82941AC88CAD9A7952D51FEB51B1A80D67E0A10ECB51
 * Entry: 0x001664b0, Ghidra index: 4715, label: FUN_001664b0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_001664b0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    push(guest, 0x001664b0u, guest.ecx);
    push(guest, 0x001664b1u, guest.ebx);
    push(guest, 0x001664b2u, guest.ebp);
    guest.ebp = read32(guest, 0x001664b3u, guest.esp + 0x10u);
    push(guest, 0x001664b7u, guest.esi);
    guest.esi = guest.ebp + 4u;
    push(guest, 0x001664bbu, guest.edi);
    bf_guest32_leaf_sub(guest, guest.ebp, guest.edx);
    guest.ebp -= guest.edx;

    const std::uint32_t counter = guest.esp + 0x10u;
    write32(guest, 0x001664beu, counter, 6u);
    do {
        guest.eax = read32(guest, 0x001664c6u, guest.edx);
        write32(guest, 0x001664c8u, guest.edx + guest.ebp, guest.eax);
        bf_guest32_leaf_sub(guest, guest.edx, guest.esi);
        guest.eax = guest.edx - guest.esi;
        guest.ecx = guest.esi;
        guest.ebx = guest.eax + 4u;
        guest.edi = 4u;
        do {
            guest.eax = read32(guest, 0x001664e0u, guest.ebx + guest.ecx);
            write32(guest, 0x001664e3u, guest.ecx, guest.eax);
            guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, 4u);
            bf_guest32_leaf_dec(guest, guest.edi);
        } while (guest.edi != 0u);

        // The live stack counter may have been overwritten by a payload store.
        guest.eax = read32(guest, 0x001664ebu, counter);
        guest.edx = bf_guest32_leaf_add(guest, guest.edx, 0x14u);
        guest.esi = bf_guest32_leaf_add(guest, guest.esi, 0x14u);
        bf_guest32_leaf_dec(guest, guest.eax);
        write32(guest, 0x001664f6u, counter, guest.eax);
    } while (guest.eax != 0u);

    guest.eax = read32(guest, 0x001664fcu, guest.esp + 0x18u);
    guest.edi = pop(guest, 0x00166500u);
    guest.esi = pop(guest, 0x00166501u);
    guest.ebp = pop(guest, 0x00166502u);
    guest.ebx = pop(guest, 0x00166503u);
    guest.ecx = pop(guest, 0x00166504u);
    bf_guest32_leaf_ret(guest, 0x00166505u, 4u);
}
