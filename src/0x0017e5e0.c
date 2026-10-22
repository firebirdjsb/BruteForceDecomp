/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD39128237FE7CE17C0DF3A060068937B551A46B76724A312D30A14E02921A6B
 * Entry: 0x0017e5e0, Ghidra index: 5105, label: FUN_0017e5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0017e5e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = 1e+09;
  uVar3 = (uint)*(byte *)(param_1 + 1);
  if (uVar3 != 0) {
    do {
      fVar2 = param_1[0xc] - param_2[1];
      fVar2 = (param_1[0xb] - *param_2) * (param_1[0xb] - *param_2) +
              fVar2 * fVar2 + (param_1[0xd] - param_2[2]) * (param_1[0xd] - param_2[2]);
      if (fVar2 < fVar1) {
        fVar1 = fVar2;
      }
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 0xc;
    } while (uVar3 != 0);
    if (fVar1 <= 0.0) {
      return (float10)0.0;
    }
  }
  return (float10)SQRT(fVar1);
}
