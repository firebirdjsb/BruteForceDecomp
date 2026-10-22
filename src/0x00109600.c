/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C6E7C857786B50988146782EEE576C49315139BE06449AF2B974BCC282958A7
 * Entry: 0x00109600, Ghidra index: 3405, label: FUN_00109600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00109600(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = param_1;
  piVar1 = (int *)(param_1 + 4);
  iVar6 = 0;
  param_1 = 0;
  if (((*piVar1 != 0) && (puVar2 = *(undefined4 **)(*piVar1 + 0x90), puVar2 != (undefined4 *)0x0))
     && (iVar3 = *(int *)(iVar4 + 0x60), iVar3 != 0)) {
    piVar1 = *(int **)(iVar3 + 8);
    for (piVar7 = *(int **)(iVar3 + 4); piVar7 != piVar1; piVar7 = piVar7 + 3) {
      if ((*piVar7 == 2) &&
         (cVar5 = (**(code **)*puVar2)(iVar4,piVar7[1],piVar7 + 2), iVar6 = param_1, cVar5 != '\0'))
      {
        iVar6 = param_1 + 1;
        param_1 = iVar6;
      }
    }
  }
  return iVar6;
}
