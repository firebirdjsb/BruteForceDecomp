/* Captured-register interfaces for bounded XNET guest-memory models.
 * These are host-side model signatures, not recovered Xbox C++ prototypes.
 */
#ifndef BF_XBE_GUEST32_XNET_RECORD_MODELS_H
#define BF_XBE_GUEST32_XNET_RECORD_MODELS_H

#include "bf_xbe_guest32_record_model.h"

// guest_ecx and stack_arg_0 are the raw values observed at entry. The original
// function returns head in EAX and performs RET 4; native ABI is unverified.
uint32_t FUN_00353101(uint32_t guest_ecx, uint32_t stack_arg_0);

// ECX is the only observed input. EAX is zero at end-of-list or the matching
// node base. The original ends with plain RET; native ABI is unverified.
uint32_t FUN_003537fa(uint32_t guest_ecx);

uint32_t FUN_00353829(uint32_t guest_ecx);

#endif
