/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD6A161E175F3DBD697AD9E530A6819D14C50D3A014BEC1F66E2F9DC4DA726F3
 * Entry: 0x0034055e, Ghidra index: 12669, label: FUN_0034055e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0034055e(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  undefined2 local_24;
  undefined4 local_22;
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  undefined4 uStack_16;
  undefined2 uStack_12;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = (int)param_1;
  local_24 = 0;
  local_22 = 0;
  uStack_1e = 0;
  uStack_1a = 0;
  uStack_16 = 0;
  uStack_12 = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_28 = 0;
  puVar7 = *(undefined4 **)((int)param_1 + 8);
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  *(undefined4 **)((int)param_1 + 8) = puVar7 + 4;
  if (*(undefined4 **)((int)param_1 + 4) < puVar7 + 4) {
    *(undefined4 **)((int)param_1 + 8) = puVar7;
    param_1 = (undefined4 *)0x0;
    puVar7 = param_1;
  }
  param_1 = puVar7;
  if (param_1 == (undefined4 *)0x0) {
    return 0xc000009a;
  }
  *(undefined4 *)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4) = *(undefined4 *)(iVar1 + 8);
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  FUN_0033f26e(&local_22,(int)&uStack_16 + 2,param_3);
  local_24 = 0x80;
  iVar2 = FUN_0033fa74(iVar1,&local_24,9,&local_c,&local_10);
  if (iVar2 == 0) {
    local_28 = *(int *)(iVar1 + 8);
    local_2c = local_c + 0x18;
    uVar4 = (local_c + 0x1bU & 0xfffffffc) + local_28;
    *(uint *)(iVar1 + 8) = uVar4;
    if (*(uint *)(iVar1 + 4) < uVar4) {
      *(int *)(iVar1 + 8) = local_28;
      local_28 = 0;
    }
    if (local_28 == 0) {
      local_8 = 0xafff003c;
      goto LAB_0034065c;
    }
    iVar2 = FUN_0034051f(iVar1,&local_38,local_c,local_10,*param_2,1,param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_0033fa74(iVar1,&local_38,6,param_1 + 2,param_1 + 3);
      puVar7 = (undefined4 *)&stack0xffffffbc;
      if (iVar2 == 0) {
        uVar4 = param_1[2];
        if (*(uint *)(iVar1 + 0x10) < uVar4) {
          FUN_002ebea0();
        }
        else {
          puVar7 = (undefined4 *)0x0;
        }
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = *(undefined4 **)(iVar1 + 0xc);
        }
        puVar9 = (undefined4 *)param_1[3];
        puVar8 = puVar7;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
        puVar9 = *(undefined4 **)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4);
        uVar6 = *(int *)(iVar1 + 8) - (int)puVar9;
        *(undefined4 **)(iVar1 + 8) = puVar9;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        if (puVar7 != (undefined4 *)0x0) {
          puVar9 = *(undefined4 **)(iVar1 + 8);
          puVar3 = (undefined1 *)((uVar4 + 3 & 0xfffffffc) + (int)puVar9);
          *(undefined1 **)(iVar1 + 8) = puVar3;
          if (*(undefined1 **)(iVar1 + 4) < puVar3) {
            *(undefined4 **)(iVar1 + 8) = puVar9;
            puVar9 = (undefined4 *)0x0;
          }
          param_1[3] = puVar9;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        param_1[1] = 2;
        *param_1 = *param_4;
        *param_4 = param_1;
        return local_8;
      }
    }
  }
  local_8 = 0xc000009a;
LAB_0034065c:
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
  puVar7 = *(undefined4 **)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4);
  uVar5 = *(int *)(iVar1 + 8) - (int)puVar7;
  *(undefined4 **)(iVar1 + 8) = puVar7;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  return local_8;
}
