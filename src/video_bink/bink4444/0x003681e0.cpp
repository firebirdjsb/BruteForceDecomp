/* Brute Force original Xbox - guest WORD pixel-loop model.
 * Entry: 0x003681e0, Ghidra index: 13259, label: FUN_003681e0
 * Retail XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Original contiguous body: 0x003681e0..0x003682e6 (262 bytes).
 * Original body SHA-256: 79F6F5D99AA4FE77B68C2AD0A3452103F493EABBA60A2762DCF804FFE0BC2A76
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Guest memory and EAX return only; ABI, decoder meaning, fault behavior, flags,
 * saved-register stack writes and stack-alias effects remain unmodeled.
 */
#include "bf_xbe_guest32_word_model.h"

std::uint32_t FUN_003681e0(std::uint32_t guest_arg1, std::uint32_t guest_arg2)
{
    std::uint32_t remaining = guest_arg1;
    do {
        std::uint32_t high_index_pointer = bf_guest_read_u32(UINT32_C(0x004be778));
        std::uint32_t high_index = bf_guest_read_u8(high_index_pointer);
        std::uint32_t index_pointer = bf_guest_read_u32(UINT32_C(0x004be768));
        std::uint32_t index = bf_guest_read_u8(index_pointer);
        std::uint16_t high_word = bf_guest_read_u16(
            UINT32_C(0x004b6ac0) + high_index * UINT32_C(4));
        std::uint16_t index_word = bf_guest_read_u16(
            UINT32_C(0x004bdb60) + index * UINT32_C(4));
        std::uint16_t value = static_cast<std::uint16_t>(high_word | index_word);

        bf_guest_write_u32(UINT32_C(0x004be778), high_index_pointer + UINT32_C(1));
        std::uint32_t output_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        bf_guest_write_u32(UINT32_C(0x004be768), index_pointer + UINT32_C(1));
        bf_guest_write_u16(output_pointer, value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        bf_guest_write_u16(output_pointer + UINT32_C(2), value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        std::uint32_t plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(plane_base + output_pointer, value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be760));
        plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(plane_base + UINT32_C(2) + output_pointer, value);

        high_index_pointer = bf_guest_read_u32(UINT32_C(0x004be77c));
        high_index = bf_guest_read_u8(high_index_pointer);
        index_pointer = bf_guest_read_u32(UINT32_C(0x004be76c));
        index = bf_guest_read_u8(index_pointer);
        high_word = bf_guest_read_u16(UINT32_C(0x004b6ac0) + high_index * UINT32_C(4));
        index_word = bf_guest_read_u16(UINT32_C(0x004bdb60) + index * UINT32_C(4));
        value = static_cast<std::uint16_t>(high_word | index_word);
        bf_guest_write_u32(UINT32_C(0x004be77c), high_index_pointer + UINT32_C(1));
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be764));
        bf_guest_write_u32(UINT32_C(0x004be76c), index_pointer + UINT32_C(1));
        bf_guest_write_u16(output_pointer, value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be764));
        bf_guest_write_u16(output_pointer + UINT32_C(2), value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be764));
        plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(output_pointer + plane_base, value);
        output_pointer = bf_guest_read_u32(UINT32_C(0x004be764));
        plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(output_pointer + plane_base + UINT32_C(2), value);

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
