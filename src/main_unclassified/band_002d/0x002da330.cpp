/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECD0C87C6D2DC5825464C67C423E66D9A586D213722A3BC8212452BE0CF512ED
 * Entry: 0x002da330, Ghidra index: 10267, label: FUN_002da330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002da330(void)

{
  int iVar1;
  int extraout_EDX;
  int *piVar2;
  int iVar3;
  
  FUN_002da2d0();
  iVar1 = *(int *)(extraout_EDX + 0x44);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(extraout_EDX + 0x34);
    do {
      if (*(float *)(extraout_EDX + 8) <
          ABS(*(float *)(*(int *)(extraout_EDX + 0x18) + *piVar2 * 4))) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  if (iVar1 < *(int *)(extraout_EDX + 0x3c)) {
    piVar2 = (int *)(*(int *)(extraout_EDX + 0x34) + iVar1 * 4);
    do {
      if (*(float *)(extraout_EDX + 8) <
          ABS(*(float *)(*piVar2 * 4 + *(int *)(extraout_EDX + 0x18)) -
              *(float *)(*piVar2 * 4 + *(int *)(extraout_EDX + 0x24)))) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(extraout_EDX + 0x3c));
  }
  return 1;
}
