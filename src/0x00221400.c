/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F93D2E9C2E09AA94E821558A13955EFDB4C7BD8583B6C2A9601A559B15D1CD2
 * Entry: 0x00221400, Ghidra index: 7570, label: FUN_00221400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00221400(undefined4 param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  piVar1 = *(int **)(in_ECX + 0x24);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*piVar1;
  }
  if (piVar2 != piVar1) {
    do {
      if (piVar2[2] == param_2) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
    if ((piVar2 != piVar1) && (FUN_00221de0(), piVar2 != *(int **)(in_ECX + 0x24))) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar2);
    }
  }
  return;
}
