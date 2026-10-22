/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F05011A47EAB0F1464564DDC4830976577E6BF2D01D5476AB0E0831757C287B
 * Entry: 0x001822d0, Ghidra index: 5173, label: FUN_001822d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001822d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_EDX;
  
  if (*(undefined4 **)(in_EDX + 0x34) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(in_EDX + 0x34);
  }
  iVar1 = 0;
  iVar2 = iVar1;
  if (piVar3 != *(int **)(in_EDX + 0x34)) {
    while( true ) {
      iVar2 = piVar3[2];
      if (*(int *)(iVar2 + 0x38) == 0) break;
      if (*(int *)(iVar2 + 0x38) != -1) {
        iVar1 = iVar2;
      }
      piVar3 = (int *)*piVar3;
      if (piVar3 == *(int **)(in_EDX + 0x34)) {
        return iVar1;
      }
    }
  }
  return iVar2;
}
