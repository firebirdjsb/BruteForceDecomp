/* Brute Force original Xbox - guest byte-string and stack effects.
 * Input x86 body SHA-256: BFE1C8694A389FF580B6DBF4FC619A1D08B0466D13D4148C2278E078F393B88C
 * Entry: 0x00341b2d, Ghidra index: 12678, label: FUN_00341b2d
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_string_leaves.h"

void FUN_00341b2d(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x00341b2du;
    push(guest, entry, guest.edi);
    guest.edi = read32(guest, entry + 1u, guest.esp + 8u);
    guest.eax = read32(guest, entry + 5u, guest.edi);
    const auto initial = bf_guest32_byte_read(guest, entry + 7u, guest.eax);
    bf_guest32_leaf_sub(guest, initial, 0u, 0xffu);
    if (initial != 0u) {
        push(guest, entry + 0xcu, guest.esi);
        guest.ecx = guest.eax;
        guest.esi = guest.eax + 1u;
        bf_guest32_scan_nul(guest, entry + 0x12u);
        bf_guest32_leaf_sub(guest, guest.eax, guest.esi);
        guest.eax = guest.eax - guest.esi + guest.ecx - 1u;
        guest.esi = pop(guest, entry + 0x1fu);

        for (;;) {
            const auto byte = bf_guest32_byte_read(guest, entry + 0x20u, guest.ecx);
            guest.edx = bf_guest32_set_low_byte(guest.edx, byte);
            if (!bf_guest32_space_or_tab(guest, byte))
                break;
            increment(guest, guest.ecx);
        }
        write32(guest, entry + 0x2fu, guest.edi, guest.ecx);
        for (;;) {
            const auto byte = bf_guest32_byte_read(guest, entry + 0x31u, guest.eax);
            guest.ecx = bf_guest32_set_low_byte(guest.ecx, byte);
            if (!bf_guest32_space_or_tab(guest, byte))
                break;
            bf_guest32_leaf_dec(guest, guest.eax);
        }
        // AND BYTE PTR [EAX+1],0 reads the existing byte before its write.
        bf_guest32_byte_read(guest, entry + 0x40u, guest.eax + 1u);
        write8(guest, entry + 0x40u, guest.eax + 1u, 0u);
        logic_flags(guest, 0u, 0x80u);
    }
    guest.edi = pop(guest, entry + 0x44u);
    bf_guest32_leaf_ret(guest, entry + 0x45u, 4u);
}
