/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: FCDFDCC9314FF91F389600A02A15149F83B1952F38562B06124D348F004F54C1
 * Entry: 0x0031aa11, Ghidra index: 12268, label: FUN_0031aa11
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_audio_links.h"

uint32_t FUN_0031aa11(uint32_t node, uint32_t first_word, uint32_t second_word, uint32_t head)
{
    const uint32_t next = bf_guest_read_u32(head);
    bf_guest_write_u32(node + 4u, head);
    bf_guest_write_u32(node, next);
    bf_guest_write_u32(next + 4u, node);
    const uint32_t head_after_store = bf_guest_read_u32(node + 4u);
    bf_guest_write_u32(head_after_store, node);
    (void)bf_guest_read_u32(node + 0x0cu);  // Two separate DWORD AND stores.
    bf_guest_write_u32(node + 0x0cu, 0u);
    (void)bf_guest_read_u32(node + 0x10u);
    bf_guest_write_u32(node + 0x10u, 0u);
    // The MOV CX instructions consume only the low stack words.
    bf_guest_write_u16(node + 8u, static_cast<uint16_t>(first_word));
    bf_guest_write_u16(node + 0x0au, static_cast<uint16_t>(second_word));
    return node;  // EAX survives the stack cleanup.
}
