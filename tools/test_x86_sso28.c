/* Focused C11 byte-layout test for the observed 28-byte x86 record.
 * This tests the helper's storage writes/accessors, not the full game routine,
 * helper ABI, allocator behavior, or guest-to-host pointer translation.
 */
#include "bf_x86_sso28.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHECK(condition) do { \
    if (!(condition)) { \
        (void)fprintf(stderr, "CHECK failed at %s:%d: %s\n", \
                      __FILE__, __LINE__, #condition); \
        return 1; \
    } \
} while (0)

typedef struct {
    uint8_t before[8];
    bf_x86_sso28 object;
    uint8_t after[8];
} guarded_sso28;

static int test_exact_empty_writes(void)
{
    guarded_sso28 guarded;
    uint8_t before[sizeof(guarded)];
    uint8_t expected_guest_word_bytes[sizeof(uint32_t)];
    uint32_t expected_guest_word;
    size_t i;
    unsigned changed = 0;

    for (i = 0; i < sizeof(guarded); ++i) {
        ((uint8_t *)&guarded)[i] = (uint8_t)(0x31U + (unsigned)i);
    }
    (void)memcpy(before, &guarded, sizeof(guarded));

    bf_x86_sso28_write_empty_fields(&guarded.object);

    CHECK(memcmp(guarded.before, before, sizeof(guarded.before)) == 0);
    CHECK(memcmp(guarded.after,
                 before + sizeof(guarded.before) + sizeof(guarded.object),
                 sizeof(guarded.after)) == 0);
    for (i = 0; i < BF_X86_SSO28_SIZE; ++i) {
        const int expected_write =
            i == BF_X86_SSO28_STORAGE ||
            (i >= BF_X86_SSO28_LENGTH && i < BF_X86_SSO28_SIZE);
        const uint8_t original = before[sizeof(guarded.before) + i];
        const uint8_t actual = guarded.object.bytes[i];
        if (expected_write) {
            ++changed;
            if (i == BF_X86_SSO28_STORAGE) {
                CHECK(actual == 0U);
            } else if (i >= BF_X86_SSO28_CAPACITY) {
                CHECK(actual == (i == BF_X86_SSO28_CAPACITY ? 15U : 0U));
            } else {
                CHECK(actual == 0U);
            }
        } else {
            CHECK(actual == original);
        }
    }
    CHECK(changed == 9U);
    CHECK(bf_x86_sso28_capacity(&guarded.object) == 15U);
    (void)memcpy(expected_guest_word_bytes,
                 before + sizeof(guarded.before) + BF_X86_SSO28_STORAGE,
                 sizeof(expected_guest_word_bytes));
    expected_guest_word_bytes[0] = 0U;
    (void)memcpy(&expected_guest_word, expected_guest_word_bytes,
                 sizeof(expected_guest_word));
    CHECK(bf_x86_sso28_heap_word(&guarded.object) == expected_guest_word);
    return 0;
}

static int test_inline_bytes_and_capacity_boundary(void)
{
    bf_x86_sso28 object;
    uint8_t expected_inline[BF_X86_SSO28_INLINE_SIZE];
    uint8_t original[BF_X86_SSO28_SIZE];
    uint32_t guest_word = UINT32_C(0x89abcdef);
    size_t i;

    for (i = 0; i < sizeof(object.bytes); ++i) {
        object.bytes[i] = (uint8_t)(0xa0U + (unsigned)i);
    }
    for (i = 0; i < sizeof(expected_inline); ++i) {
        expected_inline[i] = (uint8_t)(0x40U + (unsigned)i);
    }
    (void)memcpy(object.bytes + BF_X86_SSO28_STORAGE,
                 expected_inline, sizeof(expected_inline));
    (void)memcpy(object.bytes + BF_X86_SSO28_CAPACITY,
                 &(uint32_t){15U}, sizeof(uint32_t));
    CHECK(bf_x86_sso28_capacity(&object) == 15U);

    (void)memcpy(object.bytes + BF_X86_SSO28_CAPACITY,
                 &(uint32_t){16U}, sizeof(uint32_t));
    CHECK(bf_x86_sso28_capacity(&object) == 16U);
    (void)memcpy(object.bytes + BF_X86_SSO28_STORAGE,
                 &guest_word, sizeof(guest_word));
    CHECK(bf_x86_sso28_heap_word(&object) == guest_word);

    /* Refill all 16 inline bytes, then confirm the empty-field helper only
     * changes byte +4, the four-byte length, and the four-byte capacity. */
    (void)memcpy(object.bytes + BF_X86_SSO28_STORAGE,
                 expected_inline, sizeof(expected_inline));
    (void)memcpy(object.bytes + BF_X86_SSO28_LENGTH,
                 &(uint32_t){UINT32_C(0x76543210)}, sizeof(uint32_t));
    (void)memcpy(object.bytes + BF_X86_SSO28_CAPACITY,
                 &(uint32_t){15U}, sizeof(uint32_t));
    (void)memcpy(original, object.bytes, sizeof(original));
    bf_x86_sso28_write_empty_fields(&object);

    CHECK(object.bytes[BF_X86_SSO28_STORAGE] == 0U);
    CHECK(memcmp(object.bytes + BF_X86_SSO28_STORAGE + 1U,
                 expected_inline + 1U,
                 BF_X86_SSO28_INLINE_SIZE - 1U) == 0);
    CHECK(memcmp(object.bytes + BF_X86_SSO28_LENGTH,
                 &(uint32_t){0U}, sizeof(uint32_t)) == 0);
    CHECK(bf_x86_sso28_capacity(&object) == 15U);
    for (i = 0; i < BF_X86_SSO28_SIZE; ++i) {
        const int expected_write =
            i == BF_X86_SSO28_STORAGE ||
            (i >= BF_X86_SSO28_LENGTH && i < BF_X86_SSO28_SIZE);
        if (!expected_write) {
            CHECK(object.bytes[i] == original[i]);
        }
    }
    return 0;
}

int main(void)
{
    const uint16_t endian_probe = UINT16_C(1);

    CHECK(((const uint8_t *)&endian_probe)[0] == 1U);
    CHECK(sizeof(bf_x86_sso28) == 0x1cU);
    CHECK(BF_X86_SSO28_STORAGE == 4);
    CHECK(BF_X86_SSO28_INLINE_SIZE == 16);
    CHECK(BF_X86_SSO28_LENGTH == 0x14);
    CHECK(BF_X86_SSO28_CAPACITY == 0x18);
    CHECK(test_exact_empty_writes() == 0);
    CHECK(test_inline_bytes_and_capacity_boundary() == 0);
    (void)puts("x86 SSO28 byte-layout tests: PASS (not full-function behavior)");
    return 0;
}
