#ifndef BF_XBE_GUEST32_RECORD_MOVES_H
#define BF_XBE_GUEST32_RECORD_MOVES_H

#include "bf_xbe_guest32_record_model.h"

// MOV and REP MOVSD both read and write one guest DWORD at a time. Only REP
// uses the direction flag. A bulk memcpy would change overlapping accesses.
static inline void bf_guest_copy_record_dwords(uint32_t source, uint32_t destination,
                                               uint32_t words, uint32_t step)
{
    for (uint32_t i = 0; i < words; ++i) {
        const uint32_t value = bf_guest_read_u32(source);
        bf_guest_write_u32(destination, value);
        source += step;
        destination += step;
    }
}

static inline void bf_guest_copy_rep_dwords_and_bytes(uint32_t source, uint32_t destination,
                                                       uint32_t bytes, bool guest_df)
{
    bf_guest_copy_record_dwords(source, destination, bytes >> 2, guest_df ? 0xfffffffcu : 4u);
    // REP MOVSB begins at the ESI and EDI positions left by REP MOVSD.
    const uint32_t word_bytes = bytes & 0xfffffffcu;
    const uint32_t displacement = guest_df ? 0u - word_bytes : word_bytes;
    source += displacement;
    destination += displacement;
    const uint32_t step = guest_df ? 0xffffffffu : 1u;
    for (uint32_t i = 0; i < (bytes & 3u); ++i) {
        const uint8_t value = bf_guest_read_u8(source);
        bf_guest_write_u8(destination, value);
        source += step;
        destination += step;
    }
}

static inline uint32_t bf_guest_shift_records_forward(uint32_t owner, uint32_t output_slot,
                                                      uint32_t destination, uint32_t source,
                                                      uint32_t words, bool guest_df)
{
    if (destination != source) {
        const uint32_t end = bf_guest_read_u32(owner + 8u);
        const uint32_t stride = words * 4u;
        const uint32_t step = guest_df ? 0xfffffffcu : 4u;
        uint32_t cursor = destination;
        while (source != end) {
            bf_guest_copy_record_dwords(source, cursor, words, step);
            source += stride;
            cursor += stride;
        }
        bf_guest_write_u32(owner + 8u, cursor);
    }
    bf_guest_write_u32(output_slot, destination);
    return output_slot;
}

static inline uint32_t bf_guest_copy_records_forward(uint32_t output_slot, uint32_t first,
                                                     uint32_t last, uint32_t destination,
                                                     uint32_t words)
{
    const uint32_t stride = words * 4u;
    while (first != last) {
        bf_guest_copy_record_dwords(first, destination, words, 4u);
        first += stride;
        destination += stride;
    }
    bf_guest_write_u32(output_slot, destination);
    return output_slot;
}

#endif
