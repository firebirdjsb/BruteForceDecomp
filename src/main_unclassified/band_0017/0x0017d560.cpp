/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: 292AFA9017F0402C8A03AB51E4510DDBEA2F90E099397183326147B88BCC42E1
 * Entry: 0x0017d560, Ghidra index: 5073, label: FUN_0017d560
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d7dd0(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_0017d560(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_001d7dd0(destination, first, last);
}
