/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: FE0A9F8EACC92B20C5AFA18195612F79230618E0B296F7FD6619E303EEC37EF9
 * Entry: 0x001392c0, Ghidra index: 3941, label: FUN_001392c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_0024c6a0(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_001392c0(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_0024c6a0(destination, first, last);
}
