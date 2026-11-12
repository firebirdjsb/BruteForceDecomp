/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 831BD7088FEAB897DC10B7A471EA28D8106FC38F91F00A29CEC5978FF56A299D
 * Entry: 0x00160180, Ghidra index: 4586, label: FUN_00160180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"
void FUN_00160180(void)

{
  int unaff_ESI;
  
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x118));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x118) = 0;
  *(undefined4 *)(unaff_ESI + 0x11c) = 0;
  *(undefined4 *)(unaff_ESI + 0x120) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0x108));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0x108) = 0;
  *(undefined4 *)(unaff_ESI + 0x10c) = 0;
  *(undefined4 *)(unaff_ESI + 0x110) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0xf8));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0xf8) = 0;
  *(undefined4 *)(unaff_ESI + 0xfc) = 0;
  *(undefined4 *)(unaff_ESI + 0x100) = 0;
  if (const uint32_t guest_allocation_va = static_cast<uint32_t>(*(int *)(unaff_ESI + 0xe8));
    guest_allocation_va != 0) {
    thunk_FUN_00237ec0(guest_allocation_va);
  }
  *(undefined4 *)(unaff_ESI + 0xe8) = 0;
  *(undefined4 *)(unaff_ESI + 0xec) = 0;
  *(undefined4 *)(unaff_ESI + 0xf0) = 0;
  return;
}
