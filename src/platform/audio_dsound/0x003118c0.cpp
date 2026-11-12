/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 90DBA64871E25A845AE25349F2CCDD4DC596472F64E8758A2C9E6FAFE315F379
 * Entry: 0x003118c0, Ghidra index: 11896, label: FUN_003118c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_audio_links.h"

uint32_t FUN_003118c0(uint32_t node)
{
    const uint32_t next = bf_guest_read_u32(node);
    if (next != node) {
        const uint32_t previous = bf_guest_read_u32(node + 4u);
        bf_guest_write_u32(next + 4u, previous);
        // The original reloads both links after the first store.
        const uint32_t previous_after_store = bf_guest_read_u32(node + 4u);
        const uint32_t next_after_store = bf_guest_read_u32(node);
        bf_guest_write_u32(previous_after_store, next_after_store);
        bf_guest_write_u32(node + 4u, node);
        bf_guest_write_u32(node, node);
    }
    return node;  // EAX is the input node on both paths to RET 4.
}
