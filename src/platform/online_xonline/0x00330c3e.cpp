/* Brute Force original Xbox - explicit guest32 call and return model.
 * Input x86 body SHA-256: 4A8177662C75769C41C98596F54EC585833D3D8EBB2830F05C3092B57F003045
 * Entry: 0x00330c3e, Ghidra index: 12374, label: FUN_00330c3e
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_indirect_wrappers.h"

void FUN_00330c3e(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch)
{
    using namespace bf_guest32_constructor;
    logic_flags(guest, guest.ecx);
    if (guest.ecx == 0u) {
        guest.eax = 0x80150005u;
    } else {
        guest.eax = read32(guest, 0x00330c49u, guest.esp + 4u);
        push(guest, 0x00330c4du, guest.eax);
        const auto target = read32(guest, 0x00330c4eu, guest.eax);
        if (!bf_guest32_call_indirect(guest, 0x00330c4eu, 0x00330c50u, target, dispatch))
            return;
    }
    bf_guest32_leaf_ret(guest, 0x00330c50u, 4u);
}
