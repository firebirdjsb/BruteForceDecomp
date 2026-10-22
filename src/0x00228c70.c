/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AAF9D0162E3216477FE779C5AE50F2C13C23BBCAEE98FC3719900535268EFCA
 * Entry: 0x00228c70, Ghidra index: 7660, label: FUN_00228c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00228c70(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_1[0x8d] + 0x1fc) * 7.0;
  if (1.0 < fVar1) {
    fVar2 = fVar1 * 0.5;
    fVar8 = param_2 * 0.00769;
    if (param_2 * 0.00769 <= 0.0) {
      fVar8 = 0.0;
    }
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    iVar5 = FUN_000735f0();
    if (iVar5 != 0) {
      while( true ) {
        iVar6 = (**(code **)(*param_1 + 0x40))();
        pfVar7 = (float *)(**(code **)(*(int *)(iVar5 + 0x48) + 0xc))();
        fVar9 = *(float *)(iVar6 + 0x2c) - pfVar7[2];
        fVar3 = *(float *)(iVar6 + 0x28) - pfVar7[1];
        fVar4 = *(float *)(iVar6 + 0x24) - *pfVar7;
        fVar9 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar9 * fVar9);
        if ((fVar9 < fVar1) &&
           ((fVar3 = 1.0, fVar9 <= fVar2 ||
            (fVar3 = 1.0 - (fVar9 - fVar2) * (1.0 / fVar2), 0.1 < fVar3)))) {
          FUN_0006bdd0(fVar8 * fVar3,0x3f000000,fVar3 * 0.75);
        }
        iVar6 = *(int *)(param_1[2] + 0xbf0);
        iVar5 = *(int *)(iVar6 + 4);
        if (iVar5 == *(int *)(iVar6 + 0xc)) break;
        while( true ) {
          iVar5 = *(int *)(iVar5 + 8);
          if (*(int *)(iVar5 + 0x54) == 1) break;
          iVar5 = **(int **)(iVar6 + 4);
          *(int *)(iVar6 + 4) = iVar5;
          if (iVar5 == *(int *)(iVar6 + 0xc)) {
            return;
          }
        }
        *(int *)(iVar6 + 4) = **(int **)(iVar6 + 4);
      }
    }
  }
  return;
}
