/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ACEDB1F35F1CCE910633E1E2138394CF98990B77B3FE8A2219F3EB6E2DCA1B3
 * Entry: 0x0008a920, Ghidra index: 1662, label: FUN_0008a920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0008a920(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = param_1[10];
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    if (*(int *)(iVar1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(iVar1 + 8);
    }
    iVar3 = *(int *)(iVar3 + 4);
    if (iVar3 != 0) {
      iVar2 = *param_1;
      iVar5 = 0;
      uVar6 = 1;
      do {
        if ((*(int *)(*(int *)(iVar3 + 0xc) + 8) == iVar2) &&
           (((piVar4 = (int *)FUN_0005be70(), piVar4 != (int *)0x0 && (piVar4 != param_1)) ||
            ((*(byte *)(iVar3 + 0x70) & 1) != 0)))) {
          return 1;
        }
        if (*(uint *)(iVar1 + 4) <= uVar6) {
          return 0;
        }
        iVar5 = iVar5 + 4;
        if (uVar6 < *(uint *)(iVar1 + 4)) {
          iVar3 = *(int *)(iVar5 + *(int *)(iVar1 + 8));
        }
        else {
          iVar3 = 0;
        }
        iVar3 = *(int *)(iVar3 + 4);
        uVar6 = uVar6 + 1;
      } while (iVar3 != 0);
      return 0;
    }
  }
  return 0;
}
