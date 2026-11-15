/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: 4E6025AACF00495BB6609F771A3831233D1B48E19EDCB42CB224B95792C2F2C9
 * Entry: 0x0001fc70, Ghidra index: 158, label: FUN_0001fc70
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_leaves.h"

bool FUN_0001fc70(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    using namespace bf_guest32_constructor;
    using op = bf_x87_rotation_opcode;
    const auto step = [&](std::uint32_t offset, op instruction, std::uint32_t operand = 0u) {
        guest.eip = 0x0001fc70u + offset;
        return x87.execute(x87.context, guest.eip, instruction, operand);
    };

    bf_guest32_leaf_sub(guest, guest.esp, 0x14u);
    guest.esp -= 0x14u;
    const auto frame = guest.esp;
    // The argument at frame+0x20 is multiplied by the retail image DWORD.
    if (!step(0x03u, op::fld_m32, frame + 0x20u))
        return false;
    guest.eax = frame + 4u;
    if (!step(0x0bu, op::fmul_m32, 0x003a5198u))
        return false;
    guest.ecx = frame;
    write32(guest, 0x0001fc85u, frame + 0xcu, guest.eax);
    write32(guest, 0x0001fc89u, frame + 8u, guest.ecx);
    if (!step(0x1du, op::fstp_m32, frame + 0x10u) ||
        !step(0x21u, op::fld_m32, frame + 0x10u) ||
        !step(0x25u, op::fsincos))
        return false;

    // The original reloads the two destination pointers before storing.
    guest.eax = read32(guest, 0x0001fc97u, frame + 0xcu);
    if (!step(0x2bu, op::fstp_m32, guest.eax))
        return false;
    guest.eax = read32(guest, 0x0001fc9du, frame + 8u);
    if (!step(0x31u, op::fstp_m32, guest.eax))
        return false;

    guest.eax = read32(guest, 0x0001fca3u, frame + 0x1cu);
    if (!step(0x37u, op::fld_m32, guest.eax + 8u))
        return false;
    guest.edx = read32(guest, 0x0001fcaau, frame + 0x18u);
    if (!step(0x3eu, op::fld_m32, guest.eax + 4u) ||
        !step(0x41u, op::fld_m32, guest.eax) ||
        !step(0x43u, op::fld_st, 0u) ||
        !step(0x45u, op::fmul_st1) ||
        !step(0x47u, op::fld_st, 2u) ||
        !step(0x49u, op::fmul_st, 3u) ||
        !step(0x4bu, op::faddp_st1) ||
        !step(0x4du, op::fld_st, 3u) ||
        !step(0x4fu, op::fmul_st, 4u) ||
        !step(0x51u, op::faddp_st1) ||
        !step(0x53u, op::fsqrt) ||
        !step(0x55u, op::fstp_st, 3u) ||
        !step(0x57u, op::fstp_st, 0u) ||
        !step(0x59u, op::fstp_st, 0u) ||
        !step(0x5bu, op::fdivr_m32, frame) ||
        !step(0x5fu, op::fld_m32, frame + 4u) ||
        !step(0x63u, op::fstp_m32, guest.edx))
        return false;

    // Reload both arguments after each component store to preserve aliases.
    guest.eax = read32(guest, 0x0001fcd5u, frame + 0x1cu);
    guest.ecx = read32(guest, 0x0001fcd9u, frame + 0x18u);
    if (!step(0x6du, op::fld_st, 0u) ||
        !step(0x6fu, op::fmul_m32, guest.eax) ||
        !step(0x71u, op::fstp_m32, guest.ecx + 4u))
        return false;
    guest.edx = read32(guest, 0x0001fce4u, frame + 0x1cu);
    guest.eax = read32(guest, 0x0001fce8u, frame + 0x18u);
    if (!step(0x7cu, op::fld_st, 0u) ||
        !step(0x7eu, op::fmul_m32, guest.edx + 4u) ||
        !step(0x81u, op::fstp_m32, guest.eax + 8u))
        return false;
    guest.ecx = read32(guest, 0x0001fcf4u, frame + 0x1cu);
    guest.edx = read32(guest, 0x0001fcf8u, frame + 0x18u);
    if (!step(0x8cu, op::fmul_m32, guest.ecx + 8u) ||
        !step(0x8fu, op::fstp_m32, guest.edx + 0xcu))
        return false;

    guest.eax = read32(guest, 0x0001fd02u, frame + 0x18u);
    guest.esp = bf_guest32_leaf_add(guest, guest.esp, 0x14u);
    bf_guest32_leaf_ret(guest, 0x0001fd09u, 0xcu);
    return true;
}
