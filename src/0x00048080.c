/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40DF236F7664C0433904E15E45DF51E002E7D7EBBA12D974879B728244FFA769
 * Entry: 0x00048080, Ghidra index: 570, label: FUN_00048080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00048080(float param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 100);
  iVar4 = *(int *)(unaff_EDI + 0x60);
  if (iVar4 != iVar3) {
    puVar5 = (undefined4 *)(iVar4 + 8);
    do {
      puVar5[-1] = (float)puVar5[-1] - param_1;
      if ((float)puVar5[-1] < 0.0 == ((float)puVar5[-1] == 0.0)) {
        iVar4 = iVar4 + 8;
        puVar5 = puVar5 + 2;
      }
      else {
        puVar1 = *(undefined4 **)(unaff_EDI + 100);
        if (puVar5 != puVar1) {
          puVar2 = puVar5;
          do {
            *(undefined4 *)((iVar4 - (int)puVar5) + (int)puVar2) = *puVar2;
            *(undefined4 *)((iVar4 - (int)puVar5) + 4 + (int)puVar2) = puVar2[1];
            puVar2 = puVar2 + 2;
          } while (puVar2 != puVar1);
        }
        iVar3 = *(int *)(unaff_EDI + 100) + -8;
        *(int *)(unaff_EDI + 100) = iVar3;
      }
    } while (iVar4 != iVar3);
  }
  return;
}
