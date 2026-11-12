/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 9B98D09132EF469E6BE5F4287FA887863C5FCF47A86BFBFAF554CFA690020585
 * Entry: 0x0031aa47, Ghidra index: 12269, label: FUN_0031aa47
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_audio_links.h"

uint32_t FUN_0031aa47(uint32_t node, uint32_t value, uint32_t head)
{
    const uint32_t next = bf_guest_read_u32(head);
    bf_guest_write_u32(node + 4u, head);
    bf_guest_write_u32(node, next);
    bf_guest_write_u32(next + 4u, node);
    const uint32_t head_after_store = bf_guest_read_u32(node + 4u);
    bf_guest_write_u32(head_after_store, node);
    (void)bf_guest_read_u32(node + 0x0cu);  // AND memory,0 reads then writes.
    bf_guest_write_u32(node + 0x0cu, 0u);
    bf_guest_write_u32(node + 8u, value);
    return node;  // EAX survives the stack cleanup.
}
