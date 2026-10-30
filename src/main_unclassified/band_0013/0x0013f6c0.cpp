/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37C060163CAFA2C2C9CBE9BF6923AAD1EAD52C87EB3E908A9F5E1EFFAFCB9756
 * Entry: 0x0013f6c0, Ghidra index: 4059, label: FUN_0013f6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f6c0(int param_1)

{
  bool bVar1;
  int unaff_EBX;
  int *piVar2;
  int *piVar3;
  
  if (*(undefined4 **)(unaff_EBX + 0xc) == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)**(undefined4 **)(unaff_EBX + 0xc);
  }
  if (piVar2 != *(int **)(unaff_EBX + 0xc)) {
    do {
      piVar3 = (int *)piVar2[2];
      bVar1 = false;
      if ((piVar3[4] != 0) && (piVar3[4] == param_1)) {
        bVar1 = true;
      }
      if (((((char)piVar3[7] == '\0') && (piVar3[6] != 0)) && (piVar3[6] == param_1)) || (bVar1)) {
        (**(code **)(*piVar3 + 0x14))();
        (**(code **)*piVar3)(1);
        piVar3 = (int *)*piVar2;
        if (piVar2 != *(int **)(unaff_EBX + 0xc)) {
          *(int **)piVar2[1] = piVar3;
          *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar2);
        }
      }
      else {
        piVar3 = (int *)*piVar2;
      }
      piVar2 = piVar3;
    } while (piVar3 != *(int **)(unaff_EBX + 0xc));
  }
  return;
}
