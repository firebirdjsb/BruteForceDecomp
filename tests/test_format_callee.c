/* Host-only linked test of three C reconstruction drafts.
 * Uses mocked lower-level dependencies, NOT original Xbox behavior. */
#include "bf_format_x86.h"
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

extern int32_t FUN_0033df31(char *buf,int32_t size,const char *fmt,...);
extern void FUN_0037a3e0(const char *fmt,...);
static int backend_calls, flush_calls, debug_calls;
static char debug_text[300];

int32_t FUN_002edbde(void *opaque_state, const char *fmt, va_list arguments) {
    BF_FormatSinkState *s = (BF_FormatSinkState *)opaque_state;
    char tmp[1024];
    int n = vsnprintf(tmp,sizeof tmp,fmt,arguments);
    backend_calls++;
    if (s->cursor != NULL && n > 0) {
        uint32_t to_copy = (uint32_t)n;
        if (to_copy > s->remaining_bits) to_copy = s->remaining_bits;
        memcpy(s->cursor,tmp,to_copy);
        s->cursor += to_copy;
        s->remaining_bits -= to_copy;
    }
    return n;
}
int32_t __flsbuf(int32_t byte_value, BF_FormatSinkState *state) {
    assert(byte_value == 0 && state != NULL);
    flush_calls++;
    return 0;
}
uint32_t DbgPrint(const char *fmt,...) {
    debug_calls++;
    strncpy(debug_text,fmt,sizeof debug_text-1);
    debug_text[sizeof debug_text-1] = 0;
    return 0;
}
int main(void) {
    char b[300] = {0};
    assert(FUN_0033df31(b,0,"ignored %d",1) == -1);
    assert(backend_calls == 0);
    assert(FUN_0033df31(b,20,"hello %u",12U) == 8);
    assert(backend_calls == 1 && flush_calls == 0 && strcmp(b,"hello 12") == 0);
    assert(FUN_0033df31(b,5,"hello") == -1 && backend_calls == 2 && flush_calls == 1);
    FUN_0037a3e0("code %d",15);
    assert(backend_calls == 3 && flush_calls == 1 && debug_calls == 1);
    assert(strcmp(debug_text,"code 15") == 0);
    puts("three-function linked mock validation: PASS (not Xbox semantics)");
    return 0;
}
