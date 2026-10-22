/* Host-only behavioral tests with mocks; NOT Xbox or binary equivalence tests. */
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "bf_format_x86.h"

extern int32_t FUN_0033df31(char *buf,int32_t size,const char *fmt,...);
extern void FUN_0037a3e0(const char *fmt,...);

static int formatter_calls;
static int debug_calls;
static char last_debug_text[300];

int32_t FUN_002eb322(char *buf, int32_t size, const char *format, va_list arguments) {
    formatter_calls++;
    return (int32_t)vsnprintf(buf,(size_t)size,format,arguments);
}
uint32_t DbgPrint(const char *format,...) {
    debug_calls++;
    strncpy(last_debug_text,format,sizeof(last_debug_text)-1);
    last_debug_text[sizeof(last_debug_text)-1] = 0;
    return 0;
}
int main(void) {
    char buffer[300] = {0};
    assert(FUN_0033df31(buffer,0,"hello") == -1 && formatter_calls == 0);
    assert(FUN_0033df31(buffer,20,"hello %u",12U) == 8);
    assert(formatter_calls == 1 && strcmp(buffer,"hello 12") == 0);
    assert(FUN_0033df31(buffer,5,"hello") == -1 && formatter_calls == 2);
    FUN_0037a3e0("debug %u",42U);
    assert(formatter_calls == 3 && debug_calls == 1);
    assert(strcmp(last_debug_text,"debug 42") == 0);
    puts("host C11 format bridge tests: PASS (mocked dependencies only)");
    return 0;
}
