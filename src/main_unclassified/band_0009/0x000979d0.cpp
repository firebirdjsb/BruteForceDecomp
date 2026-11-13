/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 21DDAB2FB58E5E233DA717C49CABB13A44D5864E36B15DE5D0AAB1FDCEA47F56
 * Entry: 0x000979d0, label: FUN_000979d0
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_000979d0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    push(guest, 0x000979d0u, guest.ebx);
    guest.ebx = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x000979d3u, guest.eax + 4u, guest.ebx);
    write32(guest, 0x000979d6u, guest.eax + 8u, guest.ebx);
    write8(guest, 0x000979d9u, guest.eax + 0x55u, static_cast<std::uint8_t>(guest.ebx));
    write8(guest, 0x000979dcu, guest.eax + 0x54u, static_cast<std::uint8_t>(guest.ebx));
    guest.edx = 1u;
    write8(guest, 0x000979e4u, guest.eax + 0x56u, static_cast<std::uint8_t>(guest.edx));
    write32(guest, 0x000979e7u, guest.eax, 0x3a13f8u);
    guest.ecx = guest.eax + 0x60u;
    write32(guest, 0x000979f0u, guest.ecx, 0x3a0f0cu);
    write32(guest, 0x000979f6u, guest.ecx + 4u, guest.edx);
    write32(guest, 0x000979f9u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x000979fcu, guest.esi + 8u);
    compare_zero(guest, guest.edx);
    write32(guest, 0x00097a01u, guest.eax + 0x5cu, guest.edx);
    guest.ebx = pop(guest, 0x00097a04u);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x00097a07u, guest.eax + 0x5cu, guest.ecx);
        ret(guest, 0x00097a0au);
        return;
    }

    guest.edx = read32(guest, 0x00097a0bu, guest.esi + 0xcu);
    write32(guest, 0x00097a0eu, guest.edx, guest.ecx);
    ret(guest, 0x00097a10u);
}
