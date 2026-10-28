/* Fixed-value storage/alias regression fixtures, not an original Xbox ABI test.
 * Expected words below are independent, exactly representable golden values.
 * No original executable, assets, or private machine data are included. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "../src/contracts/bf_0001fc40_getter_operations.h"
#include "../src/contracts/bf_000a0c60_memory_operation.h"

typedef void (*getter_operation)(void *, const void *);

int main(void)
{
    static const float matrix[12] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30
    };
    static const float input[3] = {12, 23, 34};
    /* Differences are (2,3,4); dot products are 42,51,60. */
    static const float transformed[3] = {42, 51, 60};
    static const float selected[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    static const getter_operation getters[3] = {
        bf_0001fd10_produce, bf_0001fc40_produce, bf_0001fdd0_produce
    };
    unsigned char initial[160], actual[160], expected[160];
    unsigned comparisons = 0;
    for (unsigned offset = 0; offset <= sizeof(initial) - 12; ++offset) {
        for (unsigned operation = 0; operation < 3; ++operation) {
            memset(initial, 0xa5, sizeof(initial));
            memcpy(initial + 32, matrix, 36);
            memcpy(actual, initial, sizeof(actual));
            memcpy(expected, initial, sizeof(expected));
            memcpy(expected + offset, selected[operation], 12);
            getters[operation](actual + offset, actual + 32);
            if (memcmp(actual, expected, sizeof(actual))) {
                fprintf(stderr, "getter %u output byte %u mismatch\n", operation, offset);
                return 1;
            }
            ++comparisons;
        }
        /* FD10's first component is an integer MOV, including signaling-NaN
         * bits. Its other components remain finite; no x87 NaN claim here. */
        {
            uint32_t raw_first = UINT32_C(0x7f812345);
            memset(initial, 0xa5, sizeof(initial));
            memcpy(initial + 32, matrix, 36);
            memcpy(initial + 32, &raw_first, 4);
            memcpy(actual, initial, sizeof(actual));
            memcpy(expected, initial, sizeof(expected));
            memcpy(expected + offset, &raw_first, 4);
            memcpy(expected + offset + 4, &selected[0][1], 8);
            bf_0001fd10_produce(actual + offset, actual + 32);
            if (memcmp(actual, expected, sizeof(actual))) {
                fprintf(stderr, "raw MOV output byte %u mismatch\n", offset);
                return 1;
            }
            ++comparisons;
        }
        memset(initial, 0xa5, sizeof(initial));
        memcpy(initial + 16, matrix, sizeof(matrix));
        memcpy(initial + 80, input, sizeof(input));
        memcpy(actual, initial, sizeof(actual));
        memcpy(expected, initial, sizeof(expected));
        memcpy(expected + offset, transformed, sizeof(transformed));
        bf_000a0c60_produce(actual + offset, actual + 16, actual + 80);
        if (memcmp(actual, expected, sizeof(actual))) {
            fprintf(stderr, "transform output byte %u mismatch\n", offset);
            return 1;
        }
        ++comparisons;
    }
    printf("PASS %u golden full-buffer/unaligned/overlap memory-operation cases\n", comparisons);
    return 0;
}
