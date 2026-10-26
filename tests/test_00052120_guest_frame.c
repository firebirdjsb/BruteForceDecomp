/* Synthetic C11 storage exercise only: not the unresolved Xbox virtual callee. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define CHECK(expr) do { if (!(expr)) { fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #expr); return 1; } } while (0)
static void store_three(uint8_t *base, const float values[3])
{
    memcpy(base, values, 3 * sizeof(float));
}
static float read_one(const uint8_t *base)
{
    float word;
    memcpy(&word, base, sizeof(word));
    return word;
}
int main(void)
{
    const float first_low[3] = {1.f, 2.f, 3.f};
    const float first_high[3] = {4.f, 5.f, 6.f};
    const float second_low[3] = {7.f, 8.f, 9.f};
    const float second_high[3] = {10.f, 11.f, 12.f};
    uint8_t guarded[8 + 0x28 + 8];
    uint8_t *frame = guarded + 8;
    uint8_t fill_guard[8];
    memset(guarded, 0xa5, sizeof guarded);
    memset(fill_guard, 0xa5, sizeof fill_guard);

    /* First call's synthetic 12-byte output A/B regions: +0 and +0x10. */
    store_three(frame + 0x00, first_low);
    store_three(frame + 0x10, first_high);
    CHECK(read_one(frame + 0x00) == 1.f);
    CHECK(read_one(frame + 0x14) == 5.f);

    /* Second A region overlaps first A, but neither B output overlaps A.
     * Second B output ends exactly at frame + 0x28. */
    store_three(frame + 0x04, second_low);
    store_three(frame + 0x1c, second_high);
    CHECK(read_one(frame + 0x00) == 1.f);
    CHECK(read_one(frame + 0x14) == 5.f);
    CHECK(read_one(frame + 0x04) == 7.f);
    CHECK(read_one(frame + 0x20) == 11.f);
    CHECK(memcmp(guarded, fill_guard, sizeof fill_guard) == 0);
    CHECK(memcmp(guarded + 8 + 0x28, fill_guard, sizeof fill_guard) == 0);
    puts("PASS: synthetic 40-byte guest frame, aliasing, 12-byte output capacity and guards");
    return 0;
}
