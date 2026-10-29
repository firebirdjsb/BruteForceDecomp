/* Actual-source storage excerpts. This does not execute a complete guest
 * function, stack probe, parser callback or Bink arithmetic helper. */
#include <stdint.h>
#include <stddef.h>
#include <string.h>
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef long double float10;
#if defined(_WIN32)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

EXPORT int bf_test_scratch(void)
{
    struct { uint32_t before; /* INSERT_SCRATCH_DECL */ uint32_t after; } storage;
    undefined1 *local_64, *local_68, *local_60;
    undefined4 *puVar6;
    int iVar5;
    memset(&storage, 0xa5, sizeof(storage));
#define scratch_words storage.scratch_words
    /* INSERT_SCRATCH_INIT */
    if (local_64 != (undefined1 *)scratch_words + 2000 ||
        local_68 != (undefined1 *)scratch_words || local_60 != local_68 ||
        puVar6 != scratch_words + 500 || storage.before != 0xa5a5a5a5 || storage.after != 0xa5a5a5a5)
        return 1;
    for (unsigned i = 0; i < 500; ++i)
        if (scratch_words[i] != 0) return 2;
#undef scratch_words
    return 0;
}

EXPORT int bf_test_records(unsigned attributes)
{
    struct { uint32_t before; /* INSERT_RECORD_DECL */ uint32_t after; } storage;
    undefined4 *local_10, *local_24, *puVar9, *local_14, *local_20;
    undefined1 *local_18, *local_1c;
    char *param_1;
    unsigned local_8 = 0;
    if (attributes > 5) return 1;
    memset(&storage, 0xa5, sizeof(storage));
#define record_words storage.record_words
    /* INSERT_RECORD_INIT */
    for (unsigned depth = 0; depth <= 15; ++depth) {
        uint32_t *current = record_words + (depth + 1) * 13;
        uint32_t *previous = record_words + depth * 13;
        if (local_14 != current || local_1c != (undefined1 *)(current + 1) ||
            local_18 != (undefined1 *)(current + 6) || (void *)param_1 != current + 11 ||
            local_10 != current + 12 || local_20 != previous + 1 || local_24 != previous + 6 ||
            local_8 != depth) return 2;
        if (depth == 15) break; /* Last row is only a cursor envelope. */
        *local_14 = 0x1000 + depth;
        /* Controlled fixture writes use the original helper's proven output
         * footprint, not its parsing behavior or original guest addresses. */
        for (unsigned i = 0; i < attributes; ++i) {
            ((uint32_t *)local_1c)[i] = 0x2000 + depth * 16 + i;
            ((uint32_t *)local_18)[i] = 0x3000 + depth * 16 + i;
        }
        *(uint32_t *)param_1 = attributes;
        *local_10 = 0x4000 + depth;
        /* INSERT_RECORD_ADVANCE */
    }
    for (unsigned depth = 15; depth > 0; --depth) {
        uint32_t *previous = record_words + depth * 13;
        if (local_14[-13] != 0x1000 + depth - 1 ||
            *(uint32_t *)(param_1 - 0x34) != attributes || local_10[-13] != 0x4000 + depth - 1)
            return 3;
        for (unsigned i = 0; i < attributes; ++i)
            if (local_20[i] != 0x2000 + (depth - 1) * 16 + i ||
                local_24[i] != 0x3000 + (depth - 1) * 16 + i) return 4;
        if (local_24 != previous + 6) return 5;
        /* INSERT_RECORD_POP */
    }
    if (local_8 != 0 || local_14 != record_words + 13 || storage.before != 0xa5a5a5a5 ||
        storage.after != 0xa5a5a5a5) return 6;
    for (unsigned i = 0; i < 13; ++i)
        if (record_words[i] != 0xa5a5a5a5 || record_words[16 * 13 + i] != 0xa5a5a5a5) return 7;
    for (unsigned row = 1; row <= 15; ++row)
        for (unsigned i = attributes; i < 5; ++i)
            if (record_words[row * 13 + 1 + i] != 0xa5a5a5a5 ||
                record_words[row * 13 + 6 + i] != 0xa5a5a5a5) return 8;
#undef record_words
    return 0;
}

EXPORT int bf_test_workspace(void)
{
    struct { uint32_t before; /* INSERT_WORKSPACE_DECL */ uint32_t after; } storage;
    float *pfVar4;
    unsigned uVar3;
    float10 fVar5;
    float fVar1;
    memset(&storage, 0xa5, sizeof(storage));
#define frame_f32 storage.frame_f32
    /* INSERT_SAMPLE_BASE */
    if (pfVar4 != frame_f32 + 26 || sizeof(frame_f32) != 0x4068) return 1;
    for (uVar3 = 0; uVar3 < 26; ++uVar3) {
        fVar5 = (float10)(uVar3 + 1);
        /* INSERT_COEFFICIENT */
    }
    for (uVar3 = 0; uVar3 < 26; ++uVar3)
        if (frame_f32[uVar3] != (float)(uVar3 + 1)) return 2;
    for (unsigned i = 0; i < 4096; i += 2) {
        pfVar4 = frame_f32 + 26 + i;
        fVar1 = (float)i;
        /* INSERT_SAMPLE_X */
        fVar1 = (float)(i + 1);
        /* INSERT_SAMPLE_Y */
    }
    for (unsigned i = 0; i < 4096; ++i)
        if (frame_f32[26 + i] != (float)i) return 3;
    uVar3 = 26;
    fVar5 = 123.0L;
    /* INSERT_COEFFICIENT_ALIAS */
    if (frame_f32[26] != 123.0f || storage.before != 0xa5a5a5a5 || storage.after != 0xa5a5a5a5)
        return 4;
#undef frame_f32
    return 0;
}
