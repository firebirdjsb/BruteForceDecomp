/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F4D14F7031B9A2E62D76E5938E316007E67050EC954A91005158DE4432ADF81
 * Entry: 0x0011fd90, Ghidra index: 3639, label: FUN_0011fd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * FUN_0011fd90(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar5 = (**(code **)(**(int **)(param_1 + 0x64c) + 0x40))();
  fStack_28 = *(float *)(iVar5 + 0x2c) + *(float *)(param_1 + 0x65c);
  fStack_2c = *(float *)(iVar5 + 0x28) + *(float *)(param_1 + 0x658);
  fStack_30 = *(float *)(iVar5 + 0x24) + *(float *)(param_1 + 0x654);
  iVar5 = *(int *)(param_1 + 0x660);
  if ((iVar5 == 0) || (iVar5 == -1)) {
    if (*(int *)(param_1 + 0x650) == 0) goto LAB_0011fe3e;
    iVar5 = FUN_00236e00();
    if (iVar5 == 0) goto LAB_0011fe3e;
    fStack_38 = *(float *)(iVar5 + 0x10);
    fStack_2c = *(float *)(iVar5 + 0xc);
    fStack_30 = *(float *)(iVar5 + 8);
  }
  else {
    fStack_38 = *(float *)(iVar5 + 0x40);
    fStack_2c = *(float *)(iVar5 + 0x3c);
    fStack_30 = *(float *)(iVar5 + 0x38);
  }
  fStack_28 = fStack_38;
LAB_0011fe3e:
  iVar6 = (**(code **)(*(int *)(param_1 + 0x1b4) + 0x28))();
  iVar5 = *(int *)(param_1 + 1000);
  fVar1 = fStack_28 - *(float *)(iVar5 + 0x40);
  fVar2 = fStack_2c - *(float *)(iVar5 + 0x3c);
  fVar3 = fStack_30 - *(float *)(iVar5 + 0x38);
  fVar4 = 1.0 / SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (-*(float *)(iVar6 + 8) * fVar4 * fVar3 +
      -*(float *)(iVar6 + 0x14) * fVar2 * fVar4 + -*(float *)(iVar6 + 0x20) * fVar1 * fVar4 < -0.55)
  {
    fStack_28 = -*(float *)(iVar6 + 0x20) * 3.0 + *(float *)(iVar5 + 0x40);
    fStack_2c = -*(float *)(iVar6 + 0x14) * 3.0 + *(float *)(iVar5 + 0x3c);
    fStack_30 = -*(float *)(iVar6 + 8) * 3.0 + *(float *)(iVar5 + 0x38);
  }
  *param_2 = fStack_30;
  param_2[1] = fStack_2c;
  param_2[2] = fStack_28;
  return param_2;
}
