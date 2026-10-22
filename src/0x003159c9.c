/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A183372FA12B237E4C46AC477CC46817DBD8ECA8387F5A898EA134F378AA32DC
 * Entry: 0x003159c9, Ghidra index: 12111, label: FUN_003159c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003159c9(int param_1,int param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_00315838(param_1,&param_1);
  uVar3 = param_4;
  if (-1 < iVar1) {
    uVar4 = *(int *)(param_1 + 8) + 0x17d0618 +
            *(int *)(**(int **)(*(int *)(in_ECX + 8) + 0x10) + 0x804) * 4 + param_2;
    FUN_0031b21f(uVar4,param_3,param_4);
    if ((param_5 & 1) == 0) {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 8) + param_2);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *param_3;
        param_3 = param_3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    else {
      uVar2 = *(uint *)(in_ECX + 0x18);
      if (uVar2 != 0x8000) {
        if (*(int *)(in_ECX + 0x1c) + uVar2 < uVar4) {
          uVar3 = uVar3 + ((uVar4 - *(int *)(in_ECX + 0x1c)) - uVar2);
        }
        else if (uVar4 + uVar3 < uVar2) {
          uVar3 = uVar2 - uVar4;
        }
      }
      if (uVar4 <= uVar2) {
        uVar2 = uVar4;
      }
      *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + uVar3;
      *(uint *)(in_ECX + 0x18) = uVar2;
    }
    iVar1 = 0;
  }
  return iVar1;
}
