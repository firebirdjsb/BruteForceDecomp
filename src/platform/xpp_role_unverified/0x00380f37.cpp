/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: F42F3999A755312D4FAD55D13904CEA37A7E05F639DE3A1372FB987054AE30B2
 * Entry: 0x00380f37, Ghidra index: 13542, label: FUN_00380f37
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00380f37(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x00380f37u;

    push(guest, entry, guest.esi);
    guest.eax = 0x0037ecb4u;
    guest.esi = 0x0037ecc4u;
    bf_guest32_leaf_sub(guest, guest.eax, guest.esi);
    guest.ecx = guest.eax;

    guest.edx = read32(guest, entry + 17u, guest.esp + 8u);
    for (;;) {
        guest.eax = read32(guest, entry + 21u, guest.ecx);
        logic_flags(guest, guest.eax);
        if (guest.eax != 0u) {
            guest.eip = entry + 27u;
            const std::uint8_t record_high = bf_guest_read_u8(guest.eax + 1u);
            const std::uint8_t key_high = static_cast<std::uint8_t>(guest.edx >> 8u);
            bf_guest32_leaf_sub(guest, key_high, record_high, 0xffu);
            if (key_high == record_high) {
                guest.eip = entry + 32u;
                const std::uint8_t record_low = bf_guest_read_u8(guest.eax);
                const std::uint8_t key_low = static_cast<std::uint8_t>(guest.edx);
                bf_guest32_leaf_sub(guest, key_low, record_low, 0xffu);
                if (key_low == record_low) {
                    guest.eax = read32(guest, entry + 49u, guest.ecx);
                    guest.esi = pop(guest, entry + 45u);
                    bf_guest32_leaf_ret(guest, entry + 46u, 4u);
                    return;
                }
            }
        }

        guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, 4u);
        bf_guest32_leaf_sub(guest, guest.ecx, guest.esi);
        if (guest.ecx >= guest.esi)
            break;
    }

    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    guest.esi = pop(guest, entry + 45u);
    bf_guest32_leaf_ret(guest, entry + 46u, 4u);
}
