/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B05073B0BF98B5D9ABFBE68906BC5A09990B98A045484A78E8817450DC806C4B
 * Entry: 0x00103d40, Ghidra index: 3309, label: FUN_00103d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00103d40(void)

{
  int iVar1;
  int iVar2;
  int *in_EDX;
  undefined4 *puVar3;
  int unaff_ESI;
  undefined4 uVar4;
  
  if (*(int *)(unaff_ESI + 0x88) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(unaff_ESI + 0x8c) - *(int *)(unaff_ESI + 0x88) >> 2;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    puVar3 = *(undefined4 **)(unaff_ESI + 0x88);
    do {
      if (*(int *)(*(int *)*puVar3 + 0x24) == *in_EDX) {
        uVar4 = 0;
        if ((*(int *)(unaff_ESI + 0x88) != 0) &&
           (iVar2 = *(int *)(unaff_ESI + 0x8c) - *(int *)(unaff_ESI + 0x88) >> 2, 0 < iVar2)) {
          if (iVar1 < 0) {
            iVar1 = iVar2 - -iVar1 % iVar2;
          }
          if (iVar2 <= iVar1) {
            iVar1 = iVar1 % iVar2;
          }
          uVar4 = (*(undefined4 **)(unaff_ESI + 0x88))[iVar1];
        }
        return uVar4;
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < iVar2);
  }
  return 0;
}
