/* Brute Force original Xbox - explicit guest32 and SSE operation model.
 * Input x86 body SHA-256: 5DFBE181694F87F159EDE21BF169F5206FEB04FFC48104D0E4A68C6C7C426479
 * Entry: 0x002d9cc0, Ghidra index: 10257, label: FUN_002d9cc0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_guest32_sse_scale.h"

bool FUN_002d9cc0(bf_guest32_constructor_state& guest, const bf_sse_scale_operations& sse)
{
    using namespace bf_guest32_constructor;
    using op = bf_sse_scale_opcode;
    const auto step = [&](std::uint32_t site, op instruction, std::uint32_t address = 0u) {
        guest.eip = site;
        return sse.execute(sse.context, site, instruction, address);
    };

    push(guest, 0x002d9cc0u, guest.ebp);
    guest.ebp = guest.esp;
    guest.esp = (guest.esp & 0xfffffff0u) - 0x10u;
    if (guest.ecx == 0u) {
        // The low nibble is the nonnegative SUB result before SAR by two.
        guest.ecx = guest.eax & 0xfffffff0u;
        guest.edx += (guest.eax & 0xfu) >> 2u;
        guest.eax = guest.ecx;
    }
    logic_flags(guest, guest.edx);
    guest.ecx = read32(guest, 0x002d9cddu, guest.ebp + 8u);
    const auto scale_slot = guest.esp + 0xcu;
    write32(guest, 0x002d9ce0u, scale_slot, guest.ecx);
    if (!step(0x002d9ce4u, op::load_scalar_xmm0, scale_slot) ||
        !step(0x002d9ceau, op::broadcast_xmm0))
        return false;

    if (guest.edx != 0u && (guest.edx & 0x80000000u) == 0u) {
        const auto count_minus_one = guest.edx - 1u;
        guest.ecx = count_minus_one >> 2u;
        // SHR by two defines CF from bit one. INC supplies the other flags.
        guest.eflags = (guest.eflags & ~carry) | ((count_minus_one >> 1u) & carry);
        increment(guest, guest.ecx);
        do {
            if (!step(0x002d9cf7u, op::load_aligned_xmm1, guest.eax) ||
                !step(0x002d9cfau, op::multiply_xmm1_xmm0) ||
                !step(0x002d9cfdu, op::store_aligned_xmm1, guest.eax))
                return false;
            guest.eax = bf_guest32_leaf_add(guest, guest.eax, 0x10u);
            bf_guest32_leaf_dec(guest, guest.ecx);
        } while (guest.ecx != 0u);
    }

    guest.esp = guest.ebp;
    guest.ebp = pop(guest, 0x002d9d08u);
    ret(guest, 0x002d9d09u);
    return true;
}
