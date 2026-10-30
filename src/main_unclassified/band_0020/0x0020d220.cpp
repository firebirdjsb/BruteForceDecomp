/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0B416D549E5FD7FCF4326AE094A803C9FAE2B813C37365A55F87C16C4F09075
 * Entry: 0x0020d220, Ghidra index: 7367, label: FUN_0020d220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1
FUN_0020d220(undefined4 param_1,char param_2,int *param_3,int param_4,int *param_5,char *param_6,
            undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  uVar5 = 0;
  if ((*param_6 == '\0') && (*param_3 == *param_5)) {
    if (param_2 == '\0') {
      FUN_000e07e0();
      iVar2 = *(int *)(in_EAX + 8);
      iVar6 = *(int *)(in_EAX + 4);
      if (iVar6 != iVar2) {
        local_4 = 0;
        do {
          iVar3 = *(int *)(param_4 + 4);
          iVar4 = FUN_000e1910(param_4,iVar3,*(undefined4 *)(iVar3 + 4),local_8);
          FUN_000389d0();
          *(int *)(iVar3 + 4) = iVar4;
          **(int **)(iVar4 + 4) = iVar4;
          FUN_000d6ac0(param_1,*(int *)(*(int *)(param_4 + 4) + 4) + 8,param_7);
          iVar6 = iVar6 + 4;
        } while (iVar6 != iVar2);
      }
      uVar5 = 1;
    }
    else {
      puVar1 = *(undefined4 **)(param_4 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)*puVar1;
      }
      if (puVar7 != puVar1) {
        do {
          if (puVar7[3] != 0) {
            FUN_00074fb0();
          }
          puVar7 = (undefined4 *)*puVar7;
        } while (puVar7 != *(undefined4 **)(param_4 + 4));
        *param_6 = '\x01';
        return 0;
      }
    }
    *param_6 = '\x01';
  }
  return uVar5;
}
