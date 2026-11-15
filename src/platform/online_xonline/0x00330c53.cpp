/* Brute Force original Xbox - explicit guest32 call and return model.
 * Input x86 body SHA-256: 9449D08232FFBDD1DD7824BAA00AE9DF0660072BF4BA395F04888285A347EA07
 * Entry: 0x00330c53, Ghidra index: 12375, label: FUN_00330c53
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_indirect_wrappers.h"

void FUN_00330c53(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch)
{
    using namespace bf_guest32_constructor;
    logic_flags(guest, guest.ecx);
    if (guest.ecx == 0u) {
        guest.eax = 0x80150005u;
    } else {
        guest.eax = read32(guest, 0x00330c5eu, guest.esp + 4u);
        push(guest, 0x00330c62u, guest.eax);
        const auto target = read32(guest, 0x00330c63u, guest.eax + 4u);
        if (!bf_guest32_call_indirect(guest, 0x00330c63u, 0x00330c66u, target, dispatch))
            return;
        guest.eax = 0u;
        logic_flags(guest, guest.eax);
    }
    bf_guest32_leaf_ret(guest, 0x00330c68u, 4u);
}
