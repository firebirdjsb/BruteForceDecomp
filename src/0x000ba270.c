/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E05D182F0CCF579C9E895EAE71F8B420446F9C433333AFB3251FFCDFCB8423B
 * Entry: 0x000ba270, Ghidra index: 2252, label: FUN_000ba270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ba270(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(undefined4 **)(param_1 + 0x1348) == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(param_1 + 0x1348);
  }
  piVar1 = *(int **)(param_1 + 0x1348);
  if (piVar4 == piVar1) {
    *(undefined2 *)(param_1 + 0x308) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    return;
  }
  do {
    iVar2 = piVar4[2];
    iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0xe0) + 8) + 0xbec) + 0xc))
                      (*(int *)(iVar2 + 0xe0));
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) &&
        ((*(byte *)(*(int *)(iVar3 + 0x24) + 0x14) & 2) != 0)) &&
       ((*(byte *)(*(int *)(iVar2 + 0xe0) + 0x70) & 1) == 0)) {
      FUN_000bd110(iVar2,param_1 + 8);
      FUN_000bd180(iVar2,param_1 + 0x30c);
    }
    piVar4 = (int *)*piVar4;
  } while (piVar4 != piVar1);
  *(undefined2 *)(param_1 + 0x308) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}
