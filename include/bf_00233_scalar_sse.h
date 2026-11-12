#ifndef BF_00233_SCALAR_SSE_H
#define BF_00233_SCALAR_SSE_H

#include <stdint.h>

uint32_t bf_00232d40_word(uint32_t input);
long double FUN_00232d40(float input);
long double FUN_00232e80(float input);

// Bounded operations over captured guest binary32 words. Output addresses
// designate mapped native storage. Whole guest register and stack transport
// and guest exception delivery are outside these interfaces.
void bf_00233020_words(uint32_t angle, void *second_stack_output, void *third_stack_output);
uint32_t bf_00233150_word(uint32_t angle);
uint32_t bf_002331f0_word(uint32_t angle);
uint32_t bf_00233290_word(uint32_t angle);

void FUN_00233020(float angle, float *second_stack_output, float *third_stack_output);
long double FUN_00233150(float angle);
long double FUN_002331f0(float angle);
long double FUN_00233290(float angle);

// The two original E8 sites in 0x00266390 load EAX, ESI, EDX, ECX and BL.
// The four storage arguments are mapped native addresses for those registers.
void FUN_00233590(const void *eax_storage, void *esi_output, void *edx_output,
                  void *ecx_output, uint8_t bl);

#endif
