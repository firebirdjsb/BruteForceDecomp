/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B14759627309A7C52CD4C30576A5739A6BEE974222168AE2117F0654A333F8E3
 * Entry: 0x0034f472, Ghidra index: 13035, label: FUN_0034f472
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034f472(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  undefined4 uVar4;
  
  KeRaiseIrqlToDpcLevel();
  piVar2 = *(int **)(in_ECX + 0xa8c);
  piVar3 = (int *)(in_ECX + 0xa8c);
  if (piVar2 != (int *)0x0) {
    do {
      piVar1 = piVar2;
      piVar2 = piVar1;
      if (param_1 == piVar1 + 0x18) break;
      piVar2 = (int *)*piVar1;
      piVar3 = piVar1;
    } while (piVar2 != (int *)0x0);
    if (piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      FUN_0034f1af(piVar2);
      uVar4 = 0;
      goto LAB_0034f4b4;
    }
  }
  uVar4 = 0x2726;
LAB_0034f4b4:
  KfLowerIrql();
  return uVar4;
}
