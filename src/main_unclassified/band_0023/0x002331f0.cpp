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
    return capture_lane(evaluate(fraction, quadrant_sign(index)));
}

long double FUN_002331f0(float angle)
{
    return bf_00233_sse::transport_result(bf_002331f0_word(bf_00233_sse::capture(angle)));
}
