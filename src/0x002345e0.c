/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EFF549B60CD68C29497A90104DF7D7B5583314CA6EC65180C74E669DB7B39B8
 * Entry: 0x002345e0, Ghidra index: 7802, label: FUN_002345e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00234685) */

void FUN_002345e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *unaff_ESI;
  int *unaff_retaddr;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
    piVar1 = (int *)*unaff_ESI;
    if (unaff_retaddr != (int *)0x0) {
      (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
      unaff_retaddr = (int *)0x0;
    }
    cVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,&stack0x00000000);
    if (cVar2 == '\0') {
      FUN_002347d0(param_1);
    }
  }
  piVar1 = (int *)unaff_ESI[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
    piVar1 = (int *)unaff_ESI[1];
    if (unaff_retaddr != (int *)0x0) {
      (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
    }
    cVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,&stack0x00000000);
    if (cVar2 == '\0') {
      FUN_002347d0(param_1);
    }
  }
  return;
}
