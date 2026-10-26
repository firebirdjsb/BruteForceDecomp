
#include <assert.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>
extern uint16_t *_wcsncpy(uint16_t *, uint16_t *, size_t);
struct Guard { uint32_t before; uint16_t dst[256]; uint32_t after; };
static void expected_copy(uint16_t *dst, const uint16_t *src, size_t n) {
    size_t i = 0;
    for (; i < n && src[i] != 0; ++i) dst[i] = src[i];
    for (; i < n; ++i) dst[i] = 0;
}
int main(void) {
    uint16_t src[256];
    struct Guard got, want;
    const size_t ns[] = {0, 1, 2, 3, 4, 5, 7, 8, 9, 31, 32, 255, 256};
    for (unsigned terminator = 0; terminator < 6; ++terminator) {
        for (size_t i = 0; i < 256; ++i) src[i] = (uint16_t)(0x1234u + i);
        if (terminator < 5) src[terminator] = 0;
        for (size_t j = 0; j < sizeof ns / sizeof ns[0]; ++j) {
            size_t n = ns[j];
            memset(&got, 0xa5, sizeof got);
            memcpy(&want, &got, sizeof got);
            got.before = want.before = UINT32_C(0xabcdef01);
            got.after = want.after = UINT32_C(0x12345678);
            expected_copy(want.dst, src, n);
            assert(_wcsncpy(got.dst, src, n) == got.dst);
            assert(memcmp(&got, &want, sizeof got) == 0);
            assert(got.before == UINT32_C(0xabcdef01));
            assert(got.after == UINT32_C(0x12345678));
        }
    }
    return 0;
}
