/* Function-specific host memory operations for original entries
 * 0x0001FD10 / 0x0001FC40 / 0x0001FDD0. Not an Xbox calling convention.
 * Original EAX output and ECX source must be bound by each caller separately.
 * Source offsets and output sizes below are guest bytes, not structure fields.
 * No restrict: source and the twelve-byte output may overlap. The original
 * x87 scratch stack must be disjoint; guest mapping and scratch alias/fault
 * behavior remain ABI_UNVERIFIED. C long double/float are arithmetic proxies,
 * not x87 control/status, signaling-NaN, precision or exception emulation.
 */
#ifndef BF_0001FC40_GETTER_OPERATIONS_H
#define BF_0001FC40_GETTER_OPERATIONS_H
#include <stdint.h>
#include <string.h>
_Static_assert(sizeof(float) == 4, "original m32fp is four bytes");

static inline void bf_0001fd10_produce(void *eax_output, const void *ecx_source)
{
    const unsigned char *source = ecx_source;
    unsigned char *output = eax_output;
    float third_input, second_input, third_spill, second_spill;
    long double second_x87;
    uint32_t first_bits;
    /* 1fd13..1fd23: read +0x18, spill m32fp; read +0x0c;
     * read +0 as raw MOV bits before spilling the second component. */
    memcpy(&third_input, source + 0x18, 4);
    third_spill = (float)(long double)third_input;
    memcpy(&second_input, source + 0x0c, 4);
    second_x87 = (long double)second_input;
    memcpy(&first_bits, source, 4);
    second_spill = (float)second_x87;
    /* 1fd27/1fd2d/1fd30: three four-byte writes in offset order. */
    memcpy(output, &first_bits, 4);
    memcpy(output + 4, &second_spill, 4);
    memcpy(output + 8, &third_spill, 4);
}

static inline void bf_0001fc40_produce(void *eax_output, const void *ecx_source)
{
    const unsigned char *source = ecx_source;
    unsigned char *output = eax_output;
    float third_input, second_input, first_input;
    float third_spill, second_spill, first_spill;
    /* 1fc43..1fc5c: m32fp reads +0x1c, +0x10, +4, in that order.
     * The first two FLD/FSTP pairs use four-byte local scratch spills. */
    memcpy(&third_input, source + 0x1c, 4);
    third_spill = (float)(long double)third_input;
    memcpy(&second_input, source + 0x10, 4);
    second_spill = (float)(long double)second_input;
    memcpy(&first_input, source + 4, 4);
    first_spill = (float)(long double)first_input;
    /* 1fc5c/1fc5e/1fc61: four-byte output writes +0, +4, +8. */
    memcpy(output, &first_spill, 4);
    memcpy(output + 4, &second_spill, 4);
    memcpy(output + 8, &third_spill, 4);
}

static inline void bf_0001fdd0_produce(void *eax_output, const void *ecx_source)
{
    const unsigned char *source = ecx_source;
    unsigned char *output = eax_output;
    float third_input, second_input, first_input;
    float third_spill, second_spill, first_spill;
    /* 1fdd3..1fdec: m32fp reads +0x20, +0x14, +8, in that order. */
    memcpy(&third_input, source + 0x20, 4);
    third_spill = (float)(long double)third_input;
    memcpy(&second_input, source + 0x14, 4);
    second_spill = (float)(long double)second_input;
    memcpy(&first_input, source + 8, 4);
    first_spill = (float)(long double)first_input;
    /* 1fdec/1fdee/1fdf1: four-byte output writes +0, +4, +8. */
    memcpy(output, &first_spill, 4);
    memcpy(output + 4, &second_spill, 4);
    memcpy(output + 8, &third_spill, 4);
}
#endif
