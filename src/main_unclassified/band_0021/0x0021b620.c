/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E49EA0D097B27D28BF762243F0FA984B3F9AA6BA427331C3EE61E0714F10178B
 * Entry: 0x0021b620, Ghidra index: 7519, label: FUN_0021b620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021b620(int param_1,int *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fStack_18;
  
  if (0.0 < param_3) {
    pfVar1 = *(float **)(*(int *)(param_1 + 0xc) + 0x108);
    for (pfVar5 = *(float **)(*(int *)(param_1 + 0xc) + 0x104); pfVar5 != pfVar1;
        pfVar5 = pfVar5 + 6) {
      if (((0.0 < pfVar5[2]) && (*pfVar5 < *(float *)(param_1 + 0xa8))) &&
         (*(float *)(param_1 + 0xa8) <= *pfVar5 + pfVar5[1])) {
        iVar4 = (**(code **)(*param_2 + 0x40))();
        fVar6 = *(float *)(iVar4 + 0x2c) - *(float *)(param_1 + 0x74);
        fVar2 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x70);
        fVar3 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x6c);
        fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
        if ((fVar6 < pfVar5[2]) && (iVar4 = FUN_00073510(), iVar4 != 0)) {
          fStack_18 = (pfVar5[5] - pfVar5[4]) * ((*(float *)(param_1 + 0xa8) - *pfVar5) / pfVar5[1])
                      + pfVar5[4];
          fVar6 = 1.0 - fVar6 / pfVar5[2];
          if (pfVar5[3] == 1.4013e-45) {
            fStack_18 = fVar6 * fStack_18;
          }
          else if (pfVar5[3] == 2.8026e-45) {
            fStack_18 = fVar6 * fVar6 * fStack_18 * fStack_18;
          }
          FUN_0006bdd0(fStack_18,0,0);
        }
      }
    }
  }
  return;
}
