#ifndef BF_X87_ROTATION_LEAVES_H
#define BF_X87_ROTATION_LEAVES_H

#include <array>

#include "bf_xbe_guest32_record_leaves.h"

enum class bf_x87_rotation_opcode {
    fld_m32, fstp_m32, fmul_m32, fsincos, fld_st1, fxch_st1, faddp_st1, fsubp_st1, fmul_st1, fchs
};

struct bf_x87_rotation_operations {
    void* context;
    // Executes one complete x87 instruction, including waiting exceptions and
    // any DWORD memory access. The backend owns the guest x87 environment.
    bool (*execute)(void*, std::uint32_t eip, bf_x87_rotation_opcode, std::uint32_t guest_va);
};

bool FUN_0001fa20(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);
bool FUN_00072010(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);
bool FUN_00073d80(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);

bool FUN_000720d0(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);
bool FUN_0016b210(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);

namespace bf_x87_rotation {

enum class pair_schedule { add_then_subtract, subtract_then_add, subtract_then_add_sine_first };

struct component_pair {
    std::uint32_t first;
    std::uint32_t second;
    pair_schedule schedule = pair_schedule::add_then_subtract;
};

inline bool start(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87,
                  std::uint32_t entry, std::uint32_t cosine_offset)
{
    using namespace bf_guest32_constructor;
    using op = bf_x87_rotation_opcode;
    const auto step = [&](std::uint32_t site, op operation, std::uint32_t address = 0u) {
        guest.eip = site;
        return x87.execute(x87.context, site, operation, address);
    };
    bf_guest32_leaf_sub(guest, guest.esp, 0x10u);
    guest.esp -= 0x10u;
    guest.eax = guest.esp + cosine_offset;
    guest.ecx = guest.esp + (4u - cosine_offset);
    write32(guest, entry + 0x0bu, guest.esp + 0xcu, guest.eax);
    write32(guest, entry + 0x0fu, guest.esp + 0x8u, guest.ecx);
    if (!step(entry + 0x13u, op::fld_m32, guest.esp + 0x18u) ||
        !step(entry + 0x17u, op::fsincos))
        return false;

    // FSINCOS leaves cosine in ST(0) and sine in ST(1) on its normal path.
    // Keep both original stores even when the backend reports C2 or masked faults.
    guest.eax = read32(guest, entry + 0x19u, guest.esp + 0xcu);
    if (!step(entry + 0x1du, op::fstp_m32, guest.eax))
        return false;
    guest.eax = read32(guest, entry + 0x1fu, guest.esp + 0x8u);
    if (!step(entry + 0x23u, op::fstp_m32, guest.eax))
        return false;
    return true;
}

inline bool run(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87,
                std::uint32_t entry, const std::array<component_pair, 3>& components)
{
    using namespace bf_guest32_constructor;
    using op = bf_x87_rotation_opcode;
    auto instruction = entry + 0x25u;
    const auto step = [&](std::uint32_t site, op operation, std::uint32_t address = 0u) {
        guest.eip = site;
        return x87.execute(x87.context, site, operation, address);
    };
    const auto next = [&](std::uint32_t size, op operation, std::uint32_t address = 0u) {
        const auto site = instruction;
        instruction += size;
        return step(site, operation, address);
    };
    if (!start(guest, x87, entry, 0u))
        return false;

    const auto load_object = [&] {
        guest.eax = read32(guest, instruction, guest.esp + 0x14u);
        instruction += 4u;
    };

    for (const auto& pair : components) {
        // EAX-relative [EAX] occupies two instruction bytes, [EAX+disp8] three.
        const auto first_length = pair.first == 0u ? 2u : 3u;
        load_object();
        if (!next(first_length, op::fld_m32, guest.eax + pair.first))
            return false;
        if (pair.schedule == pair_schedule::add_then_subtract) {
            if (!next(4u, op::fld_m32, guest.esp + 4u) ||
                !next(3u, op::fmul_m32, guest.eax + pair.second) ||
                !next(2u, op::fld_st1) ||
                !next(4u, op::fmul_m32, guest.esp) ||
                !next(2u, op::faddp_st1))
                return false;
        } else {
            if (!next(4u, op::fld_m32, guest.esp) ||
                !next(2u, op::fmul_st1) ||
                !next(4u, op::fld_m32, guest.esp + 4u) ||
                !next(3u, op::fmul_m32, guest.eax + pair.second) ||
                !next(2u, op::fsubp_st1))
                return false;
        }
        if (!next(first_length, op::fstp_m32, guest.eax + pair.first))
            return false;

        // The first binary32 store can alias the object argument or a local.
        load_object();
        if (pair.schedule == pair_schedule::subtract_then_add_sine_first) {
            // 0x0007213f multiplies retained ST(0) by sine before loading
            // cosine. This changes the operand order and omits FXCH.
            if (!next(4u, op::fmul_m32, guest.esp + 4u) ||
                !next(4u, op::fld_m32, guest.esp) ||
                !next(3u, op::fmul_m32, guest.eax + pair.second))
                return false;
        } else {
            if (!next(4u, op::fld_m32, guest.esp) ||
                !next(3u, op::fmul_m32, guest.eax + pair.second) ||
                !next(2u, op::fxch_st1) ||
                !next(4u, op::fmul_m32, guest.esp + 4u))
                return false;
        }
        const auto finish = pair.schedule == pair_schedule::add_then_subtract ? op::fsubp_st1 : op::faddp_st1;
        if (!next(2u, finish) || !next(3u, op::fstp_m32, guest.eax + pair.second))
            return false;
    }
    load_object();
    guest.esp = bf_guest32_leaf_add(guest, guest.esp, 0x10u);
    bf_guest32_leaf_ret(guest, instruction + 3u, 8u);
    return true;
}

} // namespace bf_x87_rotation

#endif
