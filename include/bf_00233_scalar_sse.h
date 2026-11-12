#ifndef BF_00233_SCALAR_SSE_H
#define BF_00233_SCALAR_SSE_H

#include <stdint.h>

// Bounded operations over captured guest binary32 words. Output addresses
// designate mapped native storage. Whole guest register and stack transport
// and guest exception delivery are outside these interfaces.
void bf_00233020_words(uint32_t angle, void *second_stack_output, void *third_stack_output);
uint32_t bf_002331f0_word(uint32_t angle);

void FUN_00233020(float angle, float *second_stack_output, float *third_stack_output);
long double FUN_002331f0(float angle);

#endif
