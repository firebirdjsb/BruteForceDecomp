/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E28C4DCEFE4E07664BCD471254428E633CB5AE1AF0280EDDA29B319978B078E
 * Entry: 0x003437b3, Ghidra index: 12716, label: FUN_003437b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_003437b3(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  
  if (param_2 == 0) {
    return 1;
  }
  puVar2 = (undefined4 *)param_1[4];
  if (puVar2 == (undefined4 *)0x0) {
    param_2 = param_2 + param_1[10];
    if (param_2 < 0x81) {
      param_2 = 0x80;
    }
    iVar7 = *param_1;
    param_1[5] = param_2;
    iVar4 = *(int *)(iVar7 + 8);
    uVar6 = (param_2 + 3 & 0xfffffffc) + iVar4;
    *(uint *)(iVar7 + 8) = uVar6;
    if (*(uint *)(iVar7 + 4) < uVar6) {
      *(int *)(iVar7 + 8) = iVar4;
      iVar4 = 0;
    }
    param_1[4] = iVar4;
    if (iVar4 != 0) {
      param_1[9] = param_1[10] + iVar4;
      return 1;
    }
    param_1[9] = 0;
  }
  else {
    uVar6 = param_1[5];
    if (param_2 <= uVar6 + (-param_1[9] - (uint)(param_1[8] != 0)) + (int)puVar2) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
      uVar11 = 0xfffffc11;
      goto LAB_003438f6;
    }
    if ((*(byte *)(param_1 + 0xb) & 3) == 0) {
      uVar9 = param_2;
      if (param_2 <= uVar6) {
        uVar9 = uVar6;
      }
      if (uVar9 < 0x100) {
        uVar9 = param_2;
        if (param_2 <= uVar6) {
          uVar9 = uVar6;
        }
      }
      else {
        uVar9 = 0x100;
      }
    }
    else {
      uVar9 = 0x80;
      if (0x80 < param_2) {
        uVar9 = param_2;
      }
    }
    iVar4 = uVar9 + uVar6;
    param_1[5] = iVar4;
    iVar7 = *param_1;
    puVar3 = *(undefined4 **)(iVar7 + 8);
    uVar6 = uVar6 + 3 & 0xfffffffc;
    if (puVar3 == (undefined4 *)((int)puVar2 + uVar6)) {
      puVar1 = (undefined1 *)(((iVar4 + 3 & 0xfffffffcU) - uVar6) + (int)puVar3);
      *(undefined1 **)(iVar7 + 8) = puVar1;
      puVar5 = puVar2;
      if (*(undefined1 **)(iVar7 + 4) < puVar1) {
        *(undefined4 **)(iVar7 + 8) = puVar3;
        puVar5 = (undefined4 *)0x0;
      }
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + (iVar4 + 3 & 0xfffffffcU);
      if (*(uint *)(iVar7 + 4) < *(uint *)(iVar7 + 8)) {
        *(undefined4 **)(iVar7 + 8) = puVar3;
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar8 = puVar2;
        puVar10 = puVar3;
        for (uVar6 = (uint)(iVar4 + 3) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar7 = 0; puVar5 = puVar3, iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
    }
    param_1[4] = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      param_1[9] = (int)((int)puVar5 + (param_1[9] - (int)puVar2));
      return 1;
    }
  }
  uVar11 = 0xfffffc12;
LAB_003438f6:
  FUN_0034335a(param_1,uVar11);
  return 0;
}
