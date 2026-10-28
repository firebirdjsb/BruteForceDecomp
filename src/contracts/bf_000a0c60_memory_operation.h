/* Memory-operation draft for original 0x000A0C60, not an Xbox entry bridge.
 * EAX addresses twelve output bytes, ECX addresses the source matrix words,
 * EDX addresses twelve input bytes. Host pointers bind only those operations.
 * Original scratch-stack aliasing, guest translation, x87 control/status,
 * faults and extended precision remain ABI_UNVERIFIED. No restrict: the
 * input, matrix and output may overlap; all reads precede output stores.
 */
#ifndef BF_000A0C60_MEMORY_OPERATION_H
#define BF_000A0C60_MEMORY_OPERATION_H
#include <string.h>
_Static_assert(sizeof(float) == 4, "original m32fp is four bytes");

static inline float bf_000a0c60_read_f32(const unsigned char *address)
{
    float value;
    memcpy(&value, address, 4);
    return value;
}

static inline void bf_000a0c60_produce(void *eax_output,
                                     const void *ecx_matrix,
                                     const void *edx_input)
{
    const unsigned char *matrix = ecx_matrix;
    const unsigned char *input = edx_input;
    unsigned char *output = eax_output;
    float input_word, matrix_word, dx, dy, z_spill, y_result, z_result;
    long double z_extended, x, y, z;

    /* 0xa0c63..0xa0c72: FSUB then FSTP m32fp for X and Y. */
    input_word = bf_000a0c60_read_f32(input);
    matrix_word = bf_000a0c60_read_f32(matrix + 0x24);
    dx = (float)((long double)input_word - (long double)matrix_word);
    input_word = bf_000a0c60_read_f32(input + 4);
    matrix_word = bf_000a0c60_read_f32(matrix + 0x28);
    dy = (float)((long double)input_word - (long double)matrix_word);
    /* 0xa0c76..0xa0c80: FST m32fp leaves the UNSPILLED Z in ST(0).
     * The first dot product uses that value, the other two use z_spill.
     * long double is a host arithmetic proxy, not an x87 implementation. */
    input_word = bf_000a0c60_read_f32(input + 8);
    matrix_word = bf_000a0c60_read_f32(matrix + 0x2c);
    z_extended = (long double)input_word - (long double)matrix_word;
    z_spill = (float)z_extended;
    x = z_extended * (long double)bf_000a0c60_read_f32(matrix + 0x18);
    x += (long double)dy * (long double)bf_000a0c60_read_f32(matrix + 0x0c);
    x += (long double)dx * (long double)bf_000a0c60_read_f32(matrix);
    /* 0xa0c94..0xa0cab: (Z*m1c + Y*m10) + X*m04. */
    y = (long double)z_spill * (long double)bf_000a0c60_read_f32(matrix + 0x1c);
    y += (long double)dy * (long double)bf_000a0c60_read_f32(matrix + 0x10);
    y += (long double)dx * (long double)bf_000a0c60_read_f32(matrix + 4);
    /* 0xa0cad..0xa0cc4: (Z*m20 + Y*m14) + X*m08. */
    z = (long double)z_spill * (long double)bf_000a0c60_read_f32(matrix + 0x20);
    z += (long double)dy * (long double)bf_000a0c60_read_f32(matrix + 0x14);
    z += (long double)dx * (long double)bf_000a0c60_read_f32(matrix + 8);
    /* 0xa0cc6..0xa0cdb: spill Z then Y; write output +8, +0, +4.
     * No output write can alter a later source read. */
    z_result = (float)z;
    y_result = (float)y;
    memcpy(output + 8, &z_result, 4);
    input_word = (float)x;
    memcpy(output, &input_word, 4);
    memcpy(output + 4, &y_result, 4);
}
#endif
