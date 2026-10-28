/* Actual-source excerpt template; no original call or guest-frame ABI. */
#include <float.h>
#include <stdint.h>
#include <xmmintrin.h>
#include "bf_x86_float_lane.h"
#pragma STDC FENV_ACCESS ON
_Static_assert(LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384,
               "Numeric fixture requires extended host storage");
typedef long double float10;
#if defined(_WIN32)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif
EXPORT unsigned bf_test_get_mxcsr(void) { return _mm_getcsr(); }
EXPORT void bf_test_set_mxcsr(unsigned value) { _mm_setcsr(value); }

EXPORT unsigned bf_test_vector(float *output, const float *a, const float *b, unsigned kind)
{
    float direction[3];
    float original_length;
    unsigned normalized = 0;
    if (kind == 0) {
        const float *pfVar8 = a;
        /* INSERT_INITIAL */
        memcpy(output, direction, sizeof(direction));
        memcpy(output + 3, &original_length, sizeof(original_length));
    } else if (kind == 1) {
        const float *target = a;
        uintptr_t iVar9 = (uintptr_t)b - 0x24;
        float target_delta[3];
        /* INSERT_TARGET_PREFIX */
        /* INSERT_TARGET_COMPARE */ {
            normalized = 0;
        } else {
            /* INSERT_TARGET_SCALE */
            normalized = 1;
        }
        memcpy(output, target_delta, sizeof(target_delta));
    } else {
        const float *target = a;
        uintptr_t iVar9 = (uintptr_t)b - 0x24;
        /* INSERT_FINAL */
        memcpy(output, direction, sizeof(direction));
    }
    return normalized;
}

EXPORT void bf_test_scale(float *output, const float *pfVar8)
{
    float forward[3], scaled[3];
    /* INSERT_SCALE */
    memcpy(output, forward, sizeof(forward));
    memcpy(output + 3, scaled, sizeof(scaled));
}

EXPORT void bf_test_copy(void *receiver, const void *source, uint32_t *output)
{
    int *in_ECX = receiver;
    uintptr_t iVar10 = (uintptr_t)source - 0x24;
    float target[3];
    /* INSERT_COPY */
    memcpy(output, target, sizeof(target));
}

EXPORT void bf_test_fields(void *receiver, float param_1, float local_8c)
{
    int *in_ECX = receiver;
    /* INSERT_FIELDS */
}

EXPORT unsigned bf_test_dot(const float *target_delta, const float *pfVar8)
{
    float forward[3];
    /* INSERT_DOT */
    return 0;
}
