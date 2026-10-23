/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 160DFD6344940F4E72A47345592588EEB1E1D68F4AD0E447B6C020A967C2FF28
 * Entry: 0x00179590, Ghidra index: 4987, label: FUN_00179590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00179590(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  undefined4 *local_c;
  
  local_c = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    local_c = (undefined4 *)*local_c;
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
  piVar6 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = (int *)*puVar3;
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0x24) + 4);
  if (piVar6 == piVar4) {
    return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
  }
  do {
    bVar1 = *(byte *)((int)piVar6 + 0x85);
    if (((((bVar1 & 1) != 0) && ((char)piVar6[7] != '\0')) && ((bVar1 & 4) == 0)) &&
       (puVar3 = local_c, (bVar1 & 2) != 0)) {
      for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
        if ((((*(byte *)((int)puVar3 + 0x85) & 4) == 0) &&
            ((*(byte *)((int)puVar3 + 0x85) & 1) != 0)) &&
           ((*(char *)(puVar3 + 7) != '\0' &&
            (cVar5 = FUN_00179760(param_1,piVar6 + 2,puVar3 + 2,1), cVar5 != '\0')))) {
          *(byte *)((int)puVar3 + 0x85) = *(byte *)((int)puVar3 + 0x85) | 4;
        }
      }
    }
    piVar6 = (int *)*piVar6;
  } while (piVar6 != piVar4);
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}
