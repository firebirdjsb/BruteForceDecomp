/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9303F00396DD08D48872EF5A8C6E9A766E6FDF31420DAB6EBB0C753FC9D1BE0A
 * Entry: 0x00099850, Ghidra index: 1848, label: FUN_00099850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
undefined4 FUN_00099850(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x40);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_000998c0();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *param_3 = iVar1;
  return 0;
}
