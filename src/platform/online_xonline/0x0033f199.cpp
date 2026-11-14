/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 9D9650E91A1DEED74220BFEE4B2A32485F40E88CBB22715AB532A74171139F99
 * Entry: 0x0033f199, Ghidra index: 12639, label: FUN_0033f199
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0033f199(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x0033f199u;
    guest.eax = read32(guest, entry, guest.esp + 8u);
    logic_flags(guest, guest.eax);
    while (guest.eax != 0u) {
        guest.ecx = read32(guest, entry + 6u, guest.eax + 4u);
        const std::uint32_t key = read32(guest, entry + 9u, guest.esp + 4u);
        bf_guest32_leaf_sub(guest, guest.ecx, key);
        if (guest.ecx == key)
            break;
        guest.eax = read32(guest, entry + 0xfu, guest.eax);
        logic_flags(guest, guest.eax);
    }

    // LEA, NEG, SBB and AND return either the node's +4 address or zero.
    // AND is the final flag writer. ECX retains the LEA result in both cases.
    guest.ecx = guest.eax + 4u;
    guest.eax = guest.eax != 0u ? guest.ecx : 0u;
    logic_flags(guest, guest.eax);
    bf_guest32_leaf_ret(guest, entry + 0x1eu, 8u);
}
