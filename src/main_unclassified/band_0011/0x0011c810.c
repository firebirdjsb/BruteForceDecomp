/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A97770D13E1A1C3BC02E893EF9FAD35032C102C9B4FD0C175E0AC596459EE255
 * Entry: 0x0011c810, Ghidra index: 3621, label: FUN_0011c810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0011c954) */

void FUN_0011c810(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int unaff_retaddr;
  undefined1 auStack_74 [8];
  float fStack_6c;
  float fStack_68;
  float local_64 [3];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  (**(code **)(*(int *)(param_1 + 0x1b4) + 0x30))(local_64);
  FUN_0001d0c0();
  uStack_30 = 0;
  puVar1 = &uStack_58;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_58 = uStack_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  uStack_38 = uStack_8;
  uStack_48 = uStack_18;
  uStack_44 = uStack_14;
  uStack_40 = uStack_10;
  uStack_3c = uStack_c;
  (**(code **)(*(int *)(unaff_retaddr + 0x1b4) + 0x30))(auStack_74);
  iVar4 = iStack_4;
  iVar3 = *(int *)(iStack_4 + 0x6c);
  fVar2 = *(float *)(iVar3 + 0x34);
  local_64[0] = -fVar2;
  fStack_68 = -*(float *)(iVar3 + 0x28);
  fStack_6c = -*(float *)(iVar3 + 0x1c);
  FUN_0012b2a0();
  if (ABS((float)puVar1 * 8.0) < ABS(fVar2)) {
    *(undefined4 *)(iStack_4 + 0x7b0) = 0x3f800000;
    *(undefined4 *)(iStack_4 + 0x7b4) = 0;
    *(undefined4 *)(iStack_4 + 0x7b8) = 0;
    return;
  }
  if (0.0 <= (float)puVar1) {
    if ((float)puVar1 == fVar2) {
      FUN_00117310(iVar4,1,0x3f000000);
      return;
    }
    if (-fVar2 <= (float)puVar1) {
      fVar2 = (fVar2 / (float)puVar1) * 0.5 + 1.0;
    }
    else {
      fVar2 = ((float)puVar1 / fVar2) * -0.5;
    }
    FUN_00117310(iVar4,1,fVar2);
    return;
  }
  if ((float)puVar1 == fVar2) {
    FUN_00117310(iVar4,2,0x3f000000);
    return;
  }
  if (fVar2 < (float)puVar1) {
    FUN_00117310(iVar4,2,((float)puVar1 / fVar2) * 0.5);
    return;
  }
  FUN_00117310(iVar4,2,1.0 - (fVar2 / (float)puVar1) * 0.5);
  return;
}
