/* Brute Force original retail Xbox 0x000a34a0: FUN_000a34a0.
 * Input x86 body SHA-256: C2667195FDC354335126E8C56BFF69617C0041709AD52E3AFDC46DA99D7C5544
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Explicit host guest_eax and guest_edi represent original live x86
 * registers, NOT recovered Xbox stack parameters or C++ class signatures.
 * Original x86 FLAGS, non-return register outputs, guest memory mapping,
 * native linkage and fault timing remain unimplemented/ABI_UNVERIFIED.
 * Full 61-byte body and ordered x86 memory operations checked privately.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_000a34a0(std::uint32_t guest_eax, std::uint32_t guest_edi)
{
    const std::uint32_t base = guest_eax;
    bf_guest_write_u32(base + UINT32_C(0x4), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x8), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0xc), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x10), UINT32_C(0x0));
    bf_guest_write_u32(base + UINT32_C(0x0), UINT32_C(0x3a09a8));
    const std::uint32_t link = base + UINT32_C(0x1c);
    bf_guest_write_u32(link, UINT32_C(0x003a0f0c));
    bf_guest_write_u32(link + UINT32_C(4), UINT32_C(1));
    bf_guest_write_u32(link + UINT32_C(8), base);
    // Original source read occurs only after the preceding record stores;
    // source and destination may alias in 32-bit guest address space.
    const std::uint32_t next = bf_guest_read_u32(guest_edi + UINT32_C(8));
    bf_guest_write_u32(base + UINT32_C(0x18), next);
    if (next == 0) {
        bf_guest_write_u32(base + UINT32_C(0x18), link);
    } else {
        const std::uint32_t predecessor = bf_guest_read_u32(guest_edi + UINT32_C(0xc));
        bf_guest_write_u32(predecessor, link);
    }
    return base;
}
