#ifndef BF_XBE_GUEST32_ADVANCE_H
#define BF_XBE_GUEST32_ADVANCE_H

#include "bf_xbe_guest32_record_model.h"

static inline uint32_t bf_guest_advance_cursor(uint32_t slot, uint32_t flag_offset)
{
    uint32_t node = bf_guest_read_u32(slot);
    if (bf_guest_read_u8(node + flag_offset) != 0u)
        return node;

    uint32_t child = bf_guest_read_u32(node + 8u);
    if (bf_guest_read_u8(child + flag_offset) == 0u) {
        node = bf_guest_read_u32(child);
        while (bf_guest_read_u8(node + flag_offset) == 0u) {
            child = node;
            node = bf_guest_read_u32(child);
        }
        bf_guest_write_u32(slot, child);
        return node;  // EAX holds the child that stopped the walk.
    }

    node = bf_guest_read_u32(node + 4u);
    while (bf_guest_read_u8(node + flag_offset) == 0u) {
        // The original reads the slot before the node's +8 DWORD.
        const uint32_t current = bf_guest_read_u32(slot);
        if (current != bf_guest_read_u32(node + 8u))
            break;
        bf_guest_write_u32(slot, node);
        node = bf_guest_read_u32(node + 4u);
    }
    bf_guest_write_u32(slot, node);
    return node;
}

#endif
