#ifndef BF_00233_SSE_OPERATIONS_H
#define BF_00233_SSE_OPERATIONS_H

#if !(defined(__i386__) || defined(__x86_64__)) || !defined(__SSE__) || \
    !(defined(__GNUC__) || defined(__clang__))
#error "These original scalar operations require GNU/Clang x86 SSE"
#endif
#ifdef __FAST_MATH__
#error "These original scalar operations require the native floating-point environment"
#endif

#include <float.h>
#include <stdint.h>
#include <xmmintrin.h>

static_assert(sizeof(float) == 4 && FLT_RADIX == 2 && FLT_MANT_DIG == 24 &&
              FLT_MAX_EXP == 128 && FLT_MIN_EXP == -125, "IEEE binary32 storage required");

namespace bf_00233_sse {

// Original retail constants at 0x0038D860, 0x0038D8E0 and 0x0038D950..0x0038D95F.
inline constexpr uint32_t one = 0x3f800000u;
inline constexpr uint32_t scale = 0x3f22f983u;
inline constexpr uint32_t coefficient_0 = 0x3fc90fdbu;
inline constexpr uint32_t coefficient_1 = 0xbf255de7u;
inline constexpr uint32_t coefficient_2 = 0x3da335e3u;
inline constexpr uint32_t coefficient_3 = 0xbb996966u;
inline constexpr uint32_t sign_mask = 0x80000000u;

inline uint32_t capture(float input)
{
    uint32_t word;
    __builtin_memcpy(&word, &input, sizeof(word));
    return word;
}

inline __m128 load(uint32_t word)
{
    __m128 lane;
    __asm__ volatile("movss %1, %0" : "=x"(lane) : "m"(word));
    return lane;
}

inline uint32_t capture_lane(__m128 lane)
{
    uint32_t word;
    __asm__ volatile("movss %1, %0" : "=m"(word) : "x"(lane));
    return word;
}

// Keep original scalar operand order and sequence even when the compiler
// would otherwise fold or commute arithmetic. MXCSR governs each instruction.
inline __m128 multiply(__m128 lhs, __m128 rhs)
{
    __asm__ volatile("mulss %1, %0" : "+x"(lhs) : "x"(rhs) : "memory");
    return lhs;
}

inline __m128 add(__m128 lhs, __m128 rhs)
{
    __asm__ volatile("addss %1, %0" : "+x"(lhs) : "x"(rhs) : "memory");
    return lhs;
}

inline __m128 subtract(__m128 lhs, __m128 rhs)
{
    __asm__ volatile("subss %1, %0" : "+x"(lhs) : "x"(rhs) : "memory");
    return lhs;
}

inline __m128 square_root(__m128 lane)
{
    __asm__ volatile("sqrtss %0, %0" : "+x"(lane) : : "memory");
    return lane;
}

inline bool below(__m128 lhs, __m128 rhs)
{
    unsigned char taken;
    // COMISS and JB use CF, including for an unordered comparison.
    __asm__ volatile("comiss %2, %1\n\tsetb %0"
                     : "=qm"(taken) : "x"(lhs), "x"(rhs) : "cc", "memory");
    return taken != 0;
}

inline int32_t truncate(__m128 lane)
{
    int32_t result;
    __asm__ volatile("cvttss2sil %1, %0" : "=r"(result) : "x"(lane) : "memory");
    return result;
}

inline __m128 convert(int32_t value)
{
    __m128 lane = _mm_setzero_ps();
    __asm__ volatile("cvtsi2ssl %1, %0" : "+x"(lane) : "r"(value) : "memory");
    return lane;
}

inline __m128 scaled_magnitude(uint32_t angle)
{
    // ANDPS at 0x0023302D / 0x002331F8 uses low-lane mask 0x7fffffff.
    return multiply(load(angle & ~sign_mask), load(scale));
}

inline __m128 fold(__m128 value, int32_t index, __m128 converted)
{
    value = subtract(value, converted);
    if ((static_cast<uint32_t>(index) & 1u) != 0) {
        value = subtract(load(one), value);
    }
    return value;
}

inline uint32_t quadrant_sign(int32_t index)
{
    // The original SHL 30 and AND 0x80000000 place index bit 1 in the sign bit.
    return (static_cast<uint32_t>(index) << 30) & sign_mask;
}

inline __m128 evaluate(__m128 fraction, uint32_t sign)
{
    const __m128 square = multiply(fraction, fraction);
    __m128 polynomial = multiply(square, load(coefficient_3));
    polynomial = add(polynomial, load(coefficient_2));
    polynomial = multiply(polynomial, square);
    polynomial = add(polynomial, load(coefficient_1));
    polynomial = multiply(polynomial, square);
    const __m128 signed_fraction = _mm_or_ps(fraction, load(sign));
    polynomial = add(polynomial, load(coefficient_0));
    return multiply(polynomial, signed_fraction);
}

struct scalar_pair {
    __m128 shifted, base;
};

inline scalar_pair evaluate_pair(__m128 shifted_fraction, __m128 base_fraction,
                                 uint32_t shifted_sign, uint32_t base_sign)
{
    // The original 0x00233020 and 0x00233290 interleave both evaluations.
    const __m128 shifted_square = multiply(shifted_fraction, shifted_fraction);
    const __m128 base_square = multiply(base_fraction, base_fraction);
    __m128 shifted_poly = multiply(shifted_square, load(coefficient_3));
    __m128 base_poly = multiply(base_square, load(coefficient_3));
    shifted_poly = add(shifted_poly, load(coefficient_2));
    base_poly = add(base_poly, load(coefficient_2));
    shifted_poly = multiply(shifted_poly, shifted_square);
    base_poly = multiply(base_poly, base_square);
    shifted_poly = add(shifted_poly, load(coefficient_1));
    base_poly = add(base_poly, load(coefficient_1));
    shifted_poly = multiply(shifted_poly, shifted_square);
    const __m128 signed_shifted = _mm_or_ps(shifted_fraction, load(shifted_sign));
    base_poly = multiply(base_poly, base_square);
    const __m128 signed_base = _mm_or_ps(base_fraction, load(base_sign));
    shifted_poly = add(shifted_poly, load(coefficient_0));
    base_poly = add(base_poly, load(coefficient_0));
    const __m128 shifted = multiply(shifted_poly, signed_shifted);
    const __m128 base = multiply(base_poly, signed_base);
    return {shifted, base};
}

__attribute__((always_inline)) inline long double transport_result(uint32_t word)
{
#if LDBL_MANT_DIG == 64 && LDBL_MAX_EXP == 16384
    // Each original single-result entry reloads its final DWORD with FLD m32fp.
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

} // namespace bf_00233_sse
#endif
