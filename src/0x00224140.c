/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 965DE9A4EF32340BAFF00B58E2F18F66480A19843E7A72824F0C2D101FE3E535
 * Entry: 0x00224140, Ghidra index: 7613, label: FUN_00224140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00224140(int param_1,int param_2)

{
  float fVar1;
  
  *(int *)(param_2 + 0x1c) = param_1;
  *(float *)(param_2 + 8) = (float)*(int *)(param_1 + 4);
  fVar1 = *(float *)(param_2 + 0xc);
  if (*(float *)(param_2 + 8) <= *(float *)(param_2 + 0xc)) {
    fVar1 = *(float *)(param_2 + 8);
  }
  *(float *)(param_2 + 0xc) = fVar1;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 8);
  return;
}
