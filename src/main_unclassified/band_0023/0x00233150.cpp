/* Brute Force original Xbox - bounded scalar SSE and result transport.
 * Input x86 body SHA-256: 1766A887C36D56E928CAE5AE5B510AE831035818E02349681EF194A245BB93AB
 * Entry: 0x00233150, Ghidra index: 7779, label: FUN_00233150
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_00233_scalar_sse.h"
#include "bf_00233_sse_operations.h"

uint32_t bf_00233150_word(uint32_t angle)
{
    using namespace bf_00233_sse;
    const __m128 magnitude = scaled_magnitude(angle);
    const int32_t index = truncate(magnitude);
    const __m128 fraction = fold(magnitude, index, convert(index));
    // XOR at 0x002331A3 combines the original input sign and quadrant sign.
    const uint32_t sign = (angle & sign_mask) ^ quadrant_sign(index);
    return capture_lane(evaluate(fraction, sign));
}

long double FUN_00233150(float angle)
{
    return bf_00233_sse::transport_result(bf_00233150_word(bf_00233_sse::capture(angle)));
}
