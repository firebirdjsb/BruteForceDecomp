/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1469AB7A8727F61D34EF582ED6BEA7784D9643CD3395B3B433D88A97DE178880
 * Entry: 0x00343759, Ghidra index: 12715, label: FUN_00343759
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343759(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_00343054(param_1);
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x24)) {
    iVar1 = FUN_00343726(param_1,8);
    if (iVar1 != 0) {
      if (**(char **)(param_1 + 0x24) == '\0') {
        *(char **)(param_1 + 0x24) = *(char **)(param_1 + 0x24) + 1;
        goto LAB_00343784;
      }
      FUN_00343377(param_1,0xfffffc15);
    }
    uVar3 = 0;
  }
  else {
LAB_00343784:
    uVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x18) = uVar2;
    if (uVar2 < *(uint *)(param_1 + 0x14)) {
      FUN_00343377(param_1,0x3ea);
    }
    uVar3 = 1;
  }
  return uVar3;
}
