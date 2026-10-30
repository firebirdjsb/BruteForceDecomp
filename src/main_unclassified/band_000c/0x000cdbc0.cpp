/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F453824405E51A29E97E88283015D87665F6FD3FBA12250E49378A660D4A523
 * Entry: 0x000cdbc0, Ghidra index: 2541, label: FUN_000cdbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000cdbc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int iVar4;
  
  iVar2 = param_1;
  puVar1 = *(undefined4 **)(unaff_EBX + 4);
  param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    iVar4 = puVar3[2];
    if (*(int *)(iVar4 + 0x24) == iVar2) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  do {
    FUN_00234470();
    FUN_000cdb10(iVar4);
    param_1 = param_1 + 1;
    puVar1 = *(undefined4 **)(unaff_EBX + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)*puVar1;
    }
    while( true ) {
      if (puVar3 == puVar1) {
        return param_1;
      }
      iVar4 = puVar3[2];
      if (*(int *)(iVar4 + 0x24) == iVar2) break;
      puVar3 = (undefined4 *)*puVar3;
    }
  } while( true );
}
