#include "bf_x86_packed_color_sse.h"
#include <stdio.h>
#include <stdint.h>

int main(void) {
    const float src[4] = {-1.0f, 0.5f, 1.1f, 0.25f};
    const float cap[4] = {1.0f, 1.0f, 1.0f, 1.0f};
    const float floor_[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    const float scale[4] = {255.0f, 255.0f, 255.0f, 255.0f};
    unsigned old = _MM_GET_ROUNDING_MODE();
    _MM_SET_ROUNDING_MODE(_MM_ROUND_NEAREST);
    uint32_t result = bf_x86_pack_color_sse(src, cap, floor_, scale);
    if (result != UINT32_C(0x400080ff)) {
        fprintf(stderr, "nearest: %08x\n", result);
        return 1;
    }
    _MM_SET_ROUNDING_MODE(_MM_ROUND_TOWARD_ZERO);
    result = bf_x86_pack_color_sse(src, cap, floor_, scale);
    if (result != UINT32_C(0x3f007fff)) {
        fprintf(stderr, "truncate: %08x\n", result);
        return 2;
    }
    _MM_SET_ROUNDING_MODE(old);
    return 0;
}
