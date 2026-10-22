/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18F75575D2950CBC56499233D084D1B19F939807029BC7B2E0F6E42CB4C28901
 * Entry: 0x000356b0, Ghidra index: 348, label: FUN_000356b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000356b0(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint in_ECX;
  int in_EDX;
  uint uVar5;
  
  iVar4 = FUN_000120f0();
  iVar4 = *(int *)(*(int *)(iVar4 + 0x2e8) + 0x1b4) + 8 + in_EDX * 0x10;
  if (in_ECX == 0xffffffff) {
    for (uVar5 = 0;
        (iVar1 = *(int *)(iVar4 + 4), iVar1 != 0 &&
        (uVar5 < (uint)(*(int *)(iVar4 + 8) - iVar1 >> 2))); uVar5 = uVar5 + 1) {
      piVar2 = *(int **)(iVar1 + uVar5 * 4);
      if ((piVar2 != (int *)0x0) &&
         ((cVar3 = (**(code **)(*piVar2 + 0x20))(), cVar3 != '\0' &&
          (*(short *)(*(int *)(*(int *)(iVar4 + 4) + uVar5 * 4) + 0x1a) != 0)))) {
        return uVar5;
      }
    }
  }
  else {
    piVar2 = *(int **)(*(int *)(iVar4 + 4) + in_ECX * 4);
    if (((piVar2 != (int *)0x0) && (cVar3 = (**(code **)(*piVar2 + 0x20))(), cVar3 != '\0')) &&
       (*(short *)(*(int *)(*(int *)(iVar4 + 4) + in_ECX * 4) + 0x1a) != 0)) {
      return in_ECX;
    }
  }
  return 0xffffffff;
}
