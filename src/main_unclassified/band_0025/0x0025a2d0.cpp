/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09FBBA365788D223E4D836B1354169274307772C3029050819B6EFFD0441D02C
 * Entry: 0x0025a2d0, Ghidra index: 8520, label: FUN_0025a2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025a2d0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int *piVar5;
  undefined4 *unaff_EDI;
  
  piVar1 = *(int **)(unaff_EBX + 4);
  bVar2 = true;
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0x19) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar5 = piVar3;
      bVar2 = *param_1 < piVar5[3];
      if (bVar2) {
        piVar3 = (int *)*piVar5;
      }
      else {
        piVar3 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar3 + 0x19) == '\0');
  }
  if (bVar2) {
    if (piVar5 == (int *)*piVar1) {
      puVar4 = (undefined4 *)FUN_0025a930(&param_1,1,param_1);
      *unaff_EDI = *puVar4;
      *(undefined1 *)(unaff_EDI + 1) = 1;
      return;
    }
    FUN_000a7d20();
  }
  if (piVar5[3] < *param_1) {
    puVar4 = (undefined4 *)FUN_0025a930(&param_1,bVar2,param_1);
    *unaff_EDI = *puVar4;
    *(undefined1 *)(unaff_EDI + 1) = 1;
    return;
  }
  *unaff_EDI = piVar5;
  *(undefined1 *)(unaff_EDI + 1) = 0;
  return;
}
