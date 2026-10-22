/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE279CFCFE23B898D134773C64628DD3EC1BCCC92A84A4C2E3ABC518B0182D22
 * Entry: 0x002d4bc0, Ghidra index: 10212, label: FUN_002d4bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d4bc0(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_74 [4];
  float local_70;
  undefined4 uStack_6c;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_54 [8];
  float local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined2 local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    pbVar1 = *(byte **)(param_3 + 0x90);
    local_64 = *(int *)(param_2 + 0x90);
    if (*(char *)(param_2 + 0x70) < '\b') {
      uVar4 = *(undefined4 *)(pbVar1 + 0x170);
    }
    else {
      uVar4 = *(undefined4 *)(local_64 + 0x170);
    }
    iVar5 = FUN_002d30f0(param_1,local_74,&local_70,uVar4,1);
    iVar2 = *(int *)(iVar5 + 0x40);
    fVar7 = (float10)FUN_002d5960(*(undefined4 *)(param_2 + 0x14));
    local_70 = (float)fVar7;
    FUN_002d4fe0(iVar2,local_54,local_70,iVar5);
    local_3c = *(float *)(iVar2 + 0x14);
    local_40 = *(float *)(iVar2 + 0x10);
    local_38 = *(float *)(iVar2 + 0x18);
    if ((*pbVar1 & 0xc) != 0) {
      local_40 = local_40 * -1.0;
      local_3c = local_3c * -1.0;
      local_38 = local_38 * -1.0;
    }
    local_28 = 0;
    local_26 = 0;
    local_24 = 0;
    local_1c = 0;
    local_1a = 0;
    local_18 = 0;
    local_10 = 0;
    local_e = 0;
    local_c = 0;
    local_70 = 0.0;
    uStack_6c = 0;
    local_60 = 0;
    uStack_5c = 0;
    local_20 = 1;
    local_14 = 1;
    local_8 = 1;
    iVar6 = FUN_002c5ca0();
    if (iVar6 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x14);
      local_70 = *(float *)(iVar3 + 0x108);
      local_60 = *(undefined4 *)(iVar6 + 0x20);
      uStack_6c = *(undefined4 *)(iVar3 + 0x10c);
      uStack_5c = *(undefined4 *)(iVar6 + 0x24);
      *(float *)(iVar6 + 0x20) = local_70;
      *(undefined4 *)(iVar6 + 0x24) = uStack_6c;
      FUN_002d52e0(param_1,iVar5);
    }
    FUN_002d4dd0();
    iVar5 = *(int *)(param_2 + 0x14);
    local_4c = (float)((float10)(double)CONCAT44(uStack_6c,local_70) -
                      (float10)(double)CONCAT44(uStack_5c,local_60));
    *(float *)(iVar2 + 0x10) = local_40;
    *(float *)(iVar2 + 0x14) = local_3c;
    *(float *)(iVar2 + 0x18) = local_38;
    local_48 = iVar5;
    local_44 = iVar2;
    FUN_002b5530(&local_4c);
    if ((*(uint *)(param_2 + 0x70) & 0x2000) != 0) {
      FUN_002bcbb0(*(undefined4 *)(iVar5 + 0xc),param_2);
    }
    if ((*(uint *)(param_3 + 0x70) & 0x2000) != 0) {
      FUN_002bcbb0(*(undefined4 *)(iVar5 + 0xc),param_3);
    }
  }
  return;
}
