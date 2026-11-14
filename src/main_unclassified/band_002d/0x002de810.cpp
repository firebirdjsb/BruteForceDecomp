/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 0B48DCDA345DC860A3F8C1F6ADCF5FE1D36B617096D170D7120547E4C2E6EAFE
 * Entry: 0x002de810, Ghidra index: 10332, label: FUN_002de810
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_002de810(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x002de810u;
    const std::uint32_t object = guest.eax;
    guest.ecx = 0u;
    logic_flags(guest, guest.ecx);
    write32(guest, entry + 0x02u, object + 0xcu, guest.ecx);
    guest.edx = object + 0x1b8u;
    write32(guest, entry + 0x0bu, object + 0x1a8u, guest.edx);
    write32(guest, entry + 0x11u, object + 0x1b4u, 4u);
    push(guest, entry + 0x1bu, guest.ebx);
    push(guest, entry + 0x1cu, guest.edi);
    guest.edx = 3u;
    write32(guest, entry + 0x22u, object + 0x1acu, guest.edx);
    write32(guest, entry + 0x28u, object + 0x1b0u, guest.edx);
    guest.edi = object + 0x80u;
    write32(guest, entry + 0x34u, object + 0x1a0u, guest.edi);
    guest.edi = object + 0x110u;
    write32(guest, entry + 0x40u, object + 0x1a4u, guest.edi);
    for (std::uint32_t i = 0; i < 5u; ++i)
        write32(guest, entry + 0x46u + i * 6u, object + 0x214u + i * 0x10u, guest.ecx);

    guest.ecx = object + 0x2f4u;
    guest.edi = 1u;
    do {
        const std::uint32_t row = guest.ecx;
        guest.ebx = row + 0xcu;
        write32(guest, entry + 0x73u, row - 4u, guest.ebx);
        guest.ebx = row - 0x6cu;
        write32(guest, entry + 0x79u, row, guest.edi);
        write32(guest, entry + 0x7bu, row + 4u, guest.edi);
        write32(guest, entry + 0x7eu, row + 8u, 4u);
        write32(guest, entry + 0x85u, row - 0xcu, guest.ebx);
        guest.ebx = row - 0x3cu;
        write32(guest, entry + 0x8bu, row - 8u, guest.ebx);
        guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, 0xd8u);
        bf_guest32_leaf_dec(guest, guest.edx);
    } while (guest.edx != 0u);
    guest.edi = pop(guest, entry + 0x97u);
    guest.ebx = pop(guest, entry + 0x98u);
    ret(guest, entry + 0x99u);
}
