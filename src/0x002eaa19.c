/* Brute Force original Xbox — bounded variadic output.
 * Entry: 0x002eaa19
 * Input x86 body SHA-256: 4AF2DF1E50706CA8ACF946EF2B28D50106962FCE202D9427FF04064C3DF66418
 * Original 87-byte CDECL frame / stack va args, flags 0x42; not original source.
 */
#include "bf_format_x86.h"
#include "bf_recovered_function_names.h"
int32_t bf_format_varargs_to_counted_buffer(char *buffer,int32_t capacity,const char *format,...)
{
    BF_FormatSinkState state;
    state.cursor=buffer;
    state.remaining_bits=(uint32_t)capacity;
    state.initial_buffer=buffer;
    state.flags=UINT32_C(0x42);
    va_list args;
    va_start(args,format);
    const int32_t result=FUN_002edbde(&state,format,args);
    va_end(args);
    if (buffer!=NULL) {
        state.remaining_bits-=UINT32_C(1);
        if ((state.remaining_bits & UINT32_C(0x80000000)) != 0)
            (void)__flsbuf(0,&state);
        else
            *state.cursor='\0';
    }
    return result;
}
