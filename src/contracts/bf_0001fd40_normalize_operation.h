/* Original 0x0001fd40, 59-byte body SHA-256:
 * BD8404AC490D6FD5998635B9C0EC962C3D0A4FC6930010655F35C27A81C10DA4.
 * EAX names three consecutive m32fp words. This is a memory operation,
 * not a replacement declaration for the original register ABI.
 * Host long double/sqrtl proxy the x87 operations; control/status, precision,
 * exceptions, guest translation and complete behavior remain ABI_UNVERIFIED.
 */
#ifndef BF_0001FD40_NORMALIZE_OPERATION_H
#define BF_0001FD40_NORMALIZE_OPERATION_H
#include <math.h>
#include <string.h>
_Static_assert(sizeof(float) == 4, "Original m32fp is four bytes");
static inline void bf_0001fd40_normalize(void *eax_vector)
{
    unsigned char *p = eax_vector;
    float x, y, z, result;
    long double sum, term, reciprocal;
    /* FLD +8,+4,+0 at 0x0001fd40..46, before any write. */
    memcpy(&z, p + 8, 4);
    memcpy(&y, p + 4, 4);
    memcpy(&x, p, 4);
    sum = (long double)x * (long double)x;
    term = (long double)y * (long double)y;
    sum += term;
    term = (long double)z * (long double)z;
    sum += term;
    /* FSQRT then FDIVR m32fp [0x003a4f78] (1.0f); no F32 spill. */
    reciprocal = 1.0L / sqrtl(sum);
    /* Each FMUL reloads its word; FSTP order is +0,+4,+8. */
    memcpy(&x, p, 4);
    result = (float)(reciprocal * (long double)x);
    memcpy(p, &result, 4);
    memcpy(&y, p + 4, 4);
    result = (float)(reciprocal * (long double)y);
    memcpy(p + 4, &result, 4);
    memcpy(&z, p + 8, 4);
    result = (float)(reciprocal * (long double)z);
    memcpy(p + 8, &result, 4);
}
#endif
