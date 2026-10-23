/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5648062EF1861537A9E007EC1445FF7150421A6E35DC82022B5A2EB5375B88CE
 * Entry: 0x00149850, Ghidra index: 4272, label: FUN_00149850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00149850(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1[0x76] + 0x1fc) * 7.0;
  if (1.0 < fVar1) {
    fVar2 = fVar1 * 0.5;
    piVar5 = (int *)FUN_000735f0();
    if (piVar5 != (int *)0x0) {
      while( true ) {
        iVar6 = (**(code **)(*piVar5 + 0x40))();
        iVar7 = (**(code **)(*param_1 + 0x40))();
        fVar8 = *(float *)(iVar7 + 0x2c) - *(float *)(iVar6 + 0x2c);
        fVar3 = *(float *)(iVar7 + 0x28) - *(float *)(iVar6 + 0x28);
        fVar4 = *(float *)(iVar7 + 0x24) - *(float *)(iVar6 + 0x24);
        fVar8 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar8 * fVar8);
        if ((fVar8 < fVar1) &&
           ((fVar3 = 1.0, fVar8 <= fVar2 ||
            (fVar3 = 1.0 - (fVar8 - fVar2) * (1.0 / fVar2), 0.1 < fVar3)))) {
          FUN_0006bdd0(fVar3 * param_2 * 0.00769,0x3f000000,fVar3 * 0.75);
        }
        iVar6 = *(int *)(param_1[2] + 0xbf0);
        iVar7 = *(int *)(iVar6 + 4);
        if (iVar7 == *(int *)(iVar6 + 0xc)) break;
        while( true ) {
          piVar5 = *(int **)(iVar7 + 8);
          if (piVar5[0x15] == 1) break;
          iVar7 = **(int **)(iVar6 + 4);
          *(int *)(iVar6 + 4) = iVar7;
          if (iVar7 == *(int *)(iVar6 + 0xc)) {
            return;
          }
        }
        *(int *)(iVar6 + 4) = **(int **)(iVar6 + 4);
      }
    }
  }
  return;
}
