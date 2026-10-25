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
#endif
