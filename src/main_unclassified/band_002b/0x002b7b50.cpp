/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 478E44E04B9A14C8E0BC9C62242877FAA61E6C23900068D885BFB0F71A247D5D
 * Entry: 0x002b7b50, Ghidra index: 9854, label: FUN_002b7b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002b7b50(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_2 - *param_1;
  fVar4 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_1 + 1);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) -
          (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  fVar1 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar2 = param_3 * param_3;
  if ((fVar2 <= fVar1) &&
     ((((fVar3 = fVar3 * param_1[0xc] + fVar4 * param_1[0xd] + fVar5 * param_1[0xe], fVar3 < 0.0 ||
        (param_3 + param_1[0x13] < fVar3)) || (fVar1 = fVar1 - fVar3 * fVar3, fVar2 < fVar1)) ||
      (param_1[0x13] < fVar3 - SQRT(fVar2 - fVar1))))) {
    return 0;
  }
  return 1;
}
