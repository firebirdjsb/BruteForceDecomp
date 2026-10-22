/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9126D1CF6B41B1D9E0B3AF8CA89B1F166506674D5B63A3630CF49297BA48FB39
 * Entry: 0x002c68a0, Ghidra index: 10085, label: FUN_002c68a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c68a0(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  
  fVar1 = param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2;
  if (fVar1 <= 1e-10) {
    *(undefined4 *)(*param_1 + 0x154) = 0;
    iVar7 = *param_1;
    *(undefined4 *)(iVar7 + 0x140) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x144) = 0;
    *(undefined4 *)(iVar7 + 0x148) = 0;
  }
  else {
    auVar9 = rsqrtss(in_XMM0,fVar1);
    fVar8 = auVar9._0_4_;
    fVar1 = fVar8 * fVar1;
    fVar2 = fVar1 * fVar1 * fVar1;
    fVar1 = (fVar2 * 0.16666667 + fVar2 * fVar1 * fVar1 * 0.40414 + fVar1) *
            *(float *)(*param_1 + 0x78);
    *(float *)(*param_1 + 0x154) = fVar1 + fVar1;
    iVar7 = *param_1;
    fVar1 = *param_2;
    fVar2 = param_2[2];
    fVar3 = param_2[1];
    fVar4 = *param_2;
    fVar5 = param_2[2];
    fVar6 = param_2[1];
    *(float *)(iVar7 + 0x140) =
         (*param_2 * *(float *)(iVar7 + 0xfc) +
         *(float *)(iVar7 + 0x100) * param_2[1] + *(float *)(iVar7 + 0x104) * param_2[2]) * fVar8;
    *(float *)(iVar7 + 0x144) =
         (*(float *)(iVar7 + 0x110) * fVar3 +
         *(float *)(iVar7 + 0x114) * fVar2 + *(float *)(iVar7 + 0x10c) * fVar1) * fVar8;
    *(float *)(iVar7 + 0x148) =
         (*(float *)(iVar7 + 0x120) * fVar6 +
         *(float *)(iVar7 + 0x124) * fVar5 + *(float *)(iVar7 + 0x11c) * fVar4) * fVar8;
  }
  iVar7 = *param_1;
  *(float *)(iVar7 + 0x158) = *(float *)(iVar7 + 0x154) * *(float *)(iVar7 + 8);
  return;
}
