/* Brute Force original Xbox - explicit guest32 device command model.
 * Input x86 body SHA-256: 0DF5852FADA8AFCE10EE319D1018E67752D87B5644E734F065AC44734EF2EF1F
 * Entry: 0x00372180, Ghidra index: 13393, label: FUN_00372180
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_d3d_guest_kick.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00372180(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    guest.eax = read32(guest, 0x00372180u, 0x0037dd88u);
    guest.eax = read32(guest, 0x00372185u, guest.eax + 0x17c8u);
    guest.eip = 0x0037218bu;
    bf_guest_store_fence();

    const auto register_va = guest.eax + 0x100410u;
    guest.ecx = read32(guest, 0x0037218eu, register_va);
    guest.ecx |= 0x10000u;
    logic_flags(guest, guest.ecx);
    write32(guest, 0x0037219au, register_va, guest.ecx);
    std::uint32_t pending;
    do {
        pending = read32(guest, 0x003721a0u, register_va) & 0x10000u;
        logic_flags(guest, pending);
    } while (pending != 0u);

    bf_guest32_leaf_ret(guest, 0x003721acu, 0u);
}
