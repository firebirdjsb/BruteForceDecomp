/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA0E2B1428BEB6FBA3FEC8C505D1D1042A304C5BE50CAED0C21401D914965987
 * Entry: 0x002278e0, Ghidra index: 7654, label: FUN_002278e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002278e0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uStack_94;
  int local_90 [4];
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_50;
  undefined4 local_4c;
  float fStack_48;
  undefined4 local_44;
  undefined1 auStack_30 [32];
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((*(byte *)(param_1 + 0x88) & 2) != 0) {
    return;
  }
  iVar2 = *param_1;
  piVar1 = *(int **)(param_3 + 0x9c);
  local_4c = 0;
  piVar5 = local_90;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_44 = 0;
  iVar2 = (**(code **)(iVar2 + 0x40))();
  FUN_0003d6c0(auStack_30,iVar2,iVar2 + 0x24);
  iVar2 = *(int *)(param_4 + 0x90);
  uStack_c = *(undefined4 *)(iVar2 + 300);
  uStack_8 = *(undefined4 *)(iVar2 + 0x130);
  uStack_4 = *(undefined4 *)(iVar2 + 0x134);
  (**(code **)(*param_1 + 0x44))(auStack_30);
  iStack_60 = param_1[0x6d];
  iStack_5c = param_1[0x6f];
  fStack_48 = (float)param_1[0x73];
  uStack_94 = 0;
  iStack_6c = iStack_10;
  uStack_68 = uStack_c;
  uStack_64 = uStack_8;
  if (((*piVar1 == 1) || (*piVar1 == 10)) && (piVar1[1] != 0)) {
    FUN_00115000();
    fVar6 = (float10)FUN_00125940();
    fStack_48 = (float)(fVar6 * (float10)fStack_48);
  }
  iVar2 = *piVar1;
  if (((iVar2 == 1) || (iVar2 == 10)) && (iVar4 = piVar1[1], iVar4 != 0)) {
    if ((iVar2 == 1) || (iVar2 == 10)) goto LAB_00227a3e;
  }
  else if (iVar2 == 0) {
    iVar4 = piVar1[1];
    goto LAB_00227a3e;
  }
  iVar4 = 0;
LAB_00227a3e:
  if (iStack_50 != iVar4) {
    FUN_0008f6a0(iVar4);
  }
  uStack_58 = param_2;
  local_90[2] = uStack_8;
  local_90[0] = iStack_10;
  iStack_7c = param_1[2];
  local_90[1] = uStack_c;
  iStack_80 = param_1[1];
  local_90[3] = *param_1;
  local_4c = 0;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x54))();
  uStack_70 = puVar3[2];
  uStack_74 = puVar3[1];
  uStack_78 = *puVar3;
  (**(code **)(*(int *)(param_1[0x8d] + 0x1d4) + 8))(param_1[2],&uStack_94,1);
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
  FUN_00228c70(param_1,*(undefined4 *)(param_1[0x8d] + 0x1f0));
  FUN_001fe3d0(&stack0xffffff4c);
  FUN_0004d490(param_1[0x6d],0x42960000);
  if (iStack_5c != 0) {
    FUN_0008f6e0();
  }
  return;
}
