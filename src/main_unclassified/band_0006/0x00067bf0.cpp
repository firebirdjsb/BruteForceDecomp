/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 964E6CBFFE5D3753558EC7D2E38D46DFE066CF0156FB09CC0FAD3B5FF329ACE2
 * Entry: 0x00067bf0, Ghidra index: 1139, label: thunk_FUN_00237ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"

/* Original 0x00067BF0 is FF 25 54 C6 3B 00:
 * JMP DWORD PTR [0x003BC654]. It does not push a new guest return
 * address or consume a guest argument. The incoming guest [ESP+4]
 * passes through to the dynamically selected target, initially
 * 0x00237EC0, and the target's EAX passes back unchanged.
 *
 * This address-specific name avoids defining the SAME native symbol
 * for original entries 0x00067BF0 and 0x002EA018. Ghidra labeled
 * both thunk_FUN_00237ec0. This wrapper is only a host syntax bridge.
 * The runtime adapter remains intentionally undefined; real guest
 * registers, stack and memory dispatch are ABI_UNVERIFIED.
 * Original evidence: scripts/verify_002b8c60_heap_xbe.py.
 */
uint32_t thunk_FUN_00067bf0(uint32_t guest_allocation_va)
{
  return bf_xbox_guest_tailjump1_u32(BF_XBOX_HEAP_FREE_INDIRECT_SLOT,
                                     guest_allocation_va);
}
