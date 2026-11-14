/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: E31A7180ECFCF09F86AFD80B3FFD6246B372E11FB4EEE5A2D6B244F67C2C6167
 * Entry: 0x0008f720, Ghidra index: 1757, label: FUN_0008f720
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_table_lists.h"

void FUN_0008f720(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t count_address = 0x00469b24u;

    guest.ecx = bf_guest32_table_lists::bucket(guest, guest.esi);
    guest.eax = read32(guest, 0x0008f737u, guest.ecx);
    guest.edx = 0u;
    logic_flags(guest, guest.eax); // TEST EAX,EAX after XOR EDX,EDX.
    if (guest.eax != 0u) {
        push(guest, 0x0008f73fu, guest.ebx);
        do {
            guest.ebx = read32(guest, 0x0008f740u, guest.eax + 4u);
            increment(guest, guest.edx);
            bf_guest32_leaf_sub(guest, guest.ebx, guest.esi);
            if (guest.ebx == guest.esi) {
                write32(guest, 0x0008f748u, guest.eax + 4u, 0u);
            } else {
                write32(guest, 0x0008f751u, guest.ecx, guest.eax);
                guest.ecx = guest.eax;
            }
            // The preceding stores can alias the current link.
            guest.eax = read32(guest, 0x0008f755u, guest.eax);
            logic_flags(guest, guest.eax);
        } while (guest.eax != 0u);
        guest.ebx = pop(guest, 0x0008f75bu);
    }
    const std::uint32_t previous = read32(guest, 0x0008f75cu, count_address);
    bf_guest32_leaf_sub(guest, guest.edx, previous);
    write32(guest, 0x0008f762u, guest.ecx, 0u);
    // JLE compares signed DWORDs, using the pre-store value even on alias.
    if ((guest.edx ^ 0x80000000u) > (previous ^ 0x80000000u))
        write32(guest, 0x0008f76au, count_address, guest.edx);
    ret(guest, 0x0008f770u);
}
