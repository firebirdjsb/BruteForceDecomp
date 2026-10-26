#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

static void append_m(char *base) {
    char *tail = base;
    while (*tail != '\0') ++tail;
    tail[0] = 'M';
    tail[1] = '\0';
}
static void append_x2(char *base) {
    char *tail = base;
    while (*tail != '\0') ++tail;
    tail[0] = 'X';
    tail[1] = '2';
    tail[2] = '\0';
}
static void copy_second(char frame[64]) {
    size_t i = 0;
    do {
        frame[32 + i] = frame[i];
    } while (frame[i++] != '\0');
}
static void reference_append(uint8_t *frame, size_t start, const uint8_t *suffix, size_t count) {
    size_t i = start;
    while (frame[i]) ++i;
    memcpy(frame + i, suffix, count);
}
int main(void) {
    for (size_t n = 0; n < 25; ++n) {
        for (int m = 0; m < 2; ++m) {
            for (int x = 0; x < 2; ++x) {
                char frame[66], expected[66];
                memset(frame, 0x55, sizeof(frame));
                memset(expected, 0x55, sizeof(expected));
                memset(frame, 'A', n);
                memset(expected, 'A', n);
                frame[n] = expected[n] = '\0';
                if (x) {
                    copy_second(frame);
                    memcpy(expected + 32, expected, n + 1);
                    append_x2(frame + 32);
                    reference_append((uint8_t *)expected, 32, (const uint8_t *)"X2\0", 3);
                }
                if (m) {
                    append_m(frame);
                    reference_append((uint8_t *)expected, 0, (const uint8_t *)"M\0", 2);
                }
                if (x) {
                    append_x2(frame);
                    reference_append((uint8_t *)expected, 0, (const uint8_t *)"X2\0", 3);
                }
                assert(memcmp(frame, expected, sizeof(frame)) == 0);
                assert((unsigned char)frame[64] == 0x55);
                assert((unsigned char)frame[65] == 0x55);
            }
        }
    }
    return 0;
}
