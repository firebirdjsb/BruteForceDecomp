/* Test C11 semantics of Ghidra x86 DWORD lane normalization.
 * NOT a behavioral test against the retail Xbox executable.
 */
#include "bf_x86_word_lanes.h"
#include <assert.h>
#include <stdint.h>
int main(void)
{
    const uint32_t initial = UINT32_C(0xdeadbeef);
    assert(bf_x86_word_replace_lo8(initial, UINT8_C(0x12)) == UINT32_C(0xdeadbe12));
    assert(bf_x86_word_replace_lo16(initial, UINT16_C(0x1234)) == UINT32_C(0xdead1234));
    assert(bf_x86_word_replace_lo24(initial, UINT32_C(0x123456)) == UINT32_C(0xde123456));
    assert(bf_x86_word_replace_lo24(initial, UINT32_C(0xabcdef00)) == UINT32_C(0xdecdef00));
    assert(bf_x86_concat_u8(UINT8_C(0x12), UINT8_C(0x34)) == UINT16_C(0x1234));
    {
        uint32_t word = UINT32_C(0x11223344);
        bf_x86_word_store_byte(&word, 2U, UINT8_C(0xab));
        assert(word == UINT32_C(0x11ab3344));
        bf_x86_word_store_byte(&word, 3U, UINT8_C(0x55));
        assert(word == UINT32_C(0x55ab3344));
    }
    for (uint32_t i = 0; i < UINT32_C(65536); ++i) {
        const uint32_t upper = i * UINT32_C(0x9e3779b1);
        const uint32_t word = upper | UINT32_C(0xff);
        const uint8_t low = (uint8_t)i;
        assert(bf_x86_word_replace_lo8(word, low) ==
               ((word & UINT32_C(0xffffff00)) | (uint32_t)low));
        assert(bf_x86_word_replace_lo16(word, (uint16_t)i) ==
               ((word & UINT32_C(0xffff0000)) | i));
    }
    return 0;
}
