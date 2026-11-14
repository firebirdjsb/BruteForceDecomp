/* Brute Force original Xbox - ordered guest32 record teardown.
 * Input x86 body SHA-256: 13315B827ED2EE66B7AFD9AF3DF4ECCB0AA1F94B40D4F4E83D6D48B8EB5A39A2
 * Entry: 0x00012440, Ghidra index: 17, label: FUN_00012440
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_linked_records.h"

void FUN_00012440(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.edx = guest.esi + 0x20u;
    write32(guest, 0x00012443u, guest.esi + 4u, 0x003a4f64u);
    guest.eax = read32(guest, 0x0001244au, guest.edx + 4u);
    logic_flags(guest, guest.eax);
    if (guest.eax != 0u) {
        push(guest, 0x00012451u, 0x00012456u);
        FUN_0008f6e0(guest);
        if (guest.eip != 0x00012456u)
            return;
    }

    // The first unlink may change this field through an alias.
    guest.eax = read32(guest, 0x00012456u, guest.esi + 0x10u);
    logic_flags(guest, guest.eax);
    guest.edx = guest.esi + 0xcu;
    if (guest.eax != 0u) {
        push(guest, 0x00012460u, 0x00012465u);
        FUN_0008f6e0(guest);
        if (guest.eip != 0x00012465u)
            return;
    }
    write32(guest, 0x00012465u, guest.esi, 0x003a4f50u);
    ret(guest, 0x0001246bu);
}
