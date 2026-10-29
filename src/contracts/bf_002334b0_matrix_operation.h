/* Memory operation from original 0x002334b0, body SHA-256
 * 9BB0B4B943F96BFC083B393902034811AAC5F139DD27A66A158A7FE6308AAC60.
 * EAX: 36 output bytes; ECX/EDX: matrix operand memory. No restrict:
 * each original output store precedes the next component's input reads.
 * Host long double is an arithmetic proxy; guest x87 control/status,
 * faults, register ABI and guest address translation remain ABI_UNVERIFIED.
 */
#ifndef BF_002334B0_MATRIX_OPERATION_H
#define BF_002334B0_MATRIX_OPERATION_H
#include <string.h>
_Static_assert(sizeof(float) == 4, "Original m32fp requires four bytes");
static inline float bf_002334b0_read(const unsigned char *address)
{
    float value;
    memcpy(&value, address, 4);
    return value;
}
static inline void bf_002334b0_produce(void *eax_output,
                                      const void *ecx_matrix,
                                      const void *edx_matrix)
{
    unsigned char *output = eax_output;
    const unsigned char *ecx = ecx_matrix;
    const unsigned char *edx = edx_matrix;
    long double sum, term;
    float operand, result;
    /* FSTP m32fp at 0x002334c4, output +0x00. */
    sum = (long double)bf_002334b0_read(edx + 0x04);
    operand = bf_002334b0_read(ecx + 0x0c);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(edx + 0x00);
    operand = bf_002334b0_read(ecx + 0x00);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(ecx + 0x18);
    operand = bf_002334b0_read(edx + 0x08);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x00, &result, 4);
    /* FSTP m32fp at 0x002334db, output +0x04. */
    sum = (long double)bf_002334b0_read(edx + 0x04);
    operand = bf_002334b0_read(ecx + 0x10);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(ecx + 0x1c);
    operand = bf_002334b0_read(edx + 0x08);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(ecx + 0x04);
    operand = bf_002334b0_read(edx + 0x00);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x04, &result, 4);
    /* FSTP m32fp at 0x002334f3, output +0x08. */
    sum = (long double)bf_002334b0_read(edx + 0x04);
    operand = bf_002334b0_read(ecx + 0x14);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(ecx + 0x20);
    operand = bf_002334b0_read(edx + 0x08);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(ecx + 0x08);
    operand = bf_002334b0_read(edx + 0x00);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x08, &result, 4);
    /* FSTP m32fp at 0x0023350b, output +0x0c. */
    sum = (long double)bf_002334b0_read(edx + 0x10);
    operand = bf_002334b0_read(ecx + 0x0c);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(edx + 0x14);
    operand = bf_002334b0_read(ecx + 0x18);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(edx + 0x0c);
    operand = bf_002334b0_read(ecx + 0x00);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x0c, &result, 4);
    /* FSTP m32fp at 0x00233524, output +0x10. */
    sum = (long double)bf_002334b0_read(edx + 0x14);
    operand = bf_002334b0_read(ecx + 0x1c);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(edx + 0x10);
    operand = bf_002334b0_read(ecx + 0x10);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(edx + 0x0c);
    operand = bf_002334b0_read(ecx + 0x04);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x10, &result, 4);
    /* FSTP m32fp at 0x0023353d, output +0x14. */
    sum = (long double)bf_002334b0_read(edx + 0x14);
    operand = bf_002334b0_read(ecx + 0x20);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(edx + 0x10);
    operand = bf_002334b0_read(ecx + 0x14);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(edx + 0x0c);
    operand = bf_002334b0_read(ecx + 0x08);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x14, &result, 4);
    /* FSTP m32fp at 0x00233555, output +0x18. */
    sum = (long double)bf_002334b0_read(edx + 0x18);
    operand = bf_002334b0_read(ecx + 0x00);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(ecx + 0x18);
    operand = bf_002334b0_read(edx + 0x20);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(edx + 0x1c);
    operand = bf_002334b0_read(ecx + 0x0c);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x18, &result, 4);
    /* FSTP m32fp at 0x0023356e, output +0x1c. */
    sum = (long double)bf_002334b0_read(ecx + 0x1c);
    operand = bf_002334b0_read(edx + 0x20);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(ecx + 0x10);
    operand = bf_002334b0_read(edx + 0x1c);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(ecx + 0x04);
    operand = bf_002334b0_read(edx + 0x18);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x1c, &result, 4);
    /* FSTP m32fp at 0x00233587, output +0x20. */
    sum = (long double)bf_002334b0_read(ecx + 0x20);
    operand = bf_002334b0_read(edx + 0x20);
    sum *= (long double)operand;
    term = (long double)bf_002334b0_read(ecx + 0x14);
    operand = bf_002334b0_read(edx + 0x1c);
    term *= (long double)operand;
    sum += term;
    term = (long double)bf_002334b0_read(ecx + 0x08);
    operand = bf_002334b0_read(edx + 0x18);
    term *= (long double)operand;
    sum += term;
    result = (float)sum;
    memcpy(output + 0x20, &result, 4);
}
#endif
