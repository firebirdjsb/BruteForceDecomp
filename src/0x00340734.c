/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40CA901E9FAE5CD6ED188719C1F5F8584CAFC1950DDFED02FA5E651B6B5AB581
 * Entry: 0x00340734, Ghidra index: 12670, label: FUN_00340734
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00340734(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            undefined4 *param_6)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [2];
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  piVar2 = param_3;
  iVar3 = (int)param_1;
  local_8 = 0;
  puVar11 = (undefined4 *)&stack0xffffffbc;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  FUN_002ebea0();
  puVar12 = (undefined4 *)&stack0xffffffbc;
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar12 = *(undefined4 **)((int)param_1 + 8);
  puVar1 = (uint *)((int)param_1 + 4);
  *(undefined4 **)((int)param_1 + 8) = puVar12 + 4;
  param_1 = puVar12;
  if ((undefined4 *)*puVar1 < puVar12 + 4) {
    param_1 = (undefined4 *)0x0;
    *(undefined4 **)(iVar3 + 8) = puVar12;
  }
  if (param_1 == (undefined4 *)0x0) {
    local_8 = 0xc000009a;
  }
  else {
    *(undefined4 *)(iVar3 + 0x18 + *(int *)(iVar3 + 0x14) * 4) = *(undefined4 *)(iVar3 + 8);
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    iVar5 = *(int *)(iVar3 + 0x38);
    local_38 = *(undefined4 *)(iVar5 + 4);
    local_34 = *(undefined4 *)(iVar5 + 8);
    local_30 = *(undefined4 *)(iVar5 + 0xc);
    piVar6 = local_2c;
    param_3 = (int *)0x4;
    do {
      *piVar6 = piVar2[2];
      piVar6[1] = piVar2[3];
      piVar6 = piVar6 + 2;
      param_3 = (int *)((int)param_3 + -1);
      piVar2 = piVar2 + 2;
    } while (param_3 != (int *)0x0);
    param_3 = (int *)0x0;
    if (*(int *)(param_5 + 0x30) != 0) {
      puVar12 = &local_8;
      puVar7 = (undefined4 *)(param_5 + 0x34);
      do {
        param_3 = (int *)((int)param_3 + 1);
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (param_3 < *(uint *)(param_5 + 0x30));
    }
    local_c = *(undefined1 **)(param_5 + 0x30);
    FUN_0033f64f(iVar3,param_2,param_4,local_24);
    local_c = local_24;
    local_2c[1] = *(int *)(iVar3 + 8);
    local_14 = 0x17;
    local_10 = 0x10;
    local_2c[0] = 0x84;
    *(uint *)(iVar3 + 8) = local_2c[1] + 0x84U;
    if (*(uint *)(iVar3 + 4) < local_2c[1] + 0x84U) {
      *(int *)(iVar3 + 8) = local_2c[1];
      local_2c[1] = 0;
    }
    if (local_2c[1] == 0) {
      local_8 = 0xafff003c;
    }
    else {
      iVar5 = FUN_0034051f(iVar3,&local_38,0x6c,&stack0xffffffbc,0x17,0x4b1,&local_14);
      if (iVar5 == 0) {
        iVar5 = FUN_0033fa74(iVar3,&local_38,6,param_1 + 2,param_1 + 3);
        if (iVar5 == 0) {
          uVar9 = param_1[2];
          if (*(uint *)(iVar3 + 0x10) < uVar9) {
            FUN_002ebea0();
          }
          else {
            puVar11 = (undefined4 *)0x0;
          }
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = *(undefined4 **)(iVar3 + 0xc);
          }
          puVar12 = (undefined4 *)param_1[3];
          puVar7 = puVar11;
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar7 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
          puVar12 = *(undefined4 **)(iVar3 + 0x18 + *(int *)(iVar3 + 0x14) * 4);
          uVar10 = *(int *)(iVar3 + 8) - (int)puVar12;
          *(undefined4 **)(iVar3 + 8) = puVar12;
          for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar12 = 0;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          if (puVar11 != (undefined4 *)0x0) {
            puVar12 = *(undefined4 **)(iVar3 + 8);
            puVar4 = (undefined1 *)((uVar9 + 3 & 0xfffffffc) + (int)puVar12);
            *(undefined1 **)(iVar3 + 8) = puVar4;
            if (*(undefined1 **)(iVar3 + 4) < puVar4) {
              *(undefined4 **)(iVar3 + 8) = puVar12;
              puVar12 = (undefined4 *)0x0;
            }
            param_1[3] = puVar12;
            for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
          }
          param_1[1] = 0xc9;
          *param_1 = *param_6;
          *param_6 = param_1;
          return local_8;
        }
      }
      local_8 = 0xc000009a;
    }
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
    puVar11 = *(undefined4 **)(iVar3 + 0x18 + *(int *)(iVar3 + 0x14) * 4);
    uVar8 = *(int *)(iVar3 + 8) - (int)puVar11;
    *(undefined4 **)(iVar3 + 8) = puVar11;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  return local_8;
}
