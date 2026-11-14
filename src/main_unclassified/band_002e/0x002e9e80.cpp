/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 0EDFDF0CD21B5EFFDBE5A44D1ED33CCDEEB36AA6BEB3B4B1D937400CB2F94B95
 * Entry: 0x002e9e80, Ghidra index: 10566, label: FUN_002e9e80
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_division_leaves.h"

bf_guest32_division_result FUN_002e9e80(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    using bf_guest32_division::increment_dword;

    push(guest, 0x002e9e80u, guest.esi);
    guest.esi = read32(guest, 0x002e9e81u, guest.esp + 8u); // First stack argument.
    logic_flags(guest, guest.esi); // TEST ESI,ESI.
    if (guest.esi != 0u) {
        guest.edx = read32(guest, 0x002e9e89u, guest.ecx + 4u);
        guest.eax = guest.esi;
        bf_guest32_leaf_sub(guest, guest.eax, guest.edx);
        guest.eax -= guest.edx;
        guest.edx = 0u;
        logic_flags(guest, guest.edx); // XOR EDX,EDX sets the high dividend to zero.
        const std::uint32_t divisor = read32(guest, 0x002e9e92u, guest.ecx + 0x14u);
        if (divisor == 0u)
            return bf_guest32_division_result::divide_error;

        // DIV cannot overflow a DWORD quotient with EDX=0 and a nonzero divisor.
        guest.edx = guest.eax % divisor;
        guest.eax /= divisor;
        guest.eflags_defined &= ~arithmetic;
        guest.edx = read32(guest, 0x002e9e95u, guest.ecx + 0x18u);
        write32(guest, 0x002e9e98u, guest.esi, guest.edx);
        write32(guest, 0x002e9e9au, guest.ecx + 0x18u, guest.eax);
        increment_dword(guest, 0x002e9e9du, guest.ecx + 0xcu);
    }
    guest.esi = pop(guest, 0x002e9ea0u);
    bf_guest32_leaf_ret(guest, 0x002e9ea1u, 4u);
    return bf_guest32_division_result::returned;
}
