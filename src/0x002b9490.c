/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A8AEEA52035AB41BD37676A66B5EC646527EA8FA63CEC4953FF085A6F8EF08F
 * Entry: 0x002b9490, Ghidra index: 9870, label: FUN_002b9490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b9490(int *param_1,float *param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)param_1[2] - *param_2;
  fVar6 = (float)param_1[3] - (float)*(undefined8 *)(param_2 + 1);
  fVar7 = (float)param_1[4] - (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  if ((((fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5 <=
         ((float)param_1[5] + param_3) * ((float)param_1[5] + param_3)) &&
       (fVar2 = (float)param_1[5] * 0.004, fVar3 = (float)*(byte *)(param_1 + 6) * fVar2 + param_3,
       fVar3 < ABS(fVar5) == (fVar3 == ABS(fVar5)))) &&
      (fVar5 = (float)*(byte *)((int)param_1 + 0x19) * fVar2 + param_3,
      fVar5 < ABS(fVar6) == (fVar5 == ABS(fVar6)))) &&
     (fVar5 = (float)*(byte *)((int)param_1 + 0x1a) * fVar2 + param_3,
     fVar5 < ABS(fVar7) == (fVar5 == ABS(fVar7)))) {
    iVar1 = param_1[1];
    if ((iVar1 != 0) && (iVar1 + (int)param_1 != 0)) {
      FUN_002b98e0(iVar1 + (int)param_1);
      return;
    }
    if (*param_1 == 0) {
      if ((*(short *)(iVar1 + 0xc + (int)param_1) == 2) &&
         (fVar4 = (float10)FUN_002cdd70(iVar1 + (int)param_1 + 0x10),
         (float10)param_3 * (float10)param_3 < fVar4)) {
        return;
      }
      FUN_002b98e0(iVar1 + (int)param_1);
      return;
    }
    FUN_002b9490(param_1 + 7,param_2,param_3,param_4);
    FUN_002b9490(*param_1 + (int)param_1,param_2,param_3,param_4);
  }
  return;
}
