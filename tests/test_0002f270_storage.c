/* Actual-source excerpt template. The Python runner substitutes only the
 * indirect call with capture_call; no original call/ABI parity is claimed. */
#include <float.h>
#include <stdint.h>
#include <xmmintrin.h>
#include "bf_x86_float_lane.h"
#pragma STDC FENV_ACCESS ON

_Static_assert(LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384,
               "Numeric comparison requires x87 extended host storage");
typedef long double float10;
typedef uint32_t uint;
#if defined(_WIN32)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

EXPORT void bf_reference_distance(uint32_t *, const float *, const void *);
EXPORT unsigned bf_reference_direction(uint32_t *, void *, const float *);
EXPORT int32_t bf_reference_count(uint32_t, uint32_t);
EXPORT unsigned bf_reference_get_cw(void);
EXPORT void bf_reference_set_cw(unsigned);

static uint32_t *expected_record;
static unsigned calls;
static void capture_call(uint32_t *record)
{
    /* Check the exact caller-supplied record address, not a copied array. */
    calls += record == expected_record ? 1u : 100u;
}

EXPORT unsigned bf_test_get_mxcsr(void) { return _mm_getcsr(); }
EXPORT void bf_test_set_mxcsr(unsigned value) { _mm_setcsr(value); }

EXPORT void bf_test_distance(void *receiver, void *target, float *position)
{
    uintptr_t param_1 = (uintptr_t)receiver;
    uintptr_t iVar9 = (uintptr_t)target;
    float *pfVar13 = position;
    /* INSERT_DISTANCE */
}

EXPORT unsigned bf_test_direction(void *receiver, float *position, uint32_t *record)
{
    uintptr_t param_1 = (uintptr_t)receiver;
    float *pfVar13 = position;
    uint32_t *scratch_3f8 = record;
    expected_record = record;
    calls = 0;
    /* INSERT_DIRECTION */
    return calls;
}

EXPORT int32_t bf_test_count(void *receiver)
{
    uintptr_t param_1 = (uintptr_t)receiver;
    /* INSERT_COUNT */
    return entry_count;
    }
    return 0;
}

EXPORT void bf_test_query(uint32_t *scratch_3f8, void *auStack_254)
{
    /* INSERT_QUERY */
}
