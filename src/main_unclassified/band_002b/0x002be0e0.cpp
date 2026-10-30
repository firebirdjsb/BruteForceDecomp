/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 044CB71C38ACAB3E0F30C137925A7EA244DA66D78A30486061371349A1E8B3D2
 * Entry: 0x002be0e0, Ghidra index: 9967, label: FUN_002be0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be0e0(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  
  uVar1 = *(ushort *)(unaff_EDI + 0x22);
  iVar6 = 0;
  iVar3 = 1;
  if (1 < uVar1) {
    do {
      iVar5 = iVar3;
      iVar3 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(unaff_EDI + 0x24) + iVar5 * 4) + 0x14)
              )();
      iVar4 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(unaff_EDI + 0x24) + iVar6 * 4) + 0x14)
              )();
      if (iVar3 < iVar4) {
        iVar4 = *(int *)(unaff_EDI + 0x24);
        uVar2 = *(undefined4 *)(iVar4 + iVar6 * 4);
        *(undefined4 *)(iVar4 + iVar6 * 4) = *(undefined4 *)(iVar4 + iVar5 * 4);
        *(undefined4 *)(*(int *)(unaff_EDI + 0x24) + iVar5 * 4) = uVar2;
        while ((0 < iVar6 &&
               (iVar4 = (**(code **)(*(int *)**(undefined4 **)
                                               (*(int *)(unaff_EDI + 0x24) + -4 + iVar6 * 4) + 0x14)
                        )(), iVar3 < iVar4))) {
          iVar4 = *(int *)(unaff_EDI + 0x24);
          uVar2 = *(undefined4 *)(iVar4 + -4 + iVar6 * 4);
          *(undefined4 *)(iVar4 + -4 + iVar6 * 4) = *(undefined4 *)(iVar4 + iVar6 * 4);
          *(undefined4 *)(*(int *)(unaff_EDI + 0x24) + iVar6 * 4) = uVar2;
          iVar6 = iVar6 + -1;
        }
      }
      iVar3 = iVar5 + 1;
      iVar6 = iVar5;
    } while (iVar5 + 1 < (int)(uint)uVar1);
  }
  return;
}
