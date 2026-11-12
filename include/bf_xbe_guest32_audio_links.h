#ifndef BF_XBE_GUEST32_AUDIO_LINKS_H
#define BF_XBE_GUEST32_AUDIO_LINKS_H

#include "bf_xbe_guest32_record_model.h"

// One guest WORD access, including unaligned addresses. The runtime backend
// must preserve the original access width and little-endian representation.
void bf_guest_write_u16(uint32_t guest_va, uint16_t value);

// Captured register and stack values for the host-side models.
uint32_t FUN_003118c0(uint32_t node);
uint32_t FUN_00315f72(uint32_t guest_ecx, uint32_t node);
uint32_t FUN_0031aa47(uint32_t node, uint32_t value, uint32_t head);
uint32_t FUN_0031aa11(uint32_t node, uint32_t first_word, uint32_t second_word, uint32_t head);
uint32_t FUN_0031ae9c(uint32_t target, uint32_t source);

#endif
