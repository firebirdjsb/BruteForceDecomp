#ifndef BF_GUEST32_SSE_SCALE_H
#define BF_GUEST32_SSE_SCALE_H

#include "bf_xbe_guest32_record_leaves.h"

enum class bf_sse_scale_opcode {
    load_scalar_xmm0, broadcast_xmm0, load_aligned_xmm1,
    multiply_xmm1_xmm0, store_aligned_xmm1
};

struct bf_sse_scale_operations {
    void* context;
    // Owns XMM and MXCSR state, the full memory operand, and exception delivery.
    // Return false if execution stops at this instruction before continuing.
    bool (*execute)(void*, std::uint32_t eip, bf_sse_scale_opcode, std::uint32_t guest_va);
};

bool FUN_002d9cc0(bf_guest32_constructor_state&, const bf_sse_scale_operations&);

#endif
