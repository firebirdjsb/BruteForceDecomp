/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4958E72F6DF39F33D79AB1E09C3D5F3FC0393A077511CF7BE96A943EB5EC8911
 * Entry: 0x0004ad00, Ghidra index: 601, label: FUN_0004ad00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004ad00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x358) + 4);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    piVar1 = (int *)piVar2[4];
    if ((((piVar2[0x1c] == 1) && (piVar1 != (int *)0x0)) && ((*(byte *)(piVar1 + 0x1c) & 1) == 0))
       && (iVar3 = (**(code **)(*piVar1 + 0xf4))(), iVar3 != 0)) {
      (**(code **)(*unaff_EDI + 8))(piVar2 + 3);
    }
    FUN_0001c5d0();
    piVar1 = *(int **)(*(int *)(param_1 + 0x358) + 4);
  }
  return unaff_EDI[0x46];
}
