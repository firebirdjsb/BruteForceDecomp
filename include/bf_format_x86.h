#ifndef BF_FORMAT_X86_H
#define BF_FORMAT_X86_H
#include <stdarg.h>
#include <stdint.h>
/* Analysis-only declarations; 32-bit x86 stack conventions inferred from
 * original calls. The callee implementations require independent review. */
extern int32_t FUN_002eb322(char *buffer, int32_t capacity,
                            const char *format, va_list arguments);
extern uint32_t DbgPrint(const char *format, ...);
#endif
