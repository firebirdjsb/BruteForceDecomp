/* Brute Force original Xbox: 260-byte formatted diagnostic forwarding.
 * Entry: 0x0037a3e0
 * Input x86 body SHA-256: ACCF15107835017828FE3C173BFBD67C59B87A8245F74B7C382D8F80F9AF43FC
 * Evidence: original x86 0x0037a3e0..0x0037a412, ret (cdecl),
 * stack varargs address and calls 0x002eb322, 0x002fe1c0 (DbgPrint).
 * Status: C11 syntax / x86 stack-shape checked. Link and behavior unverified.
 */
#include "bf_format_x86.h"

void FUN_0037a3e0(const char *format, ...)
{
    char diagnostic_text[0x104];
    va_list arguments;

    va_start(arguments, format);
    (void)FUN_002eb322(diagnostic_text, (int32_t)sizeof diagnostic_text,
                       format, arguments);
    va_end(arguments);

    /* The original calls DbgPrint(text), not DbgPrint("%s", text). */
    (void)DbgPrint(diagnostic_text);
}
