/* Original XBE-verified guest F32 vector storage at 0x0011C8B5..0x0011C902.
 * Original XBE SHA256 B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
 * With frame S, the three output words are, in address order:
 * S+0x28 = FCHS([object+0x1C]), S+0x2C = FCHS([object+0x28]),
 * S+0x30 = FCHS([object+0x34]). All words are little-endian binary32.
 * The original instructions write the last lane first, then middle, then
 * first, with earlier scratch words at S+0x04/+0x08/+0x10/+0x14.
 * This is a SUCCESS-STATE projection, not an Xbox x87 emulator. For finite
 * binary32, signed zero, subnormal, and infinity, FCHS/FSTP preserve the
 * magnitude's binary32 bits and invert its sign. No NaN, x87 status flags,
 * exceptions or original fault EIP behavior is claimed by this helper.
 * The existing second_virtual_to_dot() stages these bytes only after its
 * virtual-executor callback has actually returned the original guest EAX/ESP.
 */
#ifndef BF_0011C810_ORIGINAL_VECTOR_LANES_H
#define BF_0011C810_ORIGINAL_VECTOR_LANES_H
#include "bf_0011c810_second_vector.h"

static inline bool bf_0011c810_original_vector_lanes(
    void *context, const bf_0011c810_guest_bytes *io,
    uint32_t guest_vector_va, const uint32_t component_words[3],
    uint32_t *fault_guest_va)
{
    (void)context;
    if (!io || !io->write || !component_words || !fault_guest_va)
        return false;
    *fault_guest_va = 0;
    /* x87 loading/quieting a NaN, FCHS and FSTP must be separately
     * implemented and checked against the original FPU environment. */
    for (unsigned i=0; i<3u; ++i) {
        uint32_t x=component_words[i];
        if ((x & UINT32_C(0x7f800000))==UINT32_C(0x7f800000) &&
            (x & UINT32_C(0x007fffff))!=0u)
            return false;
    }
    /* The source-backed component reader returns [+0x1C,+0x28,+0x34].
     * The caller's four scratch storage lifetimes are observable, too. */
    const uint32_t s=guest_vector_va-UINT32_C(0x28);
    const uint32_t offsets[9]={0x04u,0x08u,0x14u,0x10u,0x04u,0x30u,0x08u,0x2cu,0x28u};
    const uint32_t words[9]={
        component_words[2],component_words[1],
        component_words[2],component_words[1],
        component_words[2]^UINT32_C(0x80000000),
        component_words[2]^UINT32_C(0x80000000),
        component_words[1]^UINT32_C(0x80000000),
        component_words[1]^UINT32_C(0x80000000),
        component_words[0]^UINT32_C(0x80000000)
    };
    for (unsigned i=0;i<9u;i++) {
        const uint32_t a=s+offsets[i];
        if (!bf_0011c810_store_guest_u32(io,a,words[i])) {
            *fault_guest_va=a;
            return false;
        }
    }
    return true;
}
#endif
