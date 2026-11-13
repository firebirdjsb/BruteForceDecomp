#ifndef BF_0035FEB0_GUEST_MODEL_H
#define BF_0035FEB0_GUEST_MODEL_H

#include "bf_xbe_guest32_record_model.h"

struct bf_0035feb0_guest_result {
    std::uint32_t eax;
    std::uint32_t edx;
    std::uint32_t eflags_defined;
    std::uint32_t eflags_values;
};

// ECX is preserved. The model reads the stack DWORD only on the original path.
bf_0035feb0_guest_result FUN_0035feb0(std::uint32_t guest_ecx, std::uint32_t guest_esp);

#endif
