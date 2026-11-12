/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FC698AD607B51AA311E645481D9F308D49A36CF7CC4AD3E7023AC96890C460F
 * Entry: 0x00132d60, Ghidra index: 3864, label: FUN_00132d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00132d60(void)

{
  int unaff_ESI;
  
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x38));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x28));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x14));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  return;
}
