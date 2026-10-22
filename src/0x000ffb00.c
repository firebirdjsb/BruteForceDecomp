/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAEBF32CF95F74DC57FEE34CBB5D5BE22DC005DB7FA3D68FE992AA64275D730C
 * Entry: 0x000ffb00, Ghidra index: 3202, label: FUN_000ffb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ffb00(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x74) + iVar3 * 4);
      if ((*(byte *)(piVar1 + 10) & 1) != 0) {
        cVar2 = (**(code **)(*piVar1 + 0x14))();
        if (cVar2 != '\0') {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
    return -1;
  }
  return -1;
}
