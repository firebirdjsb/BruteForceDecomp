/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 8F54B9FF97497C6688D9B05235C4EB054996BC0EC9EB5E6E690F01D526D7A722
 * Entry: 0x002ed1a8, Ghidra index: 10684, label: FUN_002ed1a8
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_002ed1a8(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x002ed1a8u, guest.esp + 8u);
    const auto start = read32(guest, 0x002ed1acu, guest.esp + 4u);
    bf_guest32_leaf_sub(guest, start, guest.eax);
    if (start >= guest.eax) {
        guest.eax = 0u;
        logic_flags(guest, guest.eax);
        ret(guest, 0x002ed1b4u);
        return;
    }

    const auto mode = read32(guest, 0x002ed1b5u, 0x004a8d5cu);
    compare_zero(guest, mode);
    if (mode != 0u) {
        const auto test_byte = [&guest](std::uint32_t load_pc, std::uint32_t flags_pc) {
            guest.eip = load_pc;
            guest.edx = bf_guest_read_u8(guest.ecx);
            guest.eip = flags_pc;
            const auto bits = bf_guest_read_u8(0x004a8d61u + guest.edx) & 4u;
            logic_flags(guest, bits, 0x80u);
            return bits != 0u;
        };

        guest.ecx = guest.eax - 1u;
        if (test_byte(0x002ed1c1u, 0x002ed1c4u)) {
            guest.eax = guest.ecx - 1u;
            ret(guest, 0x002ed1d0u);
            return;
        }

        do {
            bf_guest32_leaf_dec(guest, guest.ecx);
            const auto live_start = read32(guest, 0x002ed1d2u, guest.esp + 4u);
            bf_guest32_leaf_sub(guest, live_start, guest.ecx);
            if (live_start > guest.ecx)
                break;
        } while (test_byte(0x002ed1d8u, 0x002ed1dbu));

        guest.edx = (guest.eax - guest.ecx) & 1u; // SUB followed immediately by AND.
        bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
        guest.eax -= guest.edx;
    }
    bf_guest32_leaf_dec(guest, guest.eax);
    ret(guest, 0x002ed1eeu);
}
