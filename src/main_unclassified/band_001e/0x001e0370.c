/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5608E6E5085588826CBB62203CA72C6BE6A1990DFC92A6645FD47242768F87F1
 * Entry: 0x001e0370, Ghidra index: 6702, label: FUN_001e0370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001e0370(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309620;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      puVar1 = param_3 + 5;
      *puVar1 = 0;
      if (param_1[5] == 0) {
        *puVar1 = 0;
      }
      else {
        iVar3 = FUN_002ea01d(4);
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0001fdb0();
        }
        *puVar1 = uVar4;
      }
      puVar2 = (undefined4 *)param_1[5];
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)*puVar1 = *puVar2;
      }
      FUN_001e0dd0(param_3 + 6);
    }
    param_3 = param_3 + 10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
