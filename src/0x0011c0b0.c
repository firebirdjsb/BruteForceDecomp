/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A09F80EDDCB40259573C0FCFB06B20FC2814F558487CCF80B1282FC5DD280F6E
 * Entry: 0x0011c0b0, Ghidra index: 3616, label: FUN_0011c0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011c0b0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 8) + 0xbe4);
  puVar2 = *(undefined4 **)(iVar1 + 0x1348);
  piVar5 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = (int *)*puVar2;
  }
  piVar3 = *(int **)(iVar1 + 0x1348);
  if (piVar5 != piVar3) {
    while (piVar4 = (int *)piVar5[2], piVar4[0x38] != unaff_EDI) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == piVar3) {
        return;
      }
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x1c))(param_1);
      FUN_0011aa20(unaff_EDI,param_1);
    }
  }
  return;
}
