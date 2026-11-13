#ifndef BF_XBE_GUEST32_STACK_COPY_H
#define BF_XBE_GUEST32_STACK_COPY_H

#include "bf_xbe_guest32_tail_writes.h"

struct bf_guest32_stack_copy_state : bf_guest32_tail_write_state {
    std::uint32_t esi, edi;
};

struct bf_guest32_stack_copy_offsets {
    std::uint32_t spill_second_word;
    std::uint32_t read_second_word;
    std::uint32_t restore_edi;
    std::uint32_t empty_case;
};

inline void bf_guest32_stack_copy_cmp(bf_guest32_stack_copy_state& guest,
                                     std::uint32_t left, std::uint32_t right)
{
    const std::uint32_t difference = left - right;
    const std::uint32_t flags = bf_guest32_tail_szp(difference) |
        (left < right ? 0x001u : 0u) |
        (((left ^ right ^ difference) & 0x10u) != 0u ? 0x010u : 0u) |
        (((left ^ right) & (left ^ difference) & 0x80000000u) != 0u ? 0x800u : 0u);
    guest.eflags = (guest.eflags & ~0x8d5u) | flags;
    guest.eflags_defined |= 0x8d5u;
}

inline void bf_guest32_stack_copy(bf_guest32_stack_copy_state& guest, std::uint32_t entry,
                                 std::uint32_t stride, std::uint32_t preload,
                                 bf_guest32_stack_copy_offsets offsets)
{
    auto read = [&](std::uint32_t pc, std::uint32_t address) {
        guest.eip = entry + pc;
        return bf_guest_read_u32(address);
    };
    auto write = [&](std::uint32_t pc, std::uint32_t address, std::uint32_t value) {
        guest.eip = entry + pc;
        bf_guest_write_u32(address, value);
    };
    auto push = [&](std::uint32_t pc, std::uint32_t value) {
        write(pc, guest.esp - 4u, value);
        guest.esp -= 4u;
    };
    auto pop = [&](std::uint32_t pc) {
        const std::uint32_t value = read(pc, guest.esp);
        guest.esp += 4u;
        return value;
    };

    guest.ecx = read(0u, guest.esp + 8u);
    push(4u, guest.esi);
    guest.esi = read(5u, guest.esp + 8u);
    bf_guest32_stack_copy_cmp(guest, guest.esi, guest.ecx);
    if (guest.esi == guest.ecx) {
        guest.ecx = read(offsets.empty_case, guest.esp + 16u);
        write(offsets.empty_case + 4u, guest.eax, guest.ecx);
        guest.esi = pop(offsets.empty_case + 6u);
        guest.eip = pop(offsets.empty_case + 7u);
        return;
    }

    guest.edx = read(0xdu, guest.esp + 16u);
    push(0x11u, guest.edi);
    do {
        // The original stages high DWORDs in the incoming stack slots.
        // Re-read each slot after the intervening output store, since it may alias.
        guest.edi = read(0x12u, guest.ecx - preload);
        guest.ecx -= stride;
        write(0x18u, guest.esp + (stride == 12u ? 12u : 16u), guest.edi);
        if (stride != 12u) {
            guest.edi = read(0x1cu, guest.ecx + 8u);
            write(0x1fu, guest.esp + 12u, guest.edi);
        }
        guest.edi = read(offsets.read_second_word, guest.ecx + 4u);
        guest.edx -= stride;
        bf_guest32_stack_copy_cmp(guest, guest.ecx, guest.esi);
        const std::uint32_t spill = offsets.spill_second_word;
        write(spill, guest.esp + 20u, guest.edi);
        guest.edi = read(spill + 4u, guest.ecx);
        write(spill + 6u, guest.edx, guest.edi);
        guest.edi = read(spill + 8u, guest.esp + 20u);
        write(spill + 12u, guest.edx + 4u, guest.edi);
        guest.edi = read(spill + 15u, guest.esp + 12u);
        write(spill + 19u, guest.edx + 8u, guest.edi);
        if (stride != 12u) {
            guest.edi = read(spill + 22u, guest.esp + 16u);
            write(spill + 26u, guest.edx + 12u, guest.edi);
        }
        if (stride == 20u) {
            guest.edi = read(spill + 29u, guest.ecx + 16u);
            write(spill + 32u, guest.edx + 16u, guest.edi);
        }
    } while (guest.ecx != guest.esi);

    guest.edi = pop(offsets.restore_edi);
    write(offsets.restore_edi + 1u, guest.eax, guest.edx);
    guest.esi = pop(offsets.restore_edi + 3u);
    guest.eip = pop(offsets.restore_edi + 4u);
}

void FUN_00053ca0(bf_guest32_stack_copy_state& guest);
void FUN_0028e3d0(bf_guest32_stack_copy_state& guest);
void FUN_0016dea0(bf_guest32_stack_copy_state& guest);

#endif
