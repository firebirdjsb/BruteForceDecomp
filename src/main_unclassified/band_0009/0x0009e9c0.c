/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F42CCE2D01444D7F2F84FA12E4C349438B319DBF1B126132C138CDAE8C40271E
 * Entry: 0x0009e9c0, Ghidra index: 1881, label: FUN_0009e9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0009e9c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0 - *(float *)(*(int *)(param_1 + 0xc) + 0x4c) * *(float *)(param_1 + 0x78);
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  *param_2 = fVar2 * *(float *)(param_1 + 0xf0);
  param_2[1] = fVar2 * *(float *)(param_1 + 0xf4);
  param_2[2] = fVar2 * *(float *)(param_1 + 0xf8);
  param_2[3] = 1.0;
  return;
}
