/* Brute Force original Xbox - guest forward copy with stack.
 * Input x86 body SHA-256: DD041D32D8D0107AABA701FE848C765E1594DCB88D5BB6C1A9D76DFFC95343F5
 * Entry: 0x001d69d0, Ghidra index: 6369, label: FUN_001d69d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models guest stack, general registers and arithmetic flags through RET.
 * The guest backend controls mapped memory, access faults and dispatch.
 */
#include "bf_xbe_guest32_forward_stack_copy.h"

void FUN_001d69d0(bf_guest32_forward_stack_copy_state& guest)
{
    const std::uint32_t entry = 0x001d69d0u;
    auto read = [&](std::uint32_t offset, std::uint32_t address) {
        guest.eip = entry + offset;
        return bf_guest_read_u32(address);
    };
    auto write = [&](std::uint32_t offset, std::uint32_t address, std::uint32_t value) {
        guest.eip = entry + offset;
        bf_guest_write_u32(address, value);
    };
    auto push = [&](std::uint32_t offset, std::uint32_t value) {
        write(offset, guest.esp - 4u, value);
        guest.esp -= 4u;
    };
    auto pop = [&](std::uint32_t offset) {
        const std::uint32_t value = read(offset, guest.esp);
        guest.esp += 4u;
        return value;
    };

    push(0x00u, guest.esi);
    guest.esi = read(0x01u, guest.esp + 8u);  // First incoming stack word.
    push(0x05u, guest.edi);
    guest.edi = read(0x06u, guest.esp + 16u);  // Second incoming stack word.
    bf_guest32_stack_copy_cmp(guest, guest.esi, guest.edi);
    if (guest.esi != guest.edi) {
        guest.ecx = guest.eax + 12u;
        guest.edx = guest.esi + 8u;
        push(0x14u, guest.ebx);
        do {
            guest.ebx = read(0x15u, guest.esi);
            write(0x17u, guest.eax, guest.ebx);
            // Stage the source DWORDs at +12 and +8 in the incoming argument
            // slots and reload them after the intervening destination store.
            guest.ebx = read(0x19u, guest.edx + 4u);
            write(0x1cu, guest.esp + 20u, guest.ebx);
            guest.ebx = read(0x20u, guest.edx);
            write(0x22u, guest.esp + 16u, guest.ebx);
            guest.ebx = read(0x26u, guest.edx - 4u);
            write(0x29u, guest.ecx - 8u, guest.ebx);
            guest.ebx = read(0x2cu, guest.esp + 16u);
            write(0x30u, guest.ecx - 4u, guest.ebx);
            guest.ebx = read(0x33u, guest.esp + 20u);
            write(0x37u, guest.ecx, guest.ebx);
            guest.ebx = read(0x39u, guest.edx + 8u);
            write(0x3cu, guest.ecx + 4u, guest.ebx);
            guest.ebx = read(0x3fu, guest.edx + 12u);
            write(0x42u, guest.ecx + 8u, guest.ebx);
            guest.esi += 24u;
            guest.eax += 24u;
            guest.ecx += 24u;
            guest.edx += 24u;
            bf_guest32_stack_copy_cmp(guest, guest.esi, guest.edi);
        } while (guest.esi != guest.edi);
        guest.ebx = pop(0x55u);
    }
    guest.edi = pop(0x56u);
    guest.esi = pop(0x57u);
    guest.eip = pop(0x58u);
}
