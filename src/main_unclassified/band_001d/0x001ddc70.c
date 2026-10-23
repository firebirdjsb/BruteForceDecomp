/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 584FAEB7DE882D1B298C9FEB9A2FF7178E025C3EFDCD0A456CE44E6C3CBD7110
 * Entry: 0x001ddc70, Ghidra index: 6640, label: FUN_001ddc70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001ddc70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308c30;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      uVar1 = param_1[3];
      uVar2 = param_1[2];
      param_3[1] = param_1[1];
      param_3[2] = uVar2;
      param_3[3] = uVar1;
      param_3[4] = param_1[4];
      FUN_001cba30(param_3 + 5);
    }
    param_3 = param_3 + 9;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
