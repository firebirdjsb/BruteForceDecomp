/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: 7746C082E6C9C50E7146BECF8D842EF50EEA02ABCBE29318F4251B273B7E5DCD
 * Entry: 0x00249a00, Ghidra index: 8200, label: FUN_00249a00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_00050a90(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_00249a00(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_00050a90(destination, first, last);
}
