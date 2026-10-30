/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75A81CD5E2D698FE957937E48F09FC4E9E0D1FD33F6E8F39AC6C55050EF9980B
 * Entry: 0x002615fd, Ghidra index: 8638, label: FUN_002615fd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002615fd(int param_1,code *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0xc);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  while( true ) {
    if (puVar3 == puVar1) {
      return 1;
    }
    iVar2 = puVar3[2];
    if (*(uint *)(iVar2 + 0x18) < 0x10) {
      iVar2 = iVar2 + 4;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
    }
    iVar2 = (*param_2)(param_1,iVar2,param_3);
    if (iVar2 == 0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return 0;
}
