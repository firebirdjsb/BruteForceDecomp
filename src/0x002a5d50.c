/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E6FEB3BCC1FEE0C5995EEC61DB23B7FC3B022A7E254C65CE85928463A8DBC09
 * Entry: 0x002a5d50, Ghidra index: 9576, label: FUN_002a5d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a5d50(int param_1,undefined4 param_2,undefined1 *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  char unaff_retaddr;
  undefined1 *puStack_70;
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((uVar2 & 8) != 0) {
    *(uint *)(param_1 + 4) = uVar2 & 0xfffffff7;
    return 0;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 2) == 0) {
      puStack_70 = (undefined1 *)0x2a5e59;
      cVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x7c) + 8) + 0x20))();
      if (cVar4 == '\0') {
        piVar3 = *(int **)(*(int *)(param_1 + 0x7c) + 8);
        puStack_70 = *(undefined1 **)(param_1 + 0x80);
        (**(code **)(*piVar3 + 0x2c))(piVar3,*(undefined4 *)(param_1 + 0x88));
        if (unaff_retaddr != '\0') {
          FUN_0003d730(param_1 + 0x48,param_1 + 0x18);
          return 0;
        }
        uVar5 = FUN_0003d690();
        FUN_0003d730(param_1 + 0x48,uVar5);
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    puStack_70 = (undefined1 *)(param_1 + 0x48);
    FUN_0003d730();
    return 0;
  }
  if ((uVar2 & 2) == 0) {
    puStack_70 = (undefined1 *)0x2a5d87;
    cVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x7c) + 8) + 0x20))();
    if (cVar4 == '\0') {
      piVar3 = *(int **)(*(int *)(param_1 + 0x7c) + 8);
      puStack_70 = auStack_60;
      (**(code **)(*piVar3 + 0x2c))
                (piVar3,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
      iVar1 = param_1 + 0x48;
      if (unaff_retaddr == '\0') {
        param_1 = FUN_0003d690();
      }
      else {
        param_1 = param_1 + 0x18;
      }
      FUN_0003d730(iVar1,param_1);
      FUN_002338c0(iVar1,iVar1,&puStack_70);
      return 0;
    }
  }
  if (param_4 != '\0') {
    puStack_70 = (undefined1 *)(param_1 + 0x48);
    FUN_0003d730();
    return 0;
  }
  puStack_70 = param_3;
  puStack_70 = (undefined1 *)FUN_002338c0(auStack_30);
  FUN_0003d6c0(auStack_60);
  puStack_70 = (undefined1 *)(param_1 + 0x48);
  FUN_0003d730();
  return 0;
}
