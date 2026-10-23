#include "bf_x86_float_lane.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static float f32_from_bits(uint32_t bits)
{
    float value;
    memcpy(&value,&bits,4);
    return value;
}

int main(void)
{
    const uint32_t sample[] = {
        0, UINT32_C(0x80000000), UINT32_C(0x3f800000),
        UINT32_C(0x3f000000), UINT32_C(0x3a83126f),
        UINT32_C(0x00000001), UINT32_C(0x007fffff),
        UINT32_C(0x7f7fffff), UINT32_C(0x7f800000),
        UINT32_C(0xff800000), UINT32_C(0x7fc12345)
    };
    for(size_t i=0;i<sizeof(sample)/sizeof(sample[0]);++i) {
        float f=f32_from_bits(sample[i]);
        uint32_t slot=0;
        bf_x86_store_f32_word(&slot,f);
        assert(slot==sample[i]);
        assert(bf_x86_f32_word(f)==sample[i]);
    }
    uint32_t state=UINT32_C(0x12345678);
    for(unsigned i=0;i<65536;++i) {
        state=state*UINT32_C(1664525)+UINT32_C(1013904223);
        float f=f32_from_bits(state);
        uint32_t slot=0;
        bf_x86_store_f32_word(&slot,f);
        assert(slot==state);
    }
    puts("Xbox float-word transfer: 11 edge values and 65536 bit patterns passed");
    return 0;
}
