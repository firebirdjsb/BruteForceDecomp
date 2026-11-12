#ifndef BF_XBE_GUEST32_RECORD_INITIALIZERS_H
#define BF_XBE_GUEST32_RECORD_INITIALIZERS_H

#include "bf_xbe_guest32_record_model.h"

// Explicit host models of the retail stack/ECX inputs and EAX outputs.
std::uint32_t __CreateFrameInfo__YAPAUFrameInfo__PAU1_PAX_Z(std::uint32_t guest_record,
                                                          std::uint32_t word);
std::uint32_t FUN_00311b03(std::uint32_t guest_ecx);
std::uint32_t FUN_0031aa6e(std::uint32_t guest_ecx);

#endif
