#ifndef BF_0030DBB0_GUEST_MODEL_H
#define BF_0030DBB0_GUEST_MODEL_H

#include "bf_xbe_guest32_record_model.h"

struct bf_0030dbb0_guest_result {
    std::uint32_t eax;
    std::uint32_t ecx;
    std::uint32_t edx;
    std::uint32_t eflags_defined;
    std::uint32_t eflags_values;
};

// Captured register and CMP flag outputs, independent of the native ABI.
bf_0030dbb0_guest_result FUN_0030dbb0();

#endif
