/* Brute Force original Xbox - bounded scalar SSE and result transport.
 * Input x86 body SHA-256: BA0A80E2791F9023E2DD7CD3B4FD59E978CEDE19F4F895C6CAFA62A2667EDF0F
 * Entry: 0x00232d40, Ghidra index: 7775, label: FUN_00232d40
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_00233_scalar_sse.h"
#include "bf_00233_sse_operations.h"

uint32_t bf_00232d40_word(uint32_t input)
{
    using namespace bf_00233_sse;
    const __m128 original = load(input);
    __m128 magnitude = load(input & ~sign_mask);
    __m128 argument = original;
    // 0x00232D56 compares magnitude to the binary32 word at 0x00394318.
    const bool reduced = !below(magnitude, load(0x3f11eb85u));
    if (reduced) {
        // 0x00232D70 uses the binary32 word 0.5 at 0x0038D880.
        argument = square_root(multiply(subtract(load(one), magnitude), load(0x3f000000u)));
        magnitude = argument;
    }

    // Binary32 coefficients at 0x003A4F9C and 0x00394314 down to 0x003942FC.
    constexpr uint32_t short_terms[] = {0x3e2aaaabu, 0x3d99999au, 0x3d36db6eu};
    constexpr uint32_t extra_terms[] = {0x3cb745d1u, 0x3c8e2762u, 0x3c64cccdu, 0x3c3d43c4u};
    const __m128 squared = multiply(argument, argument);
    __m128 power = argument;
    __m128 result = argument;
    for (uint32_t coefficient : short_terms) {
        power = multiply(power, squared);
        result = add(result, multiply(power, load(coefficient)));
    }
    power = multiply(power, squared);
    const __m128 last_short_term = multiply(power, load(0x3cf8e38eu));
    // The COMISS at 0x00232DDC precedes the last short addition.
    const bool short_only = below(magnitude, load(0x3ea3d70au));
    result = add(result, last_short_term);
    if (!short_only) {
        for (uint32_t coefficient : extra_terms) {
            power = multiply(power, squared);
            result = add(result, multiply(power, load(coefficient)));
        }
    }
    if (reduced) {
        result = add(result, result);
        // Comparison zero and corrections are at 0x0038D850, 0x0038D8D0 and 0x0038D8C0.
        result = below(original, load(0)) ? add(result, load(0xbfc90fdbu))
                                         : subtract(load(0x3fc90fdbu), result);
    }
    return capture_lane(result);
}

long double FUN_00232d40(float input)
{
    return bf_00233_sse::transport_result(bf_00232d40_word(bf_00233_sse::capture(input)));
}
