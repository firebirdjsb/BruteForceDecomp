/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F0DFA692F241AE1D5888DACA0E579145B1B7072A4FEC12440BCA1C2DA136A28
 * Entry: 0x00205350, Ghidra index: 7288, label: FUN_00205350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00205350(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float local_ec;
  undefined4 *local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined4 *local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 *puStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 *puStack_ac;
  float fStack_a8;
  undefined8 uStack_a4;
  float fStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  if ((((iVar2 != 0) && (iVar2 != -1)) && (piVar1 = *(int **)(iVar2 + 0x10), piVar1 != (int *)0x0))
     && (piVar1[0x19] != 0)) {
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      if (iVar2 == -0x27098f4) {
        FUN_00234dc0(piVar1,&param_2);
        return;
      }
      if (iVar2 == -0x16b14996) {
        local_e8 = (undefined4 *)(param_2 * 0.017453292);
        FUN_00234dc0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x10),&local_e8);
        return;
      }
      if ((iVar2 != 0x1b0dc6c7) && (iVar2 == -0x1c41e972)) {
        local_e8 = (undefined4 *)0x0;
        local_d4 = 0.0;
        local_d8 = 0.0;
        local_d0 = (undefined4 *)0x0;
        iVar2 = *(int *)(param_1 + 0x44);
        if (iVar2 == 0) {
          local_d8 = param_2;
        }
        else if (iVar2 == 1) {
          local_d4 = param_2;
        }
        else if (iVar2 == 2) {
          local_d0 = (undefined4 *)param_2;
        }
        FUN_00234dc0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x10),&local_d8);
        return;
      }
    }
    return;
  }
  piVar1 = (int *)FUN_001fb020();
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 == 2) || (iVar2 == 3)) {
    local_e4 = 0.0;
    local_e0 = 0x200000001;
    FUN_0020e020(param_2 * 0.017453292);
    if (*(int *)(param_1 + 0x40) == 2) {
      puVar3 = (undefined4 *)FUN_002334b0();
      local_6c = *puVar3;
      uStack_68 = puVar3[1];
      uStack_64 = puVar3[2];
      uStack_60 = puVar3[3];
      local_4c = puVar3[8];
      local_5c = puVar3[4];
      uStack_58 = puVar3[5];
      uStack_54 = puVar3[6];
      uStack_50 = puVar3[7];
    }
    else {
      puVar3 = (undefined4 *)FUN_002334b0();
      local_6c = *puVar3;
      uStack_68 = puVar3[1];
      uStack_64 = puVar3[2];
      uStack_60 = puVar3[3];
      local_4c = puVar3[8];
      local_5c = puVar3[4];
      uStack_58 = puVar3[5];
      uStack_54 = puVar3[6];
      uStack_50 = puVar3[7];
    }
    local_e8 = &local_90;
    local_90 = local_6c;
    uStack_8c = uStack_68;
    uStack_88 = uStack_64;
    uStack_84 = uStack_60;
    local_80 = local_5c;
    uStack_7c = uStack_58;
    uStack_78 = uStack_54;
    uStack_74 = uStack_50;
    local_70 = local_4c;
    (**(code **)(*piVar1 + 0x4c))(&local_6c);
    return;
  }
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*piVar1 + 0x40))();
    local_d8 = *(float *)(iVar2 + 0x24);
    local_e8 = *(undefined4 **)(iVar2 + 0x2c);
    local_d4 = *(float *)(iVar2 + 0x28);
    local_e0 = *(undefined8 *)(iVar2 + 0x28);
    fStack_b8 = *(float *)(param_1 + 0x90);
    fStack_c0 = *(float *)(param_1 + 0x88);
    fStack_bc = *(float *)(param_1 + 0x8c);
    iVar2 = *(int *)(param_1 + 0x44);
    local_d0 = local_e8;
    if (iVar2 == 0) {
      local_d8 = fStack_c0 + param_2;
    }
    else if (iVar2 == 1) {
      local_d4 = fStack_bc + param_2;
    }
    else if (iVar2 == 2) {
      local_d0 = (undefined4 *)(fStack_b8 + param_2);
    }
    piVar1 = (int *)FUN_001fb020();
    (**(code **)(*piVar1 + 0x48))(&local_d8);
    return;
  }
  if (iVar2 != 1) {
    return;
  }
  (**(code **)(*piVar1 + 0x40))();
  FUN_0001fd10();
  FUN_0001fc40();
  FUN_0001fdd0();
  puStack_ac = *(undefined4 **)(param_1 + 0x90);
  fStack_b0 = *(float *)(param_1 + 0x8c);
  fStack_b4 = *(float *)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    local_e4 = param_2 * local_d8;
    fStack_94 = param_2 * (float)local_d0;
    local_e0 = CONCAT44(fStack_94,param_2 * local_d4);
    local_e8 = (undefined4 *)(fStack_94 + (float)puStack_ac);
    local_ec = param_2 * local_d4 + fStack_b0;
    fStack_cc = fStack_b4 + local_e4;
  }
  else if (iVar2 == 1) {
    local_e4 = param_2 * fStack_a8;
    local_ec = param_2 * (float)uStack_a4;
    fStack_94 = param_2 * (float)((ulonglong)uStack_a4 >> 0x20);
    local_e0 = CONCAT44(fStack_94,local_ec);
    local_e8 = (undefined4 *)(fStack_94 + (float)puStack_ac);
    local_ec = local_ec + fStack_b0;
    fStack_cc = local_e4 + fStack_b4;
  }
  else {
    local_e8 = puStack_ac;
    if (iVar2 != 2) goto LAB_00205762;
    local_e4 = param_2 * fStack_c0;
    fStack_94 = param_2 * fStack_b8;
    local_e0 = CONCAT44(fStack_94,param_2 * fStack_bc);
    local_e8 = (undefined4 *)(fStack_94 + (float)puStack_ac);
    local_ec = param_2 * fStack_bc + fStack_b0;
    fStack_cc = local_e4 + fStack_b4;
  }
  fStack_c8 = local_ec;
  puStack_c4 = local_e8;
LAB_00205762:
  (**(code **)(*piVar1 + 0x48))(&fStack_cc);
  return;
}
