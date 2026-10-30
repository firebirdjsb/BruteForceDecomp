/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 463F9EF02417A76CD156DB253F191FDA8F1FAB60EAFEE2D690A4B1C21B57F3A1
 * Entry: 0x0035bb70, Ghidra index: 13202, label: FUN_0035bb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035bb70(undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar3 = FUN_0035b680(*param_1,param_1[1],param_1[4],param_1[0xc],param_1[9],param_1[10],param_1[5]
                       ,param_4,param_1[7],param_1[8]);
  uVar4 = 0;
  if (param_1[6] == 0) {
    uVar5 = (uint)param_1[3] >> 1;
    if (uVar5 != 0) {
      do {
        psVar2 = (short *)(param_1[5] + uVar4 * 2);
        iVar1 = uVar4 * 2;
        iVar6 = uVar5 - uVar4;
        iVar7 = (int)*psVar2 * uVar4;
        uVar4 = uVar4 + 1;
        *psVar2 = (short)((uint)(*(short *)(param_1[0xb] + iVar1) * iVar6 + iVar7) / uVar5);
      } while (uVar4 < uVar5);
    }
  }
  else {
    param_1[6] = 0;
  }
  uVar4 = param_1[3];
  puVar8 = (undefined4 *)((param_1[2] - uVar4) + param_1[5]);
  puVar9 = (undefined4 *)param_1[0xb];
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = param_1[2] - param_1[3];
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1[5];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar3 + param_4;
  }
  return;
}
