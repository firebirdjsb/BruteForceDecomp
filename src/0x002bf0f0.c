/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 601C03B1A55C7F64761DB5A939837F8A5EDF94F0483A119FCA22375D4927793E
 * Entry: 0x002bf0f0, Ghidra index: 9992, label: FUN_002bf0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002bf0f0(float param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  float10 fVar3;
  
  iVar1 = *(int *)(unaff_EBX + 0x10);
  fVar3 = (float10)*(double *)(*(int *)(iVar1 + 0x14) + 0x108) - (float10)*(double *)(iVar1 + 0x40);
  uVar2 = FUN_002d5d50(unaff_EBX,
                       (float)(fVar3 * (float10)*(float *)(iVar1 + 0x48) +
                               (float10)*(float *)(iVar1 + 0x50) + (float10)param_1));
  *(undefined4 *)(unaff_EBX + 4) = uVar2;
  return ((float10)*(float *)(iVar1 + 0x50) - (float10)*(float *)(iVar1 + 0x54)) +
         ((float10)*(float *)(iVar1 + 0x48) - (float10)*(float *)(iVar1 + 0x4c)) *
         (float10)(float)fVar3;
}
