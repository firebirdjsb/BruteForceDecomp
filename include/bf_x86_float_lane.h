/* Preserve the 4-byte IEEE-754 storage lanes observed in Xbox x86.
 * Pure C11 byte copy; no numeric float-to-integer conversion.
 * Does not provide an x87 arithmetic emulator or PC pointer translation.
 */
#ifndef BF_X86_FLOAT_LANE_H
#define BF_X86_FLOAT_LANE_H
#include <stdint.h>
#include <string.h>
_Static_assert(sizeof(float)==sizeof(uint32_t), "Xbox f32 requires a four-byte float");
static inline void bf_x86_store_f32_word(uint32_t *destination, float value)
{
    memcpy(destination,&value,sizeof(value));
}
static inline uint32_t bf_x86_f32_word(float value)
{
    uint32_t bits;
    memcpy(&bits,&value,sizeof(bits));
    return bits;
}
#endif
