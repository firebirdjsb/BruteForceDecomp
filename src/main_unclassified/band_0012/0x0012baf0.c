/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A158AB8BAEAE0C76832BF083F550B79E29FF902E9429FBD043C32DF2B54AFBAD
 * Entry: 0x0012baf0, Ghidra index: 3793, label: FUN_0012baf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0012baf0(int param_1,float param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  param_2 = -param_2;
  fVar1 = *(float *)(param_1 + 0x44c) * 0.0 +
          *(float *)(param_1 + 0x454) * 0.0 + param_2 * *(float *)(param_1 + 0x450);
  auVar7._0_4_ = *(float *)(param_1 + 0x44c) * fVar1;
  auVar7._4_4_ = fVar1 * 0.0;
  auVar7._8_4_ = (float)*(undefined8 *)(param_1 + 0x450) * fVar1;
  auVar7._12_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x450) >> 0x20) * fVar1;
  fVar1 = -auVar7._0_4_;
  fVar2 = param_2 - auVar7._8_4_;
  fVar3 = 0.0 - auVar7._12_4_;
  fVar4 = param_2 * param_2 + 0.0;
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if ((1.4210855e-14 < fVar4) && (1.4210855e-14 < fVar5)) {
    auVar6._4_12_ = auVar7._4_12_;
    auVar6._0_4_ = SQRT(fVar4);
    auVar7 = rsqrtss(auVar6,fVar5);
    fVar4 = auVar7._0_4_ * auVar6._0_4_;
    *param_4 = fVar1 * fVar4;
    param_4[1] = fVar2 * fVar4;
    param_4[2] = fVar3 * fVar4;
    return;
  }
  param_4[2] = 0.0;
  param_4[1] = 0.0;
  *param_4 = 0.0;
  return;
}
