/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: B686AD91DFA8141678552F23C06FD0F2DF500FC9EDC3FC8F1EEC63E2F67B3AAB
 * Entry: 0x00099210, label: FUN_00099210
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00099210(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    push(guest, 0x00099210u, guest.ebx);
    guest.ebx = 0u;
    logic_flags(guest, 0u);
    write32(guest, 0x00099213u, guest.eax + 4u, guest.ebx);
    guest.ecx = 0x3f800000u;
    write32(guest, 0x0009921bu, guest.eax + 0x18u, guest.ecx);
    write32(guest, 0x0009921eu, guest.eax + 0x30u, guest.ecx);
    write32(guest, 0x00099221u, guest.eax + 0x34u, guest.ecx);
    write32(guest, 0x00099224u, guest.eax + 8u, guest.ebx);
    write8(guest, 0x00099227u, guest.eax + 0x2cu, static_cast<std::uint8_t>(guest.ebx));
    guest.edx = 1u;
    write32(guest, 0x0009922fu, guest.eax + 0x3cu, guest.ebx);
    write8(guest, 0x00099232u, guest.eax + 0x2du, static_cast<std::uint8_t>(guest.edx));
    write32(guest, 0x00099235u, guest.eax, 0x3a12a8u);
    guest.ecx = guest.eax + 0x48u;
    write32(guest, 0x0009923eu, guest.ecx, 0x3a0f0cu);
    write32(guest, 0x00099244u, guest.ecx + 4u, guest.edx);
    write32(guest, 0x00099247u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x0009924au, guest.esi + 8u);
    compare_zero(guest, guest.edx);
    write32(guest, 0x0009924fu, guest.eax + 0x44u, guest.edx);
    guest.ebx = pop(guest, 0x00099252u);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x00099255u, guest.eax + 0x44u, guest.ecx);
        ret(guest, 0x00099258u);
        return;
    }

    guest.edx = read32(guest, 0x00099259u, guest.esi + 0xcu);
    write32(guest, 0x0009925cu, guest.edx, guest.ecx);
    ret(guest, 0x0009925eu);
}
