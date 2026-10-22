/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAE22D66C0EA3ACF326221D54EC9D3C2C123810C299B5E896896A4CBA3B9B8D1
 * Entry: 0x00155150, Ghidra index: 4456, label: FUN_00155150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00155150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307510;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x18);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_001551e0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
