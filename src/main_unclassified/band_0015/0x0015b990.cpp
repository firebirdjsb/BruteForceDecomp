/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF0BA43A6A6B5B1794D052C6AA78CB1A5189219DE33CA449FFA9C09A9C851560
 * Entry: 0x0015b990, Ghidra index: 4534, label: FUN_0015b990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0015b990(void)

{
  int unaff_ESI;
  
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x20));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x10));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  return;
}
