/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D6153AE9FE369B43B899CD0CCA01E44BF56CC06531E91D159BC9B380A268E60
 * Entry: 0x002e4880, Ghidra index: 10454, label: FUN_002e4880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e4880(char param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  uint uVar4;
  
  *(char *)(in_ECX + 0x92) = param_1;
  if (param_1 == '\0') {
    uVar4 = 0;
    iVar1 = (**(code **)(*in_ECX + 8))();
    if (iVar1 != 0) {
      piVar3 = in_ECX + 0x13;
      do {
        *piVar3 = 0;
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 4;
        uVar2 = (**(code **)(*in_ECX + 8))();
      } while (uVar4 < uVar2);
    }
  }
  return;
}
