/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A35C4C8D575BAF4ACBA530C928DA5EBBAB8E49EF9B6D2047C714A281C2877A3C
 * Entry: 0x0021b410, Ghidra index: 7518, label: FUN_0021b410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021b410(int param_1,int *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fStack_24;
  
  if ((0.0 < param_3) && (*(int *)(param_2[3] + 4) == 3)) {
    pfVar1 = *(float **)(*(int *)(param_1 + 0xc) + 0xf8);
    for (pfVar4 = *(float **)(*(int *)(param_1 + 0xc) + 0xf4); pfVar4 != pfVar1; pfVar4 = pfVar4 + 8
        ) {
      if (((0.0 < pfVar4[2]) && (*pfVar4 < *(float *)(param_1 + 0xa8))) &&
         (*(float *)(param_1 + 0xa8) <= *pfVar4 + pfVar4[1])) {
        iVar3 = (**(code **)(*param_2 + 0x40))();
        fVar5 = *(float *)(iVar3 + 0x2c) - *(float *)(param_1 + 0x74);
        fVar6 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x70);
        fVar2 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x6c);
        fVar5 = SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar5 * fVar5);
        if ((fVar5 < pfVar4[2]) && (iVar3 = FUN_00126850(), iVar3 != 0)) {
          fVar5 = 1.0 - fVar5 / pfVar4[2];
          fVar6 = (*pfVar4 + pfVar4[1]) - *(float *)(param_1 + 0xa8);
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          if (0.0333 <= fVar6) {
            fVar6 = 0.0333;
          }
          fStack_24 = (pfVar4[7] - pfVar4[6]) * ((*(float *)(param_1 + 0xa8) - *pfVar4) / pfVar4[1])
                      + pfVar4[6];
          if (pfVar4[3] == 1.4013e-45) {
LAB_0021b5cd:
            fStack_24 = fVar5 * fStack_24;
          }
          else if (pfVar4[3] == 2.8026e-45) {
            fVar5 = fVar5 * fVar5 * fStack_24;
            goto LAB_0021b5cd;
          }
          FUN_001f2950((int)(fStack_24 * 65535.0),fVar6);
        }
      }
    }
  }
  return;
}
