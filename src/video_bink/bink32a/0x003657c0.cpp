/* Brute Force original Xbox - ordered guest memory model.
 * Entry: 0x003657c0, Ghidra index: 13244, label: FUN_003657c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED.
 * Retail XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Original contiguous body: 0x003657c0..0x00365885 (197 bytes).
 * Input x86 body SHA-256: 224E44A484547C6616FD6BCBFD491FDC9BD163CAC8159353DED61359B46F08DA
 * Guest-memory effects and observed EAX return only. Native Xbox ABI, decoder
 * meaning, host pointer mapping, fault behavior, and other CPU state are unknown.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_003657c0(std::uint32_t guest_arg1,
                                     std::uint32_t guest_arg2)
{
    std::uint32_t remaining = guest_arg1;
    do {
        std::uint32_t index_pointer = bf_guest_read_u32(UINT32_C(0x004be768));
        std::uint32_t index = bf_guest_read_u8(index_pointer);
        std::uint32_t high_pointer = bf_guest_read_u32(UINT32_C(0x004be778));
        std::uint32_t high_byte = bf_guest_read_u8(high_pointer);
        std::uint32_t table_value =
            bf_guest_read_u32(UINT32_C(0x004be360) + index * UINT32_C(4));
        std::uint32_t value = table_value | (high_byte << 24);
        ++high_pointer;
        ++index_pointer;
        bf_guest_write_u32(UINT32_C(0x004be768), index_pointer);
        std::uint32_t output_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        bf_guest_write_u32(UINT32_C(0x004be778), high_pointer);
        bf_guest_write_u32(output_pointer, value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        const std::uint32_t plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u32(plane_base + output_pointer, value);

        index_pointer = bf_guest_read_u32(UINT32_C(0x004be76c));
        index = bf_guest_read_u8(index_pointer);
        high_pointer = bf_guest_read_u32(UINT32_C(0x004be77c));
        high_byte = bf_guest_read_u8(high_pointer);
        table_value = bf_guest_read_u32(UINT32_C(0x004be360) + index * UINT32_C(4));
        value = table_value | (high_byte << 24);
        ++high_pointer;
        ++index_pointer;
        bf_guest_write_u32(UINT32_C(0x004be76c), index_pointer);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be764));
        bf_guest_write_u32(UINT32_C(0x004be77c), high_pointer);
        bf_guest_write_u32(output_pointer, value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be764));
        const std::uint32_t second_plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u32(output_pointer + second_plane_base, value);

        const std::uint32_t next_first_output =
            bf_guest_read_u32(UINT32_C(0x004be760)) + UINT32_C(4);
        const std::uint32_t next_second_output =
            bf_guest_read_u32(UINT32_C(0x004be764)) + UINT32_C(4);
        --remaining;
        bf_guest_write_u32(UINT32_C(0x004be760), next_first_output);
        bf_guest_write_u32(UINT32_C(0x004be764), next_second_output);
    } while (remaining != 0u);

    return guest_arg1 + guest_arg2;
}
