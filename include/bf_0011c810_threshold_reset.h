/* Authentic original Xbox 0x0011C917..0x0011C99A first post-dot branch.
 * The caller reads S+0x14 (third dot float), S+0x0C (first dot float),
 * compares |(x87)8*first| with |third| using FCOMPP/FNSTSW/TEST AH,0x05,
 * and only when the former is STRICTLY smaller writes three DWORDs:
 * [arg+0x7B0]=0x3f800000, [arg+0x7B4]=0, [arg+0x7B8]=0.
 *
 * Finite f32 -> double and multiplication by exactly 8 are representable
 * without changing ordering, including subnormals. Original NaN/unordered
 * status bits and guest page fault/exception side effects are deferred.
 * No host C pointer is constructed from a guest 32-bit VA.
 */
#ifndef BF_0011C810_THRESHOLD_RESET_H
#define BF_0011C810_THRESHOLD_RESET_H
#include "bf_0011c810_second_vector.h"

typedef enum bf_0011c810_reset_status {
    BF_RESET_NOT_TAKEN=0,
    BF_RESET_TAKEN,
    BF_RESET_FLOAT_UNVERIFIED,
    BF_RESET_GUEST_IO_INVALID,
    BF_RESET_GUEST_WRITE_FAULT
} bf_0011c810_reset_status;
typedef struct bf_0011c810_reset_result {
    bf_0011c810_reset_status status;
    uint32_t fault_guest_va;
    unsigned writes;
} bf_0011c810_reset_result;
static inline float bf_0011c810_f32_from_word(uint32_t word)
{
    float value;
    __builtin_memcpy(&value,&word,4);
    return value;
}
static inline bf_0011c810_reset_result bf_0011c810_threshold_reset(
    const bf_0011c810_guest_bytes *io,uint32_t caller_arg,
    uint32_t first_bits,uint32_t third_bits)
{
    bf_0011c810_reset_result result={BF_RESET_GUEST_IO_INVALID,0,0};
    if(!io||!io->write) return result;
    const uint32_t a=first_bits&UINT32_C(0x7fffffff);
    const uint32_t b=third_bits&UINT32_C(0x7fffffff);
    if(a>=UINT32_C(0x7f800000)||b>=UINT32_C(0x7f800000)) {
        result.status=BF_RESET_FLOAT_UNVERIFIED;
        return result;
    }
    const float first=bf_0011c810_f32_from_word(first_bits);
    const float third=bf_0011c810_f32_from_word(third_bits);
    const double af=(double)first*8.0;
    const double at=(double)third;
    const double fa=(af<0.0)?-af:af;
    const double ft=(at<0.0)?-at:at;
    if(!(fa<ft)) {
        result.status=BF_RESET_NOT_TAKEN;
        return result;
    }
    const uint32_t offsets[3]={UINT32_C(0x7b0),UINT32_C(0x7b4),UINT32_C(0x7b8)};
    const uint32_t words[3]={UINT32_C(0x3f800000),UINT32_C(0),UINT32_C(0)};
    result.status=BF_RESET_GUEST_WRITE_FAULT;
    for(unsigned i=0;i<3;i++) {
        const uint32_t at=caller_arg+offsets[i];
        if(!bf_0011c810_store_guest_u32(io,at,words[i])) {
            result.fault_guest_va=at;
            return result;
        }
        ++result.writes;
    }
    result.status=BF_RESET_TAKEN;
    return result;
}
#endif
