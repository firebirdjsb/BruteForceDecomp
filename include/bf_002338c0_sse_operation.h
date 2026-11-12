#ifndef BF_002338C0_SSE_OPERATION_H
#define BF_002338C0_SSE_OPERATION_H
/* Host memory operation recovered from original entry 0x002338c0, body SHA-256
 * 5897040BE668154EA2E3C435098155BB2F0738FF57A70BFA63AC39F047CF75E1.
 * Requires native GNU/Clang x86 SSE. No portable arithmetic fallback.
 * This does not implement guest32 pointers, the original stack/register ABI,
 * CPU-model equivalence, memory-fault ordering, or unmasked exception recovery.
 * HOST CONTRACT: all buffers designate 12 live float objects, aligned to
 * alignof(float). Overlap is allowed only in whole-float units. Arbitrary
 * byte-unaligned guest addresses are NOT supported by this host operation.
 */
#if !defined(__SSE__) || !(defined(__GNUC__) || defined(__clang__))
#error "002338c0 operation requires GNU/Clang native x86 SSE"
#endif
#ifdef __FAST_MATH__
#error "002338c0 operation must not be built with fast math"
#endif
#include <xmmintrin.h>
static_assert(sizeof(float) == 4, "Original memory lanes are four bytes");

/* Explicit destination/source order matters for NaN payloads. Volatile SSE
 * prevents contraction, reassociation, dead-lane removal, and commutation.
 * Memory clobbers retain the original interleaved input/output access order.
 */
static inline __m128 bf_002338c0_mul(__m128 destination, __m128 source)
{
    __asm__ volatile("mulps %1, %0" : "+x"(destination) : "x"(source) : "memory");
    return destination;
}
static inline __m128 bf_002338c0_add(__m128 destination, __m128 source)
{
    __asm__ volatile("addps %1, %0" : "+x"(destination) : "x"(source) : "memory");
    return destination;
}
static inline __m128 bf_002338c0_add_low(__m128 destination, __m128 source)
{
    __asm__ volatile("addss %1, %0" : "+x"(destination) : "x"(source) : "memory");
    return destination;
}
static inline void bf_002338c0_memory_order()
{
    __asm__ volatile("" : : : "memory");
}

static inline __m128 bf_002338c0_load_column(const float *p, const float *last)
{
    __m128 column = _mm_load_ss(p);
    bf_002338c0_memory_order();
    column = _mm_loadh_pi(column, reinterpret_cast<const __m64 *>(p + 1));
    bf_002338c0_memory_order();
    const __m128 translation = _mm_load_ss(last);
    bf_002338c0_memory_order();
    column = _mm_shuffle_ps(column, column, 0xe1);
    return _mm_move_ss(column, translation);
}

static inline void bf_002338c0_store_row(float *out, unsigned row, __m128 value)
{
    _mm_store_ss(out + 9 + row, value);
    bf_002338c0_memory_order();
    value = _mm_shuffle_ps(value, value, 0xe1);
    _mm_store_ss(out + 3 * row, value);
    bf_002338c0_memory_order();
    _mm_storeh_pi(reinterpret_cast<__m64 *>(out + 3 * row + 1), value);
    bf_002338c0_memory_order();
}

static inline void bf_002338c0_sse_operation(
    float *out, const float *left, const float *right)
{
    /* All right-hand lanes are captured before the first output store. */
    const __m128 column0 = bf_002338c0_load_column(right, right + 9);
    const __m128 column1 = bf_002338c0_load_column(right + 3, right + 10);
    const __m128 column2 = bf_002338c0_load_column(right + 6, right + 11);
    __m128 input = _mm_loadu_ps(left);
    bf_002338c0_memory_order();

    __m128 product0 = bf_002338c0_mul(_mm_shuffle_ps(input, input, 0x00), column0);
    __m128 product1 = bf_002338c0_mul(_mm_shuffle_ps(input, input, 0x55), column1);
    __m128 product2 = _mm_shuffle_ps(input, input, 0xaa);
    product1 = bf_002338c0_add(product1, product0);
    product2 = bf_002338c0_mul(product2, column2);
    product2 = bf_002338c0_add(product2, product1);
    product2 = bf_002338c0_add_low(product2, _mm_load_ss(left + 9));
    bf_002338c0_store_row(out, 0, product2);

    /* The fourth original left lane survives the first row's stores.
     * Do not snapshot left[4..11] early: shifted overlap is observable. */
    product0 = bf_002338c0_mul(_mm_shuffle_ps(input, input, 0xff), column0);
    input = _mm_loadu_ps(left + 4);
    bf_002338c0_memory_order();
    product1 = bf_002338c0_mul(_mm_shuffle_ps(input, input, 0x00), column1);
    product2 = bf_002338c0_mul(_mm_shuffle_ps(input, input, 0x55), column2);
    product1 = bf_002338c0_add(product1, product0);
    product2 = bf_002338c0_add(product2, product1);
    product2 = bf_002338c0_add_low(product2, _mm_load_ss(left + 10));
    bf_002338c0_store_row(out, 1, product2);

    product0 = bf_002338c0_mul(_mm_shuffle_ps(input, input, 0xaa), column0);
    product1 = bf_002338c0_mul(_mm_shuffle_ps(input, input, 0xff), column1);
    product2 = _mm_load_ss(left + 8);
    bf_002338c0_memory_order();
    product2 = bf_002338c0_mul(_mm_shuffle_ps(product2, product2, 0x00), column2);
    product1 = bf_002338c0_add(product1, product0);
    product2 = bf_002338c0_add(product2, product1);
    product2 = bf_002338c0_add_low(product2, _mm_load_ss(left + 11));
    bf_002338c0_store_row(out, 2, product2);
}
#endif
