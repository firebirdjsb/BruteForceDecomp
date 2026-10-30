/* Brute Force original Xbox x86: format-and-forward diagnostic text.
 * Entry: 0x002ff500
 * Input x86 body SHA-256: 6D864C33CF3C54F3159B5EA6F50B8DBBA0767EBC786933AAC79AFF4ADB9F7A44
 * Original instructions reuse address of caller's 3rd stack argument for
 * CRT vprintf + vsprintf-like calls; 2048-byte output buffer is NOT bounded
 * by the second call. Status: C11 draft, ABI stack shape checked, runtime TBD.
 */
#include <stdint.h>
#include "bf_recovered_function_names.h"
#include <stdarg.h>

extern int32_t FID_conflict__vprintf(const char *format, va_list arguments);
extern int32_t FUN_002eba94(char *output, const char *format, va_list arguments);
extern void XAPILIB__OutputDebugStringA(const char *message);

void bf_format_then_output_debug_text(uint32_t ignored_first_stack_arg, const char *format, ...)
{
    char debug_text[0x800];
    va_list arguments;
    va_list first_pass;
    va_list second_pass;
    (void)ignored_first_stack_arg; /* original never reads [esp+4] */

    va_start(arguments, format);
    /* Both original functions receive the same caller-stack va_list pointer.
     * Copying is necessary to model by-value x86 va_list on other hosts. */
    va_copy(first_pass, arguments);
    (void)FID_conflict__vprintf(format, first_pass);
    va_end(first_pass);

    va_copy(second_pass, arguments);
    (void)FUN_002eba94(debug_text, format, second_pass);
    va_end(second_pass);
    va_end(arguments);

    /* Does not make the unbounded formatter safe: behavior preserved. */
    XAPILIB__OutputDebugStringA(debug_text);
}
