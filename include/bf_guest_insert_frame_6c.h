/* Original Xbox 0x002A2710 -> 0x002A27B0 guest stack contract.
 * 0x002A2764 RET 0x6C proves a 27-DWORD incoming stack frame.
 * Caller passes EAX = allocated result, ECX = &frame.word[1].
 * The callee consumes guest stack words 0, 7, 8 and the pointer to 9.
 * The native compiler ABI is not the Xbox ABI; adapter remains TODO.
 * No original executable bytes or copyrighted source are stored here. */
#ifndef BF_GUEST_INSERT_FRAME_6C_H
#define BF_GUEST_INSERT_FRAME_6C_H
#include <stdint.h>
#include <stddef.h>

typedef struct bf_guest_insert_frame_6c {
    uint32_t word[27];
} bf_guest_insert_frame_6c;
_Static_assert(sizeof(bf_guest_insert_frame_6c) == 0x6c,
               "0x002A2764 Xbox RET 0x6C");

uint32_t *FUN_002a27b0(uint32_t *guest_result,
                        const uint32_t *six_guest_words,
                        uint32_t guest_word_0,
                        uint32_t guest_word_7,
                        float guest_word_8_as_float,
                        const uint32_t *guest_word_9_address);
#endif
