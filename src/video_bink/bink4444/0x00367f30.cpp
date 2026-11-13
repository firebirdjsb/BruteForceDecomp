/* Brute Force original Xbox - guest WORD pixel-loop model.
 * Entry: 0x00367f30, Ghidra index: 13255, label: FUN_00367f30
 * Retail XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Original contiguous body: 0x00367f30..0x00368001 (209 bytes).
 * Original body SHA-256: 99C6AA4245B889E3C442A438171612AA2A4A3718A6E41FFD6C201C0EEF65453C
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Guest memory and EAX return only; ABI, decoder meaning, fault behavior, flags,
 * saved-register stack writes and stack-alias effects remain unmodeled.
 */
#include "bf_xbe_guest32_word_model.h"

std::uint32_t FUN_00367f30(std::uint32_t guest_arg1, std::uint32_t guest_arg2)
{
    std::uint32_t remaining = guest_arg1;
    do {
        const std::uint32_t high_index_pointer = bf_guest_read_u32(UINT32_C(0x004be778));
        const std::uint32_t high_index = bf_guest_read_u8(high_index_pointer);
        const std::uint32_t index_pointer = bf_guest_read_u32(UINT32_C(0x004be768));
        const std::uint32_t index = bf_guest_read_u8(index_pointer);
        const std::uint16_t high_word = bf_guest_read_u16(
            UINT32_C(0x004b6ac0) + high_index * UINT32_C(4));
        const std::uint16_t index_word = bf_guest_read_u16(
            UINT32_C(0x004bdb60) + index * UINT32_C(4));
        const std::uint16_t first_value = static_cast<std::uint16_t>(high_word | index_word);

        bf_guest_write_u32(UINT32_C(0x004be778), high_index_pointer + UINT32_C(1));
        const std::uint32_t first_output = bf_guest_read_u32(UINT32_C(0x004be760));
        bf_guest_write_u32(UINT32_C(0x004be768), index_pointer + UINT32_C(1));
        bf_guest_write_u16(first_output, first_value);
        const std::uint32_t first_plane_output = bf_guest_read_u32(UINT32_C(0x004be760));
        const std::uint32_t first_plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(first_plane_base + first_plane_output, first_value);

        const std::uint32_t second_high_pointer = bf_guest_read_u32(UINT32_C(0x004be77c));
        const std::uint32_t second_high_index = bf_guest_read_u8(second_high_pointer);
        const std::uint32_t second_index_pointer = bf_guest_read_u32(UINT32_C(0x004be76c));
        const std::uint32_t second_index = bf_guest_read_u8(second_index_pointer);
        const std::uint16_t second_high_word = bf_guest_read_u16(
            UINT32_C(0x004b6ac0) + second_high_index * UINT32_C(4));
        const std::uint16_t second_index_word = bf_guest_read_u16(
            UINT32_C(0x004bdb60) + second_index * UINT32_C(4));
        const std::uint16_t second_value =
            static_cast<std::uint16_t>(second_high_word | second_index_word);

        bf_guest_write_u32(UINT32_C(0x004be77c), second_high_pointer + UINT32_C(1));
        const std::uint32_t second_output = bf_guest_read_u32(UINT32_C(0x004be764));
        bf_guest_write_u32(UINT32_C(0x004be76c), second_index_pointer + UINT32_C(1));
        bf_guest_write_u16(second_output, second_value);
        const std::uint32_t second_plane_output = bf_guest_read_u32(UINT32_C(0x004be764));
        const std::uint32_t second_plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(second_plane_output + second_plane_base, second_value);

        const std::uint32_t next_first_output =
            bf_guest_read_u32(UINT32_C(0x004be760)) + UINT32_C(2);
        const std::uint32_t next_second_output =
            bf_guest_read_u32(UINT32_C(0x004be764)) + UINT32_C(2);
        --remaining;
        bf_guest_write_u32(UINT32_C(0x004be760), next_first_output);
        bf_guest_write_u32(UINT32_C(0x004be764), next_second_output);
    } while (remaining != 0u);

    return guest_arg1 + guest_arg2;
}
