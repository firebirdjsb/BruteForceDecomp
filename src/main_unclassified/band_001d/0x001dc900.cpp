/* Brute Force original Xbox - guest forward copy with stack.
 * Input x86 body SHA-256: 99F40E802EF678971CF8BD63145C7234E04613C740C852FFD035DA3E80242BCE
 * Entry: 0x001dc900, Ghidra index: 6563, label: FUN_001dc900
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Models guest stack, general registers and arithmetic flags through RET.
 * The guest backend controls mapped memory, access faults and dispatch.
 */
#include "bf_xbe_guest32_forward_stack_copy.h"

void FUN_001dc900(bf_guest32_forward_stack_copy_state& guest)
{
    const std::uint32_t entry = 0x001dc900u;
    auto read = [&](std::uint32_t offset, std::uint32_t address) {
        guest.eip = entry + offset;
        return bf_guest_read_u32(address);
    };
    auto push = [&](std::uint32_t offset, std::uint32_t value) {
        guest.eip = entry + offset;
        bf_guest_write_u32(guest.esp - 4u, value);
        guest.esp -= 4u;
    };

    push(0x00u, guest.ecx);
    guest.eax = read(0x01u, guest.esp);
    guest.ecx = read(0x05u, guest.esp + 12u); // Last from entry ESP+8.
    guest.edx = read(0x09u, guest.esp + 8u);  // First from entry ESP+4.
    push(0x0du, guest.eax);
    guest.eax = read(0x0eu, guest.esp + 20u); // Destination from entry ESP+12.
    push(0x12u, guest.ecx);
    push(0x13u, guest.edx);
    const std::uint32_t continuation = entry + 0x19u;
    push(0x14u, continuation);
    FUN_001d69d0(guest);
    if (guest.eip != continuation)
        return; // A write may have replaced the callee return address.

    const std::uint32_t esp = guest.esp;
    guest.esp += 16u; // ADD ESP,16 before the caller's RET.
    const std::uint32_t flags = bf_guest32_tail_szp(guest.esp) |
        (guest.esp < esp ? 0x001u : 0u) |
        (((esp ^ 16u ^ guest.esp) & 0x10u) != 0u ? 0x010u : 0u) |
        (((~(esp ^ 16u) & (esp ^ guest.esp)) & 0x80000000u) != 0u ? 0x800u : 0u);
    guest.eflags = (guest.eflags & ~0x8d5u) | flags;
    guest.eflags_defined |= 0x8d5u;
    guest.eip = read(0x1cu, guest.esp);
    guest.esp += 4u;
}
