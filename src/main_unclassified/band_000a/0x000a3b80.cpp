/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 49D6389AAEE66C80DFDAA8343539FEBDA0773C868FD0ACEE79B75BE400553C3E
 * Entry: 0x000a3b80, label: FUN_000a3b80
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_000a3b80(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    guest.ecx = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x000a3b82u, guest.eax + 4u, guest.ecx);
    write32(guest, 0x000a3b85u, guest.eax + 8u, guest.ecx);
    write32(guest, 0x000a3b88u, guest.eax + 0x18u, guest.ecx);
    write32(guest, 0x000a3b8bu, guest.eax + 0x30u, guest.ecx);
    write32(guest, 0x000a3b8eu, guest.eax + 0x48u, guest.ecx);
    guest.edx = 0xffu;
    write32(guest, 0x000a3b96u, guest.eax, 0xef250533u);
    write32(guest, 0x000a3b9cu, guest.eax + 4u, 0x1ea5611u);
    write32(guest, 0x000a3ba3u, guest.eax + 0x18u, 0xfa3c2612u);
    write32(guest, 0x000a3baau, guest.eax + 0x24u, guest.edx);
    write32(guest, 0x000a3badu, guest.eax + 0x28u, guest.edx);
    write32(guest, 0x000a3bb0u, guest.eax + 0x2cu, guest.edx);
    push(guest, 0x000a3bb3u, guest.ebx);
    guest.ebx = read32(guest, 0x000a3bb4u, guest.eax + 0x18u);
    write32(guest, 0x000a3bb7u, guest.eax + 0x1cu, 0xbf800000u);
    write8(guest, 0x000a3bbeu, guest.eax + 0x20u, static_cast<std::uint8_t>(guest.ecx));
    write32(guest, 0x000a3bc1u, guest.eax + 0x30u, guest.ebx);
    write32(guest, 0x000a3bc4u, guest.eax + 0x3cu, guest.edx);
    write32(guest, 0x000a3bc7u, guest.eax + 0x40u, guest.edx);
    write32(guest, 0x000a3bcau, guest.eax + 0x44u, guest.edx);
    write32(guest, 0x000a3bcdu, guest.eax + 0x34u, 0xbf800000u);
    write8(guest, 0x000a3bd4u, guest.eax + 0x38u, static_cast<std::uint8_t>(guest.ecx));
    write32(guest, 0x000a3bd7u, guest.eax + 0x48u, 0xfa3c2612u);
    write8(guest, 0x000a3bdeu, guest.eax + 0x54u, static_cast<std::uint8_t>(guest.edx));
    guest.edx = 0x1au;
    write32(guest, 0x000a3be6u, guest.eax + 0x58u, guest.edx);
    write32(guest, 0x000a3be9u, guest.eax + 0x60u, guest.edx);
    guest.edx = 0x3c088723u;
    write32(guest, 0x000a3bf1u, guest.eax + 0x4cu, guest.ecx);
    write32(guest, 0x000a3bf4u, guest.eax + 0x50u, 0xc0000000u);
    write32(guest, 0x000a3bfbu, guest.eax + 0x5cu, 0x4cu);
    write32(guest, 0x000a3c02u, guest.eax + 0x64u, 0x3ca3d70au);
    write32(guest, 0x000a3c09u, guest.eax + 8u, 0x165b2a01u);
    write32(guest, 0x000a3c10u, guest.eax + 0xcu, guest.edx);
    write32(guest, 0x000a3c13u, guest.eax + 0x10u, guest.edx);
    write32(guest, 0x000a3c16u, guest.eax + 0x14u, 0x3f2aaa3bu);
    write8(guest, 0x000a3c1du, guest.eax + 0x69u, static_cast<std::uint8_t>(guest.ecx));
    write8(guest, 0x000a3c20u, guest.eax + 0x6au, static_cast<std::uint8_t>(guest.ecx));
    write8(guest, 0x000a3c23u, guest.eax + 0x6bu, static_cast<std::uint8_t>(guest.ecx));
    write32(guest, 0x000a3c26u, guest.eax + 0x70u, 0x3d4ccccdu);
    write8(guest, 0x000a3c2du, guest.eax + 0x68u, 1u);
    write32(guest, 0x000a3c31u, guest.eax + 0x6cu, guest.ecx);
    write32(guest, 0x000a3c34u, guest.eax + 0x74u, 0x41200000u);
    write32(guest, 0x000a3c3bu, guest.eax + 0x78u, 0x42700000u);
    write32(guest, 0x000a3c42u, guest.eax + 0x7cu, guest.ecx);
    guest.ebx = pop(guest, 0x000a3c45u);
    ret(guest, 0x000a3c46u);
}
