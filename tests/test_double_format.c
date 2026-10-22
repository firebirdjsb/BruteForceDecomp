/* Host mock test. Only tests same variadic arguments used by two callees. */
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
extern void FUN_002ff500(uint32_t,const char *,...);
static int first_calls,second_calls,debug_calls;
static char first[128],second[128],debug_text[128];
int32_t FID_conflict__vprintf(const char *fmt,va_list arguments) {
    first_calls++;return vsnprintf(first,sizeof first,fmt,arguments);
}
int32_t FUN_002eba94(char *out,const char *fmt,va_list arguments) {
    second_calls++;int32_t n=vsnprintf(out,128,fmt,arguments);
    strcpy(second,out);return n;
}
void XAPILIB__OutputDebugStringA(const char *msg) {
    debug_calls++;strcpy(debug_text,msg);
}
int main(void) {
    FUN_002ff500(0x87654321u,"trace %d %s",72,"OK");
    assert(first_calls==1 && second_calls==1 && debug_calls==1);
    assert(strcmp(first,"trace 72 OK")==0);
    assert(strcmp(second,first)==0 && strcmp(debug_text,first)==0);
    puts("double format, forwarded identical varargs: PASS (host mocks only)");
    return 0;
}
