/* Brute Force original Xbox - x87 instruction sequence.
 * Input x86 body SHA-256: D0ECF339B80D438B6D0D3FCEF61D5CB5AD8EF4C6BF39BE985A29318BBC096C05
 * Entry: 0x002f04d0, Ghidra index: 10741, label: FUN_002f04d0
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_runtime_epilogues.h"

bool FUN_002f04d0(bf_x87_runtime_state &state, const bf_x87_runtime_memory &memory,
                  const bf_x87_runtime_operations &x87)
{
    if (!memory.read32 || !x87.fxch_st1 || !x87.fstp_st0) {
        return false;
    }
    state.eip = 0x002f04d0;
    if (!x87.fxch_st1(x87.context, state.eip)) { // FXCH ST(1)
        return false;
    }
    state.eip = 0x002f04d2;
    if (!x87.fstp_st0(x87.context, state.eip)) { // FSTP ST(0)
        return false;
    }
    return bf_x87_runtime_detail::near_ret(state, memory, 0x002f04d4);
}
