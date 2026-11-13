/* Brute Force original Xbox - ordered guest memory model.
 * Entry: 0x0030dbb0, Ghidra index: 11107, label: FUN_0030dbb0
 * Input x86 body SHA-256: 37EB4291EEE6E188552DBED5919AD976C3E3E41E2D1923A7667CB2E772AEC62E
 * Retail XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Original body: [0x0030dbb0,0x0030dbea), 58 bytes.
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED. This model the result projects observed EAX/ECX/EDX and
 * defined CMP flags. It is not a native Xbox C++ prototype or runtime bridge.
 * Storage meanings remain unresolved; all accesses use guest virtual addresses.
 */
#include "bf_0030dbb0_guest_model.h"

static std::uint32_t bf_0030dbb0_cmp_flags(std::uint32_t left,
                                           std::uint32_t right)
{
    const std::uint32_t difference = left - right;
    std::uint32_t flags = 0;
    std::uint32_t low = difference & UINT32_C(0xff);
    low ^= low >> 4;
    low &= UINT32_C(0xf);
    const bool even_parity = ((UINT32_C(0x6996) >> low) & 1u) == 0u;
    if (left < right) flags |= UINT32_C(0x001); // CF
    if (even_parity) flags |= UINT32_C(0x004); // PF
    if (((left ^ right ^ difference) & UINT32_C(0x10)) != 0u)
        flags |= UINT32_C(0x010); // AF
    if (difference == 0u) flags |= UINT32_C(0x040); // ZF
    if ((difference & UINT32_C(0x80000000)) != 0u)
        flags |= UINT32_C(0x080); // SF
    if (((left ^ right) & (left ^ difference) & UINT32_C(0x80000000)) != 0u)
        flags |= UINT32_C(0x800); // OF
    return flags;
}

/* Retail instruction order and 32-bit effective-address wrap are preserved.
 * Guest read/write faults, flags other than CMP-defined bits, and the actual
 * entry ABI remain outside this pure memory-model contract. */
bf_0030dbb0_guest_result FUN_0030dbb0()
{
    const std::uint32_t old_count = bf_guest_read_u32(UINT32_C(0x0040f0a0));
    const std::uint32_t old_limit = bf_guest_read_u32(UINT32_C(0x0040f0a4));
    const std::uint32_t next_count = old_count + UINT32_C(1);
    const std::uint32_t table_address =
        UINT32_C(0x0040eca0) + old_count * UINT32_C(4);

    bf_guest_write_u32(UINT32_C(0x0040f0a0), next_count);
    bf_guest_write_u32(table_address, UINT32_C(0x003b68b0));
    bf_guest_write_u32(UINT32_C(0x0040e888), old_count);
    bf_guest_write_u32(UINT32_C(0x003b68b4), old_count);
    if (old_limit < UINT32_C(0x20))
        bf_guest_write_u32(UINT32_C(0x0040f0a4), UINT32_C(0x20));

    return {old_count, UINT32_C(0x20), old_limit, UINT32_C(0x8d5),
            bf_0030dbb0_cmp_flags(old_limit, UINT32_C(0x20))};
}
