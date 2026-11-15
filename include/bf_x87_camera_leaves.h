#ifndef BF_X87_CAMERA_LEAVES_H
#define BF_X87_CAMERA_LEAVES_H

#include "bf_xbe_guest32_record_leaves.h"

enum class bf_x87_camera_opcode {
    fld_m32, fld1, fpatan, fmul_m64, fstp_m32, fld_st, fmul_st,
    faddp_st1, fsqrt, fstp_st, fdivr_m32, fmul_m32, fdiv_m32, fchs
};

struct bf_x87_camera_operations {
    void* context;
    // Owns guest x87 state, waiting faults and the instruction's complete
    // memory access. Operand is a guest VA for memory forms or an ST index.
    bool (*execute)(void*, std::uint32_t eip, bf_x87_camera_opcode, std::uint32_t operand);
};

bool FUN_0006ad00(bf_guest32_constructor_state&, const bf_x87_camera_operations&);
bool FUN_0006ad90(bf_guest32_constructor_state&, const bf_x87_camera_operations&);

namespace bf_x87_camera {

inline bool run(bf_guest32_constructor_state& guest, const bf_x87_camera_operations& x87,
                std::uint32_t entry, std::uint32_t lane)
{
    using namespace bf_guest32_constructor;
    using op = bf_x87_camera_opcode;
    const auto step = [&](std::uint32_t offset, op instruction, std::uint32_t operand = 0u) {
        guest.eip = entry + offset;
        return x87.execute(x87.context, guest.eip, instruction, operand);
    };
    // The two bodies use the same local frame, with distinct camera DWORDs.
    const std::uint32_t slope = guest.eax + 0x24u + lane * 4u;
    const std::uint32_t vector = guest.eax + 0x40u + lane * 12u;
    const std::uint32_t first = 0x3f800000u - lane * 0x3f800000u;
    const std::uint32_t second = lane * 0x3f800000u;
    bf_guest32_leaf_sub(guest, guest.esp, 12u);
    guest.esp -= 12u;
    if (!step(0x03u, op::fld_m32, slope))
        return false;
    guest.ecx = read32(guest, entry + 0x06u, slope);
    if (!step(0x09u, op::fld1))
        return false;
    write32(guest, entry + 0x0bu, guest.esp, first);
    if (!step(0x13u, op::fpatan))
        return false;
    guest.edx = read32(guest, entry + 0x15u, guest.esp);
    write32(guest, entry + 0x19u, guest.esp + 8u, guest.ecx);
    write32(guest, entry + 0x1du, guest.esp + 4u, second);
    guest.ecx = read32(guest, entry + 0x25u, guest.esp + 4u);
    if (!step(0x29u, op::fmul_m64, 0x003a5270u) ||
        !step(0x2fu, op::fstp_m32, guest.eax + 0x14u + lane * 4u))
        return false;
    write32(guest, entry + 0x32u, vector, guest.edx);
    guest.edx = read32(guest, entry + 0x35u, guest.esp + 8u);
    write32(guest, entry + 0x39u, vector + 4u, guest.ecx);
    write32(guest, entry + 0x3cu, vector + 8u, guest.edx);

    // Loads and register copies use the retail stack indices at each step.
    if (!step(0x3fu, op::fld_m32, vector + 8u) ||
        !step(0x42u, op::fld_m32, vector + 4u) ||
        !step(0x45u, op::fld_m32, vector) ||
        !step(0x48u, op::fld_st, 0u) ||
        !step(0x4au, op::fmul_st, 1u) ||
        !step(0x4cu, op::fld_st, 2u) ||
        !step(0x4eu, op::fmul_st, 3u) ||
        !step(0x50u, op::faddp_st1) ||
        !step(0x52u, op::fld_st, 3u) ||
        !step(0x54u, op::fmul_st, 4u) ||
        !step(0x56u, op::faddp_st1) ||
        !step(0x58u, op::fsqrt) ||
        !step(0x5au, op::fstp_st, 3u) ||
        !step(0x5cu, op::fstp_st, 0u) ||
        !step(0x5eu, op::fstp_st, 0u) ||
        !step(0x60u, op::fdivr_m32, 0x003a4f78u) ||
        !step(0x66u, op::fld_st, 0u) ||
        !step(0x68u, op::fmul_m32, vector) ||
        !step(0x6bu, op::fstp_m32, vector) ||
        !step(0x6eu, op::fld_st, 0u) ||
        !step(0x70u, op::fmul_m32, vector + 4u) ||
        !step(0x73u, op::fstp_m32, vector + 4u) ||
        !step(0x76u, op::fmul_m32, vector + 8u) ||
        !step(0x79u, op::fstp_m32, vector + 8u) ||
        !step(0x7cu, op::fld_m32, guest.eax + 0x30u + lane * 4u) ||
        !step(0x7fu, op::fdiv_m32, slope))
        return false;

    if (lane != 0u && !step(0x82u, op::fchs))
        return false;
    if (!step(0x82u + lane * 2u, op::fstp_m32, guest.eax + 0x38u + lane * 4u))
        return false;
    guest.esp = bf_guest32_leaf_add(guest, guest.esp, 12u);
    ret(guest, entry + 0x88u + lane * 2u);
    return true;
}

} // namespace bf_x87_camera

#endif
