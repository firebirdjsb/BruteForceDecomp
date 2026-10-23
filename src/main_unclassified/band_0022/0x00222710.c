/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACFB2DCE2609676B1FCA0B3ACE4D4A7823AC9382204CF893F48C127786EF9C2D
 * Entry: 0x00222710, Ghidra index: 7583, label: FUN_00222710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00222710(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307b10;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x28);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_002228b0(in_stack_00000010);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
