/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEF190251211D7729A9E0A6D0989D9081F71C013B7E95CFB82B114FBA1142D96
 * Entry: 0x00341459, Ghidra index: 12674, label: FUN_00341459
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00341459(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                char param_9,int param_10)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  undefined1 local_28 [28];
  undefined4 local_c;
  
  iVar5 = param_10;
  *(undefined4 *)(param_10 + 0x10) = 0;
  pbVar6 = local_4c;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6 = pbVar6 + 4;
  }
  local_44 = param_7;
  local_48 = 5;
  iVar3 = FUN_0033fcf8(param_1,param_6,local_40);
  if (iVar3 == 0) {
    FUN_0033f26e(local_28,local_2c,param_5);
    local_c = param_4;
    bVar1 = local_4c[0] | 0x20;
    if (param_8 != (undefined4 *)0x0) {
      local_38 = *param_8;
      uStack_34 = param_8[1];
      uStack_30 = param_8[2];
      iVar5 = param_10;
      bVar1 = local_4c[0] | 0xa0;
    }
    local_4c[0] = bVar1;
    param_8 = (undefined4 *)0x0;
    param_7 = 0;
    iVar3 = FUN_0033fa74(param_1,local_4c,0x1f,&param_8,&param_7);
    if (iVar3 == 0) {
      *(int *)(iVar5 + 0xc) = (int)param_8 + 0x18;
      iVar2 = *(int *)(param_1 + 8);
      uVar4 = ((int)param_8 + 0x1bU & 0xfffffffc) + iVar2;
      *(uint *)(param_1 + 8) = uVar4;
      if (*(uint *)(param_1 + 4) < uVar4) {
        *(int *)(param_1 + 8) = iVar2;
        iVar2 = 0;
      }
      *(int *)(iVar5 + 0x10) = iVar2;
      iVar3 = 0;
      if (iVar2 == 0) {
        iVar3 = 0x3c;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_0034051f(param_1,iVar5,param_8,param_7,param_3,(param_9 == '\0') * '\x04' + '\a'
                             ,param_2);
      }
    }
  }
  return iVar3;
}
