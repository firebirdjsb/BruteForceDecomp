#ifndef BF_X87_RUNTIME_EPILOGUES_H
#define BF_X87_RUNTIME_EPILOGUES_H

#include <stdint.h>

// Explicit guest state for three original entries. The other GPRs are preserved.
struct bf_x87_runtime_state {
    uint32_t edx;
    uint32_t esp;
    uint32_t eip;
    uint32_t eflags;
    uint32_t eflags_defined;
};

struct bf_x87_runtime_memory {
    void *context;
    bool (*read16)(void *, uint32_t, uint16_t &);
    bool (*read32)(void *, uint32_t, uint32_t &);
    bool (*write16)(void *, uint32_t, uint16_t);
};

struct bf_x87_runtime_operations {
    void *context;
    // Instruction addresses let the backend retain the guest x87 environment.
    bool (*fxch_st1)(void *, uint32_t instruction_va);
    bool (*fstp_st0)(void *, uint32_t instruction_va);
    // Execute FLDCW m16, including the waiting x87 fault check and WORD read.
    bool (*fldcw_m16)(void *, uint32_t instruction_va, uint32_t guest_va);
};

// Flat 32-bit guest stack. A callback failure leaves EIP at the failing
// instruction and retains preceding effects. Guest exception delivery and
// control-transfer validation belong to the execution backend.
bool FUN_002f04d0(bf_x87_runtime_state &, const bf_x87_runtime_memory &,
                  const bf_x87_runtime_operations &);
bool FUN_002f060d(bf_x87_runtime_state &, const bf_x87_runtime_memory &,
                  const bf_x87_runtime_operations &);
bool FUN_002f0696(bf_x87_runtime_state &, const bf_x87_runtime_memory &,
                  const bf_x87_runtime_operations &);

namespace bf_x87_runtime_detail {

inline bool near_ret(bf_x87_runtime_state &state, const bf_x87_runtime_memory &memory,
                     uint32_t instruction_va)
{
    state.eip = instruction_va;
    uint32_t return_address;
    if (!memory.read32(memory.context, state.esp, return_address)) {
        return false;
    }
    state.esp += 4u; // RET consumes a single guest DWORD return address.
    state.eip = return_address;
    return true;
}

} // namespace bf_x87_runtime_detail
#endif
