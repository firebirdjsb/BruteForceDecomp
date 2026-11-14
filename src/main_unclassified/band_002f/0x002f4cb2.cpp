/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: DC8EB4151F3CAD9B7E0F4F0C466867D35C68ADD00F3F247A56719AD8D221E73C
 * Entry: 0x002f4cb2, Ghidra index: 10878, label: SetUnhandledExceptionFilter
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void XAPILIB__SetUnhandledExceptionFilter(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x002f4cb2u;
    constexpr std::uint32_t slot = 0x004a90dcu;
    // The slot holds opaque guest code-address bits. The wrapper only exchanges them.
    guest.ecx = read32(guest, entry, guest.esp + 4u);
    guest.eax = read32(guest, entry + 4u, slot);
    write32(guest, entry + 9u, slot, guest.ecx);
    bf_guest32_leaf_ret(guest, entry + 0xfu, 4u);
}
