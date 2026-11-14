/* Brute Force original Xbox - guest32 byte hash used by campaign loading.
 * Input x86 body SHA-256: D410734EA4A6CB1222DACFB5476C267844303F561A7367F821575587A489FA6C
 * Entry: 0x002383b0, Ghidra index: 7871, label: FUN_002383b0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_string_leaves.h"

void FUN_002383b0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    logic_flags(guest, guest.edx);
    if (guest.edx == 0u) {
        guest.eax = 0u;
        logic_flags(guest, guest.eax);
        ret(guest, 0x002383b6u);
        return;
    }

    auto byte = bf_guest32_byte_read(guest, 0x002383b7u, guest.edx);
    guest.ecx = bf_guest32_set_low_byte(guest.ecx, byte);
    guest.eax = 0xffffffffu;
    logic_flags(guest, byte, 0x80u);
    while (byte != 0u) {
        // MOVSX indexes the table through signed CL, including bytes 0x80–0xff.
        guest.ecx = (static_cast<std::uint32_t>(byte) ^ 0x80u) - 0x80u;
        guest.ecx = bf_guest32_byte_read(guest, 0x002383c3u, 0x003bc550u + guest.ecx);
        guest.ecx = (guest.ecx ^ guest.eax) & 0xffu;
        logic_flags(guest, guest.ecx);
        guest.ecx = read32(guest, 0x002383d2u, 0x003bc150u + guest.ecx * 4u);
        guest.eax = (guest.eax >> 8u) ^ guest.ecx;
        logic_flags(guest, guest.eax);
        byte = bf_guest32_byte_read(guest, 0x002383deu, guest.edx + 1u);
        guest.ecx = bf_guest32_set_low_byte(guest.ecx, byte);
        increment(guest, guest.edx);
        logic_flags(guest, byte, 0x80u);
    }
    guest.eax = ~guest.eax;
    ret(guest, 0x002383e8u);
}
