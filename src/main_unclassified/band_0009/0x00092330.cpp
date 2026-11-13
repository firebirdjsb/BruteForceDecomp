/* Brute Force original retail Xbox guest register model.
 * Input x86 body SHA-256: E805E1BA7DF3574644C849BD018870B4AB3BDB33EC928D9D82F17BFD56259609
 * Entry: 0x00092330, label: FUN_00092330
 * ABI_UNVERIFIED: host guest-state adapter with a flat memory backend.
 */
#include "bf_xbe_guest32_constructors.h"

void FUN_00092330(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    write32(guest, 0x00092330u, guest.eax + 4u, 0u);
    or8(guest, 0x00092337u, guest.eax + 0x3cu, 3u);
    write32(guest, 0x0009233bu, guest.eax + 8u, 0u);
    write32(guest, 0x00092342u, guest.eax + 0x38u, 0x3a83126fu);
    write8(guest, 0x00092349u, guest.eax + 0x3du, 0u);
    write32(guest, 0x0009234du, guest.eax, 0x3a19d0u);
    write32(guest, 0x00092353u, guest.eax + 0xcu, 0x3a19c0u);
    write32(guest, 0x0009235au, guest.eax + 0x10u, 0x3a19b0u);
    guest.ecx = guest.eax + 0x44u;
    write32(guest, 0x00092364u, guest.ecx, 0x3a1b10u);
    write32(guest, 0x0009236au, guest.ecx + 4u, 1u);
    write32(guest, 0x00092371u, guest.ecx + 8u, guest.eax);
    guest.edx = read32(guest, 0x00092374u, guest.esi + 8u);
    logic_flags(guest, guest.edx);
    write32(guest, 0x00092379u, guest.eax + 0x40u, guest.edx);
    if ((guest.eflags & zero) != 0) {
        write32(guest, 0x0009237eu, guest.eax + 0x40u, guest.ecx);
        ret(guest, 0x00092381u);
        return;
    }

    guest.edx = read32(guest, 0x00092382u, guest.esi + 0xcu);
    write32(guest, 0x00092385u, guest.edx, guest.ecx);
    ret(guest, 0x00092387u);
}
