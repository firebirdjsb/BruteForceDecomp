/* Brute Force original retail Xbox 0x00095cf0: FUN_00095cf0.
 * Input x86 body SHA-256: 0F3538441D49B226ED4E5098C9EA9AE347BC1BAB440FD802FC232EEC307CB8C6
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Explicit host guest_eax and guest_esi represent original live x86
 * registers, NOT recovered Xbox stack parameters or C++ class signatures.
 * Original x86 FLAGS, non-return register outputs, guest memory mapping,
 * native linkage and fault timing remain unimplemented/ABI_UNVERIFIED.
 * Full 75-byte body and ordered x86 memory operations checked privately.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00095cf0(std::uint32_t guest_eax, std::uint32_t guest_esi)
{
    const std::uint32_t base = guest_eax;
    bf_guest_write_u32(base + UINT32_C(0x4), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x28), UINT32_C(0x3f800000));
    bf_guest_write_u32(base + UINT32_C(0x30), UINT32_C(0x3f800000));
    bf_guest_write_u32(base + UINT32_C(0x34), UINT32_C(0x3f800000));
    bf_guest_write_u32(base + UINT32_C(0x8), UINT32_C(0x0));
    bf_guest_write_u8(base + UINT32_C(0x2c), UINT8_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x3c), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x0), UINT32_C(0x3a1548));
    const std::uint32_t link = base + UINT32_C(0x44);
    bf_guest_write_u32(link, UINT32_C(0x003a0f0c));
    bf_guest_write_u32(link + UINT32_C(4), UINT32_C(1));
    bf_guest_write_u32(link + UINT32_C(8), base);
    // Original source read occurs only after the preceding record stores;
    // source and destination may alias in 32-bit guest address space.
    const std::uint32_t next = bf_guest_read_u32(guest_esi + UINT32_C(8));
    bf_guest_write_u32(base + UINT32_C(0x40), next);
    if (next == 0) {
        bf_guest_write_u32(base + UINT32_C(0x40), link);
    } else {
        const std::uint32_t predecessor = bf_guest_read_u32(guest_esi + UINT32_C(0xc));
        bf_guest_write_u32(predecessor, link);
    }
    return base;
}
