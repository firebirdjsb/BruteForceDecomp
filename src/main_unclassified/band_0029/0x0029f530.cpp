/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87429555BF1BF9B74A3ACAA975A77372BE69C02BE3B705939F532C806449800C
 * Entry: 0x0029f530, Ghidra index: 9487, label: FUN_0029f530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0029f530(undefined4 param_1)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = *(int **)(in_EAX + 0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(in_EAX + 8);
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
      *(undefined4 *)(in_EAX + 0x20) = uVar2;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x3c))(piVar1,param_1);
    uVar2 = (**(code **)(**(int **)(in_EAX + 0xc) + 0x84))(*(int **)(in_EAX + 0xc));
    puVar3 = (undefined4 *)
             (**(code **)(**(int **)(in_EAX + 0xc) + 0x4c))(*(int **)(in_EAX + 0xc),uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(in_EAX + 0x10);
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      return 0;
    }
  }
  return 0;
}
