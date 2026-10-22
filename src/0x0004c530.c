/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01140E3FBEB5B7CA5C51F6A71B39E276CCC14883B5FBEC2B06AF01E22F00B3A5
 * Entry: 0x0004c530, Ghidra index: 635, label: FUN_0004c530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0004c530(float *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float *in_EAX;
  float fVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  
  fVar3 = in_EAX[2];
  fVar2 = in_EAX[1];
  *param_1 = *in_EAX;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[1] = 0.0;
  fVar3 = param_1[2] * param_1[2] + *param_1 * *param_1;
  if (1.1920929e-07 <= fVar3) {
    auVar4 = rsqrtss(in_XMM0,fVar3);
    fVar3 = auVar4._0_4_;
    uVar1 = *(undefined8 *)(param_1 + 1);
    *param_1 = *param_1 * fVar3;
    param_1[1] = (float)uVar1 * fVar3;
    param_1[2] = (float)((ulonglong)uVar1 >> 0x20) * fVar3;
    return 1;
  }
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  *param_1 = 0.0;
  return 0;
}
