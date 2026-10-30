/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 294834B54A619FECA8C92DEFC6F1FEE5F351FBAB0CF3F387F9FDAAC1FE6CD6C3
 * Entry: 0x002ea018, Ghidra index: 10570, label: thunk_FUN_00237ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"

/* The original 0x002EA018 and 0x00067BF0 instructions form two tail
 * jumps, the second indirect through guest DWORD [0x003BC654]. Its
 * initial target 0x00237EC0 reads one incoming stack DWORD and RETs
 * without callee cleanup. This is not a native host function pointer.
 *
 * TODO ABI_UNVERIFIED: reconstruct the entire guest register/ESP state
 * and dynamically mapped target before allowing native execution. The
 * adapter has NO definition, deliberately preventing a fake game link.
 * Recorded XBE evidence: scripts/verify_002b8c60_heap_xbe.py. */
uint32_t thunk_FUN_00237ec0(uint32_t guest_allocation_va)
{
  /* Original JMP rel32 to 0x00067BF0: same guest stack, same EAX
   * result as the eventual imported target (not a host call ABI). */
  return thunk_FUN_00067bf0(guest_allocation_va);
}
