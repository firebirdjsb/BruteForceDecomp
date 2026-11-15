/* Brute Force original Xbox - ordered guest32 hash lookup.
 * Input x86 body SHA-256: 6A79730AC8DFA4DF3AFC3C588E39AF990C5D7F1D4604C42F155C6EA25B47F68D
 * Entry: 0x00183530, Ghidra index: 5198, label: FUN_00183530
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_string_leaves.h"

void FUN_00183530(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    push(guest, 0x00183530u, guest.esi);
    push(guest, 0x00183531u, guest.edi);
    guest.esi = guest.eax;
    guest.edi = 0u;
    logic_flags(guest, guest.edi);

    // EDX passes through unchanged. The hash's stack reads and writes use
    // the real successor VA, so a string can alias the active call frame.
    push(guest, 0x00183536u, 0x0018353bu);
    FUN_002383b0(guest);
    if (guest.eip != 0x0018353bu)
        return;

    guest.edx = read32(guest, 0x0018353bu, guest.esi + 0xb8u);
    guest.ecx = read32(guest, 0x00183541u, guest.esi + 0xb4u);
    bf_guest32_leaf_sub(guest, guest.ecx, guest.edx);
    while (guest.ecx != guest.edx) {
        const auto key = read32(guest, 0x00183550u, guest.ecx);
        bf_guest32_leaf_sub(guest, key, guest.eax);
        if (key == guest.eax) {
            guest.eax = read32(guest, 0x00183560u, guest.ecx + 4u);
            guest.edi = pop(guest, 0x00183563u);
            guest.esi = pop(guest, 0x00183564u);
            ret(guest, 0x00183565u);
            return;
        }
        guest.ecx = bf_guest32_leaf_add(guest, guest.ecx, 8u);
        bf_guest32_leaf_sub(guest, guest.ecx, guest.edx);
    }

    guest.eax = guest.edi;
    guest.edi = pop(guest, 0x0018355du);
    guest.esi = pop(guest, 0x0018355eu);
    ret(guest, 0x0018355fu);
}
