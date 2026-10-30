/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 934FADA676B4532EDC8E2762EBD765F32116592532890F2FCDAD676C204F9314
 * Entry: 0x0004dc10, Ghidra index: 657, label: FUN_0004dc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004dc10(float *param_1,float param_2)

{
  float10 fVar1;
  int *piVar2;
  int iVar3;
  undefined2 extraout_var;
  uint3 uVar4;
  float10 fVar5;
  float afStack_28 [4];
  undefined1 auStack_18 [8];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  piVar2 = (int *)(**(code **)((int)param_1[6] + 8))();
  (**(code **)(*piVar2 + 0x30))(auStack_18);
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  fStack_8 = param_1[2] - *(float *)(iVar3 + 0x2c);
  fStack_c = param_1[1] - *(float *)(iVar3 + 0x28);
  fStack_10 = *param_1 - *(float *)(iVar3 + 0x24);
  FUN_0004c530(afStack_28);
  fVar5 = (float10)FUN_00306c80();
  fVar5 = fVar5 * (float10)57.295776;
  fVar1 = (float10)param_2;
  uVar4 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar5 < fVar1) << 8 | (ushort)(isnan(fVar5) || isnan(fVar1)) << 10 |
                           (ushort)(fVar5 == fVar1) << 0xe) >> 8);
  if (fVar5 < fVar1) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}
