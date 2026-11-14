/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: E06286D5BAAE0A34FBF1F05B3AAA7DE7AE87AC4FE20E386CD2256E306D21759E
 * Entry: 0x0037fc73, Ghidra index: 13510, label: GetTypeInformation_4
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void XAPILIB__GetTypeInformation_4(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x0037fc73u;

    guest.eax = 0x0037eca4u;
    push(guest, entry + 5u, guest.esi);
    guest.edx = guest.eax;
    guest.esi = 0x0037ecacu;
    bf_guest32_leaf_sub(guest, guest.edx, guest.esi);

    for (;;) {
        guest.edx = read32(guest, entry + 17u, guest.eax);
        logic_flags(guest, guest.edx);
        if (guest.edx != 0u) {
            const std::uint32_t field = read32(guest, entry + 23u, guest.edx + 4u);
            bf_guest32_leaf_sub(guest, field, guest.ecx);
            if (field == guest.ecx) {
                guest.eax = read32(guest, entry + 39u, guest.eax);
                guest.esi = pop(guest, entry + 41u);
                bf_guest32_leaf_ret(guest, entry + 42u, 0u);
                return;
            }
        }

        guest.eax = bf_guest32_leaf_add(guest, guest.eax, 4u);
        bf_guest32_leaf_sub(guest, guest.eax, guest.esi);
        if (guest.eax >= guest.esi)
            break;
    }

    guest.eax = 0u;
    logic_flags(guest, guest.eax);
    guest.esi = pop(guest, entry + 37u);
    bf_guest32_leaf_ret(guest, entry + 38u, 0u);
}
