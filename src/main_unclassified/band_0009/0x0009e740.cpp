/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: 19352416C5DE929E8FC869C4B794B95AE0B27D1CDAC199EE4C8BEDF04BF6AC2F
 * Entry: 0x0009e740, label: FUN_0009e740
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_0009e740(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    push(guest, 0x0009e740u, guest.ebx);
    guest.ebx = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x0009e743u, guest.eax + 4u, guest.ebx);
    write32(guest, 0x0009e746u, guest.eax + 8u, guest.ebx);
    write8(guest, 0x0009e749u, guest.eax + 0x59u, static_cast<std::uint8_t>(guest.ebx));
    write8(guest, 0x0009e74cu, guest.eax + 0x58u, static_cast<std::uint8_t>(guest.ebx));
    write32(guest, 0x0009e74fu, guest.eax, 0x3a0e68u);
    write32(guest, 0x0009e755u, guest.eax + 0xcu, 0x3a0e5cu);
    guest.ecx = guest.eax + 0x60u;
    write32(guest, 0x0009e75fu, guest.ecx, 0x3a0f00u);
    write32(guest, 0x0009e765u, guest.ecx + 4u, 1u);
    write32(guest, 0x0009e76cu, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x0009e76fu, guest.esi + 8u);
    compare_zero(guest, guest.edx);
    write32(guest, 0x0009e774u, guest.eax + 0x5cu, guest.edx);
    guest.ebx = pop(guest, 0x0009e777u);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x0009e77au, guest.eax + 0x5cu, guest.ecx);
        ret(guest, 0x0009e77du);
        return;
    }

    guest.edx = read32(guest, 0x0009e77eu, guest.esi + 0xcu);
    write32(guest, 0x0009e781u, guest.edx, guest.ecx);
    ret(guest, 0x0009e783u);
}
