/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 04C1F0EC26656E5F4F9FD009CB04AA1AC49F0C0B61D0FC1101981D3BBAE3B3AA
 * Entry: 0x001f2b00, Ghidra index: 7012, label: FUN_001f2b00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_001f2b00(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x001f2b00u;

    guest.ecx = 0u;
    logic_flags(guest, guest.ecx);
    write8(guest, entry + 2u, guest.eax + 5u, 0u);
    write8(guest, entry + 5u, guest.eax + 4u, 0u);
    write32(guest, entry + 8u, guest.eax + 8u, guest.ecx);
    write32(guest, entry + 0xbu, guest.eax + 0xbcu, 0x00baad00u);
    write32(guest, entry + 0x15u, guest.eax, 0x00396840u);
    guest.edx = guest.eax + 0xcu;
    write32(guest, entry + 0x1eu, guest.eax + 0xb4u, guest.edx);
    guest.edx = guest.eax + 0x60u;
    write32(guest, entry + 0x27u, guest.eax + 0xb8u, guest.edx);

    constexpr std::uint32_t offsets[] = {0xd0u, 0xccu, 0xc8u, 0xc4u, 0xe0u, 0xdcu, 0xd8u, 0xd4u, 0xc0u};
    for (std::uint32_t i = 0; i < sizeof(offsets) / sizeof(offsets[0]); ++i)
        write32(guest, entry + 0x2du + i * 6u, guest.eax + offsets[i], guest.ecx);
    ret(guest, entry + 0x63u);
}
