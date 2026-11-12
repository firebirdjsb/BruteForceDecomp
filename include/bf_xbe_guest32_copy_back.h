#ifndef BF_XBE_GUEST32_COPY_BACK_H
#define BF_XBE_GUEST32_COPY_BACK_H

#include "bf_xbe_guest32_record_moves.h"

// The outer loop moves backward by one record. The inner walk preserves the
// original order of each DWORD read and write, even when the records overlap.
// For REP MOVSD the caller supplies the original DF. Explicit MOV sequences
// visit increasing offsets regardless of DF. Addresses wrap modulo 2^32.
static inline uint32_t bf_guest_copy_back_dwords(uint32_t result, uint32_t first,
                                                uint32_t last, uint32_t destination_end,
                                                uint32_t words, bool direction_down)
{
    const uint32_t record_bytes = words * 4u;
    const uint32_t step = direction_down ? 0xfffffffcu : 4u;
    while (last != first) {
        last -= record_bytes;
        destination_end -= record_bytes;
        bf_guest_copy_record_dwords(last, destination_end, words, step);
    }
    bf_guest_write_u32(result, destination_end);
    return result;
}

#endif
