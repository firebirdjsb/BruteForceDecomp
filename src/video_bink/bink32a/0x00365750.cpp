/* Brute Force original Xbox - ordered guest memory model.
 * Entry: 0x00365750, Ghidra index: 13243, label: FUN_00365750
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED.
 * Retail XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Original contiguous body: 0x00365750..0x003657B8 (104 bytes).
 * Input x86 body SHA-256: 8B7F6591211015ADDA36EC1ED43993483A835354893EBFBC5134BB5F301DFE61
 * Guest-memory effects only. This model does not establish an Xbox C++ ABI,
 * decoder meaning, host pointer mapping, fault behavior, or full CPU state.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_00365750(std::uint32_t entry_eax, std::uint32_t count)
{
    std::uint32_t remaining = count;
    std::uint32_t eax = entry_eax;
    if (remaining == 0u) return eax;

    do {
        const std::uint32_t index_pointer = bf_guest_read_u32(UINT32_C(0x004be768));
        const std::uint32_t index = bf_guest_read_u8(index_pointer);
        const std::uint32_t high_pointer = bf_guest_read_u32(UINT32_C(0x004be778));
        const std::uint32_t high_byte = bf_guest_read_u8(high_pointer);
        const std::uint32_t table_value =
            bf_guest_read_u32(UINT32_C(0x004be360) + index * UINT32_C(4));
        const std::uint32_t value = table_value | (high_byte << 24);
        eax = value;
        const std::uint32_t next_index_pointer = index_pointer + UINT32_C(1);
        const std::uint32_t next_high_pointer = high_pointer + UINT32_C(1);

        bf_guest_write_u32(UINT32_C(0x004be768), next_index_pointer);
        const std::uint32_t output_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        bf_guest_write_u32(UINT32_C(0x004be778), next_high_pointer);
        bf_guest_write_u32(output_pointer, value);
        const std::uint32_t plane_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        const std::uint32_t plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u32(plane_base + plane_pointer, value);
        const std::uint32_t next_output_pointer =
            bf_guest_read_u32(UINT32_C(0x004be760)) + UINT32_C(4);
        bf_guest_write_u32(UINT32_C(0x004be760), next_output_pointer);
        --remaining;
    } while (remaining != 0u);
    return eax;
}
