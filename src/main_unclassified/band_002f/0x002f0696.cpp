/* Brute Force original Xbox - x87 control-word restore tail.
 * Input x86 body SHA-256: B0971B5D2CB4945DC056293D2DAC8D989FC1D1488B22EDB4125E67FDF93C85BD
 * Entry: 0x002f0696, Ghidra index: 10750, label: FUN_002f0696
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_runtime_epilogues.h"

bool FUN_002f0696(bf_x87_runtime_state &state, const bf_x87_runtime_memory &memory,
                  const bf_x87_runtime_operations &x87)
{
    if (!memory.read16 || !memory.read32 || !x87.fldcw_m16) {
        return false;
    }
    // Original callers jump here. [ESP] is the saved DWORD, [ESP+4] the return VA.
    state.eip = 0x002f0696;
    uint16_t saved_control_word;
    if (!memory.read16(memory.context, state.esp, saved_control_word)) {
        return false;
    }
    constexpr uint16_t expected = 0x027f;
    const auto difference = static_cast<uint16_t>(saved_control_word - expected);
    uint32_t parity = difference & 0xffu;
    parity ^= parity >> 4;
    parity ^= parity >> 2;
    parity ^= parity >> 1;
    // CMP WORD updates CF, PF, AF, ZF, SF and OF with 16-bit subtraction semantics.
    constexpr uint32_t arithmetic = 0x08d5u;
    const uint32_t flags = (saved_control_word < expected ? 0x001u : 0u) |
                           ((parity & 1u) == 0 ? 0x004u : 0u) |
                           ((saved_control_word & 0xfu) < (expected & 0xfu) ? 0x010u : 0u) |
                           (difference == 0 ? 0x040u : 0u) |
                           ((difference & 0x8000u) != 0 ? 0x080u : 0u) |
                           (((saved_control_word ^ expected) &
                             (saved_control_word ^ difference) & 0x8000u) != 0 ? 0x800u : 0u);
    state.eflags = (state.eflags & ~arithmetic) | flags;
    state.eflags_defined |= arithmetic;

    if (difference != 0) {
        state.eip = 0x002f069e;
        if (!x87.fldcw_m16(x87.context, state.eip, state.esp)) {
            return false;
        }
    }
    state.eip = 0x002f06a1;
    uint32_t saved_edx;
    if (!memory.read32(memory.context, state.esp, saved_edx)) { // POP EDX
        return false;
    }
    state.edx = saved_edx;
    state.esp += 4u;
    return bf_x87_runtime_detail::near_ret(state, memory, 0x002f06a2);
}
