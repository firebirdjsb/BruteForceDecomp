/* Brute Force original Xbox - guest byte-string and stack effects.
 * Input x86 body SHA-256: DC7833FDA4E6D81AAC734C2C5F121B4B8FAA6001AD589EED7AF561F889F9C3B6
 * Entry: 0x001f1b40, Ghidra index: 6995, label: FUN_001f1b40
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_string_leaves.h"

void FUN_001f1b40(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x001f1b40u;
    push(guest, entry, guest.esi);
    push(guest, entry + 1u, guest.edi);
    guest.eax = bf_guest32_leaf_add(guest, guest.eax, 0x138u);
    guest.esi = guest.ecx - guest.eax;
    guest.edi = guest.edx;
    guest.edx = guest.eax;
    bf_guest32_leaf_sub(guest, guest.ecx, guest.eax);
    push(guest, entry + 0xfu, guest.ebx);
    do {
        const auto byte = bf_guest32_byte_read(guest, entry + 0x10u, guest.edx);
        guest.ebx = bf_guest32_set_low_byte(guest.ebx, byte);
        write8(guest, entry + 0x12u, guest.esi + guest.edx, byte);
        increment(guest, guest.edx);
        logic_flags(guest, byte, 0x80u);
    } while ((guest.ebx & 0xffu) != 0u);
    guest.esi = guest.eax + 1u;
    guest.ebx = pop(guest, entry + 0x1du);

    bf_guest32_scan_nul(guest, entry + 0x20u);
    bf_guest32_leaf_sub(guest, guest.eax, guest.esi);
    guest.eax -= guest.esi;
    guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, guest.eax);
    write8(guest, entry + 0x2bu, guest.ecx, 0x5cu);
    auto byte = bf_guest32_byte_read(guest, entry + 0x2eu, guest.edi);
    guest.eax = bf_guest32_set_low_byte(guest.eax, byte);
    increment(guest, guest.ecx);
    logic_flags(guest, byte, 0x80u);
    while (byte != 0u) {
        bf_guest32_leaf_sub(guest, byte, 0x2fu, 0xffu);
        if (byte == 0x2fu)
            write8(guest, entry + 0x39u, guest.ecx, 0x5cu);
        else
            write8(guest, entry + 0x3eu, guest.ecx, byte);
        byte = bf_guest32_byte_read(guest, entry + 0x40u, guest.edi + 1u);
        guest.eax = bf_guest32_set_low_byte(guest.eax, byte);
        increment(guest, guest.ecx);
        increment(guest, guest.edi);
        logic_flags(guest, byte, 0x80u);
    }
    guest.edi = pop(guest, entry + 0x49u);
    write8(guest, entry + 0x4au, guest.ecx, 0u);
    guest.esi = pop(guest, entry + 0x4du);
    ret(guest, entry + 0x4eu);
}
