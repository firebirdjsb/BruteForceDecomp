/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46E369E825B35653EA4D741F5CE4C9FFB7D189D232830AB7308E8B59EEEFD975
 * Entry: 0x002c3cb0, Ghidra index: 10049, label: FUN_002c3cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002c3cb0(float *param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  float10 fVar4;
  
  uVar2 = (uint)*(ushort *)(in_ECX + 2);
  fVar4 = (float10)0.0;
  if (-1 < (int)(uVar2 - 1)) {
    piVar3 = (int *)(*(int *)(in_ECX + 4) + (uVar2 - 1) * 4);
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + -1;
      uVar2 = uVar2 - 1;
      fVar4 = (float10)*(float *)(iVar1 + 0x54) * (float10)*(float *)(iVar1 + 0x44) *
              (float10)*(float *)(iVar1 + 0x30) + fVar4;
    } while (uVar2 != 0);
  }
  return (float10)*param_1 * (float10)*param_1 * fVar4;
}
