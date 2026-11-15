/* Brute Force original Xbox - explicit guest32 call and return model.
 * Input x86 body SHA-256: E67E2460D9F65EE794B0EC38E78CA61BA2BED9B03EC1976DB770EEA560232518
 * Entry: 0x0031198a, Ghidra index: 11902, label: DSound_CRefCount_Release
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_indirect_wrappers.h"

void DSOUND__DSound_CRefCount_Release(bf_guest32_constructor_state& guest, bf_guest32_dispatch& dispatch)
{
    using namespace bf_guest32_constructor;
    guest.ecx = read32(guest, 0x0031198au, guest.esp + 4u);
    guest.eax = read32(guest, 0x0031198eu, guest.ecx + 4u);
    logic_flags(guest, guest.eax);
    if (guest.eax != 0u) {
        bf_guest32_leaf_dec(guest, guest.eax);
        logic_flags(guest, guest.eax);
        write32(guest, 0x00311998u, guest.ecx + 4u, guest.eax);
        if (guest.eax == 0u) {
            guest.eax = read32(guest, 0x0031199du, guest.ecx);
            push(guest, 0x0031199fu, 1u);
            const auto target = read32(guest, 0x003119a1u, guest.eax);
            if (!bf_guest32_call_indirect(guest, 0x003119a1u, 0x003119a3u, target, dispatch))
                return;
            guest.eax = 0u;
            logic_flags(guest, guest.eax);
            bf_guest32_leaf_ret(guest, 0x003119aau, 4u);
            return;
        }
    }
    guest.eax = read32(guest, 0x003119a7u, guest.ecx + 4u);
    bf_guest32_leaf_ret(guest, 0x003119aau, 4u);
}
