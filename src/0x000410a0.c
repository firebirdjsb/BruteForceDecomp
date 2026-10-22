/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D18A552122C8F7858E73681BB8E52B4FBA5560E0E02ABF045B20E8CED4A8C676
 * Entry: 0x000410a0, Ghidra index: 493, label: FUN_000410a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_000410a0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *in_ECX;
  float *in_EDX;
  float10 fVar5;
  float fVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = in_ECX[2] - in_EDX[2];
  fVar2 = in_ECX[1] - in_EDX[1];
  fVar3 = *in_ECX - *in_EDX;
  auVar7._4_12_ = in_XMM0._4_12_;
  auVar7._0_4_ = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (1.4210855e-14 < auVar7._0_4_) {
    auVar7 = rsqrtss(auVar7,auVar7._0_4_);
    fVar6 = auVar7._0_4_;
    auVar8._0_4_ = fVar6 * fVar3;
    auVar8._4_4_ = fVar6 * 0.0;
    auVar8._8_4_ = fVar6 * fVar2;
    auVar8._12_4_ = fVar6 * fVar1;
    fVar1 = -auVar8._0_4_;
    fVar2 = auVar8._12_4_ * auVar8._12_4_ + fVar1 * fVar1 + 0.0;
    if (1.1920929e-07 < fVar2) {
      auVar7 = rsqrtss(auVar8,fVar2);
      param_1 = auVar7._0_4_ * param_1;
      fVar2 = auVar8._12_4_ * param_1;
      fVar3 = param_1 * 0.0;
      fVar1 = fVar1 * param_1;
      local_10 = fVar1 + in_EDX[2];
      local_14 = fVar3 + in_EDX[1];
      local_18 = fVar2 + *in_EDX;
      local_4 = -fVar1 + in_EDX[2];
      local_8 = -fVar3 + in_EDX[1];
      local_c = -fVar2 + *in_EDX;
      local_1c = fVar1 + in_ECX[2];
      local_20 = fVar3 + in_ECX[1];
      local_24 = fVar2 + *in_ECX;
      local_30 = -fVar2 + *in_ECX;
      _local_2c = CONCAT44(-fVar1 + in_ECX[2],-fVar3 + in_ECX[1]);
      fVar5 = (float10)FUN_000394b0();
      cVar4 = FUN_0004ce30(&local_18,&local_24,(float)(fVar5 + (float10)0.1));
      if ((cVar4 == '\0') ||
         (cVar4 = FUN_0004ce30(&local_c,&local_30,(float)(fVar5 + (float10)0.1)), cVar4 == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}
