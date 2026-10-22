/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA105C8AE114D5310F2D9F34C2F1303247A2C3D3FBFB36F81895489B125B6CFD
 * Entry: 0x001dfc00, Ghidra index: 6691, label: FUN_001dfc00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001dfc00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308c40;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x11) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_0003d6c0(param_3 + 1,param_1 + 1,param_1 + 10);
      param_3[0xd] = param_1[0xd];
      param_3[0xe] = param_1[0xe];
      param_3[0xf] = param_1[0xf];
      piVar1 = param_3 + 0x10;
      *piVar1 = 0;
      if (param_1[0x10] == 0) {
        *piVar1 = 0;
      }
      else {
        iVar3 = FUN_002ea01d(4);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          FUN_0001fdc0();
        }
        *piVar1 = iVar3;
      }
      puVar2 = (undefined4 *)param_1[0x10];
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)*piVar1 = *puVar2;
      }
    }
    param_3 = param_3 + 0x11;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
