#ifndef BF_FORMAT_X86_H
#define BF_FORMAT_X86_H
#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
/* Stack layout confirmed for Xbox x86 FUN_002eb322 at 0x002EB322:
 * 0: cursor pointer; 4: remaining count; 8: initial pointer;
 * 12: raw flags (0x42). Actual field semantics/linked callers require review.
 * On a 64-bit host, this struct is NOT Xbox binary-layout-compatible. */
typedef struct BF_FormatSinkState {
    char *cursor;
    uint32_t remaining_bits;
    char *initial_buffer;
    uint32_t flags;
} BF_FormatSinkState;
#if UINTPTR_MAX == UINT32_MAX
_Static_assert(sizeof(BF_FormatSinkState) == 16,
               "Xbox original format state must be 16 bytes");
_Static_assert(offsetof(BF_FormatSinkState, remaining_bits) == 4,
               "Xbox remaining-count offset");
#endif
/* The following declarations model x86 stack arguments only, not full
 * verified SDK types or a portable Windows linker contract. */
extern int32_t FUN_002edbde(BF_FormatSinkState *state,
                             const char *format, va_list arguments);
extern int32_t __flsbuf(int32_t byte_value, BF_FormatSinkState *state);
extern int32_t FUN_002eb322(char *buffer, int32_t capacity,
                            const char *format, va_list arguments);
extern uint32_t DbgPrint(const char *format, ...);
#endif
