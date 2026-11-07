/* Brute Force original retail Xbox 0x000a3b10: FUN_000a3b10.
 * Input x86 body SHA-256: 01FF57616C921F70EAF7BEBEEF8214CAF60507F7683C4B566EAB18B397E63417
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Explicit host guest_eax and guest_edi represent original live x86
 * registers, NOT recovered Xbox stack parameters or C++ class signatures.
 * Original x86 FLAGS, non-return register outputs, guest memory mapping,
 * native linkage and fault timing remain unimplemented/ABI_UNVERIFIED.
 * Full 71-byte body and ordered x86 memory operations checked privately.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_000a3b10(std::uint32_t guest_eax, std::uint32_t guest_edi)
{
    const std::uint32_t base = guest_eax;
    bf_guest_write_u32(base + UINT32_C(0x4), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x8), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x1c), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x20), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x24), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x28), UINT32_C(0x3a83126f));
    bf_guest_write_u32(base + UINT32_C(0x0), UINT32_C(0x3a0900));
    const std::uint32_t link = base + UINT32_C(0x30);
    bf_guest_write_u32(link, UINT32_C(0x003a0f0c));
    bf_guest_write_u32(link + UINT32_C(4), UINT32_C(1));
    bf_guest_write_u32(link + UINT32_C(8), base);
    // Original source read occurs only after the preceding record stores;
    // source and destination may alias in 32-bit guest address space.
    const std::uint32_t next = bf_guest_read_u32(guest_edi + UINT32_C(8));
    bf_guest_write_u32(base + UINT32_C(0x2c), next);
    if (next == 0) {
        bf_guest_write_u32(base + UINT32_C(0x2c), link);
    } else {
        const std::uint32_t predecessor = bf_guest_read_u32(guest_edi + UINT32_C(0xc));
        bf_guest_write_u32(predecessor, link);
    }
    return base;
}
