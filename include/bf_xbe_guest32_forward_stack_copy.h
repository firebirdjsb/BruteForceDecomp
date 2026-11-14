#ifndef BF_XBE_GUEST32_FORWARD_STACK_COPY_H
#define BF_XBE_GUEST32_FORWARD_STACK_COPY_H

#include "bf_xbe_guest32_stack_copy.h"

struct bf_guest32_forward_stack_copy_state : bf_guest32_stack_copy_state {
    std::uint32_t ebx;
};

void FUN_001d69d0(bf_guest32_forward_stack_copy_state& guest);
void FUN_001dc900(bf_guest32_forward_stack_copy_state& guest);

#endif
