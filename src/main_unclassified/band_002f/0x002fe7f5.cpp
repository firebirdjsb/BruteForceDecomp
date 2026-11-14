/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 1375F1D9E4548AE56A29ECE864F13A6FD2D2AAFD5945E1FCBDC719E22FE0F6CC
 * Entry: 0x002fe7f5, Ghidra index: 11032, label: _wcsstr
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_002fe7f5(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x002fe7f5u;
    const auto word_at = [&guest](std::uint32_t offset, std::uint32_t address) {
        guest.eip = entry + offset;
        return bf_guest_read_u16(address);
    };

    guest.ecx = read32(guest, entry, guest.esp + 8u);
    const auto first_pattern = word_at(4u, guest.ecx);
    bf_guest32_leaf_sub(guest, first_pattern, 0u, 0xffffu);
    guest.eax = read32(guest, entry + 8u, guest.esp + 4u);
    push(guest, entry + 0xcu, guest.edi);
    guest.edi = guest.eax;
    if (first_pattern != 0u) {
        guest.edx = 0u;
        logic_flags(guest, guest.edx);
        guest.edx = word_at(0x13u, guest.eax);
        logic_flags(guest, guest.edx, 0x8000u);
        push(guest, entry + 0x19u, guest.ebx);
        bool found = false;
        if (guest.edx != 0u) {
            bf_guest32_leaf_sub(guest, guest.eax, guest.ecx);
            guest.eax -= guest.ecx;
            do {
                logic_flags(guest, guest.edx & 0xffffu, 0x8000u);
                guest.ecx = read32(guest, entry + 0x21u, guest.esp + 0x10u);
                if ((guest.edx & 0xffffu) != 0u) {
                    do {
                        const auto needle = word_at(0x27u, guest.ecx);
                        guest.edx = (guest.edx & 0xffff0000u) | needle;
                        logic_flags(guest, needle, 0x8000u);
                        if (needle == 0u) {
                            found = true;
                            break;
                        }
                        guest.ebx = word_at(0x2fu, guest.eax + guest.ecx);
                        guest.edx = needle;
                        bf_guest32_leaf_sub(guest, guest.ebx, guest.edx);
                        guest.ebx -= guest.edx;
                        if (guest.ebx != 0u)
                            break;
                        increment(guest, guest.ecx);
                        increment(guest, guest.ecx);
                        const auto next = word_at(0x3cu, guest.eax + guest.ecx);
                        bf_guest32_leaf_sub(guest, next, 0u, 0xffffu);
                        if (next == 0u)
                            break;
                    } while (true);
                }
                if (found)
                    break;
                const auto current = word_at(0x43u, guest.ecx);
                bf_guest32_leaf_sub(guest, current, 0u, 0xffffu);
                if (current == 0u) {
                    found = true;
                    break;
                }
                increment(guest, guest.edi);
                increment(guest, guest.edi);
                guest.edx = (guest.edx & 0xffff0000u) | word_at(0x4bu, guest.edi);
                increment(guest, guest.eax);
                increment(guest, guest.eax);
                logic_flags(guest, guest.edx & 0xffffu, 0x8000u);
            } while ((guest.edx & 0xffffu) != 0u);
        }
        if (found) {
            guest.eax = guest.edi;
        } else {
            guest.eax = 0u;
            logic_flags(guest, guest.eax);
        }
        guest.ebx = pop(guest, entry + 0x57u);
    }
    guest.edi = pop(guest, entry + 0x58u);
    ret(guest, entry + 0x59u);
}
