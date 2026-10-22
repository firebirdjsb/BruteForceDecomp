/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1BFA8413A97C35E821D592832E20E98C7EDAB52285880A8BC2DE7698AE6BB60
 * Entry: 0x002a2900, Ghidra index: 9526, label: FUN_002a2900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * FUN_002a2900(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar2 = param_2[2] - param_1[2];
  fVar3 = param_2[1] - param_1[1];
  fVar4 = *param_2 - *param_1;
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = param_2[3];
  if (fVar5 + param_1[3] < fVar1) {
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = fVar2;
    param_1[2] = fVar1;
    param_1[3] = param_2[3];
    return param_1;
  }
  if (param_1[3] <= fVar5 + fVar1) {
    fVar1 = (fVar5 + param_1[3] + fVar1) * 0.5;
    if (fVar5 < 1e-06 == (fVar5 == 1e-06)) {
      auVar7 = rcpss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar1 - param_1[3];
      *param_1 = fVar5 * fVar4 * fVar6 + *param_1;
      param_1[1] = fVar5 * fVar3 * fVar6 + param_1[1];
      param_1[2] = fVar5 * fVar2 * fVar6 + param_1[2];
    }
    param_1[3] = fVar1;
    return param_1;
  }
  return param_1;
}
