/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39BC5BF4ACDF61D0AB8B18139FE1C07C4AFC1210C3B6BC275C5061FB13A5CC49
 * Entry: 0x00056fe0, Ghidra index: 844, label: FUN_00056fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00056fe0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *local_8;
  
  if ((*(byte *)(param_2 + 0x26) & 8) != 0) {
    iVar7 = *(int *)(param_1 + 0x18);
    puVar1 = *(undefined4 **)(iVar7 + 0x74);
    local_8 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      local_8 = (undefined4 *)*puVar1;
    }
    puVar5 = *(undefined4 **)(iVar7 + 0x68);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = *(undefined4 **)(iVar7 + 0x68);
    puVar3 = *(undefined4 **)(iVar7 + 0x74);
    while ((((puVar6 != puVar2 || (puVar5 != puVar2)) || (local_8 != puVar3)) || (puVar1 != puVar3))
          ) {
      if (puVar6 == puVar5) {
        iVar7 = local_8[3];
      }
      else {
        iVar7 = puVar6[3];
      }
      if ((((iVar7 != 0) && (param_2 != iVar7)) &&
          ((param_3 == (int *)0x0 || (cVar4 = (**(code **)(*param_3 + 4))(iVar7), cVar4 != '\0'))))
         && ((cVar4 = FUN_00056f50(param_1), cVar4 != '\0' ||
             (cVar4 = FUN_00056f50(param_1), cVar4 != '\0')))) {
        FUN_00056e40(param_2,iVar7);
      }
      if (puVar6 == puVar5) {
        local_8 = (undefined4 *)*local_8;
      }
      else {
        puVar6 = (undefined4 *)*puVar6;
      }
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar1;
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x8c);
    for (; puVar5 != puVar1; puVar5 = (undefined4 *)*puVar5) {
      iVar7 = puVar5[3];
      if ((((iVar7 != 0) && (param_2 != iVar7)) &&
          ((param_3 == (int *)0x0 || (cVar4 = (**(code **)(*param_3 + 4))(iVar7), cVar4 != '\0'))))
         && ((cVar4 = FUN_00056f50(param_1), cVar4 != '\0' ||
             (cVar4 = FUN_00056f50(param_1), cVar4 != '\0')))) {
        FUN_00056e40(param_2,iVar7);
      }
    }
  }
  return;
}
