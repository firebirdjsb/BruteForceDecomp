/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F410556B1057FE738909B9CD1826B4F470105113521915E671C83AA686BF1985
 * Entry: 0x0004c480, Ghidra index: 634, label: FUN_0004c480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0004c480(float *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  float *unaff_ESI;
  float fVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  
  fVar6 = unaff_ESI[2];
  fVar2 = in_EAX[2];
  fVar3 = unaff_ESI[1];
  fVar4 = in_EAX[1];
  fVar5 = *unaff_ESI - *in_EAX;
  *param_1 = fVar5;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar6 - fVar2;
  param_1[1] = 0.0;
  fVar6 = fVar5 * fVar5 + param_1[2] * param_1[2];
  if (1.1920929e-07 <= fVar6) {
    auVar7 = rsqrtss(in_XMM0,fVar6);
    fVar6 = auVar7._0_4_;
    uVar1 = *(undefined8 *)(param_1 + 1);
    *param_1 = *param_1 * fVar6;
    param_1[1] = (float)uVar1 * fVar6;
    param_1[2] = (float)((ulonglong)uVar1 >> 0x20) * fVar6;
    return 1;
  }
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  *param_1 = 0.0;
  return 0;
}
