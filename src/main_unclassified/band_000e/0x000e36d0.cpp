/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C34B5D8DBB8BCD9CF4CA2396DD3686E35A42A3D327543D8BD6AFF83F3B7AD2C
 * Entry: 0x000e36d0, Ghidra index: 2817, label: FUN_000e36d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"
void FUN_000e36d0(void)

{
  int unaff_ESI;
  
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x128));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x128) = 0;
  *(undefined4 *)(unaff_ESI + 300) = 0;
  *(undefined4 *)(unaff_ESI + 0x130) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x118));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x118) = 0;
  *(undefined4 *)(unaff_ESI + 0x11c) = 0;
  *(undefined4 *)(unaff_ESI + 0x120) = 0;
  return;
}
