/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD1487BD8DCCACBCDE9DDB3932130C693B5AE84FFD34625740454C29093C1BA6
 * Entry: 0x0002fba0, Ghidra index: 316, label: FUN_0002fba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float10 FUN_0002fba0(undefined4 param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  piVar3 = (int *)FUN_000120f0();
  fVar5 = (float10)1.0;
  if (((int *)piVar3[0x87] != (int *)0x0) &&
     (fVar8 = *(float *)(*(int *)piVar3[0x87] + 8), 0.1 < fVar8)) {
    iVar4 = (**(code **)(*piVar3 + 0x40))();
    fVar1 = param_2[2] - *(float *)(iVar4 + 0x2c);
    fVar2 = *param_2 - *(float *)(iVar4 + 0x24);
    fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    if (0.0 < fVar6) {
      fVar7 = (fVar6 / param_3) * fVar8;
      if (fVar8 <= fVar7) {
        fVar7 = fVar8;
      }
      fVar7 = fVar7 / fVar6;
      fVar8 = SQRT(fVar7 * fVar2 * fVar7 * fVar2 +
                   fVar7 * 0.0 * fVar7 * 0.0 + fVar7 * fVar1 * fVar7 * fVar1) / fVar8;
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.2) {
        fVar8 = 0.2;
      }
      return (float10)fVar8;
    }
    fVar5 = (float10)0.0;
  }
  return fVar5;
}
