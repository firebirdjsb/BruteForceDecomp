/* Guest WORD accesses retain the x86 16-bit operation width.
 * Backend implementation and guest fault/restart behavior are unresolved.
 */
#ifndef BF_XBE_GUEST32_WORD_MODEL_H
#define BF_XBE_GUEST32_WORD_MODEL_H
#include "bf_xbe_guest32_record_model.h"

std::uint16_t bf_guest_read_u16(std::uint32_t guest_va);
void bf_guest_write_u16(std::uint32_t guest_va, std::uint16_t value);

#endif
