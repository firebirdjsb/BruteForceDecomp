/* Source-level Ghidra bit-lane normalization for Xbox x86 little-endian words.
 *
 * These operations preserve the mathematical meaning of Ghidra SUBPIECE /
 * PIECE notation for an ALREADY-DEFINED 32-bit unsigned word. They are NOT
 * evidence of original machine instructions, calling conventions, runtime
 * equivalence, storage identity, or prior initialization of stack locals.
 *
 * Never apply to an indeterminate stack value. An exact 1:1 claim still
 * requires the original XBE bytes and observed caller/stack/register ABI.
 */
#ifndef BF_X86_WORD_LANES_H
#define BF_X86_WORD_LANES_H
#include <stdint.h>
static inline uint32_t bf_x86_word_replace_lo8(uint32_t word, uint8_t byte_value)
{
    return (word & UINT32_C(0xffffff00)) | (uint32_t)byte_value;
}
static inline uint32_t bf_x86_word_replace_lo16(uint32_t word, uint16_t halfword)
{
    return (word & UINT32_C(0xffff0000)) | (uint32_t)halfword;
}
static inline uint32_t bf_x86_word_replace_lo24(uint32_t word, uint32_t lower_24)
{
    return (word & UINT32_C(0xff000000)) | (lower_24 & UINT32_C(0x00ffffff));
}
static inline uint16_t bf_x86_concat_u8(uint8_t high, uint8_t low)
{
    return (uint16_t)(((uint16_t)high << 8) | (uint16_t)low);
}
/* Byte lvalue to an existing 32-bit object; does NOT read other bytes.
 * This avoids inventing 24-bit C fields or initializing unknown stack bytes.
 * Caller must supply lane 0..3; all uses are literals grounded in the draft. */
static inline void bf_x86_word_store_byte(void *storage, unsigned lane, uint8_t value)
{
    ((unsigned char *)storage)[lane] = (unsigned char)value;
}
#endif
