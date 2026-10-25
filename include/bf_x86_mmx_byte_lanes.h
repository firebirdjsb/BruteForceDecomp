/* The x86 MMX instruction sequence MOVD mm,[u32]; PXOR zero,zero;
 * PUNPCKLBW mm,zero yields four zero-extended 16-bit lanes.
 * This is a storage-lane model for faithful C11 syntax reconstruction,
 * NOT an MMX state/emulation or native Bink implementation.
 */
#ifndef BF_X86_MMX_BYTE_LANES_H
#define BF_X86_MMX_BYTE_LANES_H
#include <stdint.h>
static inline uint64_t bf_x86_unpack_u32_bytes_to_u16_lanes(uint32_t word)
{
    return ((uint64_t)(word & UINT32_C(0xff))) |
           ((uint64_t)((word >> 8) & UINT32_C(0xff)) << 16) |
           ((uint64_t)((word >> 16) & UINT32_C(0xff)) << 32) |
           ((uint64_t)((word >> 24) & UINT32_C(0xff)) << 48);
}
/* XBE Bink4444: MOVD mm6,[guest DWORD]; PUNPCKLBW mm6,mm0;
 * PSRLW mm6,4; PSLLW mm6,12. This produces the top nibble of
 * each of four input bytes in its corresponding 16-bit lane.
 * Shifts act on independent 16-bit MMX lanes (not whole uint64_t).
 */
static inline uint64_t bf_x86_mmx_top_nibble_to_u16_lanes(uint32_t word)
{
    const uint64_t expanded = bf_x86_unpack_u32_bytes_to_u16_lanes(word);
    uint64_t result = UINT64_C(0);
    for (unsigned lane = 0; lane < 4; ++lane) {
        const uint64_t widened_byte = (expanded >> (lane * 16)) & UINT64_C(0xffff);
        const uint64_t lane_word = ((widened_byte >> 4) << 12) & UINT64_C(0xffff);
        result |= lane_word << (lane * 16);
    }
    return result;
}
#endif
