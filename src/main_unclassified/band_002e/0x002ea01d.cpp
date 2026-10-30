/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BE5420D091BB8EE22CC1BAEE0A8B5141819810443556764D49A2A826495BD36
 * Entry: 0x002ea01d, Ghidra index: 10571, label: FUN_002ea01d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"

/* Original XBE: one incoming stack DWORD forwarded to 0x00067CD0;
 * PUSH 1 becomes a dead second word to that callee; POP/POP restores
 * guest ESP, and its EAX allocation result is preserved through RET.
 * This is a guest32 value, NOT a host pointer and NOT a complete allocator. */
uint32_t FUN_002ea01d(uint32_t guest_size)
{
  return FUN_00067cd0(guest_size);
}
