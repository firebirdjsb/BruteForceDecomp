/* Brute Force original Xbox — format into an existing NUL-terminated buffer.
 * Entry: 0x002eaefa
 * Input x86 body SHA-256: 803FB23A2A0CD428A97F0F08BFFAA4BB7AB190734BB736449A632DEBE6CB517F
 * Original 58-byte CDECL frame / stack varargs, flags 0x49.
 * No safety bound or underlying FUN_002EE515 semantics have been invented.
 */
#include "bf_format_x86.h"
extern int32_t FUN_002ee515(void *state,const char *format,va_list arguments);
void FUN_002eaefa(char *output,const char *format,...)
{
    BF_FormatSinkState state;
    uint32_t initial_length=0;
    const char *scan=output;
    while (*scan++!='\0') initial_length++;
    state.cursor=output;
    state.remaining_bits=initial_length;
    state.initial_buffer=output;
    state.flags=UINT32_C(0x49);
    va_list args;
    va_start(args,format);
    (void)FUN_002ee515(&state,format,args);
    va_end(args);
}
