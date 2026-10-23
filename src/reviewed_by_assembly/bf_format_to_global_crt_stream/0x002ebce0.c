/* Brute Force original Xbox: global CRT stream variadic output wrapper.
 * Entry: 0x002ebce0
 * Input x86 body SHA-256: 62E170FCBAC1EFAD7BDB740FA4AE8B94D5302DA69729F2757DD2C2E35934E261
 * Original 49-byte body 0x002EBCE0..0x002EBD10; cdecl plain ret.
 * The Ghidra name FID_conflict__wprintf is ambiguous (_printf/_wprintf).
 * No assumption is made about the concrete global stream structure.
 */
#include "bf_format_x86.h"
#include "bf_recovered_function_names.h"
/* Address-only symbol corresponding to VA 0x003B69A8 in original XBE. */
extern unsigned char DAT_003b69a8;
extern uint32_t __stbuf(void *stream);
extern void __ftbuf(uint32_t prior_state,void *stream);

int32_t bf_format_to_global_crt_stream(const char *format, ...)
{
    void *stream = &DAT_003b69a8;
    const uint32_t prior_state=__stbuf(stream);
    va_list arguments;
    va_start(arguments,format);
    const int32_t written=FUN_002edbde(stream,format,arguments);
    va_end(arguments);
    __ftbuf(prior_state,stream);
    return written;
}
