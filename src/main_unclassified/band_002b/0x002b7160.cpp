/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A72447611FE609A9CB5C127EDE0950F3524D0B9ADB758B2A32909EF25B19474
 * Entry: 0x002b7160, Ghidra index: 9842, label: FUN_002b7160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002b7160(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = ABS(param_1);
  fVar6 = param_1;
  fVar5 = fVar7;
  if (0.57 <= fVar7) {
    fVar6 = SQRT((1.0 - fVar7) * 0.5);
    fVar5 = fVar6;
  }
  fVar1 = fVar6 * fVar6;
  fVar2 = fVar6 * fVar1 * fVar1;
  fVar3 = fVar2 * fVar1;
  fVar4 = fVar3 * fVar1;
  fVar6 = fVar6 + fVar6 * fVar1 * 0.16666667 + fVar2 * 0.075 + fVar3 * 0.04464286 +
          fVar4 * 0.030381944;
  if (0.32 <= fVar5) {
    fVar4 = fVar4 * fVar1;
    fVar5 = fVar4 * fVar1;
    fVar2 = fVar5 * fVar1;
    fVar6 = fVar6 + fVar4 * 0.022372158 + fVar5 * 0.017352764 + fVar2 * 0.013964844 +
            fVar2 * fVar1 * 0.011551801;
  }
  if (0.57 <= fVar7) {
    if (param_1 < 0.0) {
      fVar6 = fVar6 + fVar6 + -1.5707964;
    }
    else {
      fVar6 = 1.5707964 - (fVar6 + fVar6);
    }
  }
  return (float10)fVar6;
}
