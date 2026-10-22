/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45B4F6F71D1043A09ADF380ED911D35ECD95D6FB6541CFFE83A7B8F9AEE4C3DD
 * Entry: 0x00349cfc, Ghidra index: 12924, label: FUN_00349cfc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00349cfc(byte *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a [12];
  undefined1 local_e [2];
  int *local_c;
  int local_8;
  
  if (((*param_1 >> 1 & 1) != 0) && (*(uint *)(in_ECX + 0xae4) < 6)) {
    return;
  }
  iVar6 = 0x98;
  if ((*param_1 >> 1 & 1) == 0) {
    iVar6 = 0xfc;
  }
  local_8 = in_ECX;
  local_c = (int *)FUN_0034cb5a(0x7154454e,0x40003,iVar6 + 4,0,0,0);
  if (local_c == (int *)0x0) {
    return;
  }
  iVar6 = *local_c;
  FUN_00347fe3(local_c,0,0x11);
  if ((*param_1 & 2) == 0) {
    *(byte *)((int)local_c + 0xb) = *(byte *)((int)local_c + 0xb) | 4;
    puVar4 = (undefined4 *)FUN_0034c841();
    *puVar4 = *(undefined4 *)(param_1 + 0xce);
    *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(param_1 + 0xd2);
    *(undefined4 *)((int)puVar4 + 6) = *(undefined4 *)(local_8 + 0x1e0);
    *(undefined2 *)((int)puVar4 + 10) = *(undefined2 *)(local_8 + 0x1e4);
    *(undefined2 *)(puVar4 + 3) = 8;
    *(undefined4 *)(iVar6 + 0xc) = 0x1000000;
    *(undefined4 *)(iVar6 + 0x10) = 0x1000000;
    *(undefined2 *)(iVar6 + 0x14) = 0x20c;
    *(undefined2 *)(iVar6 + 0x16) = 0x20c;
    goto LAB_00349ede;
  }
  *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(in_ECX + 0x268);
  *(undefined2 *)(iVar6 + 0x14) = *(undefined2 *)(in_ECX + 0x8c6);
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (*(int *)(param_1 + 200) != *(int *)(*(int *)(in_ECX + 0xae8) + 0xd8)) {
      *(int *)(iVar6 + 0x10) = *(int *)(param_1 + 200);
      uVar3 = *(undefined2 *)(param_1 + 0xcc);
      goto LAB_00349dce;
    }
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined2 *)(iVar6 + 0x16) = 0x20c;
  }
  else {
    *(int *)(iVar6 + 0x10) = *(int *)(param_1 + 0xb8);
    uVar3 = *(undefined2 *)(param_1 + 0xbc);
LAB_00349dce:
    *(undefined2 *)(iVar6 + 0x16) = uVar3;
  }
  if ((((param_1[2] == 3) && (param_1[3] < *(byte *)(in_ECX + 0x38))) &&
      (iVar7 = *(int *)(in_ECX + 0xae8), *(int *)(param_1 + 200) != *(int *)(iVar7 + 0xd8))) &&
     (param_2 == 0)) {
    local_38 = 0;
    puVar4 = *(undefined4 **)(param_1 + 0xc0);
    local_3c = 0x5804;
    local_3a = 0x2e;
    local_34 = *puVar4;
    local_30 = puVar4[1];
    local_24 = *(undefined4 *)(param_1 + 4);
    local_2c = *(undefined4 *)(param_1 + 0x44);
    local_28 = *(undefined4 *)(param_1 + 0x48);
    local_20 = *(undefined4 *)(iVar7 + 0xd8);
    local_1c = *(undefined2 *)(iVar7 + 0xdc);
    local_36 = 1;
    FUN_0034c461(puVar4 + 2,0x10,&local_3c,0x22,local_e,0,local_1a,0xc);
    FUN_00349366(*(undefined4 *)(in_ECX + 0xae8),0x5304,param_1 + 0xd4,0x14,&local_3c,local_3a);
  }
LAB_00349ede:
  *(undefined4 *)(iVar6 + 0x1c) = 0;
  puVar4 = *(undefined4 **)(param_1 + 0xc0);
  puVar10 = (undefined4 *)(iVar6 + 0x20);
  puVar9 = puVar10;
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)(iVar6 + 0x24) = 0;
  *(undefined2 *)(iVar6 + 0x22) = 0x80;
  *(undefined4 *)(iVar6 + 0x28) = *puVar4;
  *(undefined4 *)(iVar6 + 0x2c) = puVar4[1];
  puVar1 = (uint *)(local_8 + 0xad8);
  *(uint *)(iVar6 + 0x48) = *puVar1;
  *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(local_8 + 0xadc);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)(local_8 + 0xadc) = *(int *)(local_8 + 0xadc) + (uint)(0xfffffffe < uVar2);
  if (param_1[2] == 3) {
    *(undefined2 *)puVar10 = 0x5800;
    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(param_1 + 0x48);
    FUN_0034877b(iVar6 + 0x58);
    pbVar11 = param_1 + 0xc4;
    puVar9 = (undefined4 *)(iVar6 + 0x7c);
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    *(undefined2 *)puVar10 = 0x5801;
    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar6 + 0x3c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(param_1 + 0x50);
    pbVar11 = param_1 + 0xc4;
    puVar9 = (undefined4 *)(iVar6 + 0x58);
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      puVar9 = puVar9 + 1;
    }
    FUN_0034877b(iVar6 + 0x7c);
  }
  FUN_0034c7e5(iVar6 + 0x50,8);
  FUN_00347c42(1,puVar4 + 6,0x18,iVar6 + 0x50,iVar6 + 0x58,0x48);
  puVar8 = (undefined4 *)((uint)*(ushort *)(iVar6 + 0x22) + (int)puVar10);
  puVar9 = puVar10;
  if ((*param_1 & 2) == 0) {
    *(undefined2 *)puVar8 = 0x5880;
    *(undefined2 *)((int)puVar8 + 2) = 100;
    puVar12 = puVar4 + 0x24;
    puVar13 = puVar8;
    for (iVar6 = 0x18; puVar13 = puVar13 + 1, puVar9 = puVar8, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
    }
  }
  puVar5 = (undefined2 *)((uint)*(ushort *)((int)puVar9 + 2) + (int)puVar9);
  *puVar5 = 0x5881;
  puVar5[1] = 0x18;
  FUN_0034c461(puVar4 + 2,0x10,puVar10,(int)puVar5 - (int)puVar10,0,0,puVar5 + 2,0x14);
  FUN_00348b9a(local_c,0);
  return;
}
