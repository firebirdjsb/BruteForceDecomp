/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A109B7ECE193B2E19C1A85D549E94FE1AA4EA87B362D25C54F6C29EEAEE1D891
 * Entry: 0x00160220, Ghidra index: 4587, label: FUN_00160220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00160220(void)

{
  int unaff_ESI;
  
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x10c));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x10c) = 0;
  *(undefined4 *)(unaff_ESI + 0x110) = 0;
  *(undefined4 *)(unaff_ESI + 0x114) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0xfc));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0xfc) = 0;
  *(undefined4 *)(unaff_ESI + 0x100) = 0;
  *(undefined4 *)(unaff_ESI + 0x104) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x9c));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x8c));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  return;
}
