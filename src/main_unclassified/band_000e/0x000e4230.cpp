/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 122FD79658A1690A3D74B23C01F7FA509434E2B067B5DC1A17D0DA6BB7C64F10
 * Entry: 0x000e4230, Ghidra index: 2840, label: FUN_000e4230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000e4230(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  int unaff_EBX;
  int *piVar5;
  undefined4 **ppuVar6;
  undefined4 *local_20 [4];
  code *local_10;
  
  if (in_EAX[1] == 0) {
    if (*(int *)(unaff_EBX + 0x28) != 0) {
      if (*(undefined4 **)(unaff_EBX + 0x24) == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)**(undefined4 **)(unaff_EBX + 0x24);
      }
      piVar1 = *(int **)(unaff_EBX + 0x24);
      ppuVar6 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppuVar6 = (undefined4 *)*in_EAX;
        in_EAX = in_EAX + 1;
        ppuVar6 = ppuVar6 + 1;
      }
      bVar2 = false;
      if (piVar5 != piVar1) {
        do {
          local_20[1] = (undefined4 *)piVar5[2];
          if (((local_10 == (code *)0x0) || (cVar3 = (*local_10)(local_20), cVar3 != '\0')) &&
             (cVar3 = (**(code **)*local_20[1])(local_20), cVar3 != '\0')) {
            bVar2 = true;
          }
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)*(int *)(unaff_EBX + 0x24));
        if (bVar2) {
          return 1;
        }
      }
    }
  }
  else if ((((code *)in_EAX[4] == (code *)0x0) || (cVar3 = (*(code *)in_EAX[4])(), cVar3 != '\0'))
          && (cVar3 = (*(code *)**(undefined4 **)in_EAX[1])(), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}
