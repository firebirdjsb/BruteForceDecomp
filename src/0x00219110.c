/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14EAC87692CE198065B6786A8E1429A62C344BD13E2BF08D6DABAAB6386B51C5
 * Entry: 0x00219110, Ghidra index: 7492, label: FUN_00219110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00219110(float *param_1)

{
  float fVar1;
  float *in_ECX;
  float *in_EDX;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4 = ZEXT416((uint)SQRT(param_1[2] * param_1[2] +
                              param_1[1] * param_1[1] + *param_1 * *param_1));
  auVar4 = rcpss(auVar4,auVar4);
  fVar2 = auVar4._0_4_;
  auVar4._0_4_ = fVar2 * *param_1;
  auVar4._4_4_ = fVar2 * 0.0;
  auVar4._8_4_ = fVar2 * (float)*(undefined8 *)(param_1 + 1);
  auVar4._12_4_ = fVar2 * (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  if (ABS(auVar4._8_4_) < 0.9848 == (ABS(auVar4._8_4_) == 0.9848)) {
    fVar2 = 0.0;
    param_1 = (float *)0x3f800000;
  }
  else {
    fVar2 = 1.0;
    param_1 = (float *)0x0;
  }
  in_EDX[1] = auVar4._12_4_ * 0.0 - (float)param_1 * auVar4._0_4_;
  in_EDX[2] = auVar4._0_4_ * fVar2 - auVar4._8_4_ * 0.0;
  fVar2 = (float)param_1 * auVar4._8_4_ - auVar4._12_4_ * fVar2;
  *in_EDX = fVar2;
  auVar5 = rsqrtss(auVar4,in_EDX[2] * in_EDX[2] + in_EDX[1] * in_EDX[1] + fVar2 * fVar2);
  fVar3 = auVar5._0_4_;
  fVar2 = fVar3 * *in_EDX;
  *in_EDX = fVar2;
  fVar1 = fVar3 * in_EDX[1];
  in_EDX[1] = fVar1;
  fVar3 = fVar3 * in_EDX[2];
  in_EDX[2] = fVar3;
  in_ECX[2] = fVar2 * auVar4._8_4_ - fVar1 * auVar4._0_4_;
  in_ECX[1] = auVar4._0_4_ * fVar3 - fVar2 * auVar4._12_4_;
  fVar2 = fVar1 * auVar4._12_4_ - fVar3 * auVar4._8_4_;
  *in_ECX = fVar2;
  auVar4 = rsqrtss(auVar5,in_ECX[2] * in_ECX[2] + in_ECX[1] * in_ECX[1] + fVar2 * fVar2);
  fVar2 = auVar4._0_4_;
  *in_ECX = fVar2 * *in_ECX;
  in_ECX[1] = fVar2 * in_ECX[1];
  in_ECX[2] = fVar2 * in_ECX[2];
  return;
}
