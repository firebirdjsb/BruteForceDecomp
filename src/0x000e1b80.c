/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A1CEBCDDCD70B045EA6A13D3C1C69022E5E20D755C99FBDDDCDD1DAE3AE6661
 * Entry: 0x000e1b80, Ghidra index: 2778, label: FUN_000e1b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000e1b80(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307dc0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x80);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_000e1fd0(in_stack_00000010);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
