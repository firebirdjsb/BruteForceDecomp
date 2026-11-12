/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: A9EC0C1FC615516A69739599CF1B4332D3BA0A413A855C07F7D12F60E627FD52
 * Entry: 0x00315f72, Ghidra index: 12124, label: FUN_00315f72
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_audio_links.h"

uint32_t FUN_00315f72(uint32_t guest_ecx, uint32_t node)
{
    if ((bf_guest_read_u8(node + 8u) & 2u) != 0)
        return 1u;  // Both paths reach XOR EAX,EAX; INC EAX.

    const uint32_t head = guest_ecx + 0x6e8u;
    bf_guest_write_u32(node, head);
    const uint32_t previous = bf_guest_read_u32(head + 4u);
    bf_guest_write_u32(node + 4u, previous);
    bf_guest_write_u32(previous, node);
    const uint32_t head_after_store = bf_guest_read_u32(node);
    bf_guest_write_u32(head_after_store + 4u, node);
    return 1u;
}
