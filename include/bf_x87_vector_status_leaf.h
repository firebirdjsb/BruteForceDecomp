#ifndef BF_X87_VECTOR_STATUS_LEAF_H
#define BF_X87_VECTOR_STATUS_LEAF_H

#include "bf_xbe_guest32_record_leaves.h"

enum class bf_x87_vector_opcode {
    fld_m32, fld_st, fmul_st, faddp_st1, fcomp_m32, fstp_st0,
    fmul_m32, fcos, fstp_m32, fsin
};

struct bf_x87_vector_operations {
    void* context;
    // Owns the full x87 instruction, including waits, faults and DWORD memory.
    bool (*execute)(void*, std::uint32_t site, bf_x87_vector_opcode, std::uint32_t operand);
    // FNSTSW AX is the no-wait form. On success only the returned WORD
    // replaces AX. Subsequent x87 instructions perform their own waits.
    bool (*fnstsw_ax)(void*, std::uint32_t site, std::uint16_t& status);
};

bool FUN_0012eca0(bf_guest32_constructor_state&, const bf_x87_vector_operations&);

#endif
