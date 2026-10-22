/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C0A54F42F0E75F77B87E0C22BE4028171A39D39FBABF6F9EFD78FD30C77974F
 * Entry: 0x0020a0a0, Ghidra index: 7329, label: FUN_0020a0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020a0a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_ESI;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00160da0(0xffffffff,1);
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(unaff_ESI + 0xc) + 8))();
    uStack_4 = *(undefined4 *)(iVar2 + 0x20);
    uStack_8 = *(undefined4 *)(iVar2 + 0x14);
    uStack_c = *(undefined4 *)(iVar2 + 8);
    puVar3 = (undefined4 *)(**(code **)(*(int *)(unaff_ESI + 0xc) + 8))();
    uStack_10 = puVar3[6];
    uStack_18 = *puVar3;
    uStack_14 = puVar3[3];
    piVar4 = (int *)0x0;
    if (*(undefined4 **)(unaff_ESI + 0x24) != (undefined4 *)0x0) {
      piVar4 = (int *)**(undefined4 **)(unaff_ESI + 0x24);
    }
    if (piVar4 != *(int **)(unaff_ESI + 0x24)) {
      do {
        piVar5 = (int *)piVar4[3];
        if ((piVar5 != (int *)0x0) &&
           (((iVar2 = (**(code **)(*piVar5 + 4))(), iVar2 != 0 ||
             (((((int *)piVar4[3] != (int *)0x0 &&
                (piVar5 = (int *)(**(code **)(*(int *)piVar4[3] + 0xc))(), piVar5 != (int *)0x0)) &&
               (iVar2 = (**(code **)(*piVar5 + 0x20))(), iVar2 == 7)) &&
              (piVar5 = (int *)piVar5[0x31], piVar5 != (int *)0x0)))) && (piVar5 != (int *)0x0)))) {
          uVar9 = *(undefined4 *)(unaff_ESI + 200);
          iVar2 = *(int *)(unaff_ESI + 0x10);
          uVar13 = 1;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = *(undefined4 *)(unaff_ESI + 0xc4);
          puVar3 = &uStack_18;
          puVar7 = &uStack_c;
          iVar8 = iVar1;
          uVar6 = (**(code **)(*(int *)(unaff_ESI + 8) + 4))
                            (puVar7,puVar3,iVar1,uVar9,uVar10,piVar5,0,0,1);
          FUN_00213e60(*(undefined4 *)(iVar2 + 0x200),uVar6,puVar7,puVar3,iVar8,uVar9,uVar10,piVar5,
                       uVar11,uVar12,uVar13);
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(unaff_ESI + 0x24));
    }
    if (*(char *)(unaff_ESI + 0xc0) != '\0') {
      uVar9 = *(undefined4 *)(unaff_ESI + 0xc4);
      uVar10 = *(undefined4 *)(unaff_ESI + 200);
      iVar2 = *(int *)(unaff_ESI + 0x10);
      uVar14 = 1;
      uVar13 = 1;
      uVar12 = 0;
      uVar11 = 0;
      puVar3 = &uStack_18;
      puVar7 = &uStack_c;
      uVar6 = (**(code **)(*(int *)(unaff_ESI + 8) + 4))(puVar7,puVar3,iVar1,uVar10,uVar9,0,0,1,1);
      FUN_00213e60(*(undefined4 *)(iVar2 + 0x200),uVar6,puVar7,puVar3,iVar1,uVar10,uVar9,uVar11,
                   uVar12,uVar13,uVar14);
    }
  }
  return;
}
