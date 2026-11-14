/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: B76ECA04939394168681CE37423799EC147B8F47C5703CC64C632C179347479B
 * Entry: 0x0034c50e, Ghidra index: 12962, label: FUN_0034c50e
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0034c50e(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x0034c50eu;
    push(guest, entry, guest.ebp);
    guest.ebp = guest.esp;
    const std::uint32_t length_slot = guest.ebp + 0xcu;
    std::uint32_t available = read32(guest, entry + 3u, length_slot);
    compare_zero(guest, available);
    if (available != 0u) {
        guest.eax = read32(guest, entry + 9u, guest.ebp + 8u);
        do {
            guest.eip = entry + 0xcu;
            const std::uint16_t id = bf_guest_read_u16(guest.eax);
            guest.ecx = (guest.ecx & 0xffff0000u) | id;
            guest.eip = entry + 0xfu;
            const std::uint16_t key = bf_guest_read_u16(guest.ebp + 0x10u);
            bf_guest32_leaf_sub(guest, id, key, 0xffffu);
            if (id == key) {
                guest.ebp = pop(guest, entry + 0x26u);
                bf_guest32_leaf_ret(guest, entry + 0x27u, 12u);
                return;
            }

            guest.eip = entry + 0x15u;
            guest.ecx = bf_guest_read_u16(guest.eax + 2u);
            const std::uint32_t remaining = read32(guest, entry + 0x19u, length_slot) - guest.ecx;
            write32(guest, entry + 0x19u, length_slot, remaining);
            guest.eax = bf_guest32_leaf_add(guest, guest.eax, guest.ecx);
            available = read32(guest, entry + 0x1eu, length_slot);
            compare_zero(guest, available);
        } while (available != 0u);
    }
    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    guest.ebp = pop(guest, entry + 0x26u);
    bf_guest32_leaf_ret(guest, entry + 0x27u, 12u);
}
