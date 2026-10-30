/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 719D37271436979882FFC1DA07BE0A657715042F2F47C94EF8719355C37ECA33
 * Entry: 0x002b7490, Ghidra index: 9848, label: FUN_002b7490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b7490(void)

{
  float fVar1;
  int *piVar2;
  int unaff_ESI;
  int iVar3;
  bool bVar4;
  
  iVar3 = 100;
  do {
    if (*(int *)(unaff_ESI + 0x20) == 0) {
      fVar1 = 1e+10;
    }
    else {
      fVar1 = *(float *)(unaff_ESI + 0x24);
    }
    if (0.0 <= fVar1 - *(float *)(unaff_ESI + 0x18)) {
      return;
    }
    if (*(int *)(unaff_ESI + 0x20) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(*(int *)(unaff_ESI + 0x20) + 0xc);
    }
    (**(code **)(*piVar2 + 4))();
    bVar4 = -1 < iVar3;
    iVar3 = iVar3 + -1;
  } while (bVar4);
  return;
}
