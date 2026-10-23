/* Brute Force original Xbox: formatted output to a counted buffer.
 * Entry: 0x002eb322
 * Input x86 body SHA-256: 22687E9F81A4EDA6B9CCBB70C2E30F015110C3B601DB77F650C785B3362382E4
 * Evidence: 0x002eb322..0x002eb377, 16-byte on-stack state at EBP-0x20;
 * calls 0x002edbde and 0x002ed1ef (__flsbuf), cdecl ret.
 * Status: C11 + x86 layout syntax verified; original callee behavior unverified.
 */
#include "bf_format_x86.h"
#include "bf_recovered_function_names.h"

int32_t bf_format_to_counted_buffer(char *buffer, int32_t capacity,
                     const char *format, va_list arguments)
{
    BF_FormatSinkState state;
    int32_t format_result;
    state.cursor = buffer;
    state.remaining_bits = (uint32_t)capacity;
    state.initial_buffer = buffer;
    state.flags = UINT32_C(0x42);

    format_result = FUN_002edbde(&state, format, arguments);
    if (buffer != NULL) {
        /* x86 DEC wraps in 32 bits. Signed decrement at INT32_MIN is UB. */
        state.remaining_bits -= UINT32_C(1);
        if ((state.remaining_bits & UINT32_C(0x80000000)) != 0) {
            (void)__flsbuf(0, &state);
        } else {
            *state.cursor = '\0';
        }
    }
    return format_result;
}
