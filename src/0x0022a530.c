/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C04EE48D2C7E5AE3D417F9B2ED04AAF0A4D31E7CCC8E58A8A7E5ADC05FC2B46C
 * Entry: 0x0022a530, Ghidra index: 7677, label: FUN_0022a530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022a530(int param_1,float param_2)

{
  float fVar1;
  
  param_2 = param_2 + *(float *)(param_1 + 0x39c);
  if (param_2 <= 3.1415927) {
    if (param_2 < -3.1415927) {
      param_2 = param_2 + 6.2831855;
    }
  }
  else {
    param_2 = param_2 - 6.2831855;
  }
  *(float *)(param_1 + 0x39c) = param_2;
  fVar1 = *(float *)(param_1 + 0x39c);
  if (*(float *)(param_1 + 0x39c) <= *(float *)(param_1 + 0x3a4)) {
    fVar1 = *(float *)(param_1 + 0x3a4);
  }
  if (*(float *)(param_1 + 0x3a0) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x3a0);
  }
  *(float *)(param_1 + 0x39c) = fVar1;
  return;
}
