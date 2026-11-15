#ifndef BF_X87_ROTATION_INITIALIZERS_H
#define BF_X87_ROTATION_INITIALIZERS_H

#include "bf_x87_rotation_leaves.h"

bool FUN_00039380(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);
bool FUN_0013e800(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);
bool FUN_0020e080(bf_guest32_constructor_state&, const bf_x87_rotation_operations&);

namespace bf_x87_rotation {

enum class initializer_value { zero, clear_eax_and_store, one, sine, negative_sine, cosine };
enum class pointer_register { eax, ecx, edx };
struct initializer_store {
    pointer_register pointer;
    initializer_value value;
    bool load_before_pointer = false;
};

inline bool initialize(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87,
                       std::uint32_t entry, const std::array<initializer_store, 9>& stores)
{
    using namespace bf_guest32_constructor;
    using op = bf_x87_rotation_opcode;
    using value = initializer_value;
    if (!start(guest, x87, entry, 4u))
        return false;

    auto site = entry + 0x25u;
    const auto step = [&](std::uint32_t length, op operation, std::uint32_t address = 0u) {
        guest.eip = site;
        site += length;
        return x87.execute(x87.context, guest.eip, operation, address);
    };
    const auto pointer_registers = std::array{&guest.eax, &guest.ecx, &guest.edx};
    for (std::uint32_t offset = 0u; offset < 36u; offset += 4u) {
        const auto& store = stores[offset / 4u];
        const bool floating = store.value >= value::sine;
        const auto source = guest.esp + (store.value == value::cosine ? 4u : 0u);
        if (floating && store.load_before_pointer && !step(4u, op::fld_m32, source))
            return false;

        // All nine pointer loads are separate. An output may alias the frame.
        auto& pointer = *pointer_registers[static_cast<unsigned>(store.pointer)];
        pointer = read32(guest, site, guest.esp + 0x14u);
        site += 4u;
        const auto destination = pointer + offset;
        const std::uint32_t store_length = offset == 0u ? 2u : 3u;
        if (floating) {
            if ((!store.load_before_pointer && !step(4u, op::fld_m32, source)) ||
                (store.value == value::negative_sine && !step(2u, op::fchs)) ||
                !step(store_length, op::fstp_m32, destination))
                return false;
        } else if (store.value == value::one) {
            write32(guest, site, destination, 0x3f800000u);
            site += store_length + 4u; // MOV r/m32,imm32.
        } else {
            if (store.value == value::clear_eax_and_store) {
                guest.eax = 0u;
                logic_flags(guest, guest.eax);
                site += 2u;
            }
            write32(guest, site, destination, guest.eax);
            site += store_length;
        }
    }
    guest.eax = read32(guest, site, guest.esp + 0x14u);
    guest.esp = bf_guest32_leaf_add(guest, guest.esp, 0x10u);
    bf_guest32_leaf_ret(guest, site + 7u, 8u);
    return true;
}

} // namespace bf_x87_rotation

#endif
