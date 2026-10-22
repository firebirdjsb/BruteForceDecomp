/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EEDB18889CB4F7F3B8B3D7EC5A9C5202DC9F8F59CE65AA4874C0FBE3CC2DF1C
 * Entry: 0x00173490, Ghidra index: 4879, label: FUN_00173490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00173490(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  
  uVar4 = 0;
  while( true ) {
    if (*(int *)(unaff_ESI + 8) == 0) {
      return;
    }
    if ((uint)(*(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 8) >> 3) <= uVar4) break;
    if (*(int *)(*(int *)(unaff_ESI + 8) + uVar4 * 8) == in_EAX) {
      iVar5 = uVar4 * 8;
      piVar1 = *(int **)(*(int *)(*(int *)(unaff_ESI + 8) + iVar5) + 0x74);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x34))(piVar1,*(undefined4 *)(*(int *)(unaff_ESI + 8) + iVar5 + 4));
      }
      puVar2 = *(undefined4 **)(unaff_ESI + 0xc);
      iVar5 = *(int *)(unaff_ESI + 8) + iVar5;
      puVar3 = (undefined4 *)(iVar5 + 8);
      if (puVar3 != puVar2) {
        iVar5 = iVar5 - (int)puVar3;
        do {
          *(undefined4 *)(iVar5 + (int)puVar3) = *puVar3;
          *(undefined4 *)(iVar5 + 4 + (int)puVar3) = puVar3[1];
          puVar3 = puVar3 + 2;
        } while (puVar3 != puVar2);
      }
      *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + -8;
      return;
    }
    uVar4 = uVar4 + 1;
  }
  return;
}
