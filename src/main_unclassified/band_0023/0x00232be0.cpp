/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 104CDE5AD565A5444DD515A4744D7BD78CE63290CAED96243DFC37262547C65C
 * Entry: 0x00232be0, Ghidra index: 7774, label: FUN_00232be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>

/* Constants are raw binary32 words read from the hash-pinned original XBE.
 * Only scalar SSE result dataflow is reconstructed here. Inherited upper XMM
 * lanes, MXCSR exceptions and the full x87/guest return ABI remain unverified. */
static __m128 bf_232be0_word(uint32_t bits)
{
    float value;
    _Static_assert(sizeof value == sizeof bits, "binary32 constant storage");
    memcpy(&value, &bits, sizeof value);
    return _mm_load_ss(&value);
}

float10 FUN_00232be0(float param_1)
{
    __m128 input = _mm_load_ss(&param_1);
    __m128 reciprocal = _mm_rcp_ss(input);
    __m128 sign = bf_232be0_word(UINT32_C(0x80000000));
    __m128 negative_abs = _mm_or_ps(input, sign);
    __m128 minus_one = bf_232be0_word(UINT32_C(0xbf800000));
    __m128 square, value, other, result;
    /* COMISS/JB at 0x232bfb..0x232c02 takes the branch on unordered too.
     * CMPNGE explicitly represents the same low-lane branch predicate. */
    int large_path = _mm_movemask_ps(_mm_cmpnge_ss(negative_abs, minus_one)) & 1;
    square = large_path ? _mm_mul_ss(reciprocal, reciprocal)
                        : _mm_mul_ss(input, input);
    value = _mm_add_ss(bf_232be0_word(UINT32_C(0x3fa3cf0f)), square);
    value = _mm_rcp_ss(value);
    value = _mm_mul_ss(value, bf_232be0_word(UINT32_C(0xbdbbb0f6)));
    other = _mm_add_ss(bf_232be0_word(UINT32_C(0x400c9f34)), square);
    value = _mm_add_ss(value, other);
    value = _mm_rcp_ss(value);
    value = _mm_mul_ss(value, bf_232be0_word(UINT32_C(0xbfb2a61f)));
    other = _mm_add_ss(bf_232be0_word(UINT32_C(0x40da37c2)), square);
    value = _mm_add_ss(value, other);
    value = _mm_rcp_ss(value);
    value = _mm_mul_ss(value, bf_232be0_word(UINT32_C(0xc2bcc9b1)));
    other = _mm_add_ss(bf_232be0_word(UINT32_C(0x41e1a443)), square);
    __m128 scaled = _mm_mul_ss(large_path ? reciprocal : input,
                               bf_232be0_word(UINT32_C(0x414e36d1)));
    value = _mm_add_ss(value, other);
    value = _mm_rcp_ss(value);
    if (large_path) {
        value = _mm_mul_ss(value, scaled);
        result = _mm_or_ps(_mm_and_ps(input, sign),
                           bf_232be0_word(UINT32_C(0x3fc90fdb)));
        result = _mm_sub_ss(result, value);
    } else {
        result = _mm_mul_ss(scaled, value);
    }
    /* Original MOVSS to the incoming slot then FLD at 0x232d33/0x232d38. */
    return (float10)_mm_cvtss_f32(result);
}
