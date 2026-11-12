/* Brute Force original Xbox - bounded scalar SSE and result transport.
 * Input x86 body SHA-256: 65B4628918E5361443665A0347CF3E311F0D6D74565C8A9693B508101D88B561
 * Entry: 0x002331f0, Ghidra index: 7780, label: FUN_002331f0
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_00233_scalar_sse.h"
#include "bf_00233_sse_operations.h"

uint32_t bf_002331f0_word(uint32_t angle)
{
    using namespace bf_00233_sse;
    const __m128 shifted = add(scaled_magnitude(angle), load(one));
    const int32_t index = truncate(shifted);
    const __m128 fraction = fold(shifted, index, convert(index));
    const __m128 square = multiply(fraction, fraction);

    __m128 polynomial = multiply(square, load(coefficient_3));
    polynomial = add(polynomial, load(coefficient_2));
    polynomial = multiply(polynomial, square);
    polynomial = add(polynomial, load(coefficient_1));
    polynomial = multiply(polynomial, square);
    const __m128 signed_fraction = _mm_or_ps(fraction, load(quadrant_sign(index)));
    polynomial = add(polynomial, load(coefficient_0));
    return capture_lane(multiply(polynomial, signed_fraction));
}

long double FUN_002331f0(float angle)
{
    const uint32_t word = bf_002331f0_word(bf_00233_sse::capture(angle));
#if LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384
    // 0x0023327E stores the binary32 result and 0x00233283 loads it into ST(0).
    long double result;
    __asm__ volatile("flds %1" : "=t"(result) : "m"(word) : "memory");
    return result;
#else
    // Existing host signature projects the numeric result on binary64 hosts.
    // Native Xbox ST(0) transport on those hosts remains ABI_UNVERIFIED.
    float result;
    __builtin_memcpy(&result, &word, sizeof(result));
    return static_cast<long double>(result);
#endif
}
