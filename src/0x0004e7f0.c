/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9E3933D55D1B58FF6329FB59352AD0263E8D9A3D7CD01098C59BF52CCBC53F2
 * Entry: 0x0004e7f0, Ghidra index: 675, label: FUN_0004e7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e7f0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *local_10;
  undefined4 *local_c [3];
  
  puVar5 = param_3;
  iVar9 = (int)param_3 - param_1 >> 3;
  iVar11 = param_2 - param_1 >> 3;
  iVar10 = iVar11;
  param_2 = iVar9;
  while (iVar3 = iVar10, iVar3 != 0) {
    iVar10 = param_2 % iVar3;
    param_2 = iVar3;
  }
  if ((param_2 < iVar9) && (0 < param_2)) {
    puVar12 = (undefined4 *)(param_1 + param_2 * 8);
    do {
      uVar1 = puVar12[1];
      uVar2 = *puVar12;
      if (puVar12 + iVar11 * 2 == puVar5) {
        puVar7 = &param_1;
      }
      else {
        param_3 = puVar12 + iVar11 * 2;
        puVar7 = &param_3;
      }
      puVar6 = (undefined4 *)*puVar7;
      puVar7 = puVar12;
      while (puVar4 = puVar6, puVar4 != puVar12) {
        *puVar7 = *puVar4;
        puVar7[1] = puVar4[1];
        iVar10 = (int)puVar5 - (int)puVar4 >> 3;
        if (iVar11 < iVar10) {
          local_10 = puVar4 + iVar11 * 2;
          ppuVar8 = &local_10;
        }
        else {
          local_c[0] = (undefined4 *)(param_1 + (iVar11 - iVar10) * 8);
          ppuVar8 = local_c;
        }
        puVar7 = puVar4;
        puVar6 = *ppuVar8;
      }
      puVar12 = puVar12 + -2;
      param_2 = param_2 + -1;
      *puVar7 = uVar2;
      puVar7[1] = uVar1;
    } while (param_2 != 0);
  }
  return;
}
