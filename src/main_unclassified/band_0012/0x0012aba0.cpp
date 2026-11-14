/* Brute Force original Xbox - ordered guest32 iterator update.
 * Input x86 body SHA-256: 499A2146F4B3AEE2E10A784082225CC5F60EDC497100359BBE57EE0597DEB91C
 * Entry: 0x0012aba0, Ghidra index: 3772, label: FUN_0012aba0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0012aba0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    const auto read_flag = [&](std::uint32_t site, std::uint32_t node, std::uint32_t& reg) {
        guest.eip = site;
        const auto flag = bf_guest_read_u8(node + 0x15u);
        reg = (reg & 0xffffff00u) | flag;
        logic_flags(guest, flag, 0x80u);
        return flag != 0u;
    };

    guest.eax = read32(guest, 0x0012aba0u, guest.edx);
    if (read_flag(0x0012aba2u, guest.eax, guest.ecx)) {
        ret(guest, 0x0012abf6u);
        return;
    }

    guest.ecx = read32(guest, 0x0012aba9u, guest.eax + 8u);
    push(guest, 0x0012abacu, guest.ebx);
    if (!read_flag(0x0012abadu, guest.ecx, guest.ebx)) {
        guest.eax = read32(guest, 0x0012abb4u, guest.ecx);
        if (!read_flag(0x0012abb6u, guest.eax, guest.ebx)) {
            do {
                guest.ecx = guest.eax;
                guest.eax = read32(guest, 0x0012abc2u, guest.ecx);
            } while (!read_flag(0x0012abc4u, guest.eax, guest.ebx));
        }
        write32(guest, 0x0012abcbu, guest.edx, guest.ecx);
        guest.ebx = pop(guest, 0x0012abcdu);
        ret(guest, 0x0012abceu);
        return;
    }

    guest.eax = read32(guest, 0x0012abcfu, guest.eax + 4u);
    bool stop = read_flag(0x0012abd2u, guest.eax, guest.ecx);
    while (!stop) {
        guest.ecx = read32(guest, 0x0012abe0u, guest.edx);
        const auto child = read32(guest, 0x0012abe2u, guest.eax + 8u);
        bf_guest32_leaf_sub(guest, guest.ecx, child);
        if (guest.ecx != child)
            break;
        write32(guest, 0x0012abe7u, guest.edx, guest.eax);
        // The store may alias the next parent field. Read it afterwards.
        guest.eax = read32(guest, 0x0012abe9u, guest.eax + 4u);
        stop = read_flag(0x0012abecu, guest.eax, guest.ecx);
    }
    write32(guest, 0x0012abf3u, guest.edx, guest.eax);
    guest.ebx = pop(guest, 0x0012abf5u);
    ret(guest, 0x0012abf6u);
}
