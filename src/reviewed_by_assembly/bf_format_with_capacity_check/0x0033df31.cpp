/* Brute Force original Xbox: formatted-output forwarding wrapper.
 * Entry: 0x0033df31
 * Input x86 body SHA-256: 676D72C6A0EE88D3504DDEAC155CCB294288B1C4F2EA9609015268672DB2D3F8
 * Evidence: original x86 0x0033df31..0x0033df58, stack-based cdecl ret,
 * [ebp+0x14] first variable-argument address, and call 0x002eb322.
 * Status: C11 syntax / x86 stack-shape checked. Link and behavior unverified.
 */
#include "bf_format_x86.h"
#include "bf_recovered_function_names.h"

int32_t bf_format_with_capacity_check(char *output_buffer, int32_t output_capacity,
                     const char *format, ...)
{
    int32_t result;
    va_list arguments;
    if (output_capacity == 0)
        return -1;

    va_start(arguments, format);
    result = FUN_002eb322(output_buffer, output_capacity, format, arguments);
    va_end(arguments);

    /* Preserves the original nonstandard 'exactly full => -1' rule. */
    return (result == output_capacity) ? -1 : result;
}
