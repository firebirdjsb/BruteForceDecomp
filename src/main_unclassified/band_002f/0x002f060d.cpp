/* Brute Force original Xbox - guest stack and x87 control-word sequence.
 * Input x86 body SHA-256: E6EC999D45C3C78E22ED722D9CDD003CA3E8685D7954A7D030915DF1E55EB902
 * Entry: 0x002f060d, Ghidra index: 10746, label: FUN_002f060d
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_runtime_epilogues.h"

bool FUN_002f060d(bf_x87_runtime_state &state, const bf_x87_runtime_memory &memory,
                  const bf_x87_runtime_operations &x87)
{
    if (!memory.read32 || !memory.write16 || !x87.fldcw_m16) {
        return false;
    }
    state.eip = 0x002f060d;
    uint32_t stack_word;
    if (!memory.read32(memory.context, state.esp + 4u, stack_word)) {
        return false;
    }
    // AND/OR retain precision-control bits 8–9 and force the low byte to 0x7f.
    state.edx = (stack_word & 0x0300u) | 0x007fu;
    // The result is positive, nonzero and has odd low-byte parity.
    // OR clears CF, PF, ZF, SF and OF here. AF becomes undefined.
    constexpr uint32_t defined = 0x08c5u;
    state.eflags &= ~defined;
    state.eflags_defined = (state.eflags_defined | defined) & ~0x10u;

    const uint32_t control_word_va = state.esp + 6u; // High WORD of [ESP+4].
    state.eip = 0x002f061a;
    if (!memory.write16(memory.context, control_word_va, static_cast<uint16_t>(state.edx))) {
        return false;
    }
    state.eip = 0x002f061f;
    if (!x87.fldcw_m16(x87.context, state.eip, control_word_va)) {
        return false;
    }
    return bf_x87_runtime_detail::near_ret(state, memory, 0x002f0623);
}
