/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B70C8CC9BB43480EB22E9BB2CD02B4280588D243F2EA44F00DF8F9B3712CBDC5
 * Entry: 0x00200d00, Ghidra index: 7255, label: FUN_00200d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00200d00(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  
  piVar1 = (int *)0x0;
  if (*(undefined4 **)(unaff_EBX + 0x24) != (undefined4 *)0x0) {
    piVar1 = (int *)**(undefined4 **)(unaff_EBX + 0x24);
  }
  if (piVar1 != *(int **)(unaff_EBX + 0x24)) {
    do {
      piVar3 = (int *)piVar1[3];
      if ((piVar3 != (int *)0x0) &&
         (((iVar2 = (**(code **)(*piVar3 + 4))(), iVar2 != 0 ||
           (((((int *)piVar1[3] != (int *)0x0 &&
              (piVar3 = (int *)(**(code **)(*(int *)piVar1[3] + 0xc))(), piVar3 != (int *)0x0)) &&
             (iVar2 = (**(code **)(*piVar3 + 0x20))(), iVar2 == 7)) &&
            (piVar3 = (int *)piVar3[0x31], piVar3 != (int *)0x0)))) && (piVar3 != (int *)0x0)))) {
        FUN_00200b70();
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBX + 0x24));
  }
  return;
}
