/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C084AEB304ECAC898747975BEA91B0BB2CF0CB33A95541517272C574DC149E13
 * Entry: 0x002b74e0, Ghidra index: 9849, label: FUN_002b74e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b74e0(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  int in_EAX;
  undefined4 uVar6;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_c;
  
  if (param_2 < 0.0) {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x108);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10c);
    local_28 = 0.0;
    FUN_002b2b10(*(undefined4 *)(param_1 + 0x90),&local_34,uVar6,uVar1);
    local_18 = 0;
    FUN_002b2b10(*(undefined4 *)(in_EAX + 0x90),&local_24,uVar6,uVar1);
    param_2 = SQRT((local_34 - local_24) * (local_34 - local_24) +
                   (local_30 - local_20) * (local_30 - local_20) +
                   (local_2c - local_1c) * (local_2c - local_1c));
  }
  if (*(char *)(param_1 + 0x70) < '\b') {
    if (*(char *)(in_EAX + 0x70) != '\b') goto LAB_002b75c6;
    uVar6 = *(undefined4 *)(*(int *)(in_EAX + 0x94) + 0xc);
  }
  else {
    if (('\a' < *(char *)(in_EAX + 0x70)) || (*(char *)(param_1 + 0x70) != '\b')) goto LAB_002b75c6;
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0xc);
  }
  FUN_002be1c0(uVar6);
LAB_002b75c6:
  iVar2 = *(int *)(in_EAX + 0x90);
  if (*(int *)(in_EAX + 0x3c) == 0) {
    uVar6 = FUN_002bbeb0();
    *(undefined4 *)(in_EAX + 0x3c) = uVar6;
  }
  if ((*(char *)(in_EAX + 0x70) < '\b') &&
     (*(int *)(*(int *)(in_EAX + 0x3c) + 0x60) < *(int *)(*(int *)(in_EAX + 0x14) + 0x120))) {
    FUN_002bbf70();
  }
  pfVar3 = *(float **)(in_EAX + 0x3c);
  local_24 = pfVar3[0x10];
  iVar4 = *(int *)(param_1 + 0x90);
  local_20 = pfVar3[0x11];
  local_1c = pfVar3[0x12];
  local_34 = *pfVar3;
  local_30 = pfVar3[1];
  local_2c = pfVar3[2];
  local_28 = pfVar3[3];
  fVar5 = param_2 + *(float *)(iVar2 + 4);
  local_18 = 0;
  if (*(float *)(iVar4 + 4) < fVar5) {
    *(float *)(iVar4 + 4) = fVar5;
  }
  param_2 = param_2 + *(float *)(iVar2 + 8);
  if (*(float *)(iVar4 + 8) < param_2) {
    *(float *)(iVar4 + 8) = param_2;
  }
  local_c = local_1c;
  FUN_002bd570();
  if (*(short *)(iVar2 + 0x52) != 0) {
    *(int *)(in_EAX + 0x90) = iVar4;
    *(int *)(in_EAX + 0x94) = iVar4;
    *(int *)(in_EAX + 0x98) = iVar4;
    if (*(ushort *)(iVar4 + 0x50) <= *(ushort *)(iVar4 + 0x52)) {
      FUN_002ccf80();
    }
    *(int *)(*(int *)(iVar4 + 0x54) + (uint)*(ushort *)(iVar4 + 0x52) * 4) = in_EAX;
    *(short *)(iVar4 + 0x52) = *(short *)(iVar4 + 0x52) + 1;
    *(undefined1 *)(in_EAX + 0x70) = *(undefined1 *)(param_1 + 0x70);
    FUN_002b7710(&local_34,&local_24,0);
    FUN_002ba5e0(iVar4);
    return;
  }
  if (*(char *)(iVar2 + 100) < '\b') {
    FUN_002bb0e0(iVar2);
  }
  FUN_002bb860();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar2);
}
