/* Brute Force original Xbox - bounded scalar SSE and result transport.
 * Input x86 body SHA-256: 51DE2978460DD0EEEAFEC427B85E551ADA075137DBCA706B5D4D32D84F101BB6
 * Entry: 0x00233290, Ghidra index: 7781, label: FUN_00233290
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_00233_scalar_sse.h"
#include "bf_00233_sse_operations.h"

uint32_t bf_00233290_word(uint32_t angle)
{
    using namespace bf_00233_sse;
    const __m128 magnitude = scaled_magnitude(angle);
    const __m128 shifted = add(magnitude, load(one));
    const int32_t shifted_index = truncate(shifted);
    const __m128 shifted_fraction = fold(shifted, shifted_index, convert(shifted_index));
    const int32_t base_index = truncate(magnitude);
    const __m128 base_fraction = fold(magnitude, base_index, convert(base_index));

    // The two XORs at 0x002332EB and 0x0023332D transfer both quadrant signs
    // to the numerator. The denominator retains its original folded sign.
    const uint32_t sign = (angle & sign_mask) ^ quadrant_sign(shifted_index) ^ quadrant_sign(base_index);
    const scalar_pair values = evaluate_pair(shifted_fraction, base_fraction, 0, sign);
    __m128 reciprocal = values.shifted;
    // 0x00233392 uses the CPU's approximate RCPSS, followed by MULSS.
    __asm__ volatile("rcpss %0, %0" : "+x"(reciprocal) : : "memory");
    return capture_lane(multiply(reciprocal, values.base));
}

long double FUN_00233290(float angle)
{
    return bf_00233_sse::transport_result(bf_00233290_word(bf_00233_sse::capture(angle)));
}
