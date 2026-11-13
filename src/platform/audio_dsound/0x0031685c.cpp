/* Brute Force original Xbox - bounded guest32 memory model.
 * Input x86 body SHA-256: AA30EE6943B1C1C966487F29B937976B5B0BDFBCEDC3F4EB1F51AFE8A2A31237
 * Entry: 0x0031685c, Ghidra index: 12151, label: CMcpxStream_GetStatus
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Inputs are captured ECX and [ESP+4]; return EAX and RET 4 are preserved.
 */
#include "bf_xbe_guest32_audio_xnet_leaves.h"

uint32_t DSOUND__CMcpxStream_GetStatus(uint32_t guest_ecx,
                                      uint32_t stack_arg_0)
{
    const uint16_t flags = bf_guest_read_u16(guest_ecx + 0x12u);
    const uint32_t link_head = guest_ecx + 0xb8u;
    const uint32_t linked = bf_guest_read_u32(link_head) != link_head ? 1u : 0u;
    bf_guest_write_u32(stack_arg_0, linked);

    if ((flags & 0x2000u) != 0) {
        const uint32_t status_byte = stack_arg_0 + 2u;
        const uint8_t old_status = bf_guest_read_u8(status_byte);
        bf_guest_write_u8(status_byte, static_cast<uint8_t>(old_status | 8u));
    }

    if ((flags & 3u) == 3u) {
        if ((flags & 0x444u) != 0) {
            const uint32_t status_byte = stack_arg_0 + 2u;
            const uint8_t old_status = bf_guest_read_u8(status_byte);
            bf_guest_write_u8(status_byte, static_cast<uint8_t>(old_status | 2u));
            if ((flags & 0x400u) == 0)
                return 0u;

            const uint32_t old_output = bf_guest_read_u32(stack_arg_0);
            bf_guest_write_u32(stack_arg_0, old_output | 0x40000u);
            return 0u;
        }
    } else if ((flags & 0x8001u) != 0x8001u) {
        return 0u;
    }

    const uint32_t status_byte = stack_arg_0 + 2u;
    const uint8_t old_status = bf_guest_read_u8(status_byte);
    bf_guest_write_u8(status_byte, static_cast<uint8_t>(old_status | 1u));
    return 0u;
}
