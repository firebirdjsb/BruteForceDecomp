/* Brute Force original Xbox - ordered guest32 gameplay record model.
 * Input x86 body SHA-256: 7DEE718511B83945A878535AA238DFA83FD306C84F352806D54E2E9FA7CB54A1
 * Entry: 0x00023ee0, Ghidra index: 249, label: FUN_00023ee0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_guest32_linked_records.h"
#include "bf_xbe_guest32_record_leaves.h"

void FUN_00023ee0(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    push(guest, 0x00023ee0u, guest.ebx);
    guest.ebx &= 0xffffff00u; // XOR BL,BL leaves the upper register bytes.
    logic_flags(guest, guest.eax);
    if (guest.eax != 0u) {
        guest.eax = read32(guest, 0x00023ee7u, guest.eax + 0x80u) >> 6u;
        logic_flags(guest, guest.eax & 1u, 0x80u);
        if ((guest.eax & 1u) == 0u) {
            guest.eax = guest.esi;
            push(guest, 0x00023ef6u, 0x00023efbu);
            FUN_000120f0(guest);
            if (guest.eip != 0x00023efbu)
                return;
            guest.ecx = read32(guest, 0x00023efbu, guest.eax + 0x59cu);
            logic_flags(guest, guest.ecx);
            if (guest.ecx == 0u) {
                guest.eax = (guest.eax & 0xffffff00u) | 1u;
                guest.ebx = pop(guest, 0x00023f07u);
                ret(guest, 0x00023f08u);
                return;
            }
            const auto state = read32(guest, 0x00023f09u, guest.esi + 0x58u);
            bf_guest32_leaf_sub(guest, state, 4u);
            if (state == 4u) {
                guest.eax = (guest.eax & 0xffffff00u) | 1u;
                guest.ebx = pop(guest, 0x00023f13u);
                ret(guest, 0x00023f14u);
                return;
            }
        }
    }
    guest.eax = (guest.eax & 0xffffff00u) | (guest.ebx & 0xffu);
    guest.ebx = pop(guest, 0x00023f13u);
    ret(guest, 0x00023f14u);
}
