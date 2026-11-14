/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: ECC913B9CBAD7BF2D299650DE49CB003011D5CBA2B8BDD8439355D467D10C5D4
 * Entry: 0x002fe401, Ghidra index: 11021, label: FUN_002fe401
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_002fe401(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x002fe401u;
    guest.eax = read32(guest, entry, 0x00414b48u);
    logic_flags(guest, guest.eax); // The initial JMP reaches the same TEST as the loop.
    while (guest.eax != 0u) {
        guest.ecx = read32(guest, entry + 7u, guest.eax);
        const std::uint32_t key = read32(guest, entry + 9u, guest.esp + 4u);
        bf_guest32_leaf_sub(guest, guest.ecx, key);
        if (guest.ecx == key) {
            guest.eax = 0u;
            logic_flags(guest, guest.eax);
            ret(guest, entry + 0x1au);
            return;
        }
        guest.eax = read32(guest, entry + 0xfu, guest.eax + 4u);
        logic_flags(guest, guest.eax);
    }
    increment(guest, guest.eax);
    ret(guest, entry + 0x17u);
}
