/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 4E5B7E3831B39CD23D62C5E130AF6E7B6403A3A996B39A5FEA6954CBEAF8E927
 * Entry: 0x00087fb0, Ghidra index: 1631, label: FUN_00087fb0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_table_lists.h"

void FUN_00087fb0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;

    push(guest, 0x00087fb0u, guest.edi);
    guest.edx = guest.ebx + 0x94u;
    guest.edi = 8u;
    do {
        guest.eax = read32(guest, 0x00087fc0u, guest.edx - 4u);
        bf_guest32_leaf_sub(guest, guest.edx, 8u);
        guest.edx -= 8u;
        logic_flags(guest, guest.eax);
        if (guest.eax != 0u) {
            logic_flags(guest, guest.eax & 1u, 0x80u); // TEST AL,1 leaves EAX intact.
            if ((guest.eax & 1u) == 0u) {
                guest.eax = bf_guest32_table_lists::bucket(guest, guest.eax);
                write32(guest, 0x00087fe3u, guest.edx + 4u, 0u);
                std::uint32_t link = read32(guest, 0x00087feau, guest.eax);
                compare_zero(guest, link);
                if (link != 0u) {
                    do {
                        guest.ecx = read32(guest, 0x00087ff0u, guest.eax);
                        bf_guest32_leaf_sub(guest, guest.ecx, guest.edx);
                        if (guest.ecx == guest.edx) {
                            // MOV reloads the matched pointer before fetching its link.
                            guest.ecx = read32(guest, 0x00087fffu, guest.eax);
                            guest.ecx = read32(guest, 0x00088001u, guest.ecx);
                            write32(guest, 0x00088003u, guest.eax, guest.ecx);
                            break;
                        }
                        guest.eax = guest.ecx;
                        link = read32(guest, 0x00087ff8u, guest.eax);
                        compare_zero(guest, link);
                    } while (link != 0u);
                }
            }
        }
        bf_guest32_leaf_dec(guest, guest.edi);
    } while (guest.edi != 0u);
    write32(guest, 0x00088008u, guest.ebx, 0x003a21bcu);
    guest.edi = pop(guest, 0x0008800eu);
    ret(guest, 0x0008800fu);
}
