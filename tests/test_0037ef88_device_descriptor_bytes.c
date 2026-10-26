/* Byte-store width regression only. No XAPI ABI or game-runtime claim. */
#include <stdint.h>
#include <stdio.h>

static void update_descriptor(uint32_t *backing, uint8_t type, uint8_t count)
{
    uint8_t *const bytes = (uint8_t *)(void *)backing;
    bytes[0] = type;
    bytes[1] = count;
}

int main(void)
{
    static const uint8_t type_values[] = {0, 2, 1};
    static const uint8_t count_values[] = {4, 7, 8};
    uint32_t backing = UINT32_C(0xA5B6C7D8);
    uint8_t *const bytes = (uint8_t *)(void *)&backing;
    uint8_t before2 = bytes[2], before3 = bytes[3];
    for (unsigned i = 0; i < 3; ++i) {
        update_descriptor(&backing, type_values[i], count_values[i]);
        if (bytes[0] != type_values[i] || bytes[1] != count_values[i] ||
            bytes[2] != before2 || bytes[3] != before3) {
            fputs("descriptor byte-width regression\n", stderr);
            return 1;
        }
    }
    return 0;
}
