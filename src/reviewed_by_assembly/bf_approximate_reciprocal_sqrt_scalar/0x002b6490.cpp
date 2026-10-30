/* Original Xbox Brute Force scalar reciprocal square root approximation.
 * Entry: 0x002b6490
 * Input x86 body SHA-256: E47D4B359F51995512CE21EC98637D7564B58FF6D76EB2D643B2A1CF894FE235
 * Machine code rsqrtss xmm0,[esp+8], movss [esp],xmm0, fld [esp], ret.
 * Emits old FUN_ entry symbol via the alias header. Not original source.
 */
#include "bf_recovered_function_names.h"
/* Clang x86 intrinsic: an actual SSE RSQRTSS instruction, not 1/sqrtf. */
typedef float BF_FloatVector4 __attribute__((vector_size(16)));
long double bf_approximate_reciprocal_sqrt_scalar(float input)
{
    BF_FloatVector4 low_lane = {input,0,0,0};
    BF_FloatVector4 result = __builtin_ia32_rsqrtss(low_lane);
    return (long double)result[0];
}
