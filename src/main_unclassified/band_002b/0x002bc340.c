/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 012F233C2FA3B1DCC3861E14F13DF3CDA3736233864CC96875434745F00B5EB5
 * Entry: 0x002bc340, Ghidra index: 9920, label: FUN_002bc340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bc340(int *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 unaff_retaddr;
  float local_30 [2];
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  iVar3 = *(int *)(param_2 + 0x90);
  iVar4 = *(int *)(param_3 + 0x90);
  pfVar1 = (float *)(iVar3 + 300);
  pfVar2 = (float *)(iVar4 + 300);
  local_24 = 0.0;
  local_30[0] = *pfVar2 - *pfVar1;
  fStack_28 = (float)((ulonglong)*(undefined8 *)(iVar4 + 0x130) >> 0x20) -
              (float)((ulonglong)*(undefined8 *)(iVar3 + 0x130) >> 0x20);
  FUN_002b65a0(local_30);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))(param_2,param_3);
  if (*(char *)(iVar3 + 100) < '\b') {
    fStack_20 = -(*(float *)(iVar3 + 0x20) * (float)fVar5);
    uStack_1c = 0;
    fStack_28 = (float)pfVar1 * fStack_20;
    local_24 = (float)pfVar2 * fStack_20;
    fStack_20 = local_30[0] * fStack_20;
    FUN_002b3bc0(pfVar1,&fStack_28);
    fStack_14 = 0.0;
    fStack_10 = 0.0;
    uStack_c = 0;
    FUN_002b3b70(unaff_retaddr,&fStack_18);
  }
  if (*(char *)(iVar4 + 100) < '\b') {
    fStack_10 = *(float *)(iVar4 + 0x20) * (float)fVar5;
    fStack_18 = (float)pfVar1 * fStack_10;
    uStack_c = 0;
    fStack_14 = (float)pfVar2 * fStack_10;
    fStack_10 = local_30[0] * fStack_10;
    FUN_002b3bc0(pfVar1,&fStack_18);
    local_24 = 0.0;
    fStack_20 = 0.0;
    uStack_1c = 0;
    FUN_002b3b70(param_1,&fStack_28);
  }
  return;
}
