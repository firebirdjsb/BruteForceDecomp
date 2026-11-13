#ifndef BF_XBE_GUEST32_AUDIO_XNET_LEAVES_H
#define BF_XBE_GUEST32_AUDIO_XNET_LEAVES_H

#include "bf_xbe_guest32_record_model.h"

// Preserve the original WORD access width, including unaligned guest addresses.
uint16_t bf_guest_read_u16(uint32_t guest_va);

// Captured guest-register/stack interfaces for host-side models only.
// They are not recovered native Xbox prototypes.
uint32_t FUN_00315838(uint32_t guest_ecx, uint32_t stack_arg_0,
                      uint32_t stack_arg_1);
uint32_t DSOUND__CMcpxStream_GetStatus(uint32_t guest_ecx,
                                      uint32_t stack_arg_0);
uint32_t FUN_00353125(uint32_t guest_ecx, uint32_t stack_arg_0,
                      uint32_t stack_arg_1);

#endif
