/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4831DB02926EC00E9625111C846AFE347C8F47F37EC55E40ACDF0F68DC7BB555
 * Entry: 0x000e73d0, Ghidra index: 2869, label: FUN_000e73d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e73d0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  float *in_ECX;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_XMM0 [16];
  undefined1 auVar11 [16];
  float local_1c;
  
  fVar1 = in_EAX[2];
  fVar2 = in_EAX[1];
  fVar3 = *in_EAX;
  auVar11 = rsqrtss(in_XMM0,fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar8 = auVar11._0_4_;
  fVar9 = ABS(fVar8 * fVar2);
  if (fVar9 < 0.9848 == (fVar9 == 0.9848)) {
    fVar9 = 0.0;
    local_1c = 1.0;
  }
  else {
    fVar9 = 1.0;
    local_1c = 0.0;
  }
  fVar4 = -(fVar1 * fVar8);
  fVar5 = -(fVar8 * fVar2);
  fVar1 = -(fVar8 * fVar3);
  fVar3 = fVar5 * 0.0 - fVar9 * fVar1;
  fVar8 = local_1c * fVar1 - fVar4 * 0.0;
  fVar2 = fVar9 * fVar4 - local_1c * fVar5;
  auVar11 = rsqrtss(auVar11,fVar2 * fVar2 + fVar8 * fVar8 + fVar3 * fVar3);
  fVar9 = auVar11._0_4_;
  fVar2 = fVar9 * fVar2;
  fVar8 = fVar8 * fVar9;
  fVar3 = fVar3 * fVar9;
  fVar9 = fVar8 * fVar1 - fVar2 * fVar5;
  fVar6 = fVar4 * fVar2 - fVar3 * fVar1;
  fVar7 = fVar3 * fVar5 - fVar8 * fVar4;
  auVar11 = rsqrtss(auVar11,fVar7 * fVar7 + fVar6 * fVar6 + fVar9 * fVar9);
  fVar10 = auVar11._0_4_;
  *in_ECX = fVar2;
  in_ECX[4] = fVar8;
  in_ECX[8] = fVar3;
  in_ECX[2] = fVar1;
  in_ECX[1] = fVar10 * fVar7;
  in_ECX[9] = fVar9 * fVar10;
  in_ECX[5] = fVar6 * fVar10;
  in_ECX[6] = fVar5;
  in_ECX[10] = fVar4;
  return;
}
