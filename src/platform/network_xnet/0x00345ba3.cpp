/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CF61574DC1CF59A5D56D848CBD3617EBB72B685AB49573AD3D1D49E8BFF8119
 * Entry: 0x00345ba3, Ghidra index: 12821, label: FUN_00345ba3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00345ba3(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  KeRaiseIrqlToDpcLevel();
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0x58)) {
      uVar4 = 0;
    }
    else {
      puVar2 = (undefined4 *)
               ExAllocatePoolWithTag
                         ((-(uint)(param_2[5] != 0) & 0x10) + 0x18 + param_2[3] * 8,0x6454454e);
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0x80072747;
      }
      else {
        *(undefined4 **)(param_1 + 0x30) = puVar2;
        puVar6 = param_2;
        puVar5 = puVar2;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar6 = puVar2 + 6;
        if (param_2[5] != 0) {
          puVar2[5] = puVar6;
          puVar5 = (undefined4 *)param_2[5];
          *puVar6 = *puVar5;
          puVar2[7] = puVar5[1];
          puVar2[8] = puVar5[2];
          puVar2[9] = puVar5[3];
          puVar6 = (undefined4 *)(puVar2[5] + 0x10);
        }
        puVar2[2] = puVar6;
        puVar5 = (undefined4 *)param_2[2];
        for (iVar3 = (param_2[3] & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        piVar1 = puVar2 + 1;
        *(undefined4 *)(*piVar1 + 8) = 0;
        *(undefined4 *)(*piVar1 + 4) = 0;
        *(undefined4 **)*piVar1 = puVar2;
        uVar4 = 0x800703e5;
        *(undefined4 *)(*piVar1 + 0xc) = 0x800703e5;
      }
    }
  }
  else {
    uVar4 = 0x80072733;
  }
  KfLowerIrql();
  return uVar4;
}
