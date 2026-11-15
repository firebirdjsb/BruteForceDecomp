/* Brute Force original Xbox - explicit guest32 call and return model.
 * Input x86 body SHA-256: B814D967BC73B0CE3CBEABBA0B340B24C6B4BABE88E4CC19D28D552174B702AF
 * Entry: 0x00380eda, Ghidra index: 13540, label: FUN_00380eda
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_indirect_wrappers.h"

void FUN_00380eda(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x00380edau, guest.esp + 4u);
    guest.ecx = read32(guest, 0x00380edeu, guest.eax + 8u);
    logic_flags(guest, guest.ecx);
    if (guest.ecx != 0u) {
        const auto context = read32(guest, 0x00380ee5u, guest.eax + 0xcu);
        push(guest, 0x00380ee5u, context);
        push(guest, 0x00380ee8u, guest.eax);
        if (!bf_guest32_call_indirect(guest, 0x00380ee9u, 0x00380eebu, guest.ecx, dispatch))
            return;
    }
    bf_guest32_leaf_ret(guest, 0x00380eebu, 4u);
}
