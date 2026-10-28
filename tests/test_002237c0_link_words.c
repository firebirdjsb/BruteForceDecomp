/* Template for the actual source's insertion/copy/removal block.
 * The Python verifier inserts it at the marker. External copy calls below
 * are fixture substitutes, not established original-game implementations. */
#include <stdint.h>
#include <string.h>

#if defined(_WIN32)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif
typedef uint32_t uint;
typedef uint32_t undefined4;

EXPORT uint32_t DAT_00414da0[2048];
EXPORT uint32_t copied_words[2];
EXPORT uint32_t copied_extra;
EXPORT uint32_t copy_branch;
static uint32_t *fixture_prefix;
static uint32_t fixture_mode;

static void copy_record(uint32_t *record)
{
    memcpy(copied_words, record, sizeof(copied_words));
    /* Simulate a callback inserting a prefix, or removing this temporary
     * record before the caller's search. Both exercise pointer-to-link logic. */
    uint32_t bucket = (record[1] * UINT32_C(0x19660d) +
                       UINT32_C(0x3c6ef35f)) >> 21;
    if (fixture_mode == 1) {
        fixture_prefix[0] = (uint32_t)(uintptr_t)record;
        DAT_00414da0[bucket] = (uint32_t)(uintptr_t)fixture_prefix;
    } else if (fixture_mode == 2) {
        DAT_00414da0[bucket] = record[0];
    }
}

static void FUN_0004aff0(uintptr_t receiver, uint32_t output,
                       int count, uint32_t *record)
{
    (void)receiver;
    (void)output;
    (void)count;
    copy_branch = 1;
    copy_record(record);
}

static void FUN_0004b6d0(int output, int count, uint32_t *record,
                       uintptr_t receiver, uint32_t first_word)
{
    (void)output;
    (void)count;
    (void)receiver;
    copy_branch = 2;
    copied_extra = first_word;
    copy_record(record);
}

EXPORT void bf_test_002237c0(void *receiver, void *item, uint32_t *record,
                            uint32_t *prefix, uint32_t mode)
{
    uintptr_t param_1 = (uintptr_t)receiver;
    uintptr_t local_240 = (uintptr_t)item;
    uint32_t *local_25c = record;
    uint32_t *link_cursor;
    uint32_t *link_next;
    uint uVar9;
    int iVar7;
    fixture_prefix = prefix;
    fixture_mode = mode;
    copied_extra = 0xdeadbeef;
    copy_branch = 0;
    /* INSERT_SOURCE_BLOCK */
}
