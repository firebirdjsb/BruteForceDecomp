/* Brute Force original Xbox - guest WORD pixel-loop model.
 * Entry: 0x00368150, Ghidra index: 13258, label: FUN_00368150
 * Retail XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Original contiguous body: 0x00368150..0x003681d9 (137 bytes).
 * Original body SHA-256: 646000A07998377A6C5DF4A81758A758FD504B8FB7ECD718CE4A56E17E9B7B92
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Guest memory and EAX projection only; no native Xbox prototype is asserted.
 * Saved-register stack writes, stack aliasing, faults, and flags are unmodeled.
 */
#include "bf_xbe_guest32_word_model.h"

std::uint32_t FUN_00368150(std::uint32_t guest_entry_eax,
                           std::uint32_t guest_arg1,
                           std::uint32_t guest_arg2)
{
    (void)guest_arg1;
    std::uint32_t remaining = guest_arg2;
    std::uint32_t eax = guest_entry_eax;
    while (remaining != 0u) {
        const std::uint32_t high_index_pointer = bf_guest_read_u32(UINT32_C(0x004be778));
        const std::uint32_t high_index = bf_guest_read_u8(high_index_pointer);
        const std::uint32_t index_pointer = bf_guest_read_u32(UINT32_C(0x004be768));
        const std::uint32_t index = bf_guest_read_u8(index_pointer);
        const std::uint16_t high_word = bf_guest_read_u16(
            UINT32_C(0x004b6ac0) + high_index * UINT32_C(4));
        const std::uint16_t index_word = bf_guest_read_u16(
            UINT32_C(0x004bdb60) + index * UINT32_C(4));
        const std::uint16_t value = static_cast<std::uint16_t>(high_word | index_word);
        eax = value;

        bf_guest_write_u32(UINT32_C(0x004be778), high_index_pointer + UINT32_C(1));
        const std::uint32_t first_output = bf_guest_read_u32(UINT32_C(0x004be760));
        bf_guest_write_u32(UINT32_C(0x004be768), index_pointer + UINT32_C(1));
        bf_guest_write_u16(first_output, value);
        const std::uint32_t duplicate_output = bf_guest_read_u32(UINT32_C(0x004be760));
        bf_guest_write_u16(duplicate_output + UINT32_C(2), value);
        const std::uint32_t plane_output = bf_guest_read_u32(UINT32_C(0x004be760));
        const std::uint32_t plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(plane_base + plane_output, value);
        const std::uint32_t second_plane_output = bf_guest_read_u32(UINT32_C(0x004be760));
        const std::uint32_t second_plane_base = bf_guest_read_u32(UINT32_C(0x004be7a4));
        bf_guest_write_u16(second_plane_base + UINT32_C(2) + second_plane_output, value);
        const std::uint32_t next_output =
            bf_guest_read_u32(UINT32_C(0x004be760)) + UINT32_C(4);
        --remaining;
        bf_guest_write_u32(UINT32_C(0x004be760), next_output);
    }
    return eax;
}
